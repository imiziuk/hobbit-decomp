
undefined4 * __fastcall FUN_0048e800(undefined4 *param_1)

{
  FUN_004d0800();
  param_1[0x54] = 0x7fffffff;
  *param_1 = &PTR_FUN_006ed5e0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x76] = -DAT_0075cf80 % DAT_007297ac;
  DAT_0075cf80 = DAT_0075cf80 + 1;
  param_1[0x77] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) | 0x30;
  return param_1;
}

