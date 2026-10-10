
void __thiscall FUN_006691d0(int *param_1,int param_2,int *param_3)

{
  *param_1 = *param_3;
  param_1[1] = *param_3 + 0x1000;
  param_1[2] = param_2;
  param_1[3] = (int)param_3;
  return;
}

