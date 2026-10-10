
void __thiscall FUN_00651fd0(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  FUN_00651e00(*(int *)(*param_1 + -4) + 1);
  iVar1 = *param_1 + param_2;
  FUN_00648510(iVar1 + 1,iVar1,*(int *)(*param_1 + -4) - param_2);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 1;
  *(undefined1 *)(param_2 + *param_1) = param_3;
  return;
}

