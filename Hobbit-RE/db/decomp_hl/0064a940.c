
bool FUN_0064a940(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00647e40(*param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = param_1[9];
    iVar2 = FUN_00647cf0(param_2);
    return iVar1 < iVar2;
  }
  return iVar1 < 0;
}

