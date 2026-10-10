
void FUN_00660cc0(int param_1)

{
  char *pcVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  pcVar1 = (char *)(param_1 * 0x10 + 0xd + DAT_007f00c0);
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
    if (DAT_007f00e0 < DAT_007f00d8 + 1) {
      if (DAT_007f00e8 == 0) {
        iVar2 = DAT_007f00e0 / 2;
        iVar4 = 1;
        if (0 < iVar2) {
          iVar4 = iVar2;
        }
        if (iVar4 + DAT_007f00d8 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + DAT_007f00d8;
        }
      }
      else {
        iVar2 = DAT_007f00e8 + DAT_007f00d8;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < DAT_007f00d8) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) = *(undefined4 *)((int)DAT_007f00dc + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_007f00d8);
      }
      FUN_006bf840(DAT_007f00dc);
      DAT_007f00dc = pvVar3;
      DAT_007f00e0 = iVar2;
    }
    *(int *)((int)DAT_007f00dc + DAT_007f00d8 * 4) = param_1;
    DAT_007f00d8 = DAT_007f00d8 + 1;
  }
  return;
}

