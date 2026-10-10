
void __thiscall FUN_00678390(int param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  
  if ((param_3 != 0) && (param_2[4] != 0)) {
    FUN_0067be00();
    FUN_0067b700(param_2[4]);
    piVar2 = (int *)param_2[4];
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)piVar2[1] = *piVar2;
    piVar2 = (int *)param_2[4];
    *piVar2 = (int)DAT_00806948;
    piVar2[1] = (int)&DAT_00806948;
    DAT_00806948 = piVar2;
    *(int **)(*piVar2 + 4) = piVar2;
    FUN_0067be20();
  }
  if (param_2[2] != 0) {
    puVar1 = (uint *)(param_2[2] + 0xdc);
    *puVar1 = *puVar1 | 1;
  }
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  FUN_00648600(param_2,0,0x98);
  piVar2 = (int *)(param_1 + 0x298);
  param_2[0x22] = -1;
  *param_2 = *piVar2;
  param_2[1] = (int)piVar2;
  *piVar2 = (int)param_2;
  *(int **)(*param_2 + 4) = param_2;
  return;
}

