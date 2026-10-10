
undefined4 __thiscall FUN_005c7e80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005c7df0(param_2,param_3);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0xc) != 0 || (*(int *)(param_1 + 0x24) < 4)))) {
    return 1;
  }
  return 0;
}

