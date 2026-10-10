
void __thiscall FUN_00494900(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) | 8;
    return;
  }
  *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) & 0xf7;
  return;
}

