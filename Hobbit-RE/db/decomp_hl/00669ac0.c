
void FUN_00669ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
                 undefined4 *param_9)

{
  if (param_3 != param_7) {
    do {
      *param_3 = *param_9;
      param_3 = param_3 + 1;
      if (param_3 == param_2) {
        param_3 = *(undefined4 **)(param_4 + 4);
        param_4 = param_4 + 4;
        param_2 = param_3 + 0x400;
      }
    } while (param_3 != param_7);
  }
  return;
}

