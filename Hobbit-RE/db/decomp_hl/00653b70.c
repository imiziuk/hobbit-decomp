
void __thiscall FUN_00653b70(int *param_1,int *param_2)

{
  param_2[0x15] = 0;
  if (*param_2 == 0) {
    *param_1 = param_2[1];
  }
  else {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  if ((int *)param_2[1] != (int *)0x0) {
    *(int *)param_2[1] = *param_2;
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  param_1[1] = *param_2;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}

