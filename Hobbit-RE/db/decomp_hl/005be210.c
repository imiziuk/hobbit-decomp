
void __thiscall FUN_005be210(int param_1,int param_2)

{
  *(ushort *)(param_1 + 0x40) =
       (byte)((byte)(param_2 << 2) ^ (byte)*(ushort *)(param_1 + 0x40)) & 4 ^
       *(ushort *)(param_1 + 0x40);
  return;
}

