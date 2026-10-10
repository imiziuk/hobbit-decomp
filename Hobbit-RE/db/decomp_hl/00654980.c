
void __thiscall FUN_00654980(int *param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  bool bVar16;
  int local_e4;
  int local_c8 [3];
  undefined4 local_bc;
  uint local_b8;
  short local_b4 [56];
  int aiStack_44 [17];
  
  local_c8[0] = 0;
  if ((char)param_1[7] == '\0') {
    iVar15 = *param_1;
  }
  else {
    iVar15 = *(int *)*param_1 + *param_1;
  }
  iVar12 = *(char *)((int)param_1 + 0x1d) * 0x7c;
  local_bc._0_2_ = (short)param_1[5];
  if ((short)local_bc < 9) {
    return;
  }
  local_bc._2_2_ = *(short *)((int)param_1 + 0x16);
  if (local_bc._2_2_ < 9) {
    return;
  }
  iVar13 = *(int *)(&DAT_006f6cf0 + iVar12);
  iVar6 = 1;
  aiStack_44[1] = (int)local_bc._2_2_ * (int)(short)local_bc * iVar13 >> 3;
  if (0 < param_2) {
    psVar9 = (short *)((int)&local_bc + 2);
    do {
      sVar2 = psVar9[-1];
      sVar3 = *psVar9;
      iVar7 = aiStack_44[iVar6];
      psVar9[3] = sVar2 >> 1;
      psVar9[4] = sVar3 >> 1;
      aiStack_44[iVar6 + 1] = iVar7 >> 2;
      if ((sVar2 >> 1 < 9) || (sVar3 >> 1 < 9)) {
        param_2 = iVar6 + -1;
      }
      iVar6 = iVar6 + 1;
      psVar9 = psVar9 + 4;
    } while (iVar6 <= param_2);
  }
  if (param_2 == 0) {
    if ((char)param_1[7] < '\x01') {
      return;
    }
    iVar13 = (int)*(short *)((int)param_1 + 0x16) * (int)(short)param_1[5] * iVar13 >> 3;
    iVar12 = thunk_FUN_0064ff70(iVar13,s_C__projects_meridian_xCore_x_fil_0074dc38,0x3fe);
    FUN_00648480(iVar12,iVar15,iVar13);
    if ((*(byte *)((int)param_1 + 0x1a) & 2) != 0) {
      FUN_0064ff40(*param_1,s_C__projects_meridian_xCore_x_fil_0074dc80,0x402);
    }
    *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 2;
    param_1[2] = iVar13;
    *param_1 = iVar12;
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
  local_c8[2] = param_2 * 8 + 0x27U & 0xffffffe0;
  iVar13 = 1;
  if (0 < param_2) {
    piVar10 = aiStack_44;
    do {
      piVar10 = piVar10 + 1;
      (&local_bc)[iVar13 * 2 + -1] = local_c8[iVar13 * 2] + 0x1f + *piVar10 & 0xffffffe0;
      iVar13 = iVar13 + 1;
    } while (iVar13 <= param_2);
  }
  iVar6 = aiStack_44[param_2 + 1] + (&local_bc)[param_2 * 2 + -1];
  local_c8[1] = iVar6;
  iVar13 = thunk_FUN_0064ff70(iVar6,s_C__projects_meridian_xCore_x_fil_0074dcc8,0x416);
  FUN_00648600(iVar13,0,iVar6);
  bVar16 = (*(byte *)((int)param_1 + 0x1b) & 1) != 0;
  if (bVar16) {
    FUN_006510d0();
  }
  if (*(int *)(&DAT_006f6cec + iVar12) == 0) {
    iVar6 = FUN_006541e0(iVar15,(int)*(char *)((int)param_1 + 0x1d),
                         (int)*(short *)((int)param_1 + 0x16) * (int)(short)param_1[5]);
  }
  else {
    local_c8[0] = FUN_006541e0(param_1[1],(int)*(char *)((int)param_1 + 0x1d),
                               param_1[3] / (*(int *)(&DAT_006f6cf4 + iVar12) >> 3));
    iVar6 = FUN_006546f0(iVar15,local_c8[0],*(undefined4 *)(&DAT_006f6cf0 + iVar12),
                         (int)*(short *)((int)param_1 + 0x16) * (int)(short)param_1[5]);
  }
  iVar7 = (int)*(short *)((int)param_1 + 0x16) * (int)(short)param_1[5];
  iVar11 = 0;
  local_e4 = 0;
  bVar4 = true;
  if (0 < iVar7) {
    pcVar14 = (char *)(iVar6 + 3);
    do {
      cVar1 = *pcVar14;
      if (cVar1 != -1) {
        local_e4 = local_e4 + 1;
      }
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        bVar4 = false;
        break;
      }
      iVar11 = iVar11 + 1;
      pcVar14 = pcVar14 + 4;
    } while (iVar11 < iVar7);
    if (local_e4 != 0) goto LAB_00654c1a;
  }
  bVar4 = false;
LAB_00654c1a:
  if ((char)param_1[7] == '\0') {
    iVar7 = param_1[2];
  }
  else {
    iVar7 = *(int *)(&DAT_006f6cf0 + *(char *)((int)param_1 + 0x1d) * 0x7c) *
            (int)*(short *)(*param_1 + 6) * (int)*(short *)(*param_1 + 4) >> 3;
  }
  FUN_00648480(local_c8[2] + iVar13,iVar15,iVar7);
  if (*(int *)(&DAT_006f6cec + iVar12) != 0) {
    FUN_00656550(local_c8[0],1 << ((byte)*(undefined4 *)(&DAT_006f6cf0 + iVar12) & 0x1f),
                 0 < *(int *)(&DAT_006f6d08 + iVar12));
  }
  iVar15 = 1;
  if (0 < param_2) {
    do {
      if ((bVar4) || (param_3 != 0)) {
        uVar8 = FUN_00655020(iVar6,(int)(short)param_1[5],(int)*(short *)((int)param_1 + 0x16),
                             iVar15);
      }
      else {
        uVar8 = FUN_00654e30(iVar6,(int)(short)param_1[5],(int)*(short *)((int)param_1 + 0x16),
                             iVar15);
      }
      bVar5 = (byte)iVar15;
      if (*(int *)(&DAT_006f6cec + iVar12) == 0) {
        FUN_00654510((&local_bc)[iVar15 * 2 + -1] + iVar13,(int)*(char *)((int)param_1 + 0x1d),uVar8
                     ,((int)*(short *)((int)param_1 + 0x16) >> (bVar5 & 0x1f)) *
                      ((int)(short)param_1[5] >> (bVar5 & 0x1f)));
      }
      else {
        FUN_006547d0((&local_bc)[iVar15 * 2 + -1] + iVar13,*(undefined4 *)(&DAT_006f6cf0 + iVar12),
                     uVar8,((int)*(short *)((int)param_1 + 0x16) >> (bVar5 & 0x1f)) *
                           ((int)(short)param_1[5] >> (bVar5 & 0x1f)));
      }
      FUN_0064ff40(uVar8,s_C__projects_meridian_xCore_x_fil_0074dd10,0x47b);
      iVar15 = iVar15 + 1;
    } while (iVar15 <= param_2);
  }
  if (*(int *)(&DAT_006f6cec + iVar12) != 0) {
    FUN_006566f0();
  }
  if ((*(byte *)((int)param_1 + 0x1a) & 2) != 0) {
    FUN_0064ff40(*param_1,s_C__projects_meridian_xCore_x_fil_0074dd58,0x488);
  }
  *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 2;
  *param_1 = iVar13;
  iVar15 = 0;
  param_1[2] = local_c8[1];
  if (-1 < param_2) {
    do {
      *(undefined2 *)(*param_1 + 4 + iVar15 * 8) = *(undefined2 *)(&local_bc + iVar15 * 2);
      *(undefined2 *)(*param_1 + 6 + iVar15 * 8) =
           *(undefined2 *)((int)&local_bc + (iVar15 * 4 + 1) * 2);
      *(undefined4 *)(*param_1 + iVar15 * 8) = (&local_bc)[iVar15 * 2 + -1];
      iVar15 = iVar15 + 1;
    } while (iVar15 <= param_2);
  }
  FUN_0064ff40(iVar6,s_C__projects_meridian_xCore_x_fil_0074dda0,0x496);
  if (local_c8[0] != 0) {
    FUN_0064ff40(local_c8[0],s_C__projects_meridian_xCore_x_fil_0074dde8,0x498);
  }
  if (bVar16) {
    FUN_00650ff0();
  }
  *(char *)(param_1 + 7) = (char)param_2;
  return;
}

