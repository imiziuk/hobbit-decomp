
undefined4 FUN_00678b10(int param_1)

{
  undefined4 uVar1;
  
  FUN_00679ab0();
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    FUN_00679ac0();
    return uVar1;
  }
  FUN_00679ac0();
  return 0xffffffff;
}

