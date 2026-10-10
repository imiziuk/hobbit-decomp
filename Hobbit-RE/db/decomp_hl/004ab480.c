
void __thiscall FUN_004ab480(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 0x20;
    return;
  }
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xdf;
  return;
}

