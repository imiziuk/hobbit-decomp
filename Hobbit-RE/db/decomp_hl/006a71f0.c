
undefined4 * __fastcall FUN_006a71f0(undefined4 *param_1)

{
  FUN_006aa670();
  *param_1 = &PTR_FUN_006fd094;
  *(undefined1 *)((int)param_1 + 0xa7) = 0xff;
  *(undefined1 *)((int)param_1 + 0xa6) = 0xff;
  *(undefined1 *)((int)param_1 + 0xa5) = 0xff;
  *(undefined1 *)(param_1 + 0x29) = 0xff;
  return param_1;
}

