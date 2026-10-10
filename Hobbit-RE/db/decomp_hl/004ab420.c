
void __thiscall FUN_004ab420(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xfb;
    return;
  }
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 4;
  return;
}

