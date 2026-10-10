
void FUN_006bdcc0(int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = (*(int *)(param_1 + 0x9c) + 1) * (*(int *)(param_1 + 0x98) + 1);
  *param_3 = (*(int *)(param_1 + 0x98) * 2 + 3) * *(int *)(param_1 + 0x9c);
  *param_4 = 0;
  if (*(int *)(param_1 + 0xa0) == 0x3f800000) {
    *param_3 = *param_3 + *(int *)(param_1 + 0x98) * -2 + -3;
    *param_4 = *param_4 + *(int *)(param_1 + 0x98) * 3;
  }
  if ((NAN(*(float *)(param_1 + 0xa4)) || NAN(DAT_006e92e4)) !=
      (*(float *)(param_1 + 0xa4) == DAT_006e92e4)) {
    *param_3 = *param_3 + *(int *)(param_1 + 0x98) * -2 + -3;
    *param_4 = *param_4 + *(int *)(param_1 + 0x98) * 3;
  }
  return;
}

