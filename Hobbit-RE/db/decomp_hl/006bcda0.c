
void FUN_006bcda0(int param_1,int *param_2,int *param_3)

{
  if (((NAN(*(float *)(param_1 + 0x9c)) || NAN(DAT_006e92e4)) ==
       (*(float *)(param_1 + 0x9c) == DAT_006e92e4)) &&
     ((NAN(*(float *)(param_1 + 0xa0)) || NAN(DAT_006e92e4)) ==
      (*(float *)(param_1 + 0xa0) == DAT_006e92e4))) {
    *param_3 = *(int *)(param_1 + 0x98) * 2 + 2;
    *param_2 = *(int *)(param_1 + 0x98) * 2 + 2;
    return;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    *param_3 = *(int *)(param_1 + 0x98) * 3;
    *param_2 = *(int *)(param_1 + 0x98) + 2;
    return;
  }
  *param_3 = *(int *)(param_1 + 0x98) * 3;
  *param_2 = *(int *)(param_1 + 0x98) * 2 + 2;
  return;
}

