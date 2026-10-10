
undefined4 * __thiscall FUN_004d8c10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  FUN_0064a320(param_2 + 5);
  param_1[0x10] = param_2[0x10];
  FUN_0064a320(param_2 + 0x11);
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}

