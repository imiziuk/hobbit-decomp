
void __fastcall FUN_0063aed0(undefined4 *param_1)

{
  param_1[5] = 0x7fffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  param_1[7] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x13) = 0xff;
  *(undefined1 *)((int)param_1 + 0x12) = 0xff;
  *(undefined1 *)((int)param_1 + 0x11) = 0xff;
  *(undefined1 *)(param_1 + 4) = 0xff;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0x3f28f5c3;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  return;
}

