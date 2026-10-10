
undefined4 * __fastcall FUN_004b8940(undefined4 *param_1)

{
  FUN_004c0370();
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 2;
  *param_1 = &PTR_FUN_006ee610;
  param_1[0x59] = 0xffffffff;
  param_1[0x58] = 0;
  return param_1;
}

