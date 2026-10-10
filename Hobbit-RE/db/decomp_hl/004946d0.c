
void __thiscall FUN_004946d0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) | 2;
    FUN_00493b80();
    return;
  }
  *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) & 0xfd;
  FUN_00493b80();
  return;
}

