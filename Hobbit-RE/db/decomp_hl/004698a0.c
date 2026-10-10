
void __thiscall FUN_004698a0(int param_1,int param_2)

{
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 0x20;
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 0x1000;
  }
  return;
}

