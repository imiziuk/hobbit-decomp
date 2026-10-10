
undefined4 FUN_005aa910(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  if ((param_3 & 1) != 0) {
    iVar1 = FUN_005ab3f0(param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((param_3 & 2) != 0) {
    iVar1 = FUN_005ab800(param_1,param_2,0,1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((param_3 & 4) != 0) {
    iVar1 = FUN_005ab600(param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((param_3 & 8) != 0) {
    iVar1 = FUN_005ab710(param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

