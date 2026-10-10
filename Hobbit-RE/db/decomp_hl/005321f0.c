
void __fastcall FUN_005321f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    if (iVar1 <= *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x2c) = iVar1 + -1;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x2c) * 4) + 100);
    if (*(int *)(param_1 + 0x60) < iVar1) {
      return;
    }
    if (0 < iVar1) {
      *(int *)(param_1 + 0x60) = iVar1 + -1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

