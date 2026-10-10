
void __thiscall FUN_005c1a90(int param_1,char param_2)

{
  *(ushort *)(param_1 + 0x3c) =
       (byte)(param_2 * '\x02' ^ (byte)*(ushort *)(param_1 + 0x3c)) & 2 ^
       *(ushort *)(param_1 + 0x3c);
  return;
}

