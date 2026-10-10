
void FUN_00648ff0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    param_1[10] = param_1[10] | 4;
  }
  iVar1 = FUN_00647f90(*param_1,param_2);
  if (iVar1 != 0) {
    param_3 = 1;
    param_1[10] = param_1[10] | 2;
  }
  for (iVar1 = param_1[3]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_00648ff0(iVar1,param_2,param_3);
  }
  return;
}

