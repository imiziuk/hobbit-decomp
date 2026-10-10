
undefined4 * __thiscall FUN_005b5e30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_005b64a0(param_2 + 3);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return param_1;
}

