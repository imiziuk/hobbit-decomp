
undefined4 FUN_0064bcf0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x11];
  iVar1 = FUN_006480e0(param_2);
  if (iVar2 == iVar1) {
    iVar2 = FUN_00648280(*param_1,param_2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

