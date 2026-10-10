
void FUN_006baca0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[0x1e] = 0x7f7fffff;
    param_1[0x1f] = 0x7f7fffff;
    param_1[0x20] = 0x7f7fffff;
    param_1[0x21] = 0xff7fffff;
    param_1[0x22] = 0xff7fffff;
    param_1[0x23] = 0xff7fffff;
    *param_1 = &PTR_FUN_006fd394;
  }
  return;
}

