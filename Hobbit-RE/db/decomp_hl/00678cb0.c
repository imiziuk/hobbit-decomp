
undefined4 FUN_00678cb0(int param_1,undefined4 param_2)

{
  FUN_00679ab0();
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc0) != 0)) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
    FUN_006592a0(param_2,param_1 + 0x68);
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 2;
    FUN_00679ac0();
    return 1;
  }
  FUN_00679ac0();
  return 0;
}

