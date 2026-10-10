
undefined4 FUN_0064ffa0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_0064ff70(param_2,param_3,param_4);
    return uVar1;
  }
  if (param_2 == 0) {
    FUN_0064ff10(param_1);
    return 0xffffffff;
  }
  FUN_00653cf0();
  uVar1 = FUN_006c1f76(param_1,param_2);
  FUN_00653d20();
  return uVar1;
}

