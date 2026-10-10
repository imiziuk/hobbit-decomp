
undefined1 * __thiscall
FUN_006508b0(int *param_1,undefined1 *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  
  cVar3 = (char)param_1[7];
  iVar14 = *(char *)((int)param_1 + 0x1d) * 0x7c;
  if (cVar3 == '\0') {
    sVar7 = (short)param_1[5];
  }
  else {
    sVar7 = *(short *)(*param_1 + 4 + param_5 * 8);
  }
  iVar8 = (int)sVar7;
  uVar10 = *(ushort *)((int)param_1 + 0x1a) & 0x800;
  if (uVar10 != 0) {
    if (*(int *)(&DAT_006f6cf0 + iVar14) == 0x20) {
      uVar13 = param_4 & 0x80000003;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
      }
      uVar11 = param_3 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      iVar14 = uVar11 + uVar13 * 4;
      iVar8 = (((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) *
               ((int)(param_4 + ((int)param_4 >> 0x1f & 3U)) >> 2) +
              ((int)(param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2)) * 0x40;
      if (cVar3 == '\0') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*param_1 + param_5 * 8);
      }
      iVar9 = *param_1 + iVar9;
      iVar1 = iVar9 + iVar14 * 2;
      uVar4 = *(undefined1 *)(iVar1 + 1 + iVar8);
      puVar2 = (undefined1 *)(iVar1 + iVar8);
      uVar5 = *puVar2;
      uVar6 = puVar2[0x21];
      param_2[1] = *(undefined1 *)(iVar9 + 0x20 + iVar14 * 2 + iVar8);
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      *param_2 = uVar6;
      return param_2;
    }
    if ((uVar10 != 0) &&
       ((iVar9 = *(int *)(&DAT_006f6cf0 + iVar14), iVar9 == 0x18 ||
        ((uVar10 != 0 &&
         ((iVar9 == 0x10 || ((uVar10 != 0 && ((iVar9 == 8 || ((uVar10 != 0 && (iVar9 == 4)))))))))))
        ))) {
      param_2[3] = 0xff;
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      return param_2;
    }
  }
  if (cVar3 == '\0') {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*param_1 + param_5 * 8);
  }
  iVar1 = *(int *)(&DAT_006f6cf0 + iVar14);
  pbVar12 = (byte *)(*param_1 +
                    ((int)(iVar1 * param_3) >> 3) + iVar9 + ((int)(iVar1 * iVar8 * param_4) >> 3));
  if (*(int *)(&DAT_006f6cec + iVar14) == 0) goto LAB_00650a77;
  if (iVar1 == 4) {
    if ((*(ushort *)((int)param_1 + 0x1a) & 0x200) == 0) {
      if ((param_3 & 1) != 0) goto LAB_00650a48;
    }
    else if ((param_3 & 1) == 0) {
LAB_00650a48:
      uVar13 = *pbVar12 & 0xf;
      goto LAB_00650a54;
    }
    uVar13 = (uint)(*pbVar12 >> 4);
  }
  else {
    uVar13 = (uint)*pbVar12;
  }
LAB_00650a54:
  if ((*(ushort *)((int)param_1 + 0x1a) & 0x100) != 0) {
    uVar13 = FUN_00650a90(uVar13);
  }
  pbVar12 = (byte *)(((int)(*(int *)(&DAT_006f6cf4 + iVar14) * uVar13) >> 3) + param_1[1]);
LAB_00650a77:
  FUN_00650400(param_2,pbVar12);
  return param_2;
}

