
void FUN_0067d8a0(undefined1 *param_1)

{
  int iVar1;
  
  if (DAT_00808f2c == -1) {
    param_1[3] = 0xff;
    param_1[2] = 0xff;
    param_1[1] = 0xff;
    *param_1 = 0xff;
    return;
  }
  iVar1 = DAT_00808f2c * 4;
  param_1[3] = (&DAT_00808efb)[DAT_00808f2c * 4];
  param_1[2] = (&DAT_00808efa)[iVar1];
  param_1[1] = (&DAT_00808ef9)[iVar1];
  *param_1 = (&DAT_00808ef8)[iVar1];
  return;
}

