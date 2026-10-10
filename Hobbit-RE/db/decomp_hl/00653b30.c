
void __thiscall FUN_00653b30(int *param_1,int *param_2)

{
  param_2[0x15] = (int)param_1;
  if (*param_1 == 0) {
    *param_1 = (int)param_2;
    param_1[1] = (int)param_2;
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  *(int **)(param_1[1] + 4) = param_2;
  param_2[1] = 0;
  *param_2 = param_1[1];
  param_1[1] = (int)param_2;
  return;
}

