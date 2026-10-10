
void FUN_006563f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_007e881c * DAT_007e881c * DAT_007e881c;
  if (0 < iVar1) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0xffffffff;
      param_1 = param_1 + 1;
    }
  }
  return;
}

