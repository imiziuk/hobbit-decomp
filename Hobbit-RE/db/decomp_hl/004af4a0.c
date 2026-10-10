
undefined4 FUN_004af4a0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00647e40(param_1,param_3);
  if (iVar1 == 0) {
    if ((*param_2 == 2) || (*param_2 == 10)) {
      *param_4 = param_2[0x94];
      return 1;
    }
  }
  return 0;
}

