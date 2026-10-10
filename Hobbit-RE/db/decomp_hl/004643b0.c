
void FUN_004643b0(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_0075cbfc == 0) {
    if (DAT_0075cbb4 < DAT_0075cbac + 1) {
      if (DAT_0075cbbc == 0) {
        iVar1 = DAT_0075cbb4 / 2;
        iVar3 = 1;
        if (0 < iVar1) {
          iVar3 = iVar1;
        }
        if (iVar3 + DAT_0075cbac < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cbac;
        }
      }
      else {
        iVar1 = DAT_0075cbac + DAT_0075cbbc;
      }
      pvVar2 = operator_new(iVar1 * 4);
      iVar3 = 0;
      if (0 < DAT_0075cbac) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)((int)DAT_0075cbb0 + iVar3 * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_0075cbac);
      }
      FUN_006bf840(DAT_0075cbb0);
      DAT_0075cbb0 = pvVar2;
      DAT_0075cbb4 = iVar1;
    }
    *(undefined4 *)((int)DAT_0075cbb0 + DAT_0075cbac * 4) = 0x1c;
    iVar3 = DAT_0075cbac + 1;
    iVar1 = DAT_0075cbac + 2;
    DAT_0075cbac = iVar3;
    if (DAT_0075cbb4 < iVar1) {
      if (DAT_0075cbbc == 0) {
        iVar1 = DAT_0075cbb4 / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (iVar4 + iVar3 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + iVar3;
        }
      }
      else {
        iVar1 = iVar3 + DAT_0075cbbc;
      }
      pvVar2 = operator_new(iVar1 * 4);
      iVar3 = 0;
      if (0 < DAT_0075cbac) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)((int)DAT_0075cbb0 + iVar3 * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_0075cbac);
      }
      FUN_006bf840(DAT_0075cbb0);
      DAT_0075cbb0 = pvVar2;
      DAT_0075cbb4 = iVar1;
    }
    *(undefined4 *)((int)DAT_0075cbb0 + DAT_0075cbac * 4) = 0x12;
    DAT_0075cbac = DAT_0075cbac + 1;
    DAT_0075cbfc = 1;
    if (DAT_0075cbe4 == 0) {
      FUN_00464560();
      return;
    }
  }
  return;
}

