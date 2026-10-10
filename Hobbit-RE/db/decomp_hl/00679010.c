
undefined4 FUN_00679010(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00679ab0();
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    *(undefined4 *)(param_1 + 0xa8) = param_3;
    *(undefined4 *)(param_1 + 0xa0) = param_2;
    FUN_00679ac0();
    return 1;
  }
  FUN_00679ac0();
  return 0;
}

