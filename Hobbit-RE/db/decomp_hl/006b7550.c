
undefined * __thiscall FUN_006b7550(int param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_006b75b0(param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined *)(**(code **)(**(int **)(param_1 + *param_2 * 4) + 4))();
    return puVar2;
  }
  return &DAT_008157e8;
}

