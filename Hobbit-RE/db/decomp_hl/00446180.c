
undefined4 FUN_00446180(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack00000004;
  float local_c;
  float local_8;
  
  iVar2 = FUN_004b0ea0();
  uVar5 = 1;
  fVar6 = (float10)FUN_00434ca0(iVar2);
  FUN_00434fb0(iVar2);
  fStack00000004 = 0.0;
  if ((iVar2 < 4) || (5 < iVar2)) {
    fVar7 = (float10)FUN_00434fb0(iVar2);
  }
  else {
    fVar7 = (float10)FUN_00434c10();
    FUN_0041bcc0();
    fVar6 = (float10)FUN_00422420();
  }
  local_8 = (float)fVar7;
  local_c = (float)fVar6;
  uVar3 = FUN_0054c5c0(0x22,s_DC__projects_meridian_Support_Ob_0072439b + 1,0x60);
  do {
    iVar4 = *(int *)(&DAT_0076f664 + DAT_0076f864 * 4);
    if (iVar4 == -1) goto LAB_004462e3;
    iVar1 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
    *(int *)(&DAT_0076f664 + DAT_0076f864 * 4) = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 4);
    if (iVar1 == 0) goto LAB_004462e3;
    if ((*(byte *)(iVar1 + 0x16f) & 1) != 0) {
      iVar4 = FUN_004b0ea0();
      if (iVar4 == iVar2) {
        fVar6 = (float10)FUN_004b0f50();
        fStack00000004 = (float)(fVar6 + (float10)fStack00000004);
      }
    }
  } while (fStack00000004 + local_c < local_8);
  uVar5 = 0;
  if ((((((iVar2 == 0x1d) || (iVar2 == 0x1e)) || (iVar2 == 0x1f)) ||
       (((iVar2 == 0x20 || (iVar2 == 0x21)) ||
        ((iVar2 == 0x22 || ((iVar2 == 0x23 || (iVar2 == 0x24)))))))) ||
      ((iVar2 == 0x25 || (((iVar2 == 0x26 || (iVar2 == 0x27)) || (iVar2 == 0x28)))))) ||
     (((iVar2 == 0x29 || (iVar2 == 0x2a)) ||
      (((iVar2 == 0x2b || ((iVar2 == 0x2c || (iVar2 == 0x2d)))) || (iVar2 == 0x2e)))))) {
    FUN_004b0f80(1);
  }
LAB_004462e3:
  if (((iVar2 == 0x36) || (iVar2 == 0x37)) || (iVar2 == 0x38)) {
    FUN_00434ca0(2);
    FUN_00434d10(2,0x40a00000);
  }
  FUN_0054c880(uVar3);
  return uVar5;
}

