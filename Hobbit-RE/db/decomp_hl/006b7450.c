
undefined4 __thiscall FUN_006b7450(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006b75b0(param_2);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + *param_2 * 4) + 0xc))();
    return uVar2;
  }
  return 1;
}

