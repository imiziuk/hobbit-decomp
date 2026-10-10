
undefined4 FUN_00679070(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00679ab0();
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    *(undefined4 *)(param_1 + 0x58) = param_3;
    *(undefined4 *)(param_1 + 0xb8) = param_3;
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = param_2;
    FUN_00679ac0();
    return 1;
  }
  FUN_00679ac0();
  return 0;
}

