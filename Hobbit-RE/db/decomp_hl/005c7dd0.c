
void FUN_005c7dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005c7df0(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = param_3;
  }
  return;
}

