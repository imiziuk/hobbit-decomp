
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067b090(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  FUN_0067be00();
  FUN_0067b700(param_2);
  FUN_0067be20();
  iVar1 = param_2[4];
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  if (param_2 != (int *)0x0) {
    *param_2 = *param_1;
    param_2[1] = (int)param_1;
    *param_1 = (int)param_2;
    *(int **)(*param_2 + 4) = param_2;
    param_2[4] = 0;
  }
  if ((param_3 != 0) && (iVar1 != 0)) {
    FUN_00678390(iVar1,0);
  }
  _DAT_00806af8 = _DAT_00806af8 | 1;
  return;
}

