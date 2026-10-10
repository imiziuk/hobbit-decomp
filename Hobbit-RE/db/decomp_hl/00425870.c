
void __thiscall FUN_00425870(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 8;
    return;
  }
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xf7;
  return;
}

