
void __thiscall FUN_0063b140(int *param_1,uint param_2)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    FUN_006bf840(*param_1);
  }
  if (param_1[1] != 0) {
    FUN_006bf840(param_1[1]);
  }
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    pvVar1 = operator_new(param_2 * 0xc);
    *param_1 = (int)pvVar1;
    pvVar1 = operator_new(param_2 * 0xc);
    param_1[1] = (int)pvVar1;
  }
  param_1[3] = 0;
  if (param_2 < 0x40) {
    if (param_2 < 2) {
      param_1[2] = 2;
      return;
    }
    param_1[2] = param_2;
    return;
  }
  param_1[2] = 0x40;
  return;
}

