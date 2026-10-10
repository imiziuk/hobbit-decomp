
void FUN_00690312(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    FUN_0068e2ef(param_1,"NULL row buffer");
  }
  if ((*(byte *)(param_1 + 0x61) & 0x10) != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x03') {
      FUN_0068f897(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined4 *)(param_1 + 0x104),
                   *(undefined4 *)(param_1 + 0x15c),*(undefined2 *)(param_1 + 0x10a));
    }
    else {
      if (*(short *)(param_1 + 0x10a) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x160;
      }
      FUN_0068fa9e(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,iVar1);
    }
  }
  if (((*(byte *)(param_1 + 0x61) & 0x20) != 0) && (*(char *)(param_1 + 0x116) != '\x03')) {
    FUN_0068f525(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined4 *)(param_1 + 0x138),
                 *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 300));
  }
  if ((*(byte *)(param_1 + 0x61) & 4) != 0) {
    FUN_0068f2aa(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1);
  }
  if ((*(byte *)(param_1 + 0x60) & 0x40) != 0) {
    FUN_0068fdf1(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined4 *)(param_1 + 0x174),
                 *(undefined4 *)(param_1 + 0x178));
    if (*(int *)(param_1 + 0xf4) == 0) {
      FUN_0068e2ef(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x60) & 8) != 0) {
    FUN_0068f12f(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,param_1 + 0x155);
  }
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
    FUN_0068f020(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1);
  }
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    FUN_0068ee2e(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1);
  }
  if ((*(byte *)(param_1 + 0x61) & 0x80) != 0) {
    FUN_0068f2ee(param_1 + 0xf0,*(int *)(param_1 + 0xdc) + 1,*(undefined2 *)(param_1 + 0x11e),
                 *(undefined4 *)(param_1 + 0x5c));
  }
  return;
}

