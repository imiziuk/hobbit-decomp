
undefined4 __thiscall
FUN_00535810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00531210(param_2,param_3);
  FUN_0064a2e0(uVar1);
  uVar1 = FUN_005312b0(param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  FUN_0064a320(&DAT_00764518);
  *(undefined4 *)(param_1 + 0x15c) = 1;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x24c) == 1) {
    uVar1 = FUN_0064a320(&DAT_00764518);
    FUN_0064a320(uVar1);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x248);
  }
  else if (*(int *)(param_1 + 0x24c) == 3) {
    uVar1 = FUN_0064a320(&DAT_00764518);
    FUN_0064a320(uVar1);
    return *(undefined4 *)(param_1 + 0x248);
  }
  return *(undefined4 *)(param_1 + 0x248);
}

