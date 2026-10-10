
void __thiscall FUN_00652020(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    FUN_00651e00(*(int *)(*param_1 + -4) + param_4);
    iVar1 = *param_1 + param_2;
    FUN_00648510(iVar1 + param_4,iVar1,*(int *)(*param_1 + -4) - param_2);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + param_4;
    FUN_00648480(*param_1 + param_2,param_3,param_4);
  }
  return;
}

