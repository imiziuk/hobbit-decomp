
void __thiscall FUN_00679570(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
    *(int *)param_2[1] = *param_2;
  }
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = piVar1[0x13];
  while (param_2[0x13] < iVar2) {
    piVar1 = (int *)piVar1[1];
    iVar2 = piVar1[0x13];
  }
  while ((iVar2 == param_2[0x13] && ((float)param_2[0x23] < (float)piVar1[0x23]))) {
    piVar1 = (int *)piVar1[1];
    iVar2 = piVar1[0x13];
  }
  *param_2 = *piVar1;
  param_2[1] = (int)piVar1;
  *piVar1 = (int)param_2;
  *(int **)(*param_2 + 4) = param_2;
  return;
}

