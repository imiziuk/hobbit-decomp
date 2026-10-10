
undefined4 FUN_0064a890(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[9];
  iVar1 = FUN_00647cf0(param_2);
  if (iVar2 == iVar1) {
    iVar2 = FUN_00647e40(*param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

