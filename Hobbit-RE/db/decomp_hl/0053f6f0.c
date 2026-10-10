
void __fastcall FUN_0053f6f0(int *param_1)

{
  if (param_1[2] != 0) {
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    if (DAT_007670b8 == param_1) {
      DAT_007670b8 = (int *)*param_1;
    }
    if (DAT_007670bc == param_1) {
      DAT_007670bc = (int *)param_1[1];
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0064ff40(param_1[2],s_C__projects_meridian_Support_Ani_00737b34,0x9f);
    param_1[2] = 0;
    DAT_007670c4 = DAT_007670c4 - param_1[4];
    DAT_007670c0 = DAT_007670c0 + -1;
  }
  return;
}

