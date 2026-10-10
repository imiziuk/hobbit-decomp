
void FUN_00669b00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 *param_8,
                 int param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,
                 int param_13)

{
  if (param_4 != param_8) {
    do {
      if (param_8 == param_6) {
        param_6 = *(undefined4 **)(param_9 + -4);
        param_9 = param_9 + -4;
        param_8 = param_6 + 0x400;
      }
      param_8 = param_8 + -1;
      if (param_12 == param_10) {
        param_10 = *(undefined4 **)(param_13 + -4);
        param_13 = param_13 + -4;
        param_12 = param_10 + 0x400;
        param_11 = param_12;
      }
      param_12 = param_12 + -1;
      *param_12 = *param_8;
    } while (param_4 != param_8);
  }
  *param_1 = (int)param_10;
  param_1[1] = (int)param_11;
  param_1[2] = (int)param_12;
  param_1[3] = param_13;
  return;
}

