
undefined4 FUN_00678f00(int param_1,undefined4 param_2)

{
  FUN_00679ab0();
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = param_2;
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 0x10;
    FUN_00679ac0();
    return 1;
  }
  FUN_00679ac0();
  return 0;
}

