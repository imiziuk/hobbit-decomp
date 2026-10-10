
undefined4 FUN_006c9b47(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = false;
  if (param_1 == 2) {
    puVar6 = &DAT_00815f5c;
    pcVar5 = DAT_00815f5c;
LAB_006c9bcd:
    bVar1 = true;
    FUN_006c56f9(1);
    iVar2 = param_1;
  }
  else {
    if (((param_1 != 4) && (param_1 != 8)) && (param_1 != 0xb)) {
      if (param_1 == 0xf) {
        puVar6 = &DAT_00815f68;
        pcVar5 = DAT_00815f68;
      }
      else if (param_1 == 0x15) {
        puVar6 = &DAT_00815f60;
        pcVar5 = DAT_00815f60;
      }
      else {
        if (param_1 != 0x16) {
          return 0xffffffff;
        }
        puVar6 = &DAT_00815f64;
        pcVar5 = DAT_00815f64;
      }
      goto LAB_006c9bcd;
    }
    iVar2 = FUN_006c3f43();
    iVar4 = FUN_006c9cc9(param_1,*(undefined4 *)(iVar2 + 0x50));
    puVar6 = (undefined4 *)(iVar4 + 8);
    pcVar5 = (code *)*puVar6;
  }
  if (pcVar5 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_006c575a(1);
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    if (bVar1) {
      FUN_006c575a(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_c = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar2 + 0x54) = 0;
    if (param_1 == 8) {
      local_10 = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(iVar2 + 0x58) = 0x8c;
      goto LAB_006c9c41;
    }
  }
  else {
LAB_006c9c41:
    if (param_1 == 8) {
      if (DAT_007585f0 < DAT_007585f4 + DAT_007585f0) {
        iVar3 = DAT_007585f0 * 0xc;
        iVar4 = DAT_007585f0;
        do {
          iVar3 = iVar3 + 0xc;
          *(undefined4 *)(*(int *)(iVar2 + 0x50) + -4 + iVar3) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_007585f4 + DAT_007585f0);
      }
      goto LAB_006c9c7f;
    }
  }
  *puVar6 = 0;
LAB_006c9c7f:
  if (bVar1) {
    FUN_006c575a(1);
  }
  if (param_1 == 8) {
    (*pcVar5)(8,*(undefined4 *)(iVar2 + 0x58));
  }
  else {
    (*pcVar5)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iVar2 + 0x54) = local_c;
  if (param_1 == 8) {
    *(undefined4 *)(iVar2 + 0x58) = local_10;
  }
  return 0;
}

