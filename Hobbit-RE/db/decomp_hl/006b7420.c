
void __thiscall FUN_006b7420(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_006b75b0(param_2);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + *param_2 * 4) + 0x10))();
  }
  return;
}

