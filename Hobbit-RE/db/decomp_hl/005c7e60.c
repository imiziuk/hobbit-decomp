
undefined4 FUN_005c7e60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c7df0(param_1,param_2);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

