
void __thiscall FUN_004ab3e0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xfb;
    return;
  }
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 4;
  return;
}

