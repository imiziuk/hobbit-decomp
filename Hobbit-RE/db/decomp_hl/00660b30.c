
int FUN_00660b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_4;
  
  local_4 = CONCAT22(local_4._2_2_,0x100);
  local_4 = CONCAT31(local_4._1_3_,param_4);
  if (DAT_007f00d8 != 0) {
    iVar1 = *(int *)(DAT_007f00dc + -4 + DAT_007f00d8 * 4);
    iVar4 = (DAT_007f00d8 - (DAT_007f00d8 + -1)) + -1;
    if (0 < iVar4) {
      iVar3 = (DAT_007f00d8 + -1) * 4;
      do {
        *(undefined4 *)(iVar3 + DAT_007f00dc) = *(undefined4 *)(iVar3 + 4 + DAT_007f00dc);
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    DAT_007f00d8 = DAT_007f00d8 + -1;
    puVar5 = (undefined4 *)((int)DAT_007f00c0 + iVar1 * 0x10);
    *puVar5 = param_1;
    puVar5[1] = param_2;
    puVar5[2] = param_3;
    puVar5[3] = local_4;
    return iVar1;
  }
  if (DAT_007f00c4 < DAT_007f00bc + 1) {
    if (DAT_007f00cc == 0) {
      iVar1 = DAT_007f00c4 / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + DAT_007f00bc < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_007f00bc;
      }
    }
    else {
      iVar1 = DAT_007f00cc + DAT_007f00bc;
    }
    pvVar2 = operator_new(iVar1 << 4);
    iVar4 = 0;
    if (0 < DAT_007f00bc) {
      iVar3 = 0;
      do {
        puVar6 = (undefined4 *)((int)DAT_007f00c0 + iVar3);
        puVar5 = (undefined4 *)(iVar3 + (int)pvVar2);
        *puVar5 = *puVar6;
        puVar5[1] = puVar6[1];
        puVar5[2] = puVar6[2];
        puVar5[3] = puVar6[3];
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < DAT_007f00bc);
    }
    FUN_006bf840(DAT_007f00c0);
    DAT_007f00c0 = pvVar2;
    DAT_007f00c4 = iVar1;
  }
  puVar5 = (undefined4 *)(DAT_007f00bc * 0x10 + (int)DAT_007f00c0);
  *puVar5 = param_1;
  puVar5[1] = param_2;
  puVar5[2] = param_3;
  puVar5[3] = local_4;
  iVar1 = DAT_007f00bc;
  DAT_007f00bc = DAT_007f00bc + 1;
  return iVar1;
}

