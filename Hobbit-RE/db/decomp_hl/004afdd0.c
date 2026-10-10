
void __thiscall FUN_004afdd0(int param_1,int param_2)

{
  *(ushort *)(param_1 + 0x16e) =
       (byte)((byte)(param_2 << 4) ^ (byte)*(ushort *)(param_1 + 0x16e)) & 0x10 ^
       *(ushort *)(param_1 + 0x16e);
  return;
}

