
undefined4 __thiscall FUN_00532500(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1d0) = param_3;
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  DAT_00736e78 = 0;
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x13c) < 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    if (*(int *)(param_1 + 0x134) < 0) {
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    if (iVar1 <= *(int *)(param_1 + 0x134)) {
      *(int *)(param_1 + 0x134) = iVar1 + -1;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x134) * 4) + 100);
    if (iVar1 <= *(int *)(param_1 + 0x13c)) {
      *(int *)(param_1 + 0x13c) = iVar1 + -1;
    }
    param_2 = *(undefined4 *)(param_1 + 0x13c);
  }
  return param_2;
}

