
undefined4 FUN_00678fb0(int param_1,undefined4 *param_2)

{
  FUN_00679ab0();
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    *(undefined4 *)(param_1 + 0xd0) = *param_2;
    *(undefined4 *)(param_1 + 0xd4) = param_2[1];
    *(undefined4 *)(param_1 + 0xd8) = param_2[2];
    FUN_00679ac0();
    return 1;
  }
  FUN_00679ac0();
  return 0;
}

