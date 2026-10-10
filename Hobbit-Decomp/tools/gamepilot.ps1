# Drive the game for automated tests: screenshot / send keys via SendInput (scan codes, DirectInput sees them).
#   powershell -File tools\gamepilot.ps1 shot  <out.png>
#   powershell -File tools\gamepilot.ps1 keys  RETURN,DOWN,RETURN  [delayMs]
#   powershell -File tools\gamepilot.ps1 focus
param([string]$cmd, [string]$arg, [int]$delay = 400)
Add-Type -AssemblyName System.Drawing, System.Windows.Forms
Add-Type @"
using System; using System.Runtime.InteropServices;
public static class GP {
  [StructLayout(LayoutKind.Sequential)] public struct KI { public ushort vk, scan; public uint flags, time; public IntPtr extra; }
  [StructLayout(LayoutKind.Explicit)] public struct IN { [FieldOffset(0)] public uint type; [FieldOffset(4)] public KI ki; [FieldOffset(4)] public long pad0; [FieldOffset(12)] public long pad1; [FieldOffset(20)] public long pad2; }
  [DllImport("user32.dll")] public static extern uint SendInput(uint n, IN[] i, int size);
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
  public static void Key(ushort scan, bool ext) {
    var a = new IN[2];
    uint f = 0x0008u | (ext ? 0x0001u : 0u);
    a[0].type = 1; a[0].ki.scan = scan; a[0].ki.flags = f;
    a[1].type = 1; a[1].ki.scan = scan; a[1].ki.flags = f | 0x0002u;
    SendInput(1, new[]{a[0]}, Marshal.SizeOf(typeof(IN)));
    System.Threading.Thread.Sleep(80);
    SendInput(1, new[]{a[1]}, Marshal.SizeOf(typeof(IN)));
  }
}
"@
$SC = @{ RETURN=0x1C; ESCAPE=0x01; SPACE=0x39; UP=0x48; DOWN=0x50; LEFT=0x4B; RIGHT=0x4D; W=0x11; A=0x1E; S=0x1F; D=0x20 }
$EXT = @('UP','DOWN','LEFT','RIGHT')
function Focus { $p = Get-Process Meridian -ErrorAction SilentlyContinue | Select-Object -First 1
  if ($p) { [void][GP]::SetForegroundWindow($p.MainWindowHandle); Start-Sleep -Milliseconds 300; $true } else { $false } }
switch ($cmd) {
  'focus' { if (Focus) { 'focused' } else { 'no game' } }
  'shot'  { $b = [System.Windows.Forms.Screen]::PrimaryScreen.Bounds
            $bmp = New-Object System.Drawing.Bitmap $b.Width, $b.Height
            $g = [System.Drawing.Graphics]::FromImage($bmp); $g.CopyFromScreen($b.Location, [System.Drawing.Point]::Empty, $b.Size)
            $small = New-Object System.Drawing.Bitmap $bmp, ([int]($b.Width/2)), ([int]($b.Height/2))
            $small.Save($arg, [System.Drawing.Imaging.ImageFormat]::Png); "saved $arg" }
  'keys'  { [void](Focus); foreach ($k in $arg.Split(',')) { [GP]::Key([uint16]$SC[$k], $EXT -contains $k); Start-Sleep -Milliseconds $delay }; "sent $arg" }
}
