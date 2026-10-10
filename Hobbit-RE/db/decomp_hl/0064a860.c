
undefined4 FUN_0064a860(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1[9] == param_2[9]) {
    iVar1 = FUN_006486a0(*param_1,*param_2,param_1[9]);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

