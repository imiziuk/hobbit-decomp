
undefined4 FUN_00558820(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0xffffffff;
    }
    uVar1 = FUN_00558610();
    return uVar1;
  }
  if (param_2 != 0) {
    return 1;
  }
  return 0;
}

