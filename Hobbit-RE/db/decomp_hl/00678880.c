
undefined4 FUN_00678880(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00679ab0();
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 0x84) = 0;
      *(int *)(param_2 + 0x7c) = param_1;
    }
    *(int *)(param_1 + 0x78) = param_2;
    uVar1 = 1;
  }
  FUN_00679ac0();
  return uVar1;
}

