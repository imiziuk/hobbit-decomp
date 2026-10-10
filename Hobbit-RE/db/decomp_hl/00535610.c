
undefined4 __thiscall FUN_00535610(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_0064a320(param_2);
  }
  if (*(int *)(param_1 + 0x24c) == 1) {
    uVar1 = FUN_005311a0(&DAT_00764560,*(undefined4 *)(param_1 + 0x264));
    FUN_0064a2e0(uVar1);
    *(undefined4 *)(param_1 + 0x160) = 0;
    uVar1 = FUN_005322f0(param_2,param_4);
    *(undefined4 *)(param_1 + 0x15c) = 1;
    return uVar1;
  }
  *(undefined4 *)(param_1 + 0x15c) = 1;
  return 0;
}

