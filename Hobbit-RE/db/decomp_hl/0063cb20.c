
void FUN_0063cb20(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (0x1f < param_3) {
    iVar1 = 0x20;
  }
  FUN_0063dbd0(param_1,iVar1);
  if (0 < param_3 - iVar1) {
    FUN_0063dbd0(param_2,param_3 - iVar1);
  }
  return;
}

