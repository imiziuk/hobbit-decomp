
undefined4 __fastcall FUN_0064d480(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int aiStack_94 [5];
  float local_80 [4];
  undefined4 local_70 [28];
  
  iVar13 = 0;
  puVar12 = local_70;
  puVar11 = local_70;
  puVar7 = param_1;
  do {
    iVar14 = 4;
    puVar5 = puVar11;
    do {
      puVar5[-4] = *puVar7;
      *puVar5 = 0;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    aiStack_94[iVar13] = iVar13;
    *puVar12 = 0x3f800000;
    iVar13 = iVar13 + 1;
    puVar11 = puVar11 + 8;
    puVar12 = puVar12 + 9;
  } while (iVar13 < 4);
  iVar13 = 0;
  do {
    fVar2 = local_80[iVar13 + aiStack_94[iVar13] * 8];
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      fVar2 = -fVar2;
    }
    iVar14 = iVar13 + 1;
    iVar9 = iVar13;
    for (iVar8 = iVar14; iVar8 < 4; iVar8 = iVar8 + 1) {
      iVar1 = iVar13 + aiStack_94[iVar8] * 8;
      fVar3 = local_80[iVar1];
      if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
        fVar3 = -fVar3;
      }
      if ((fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3))) &&
         (fVar2 = local_80[iVar1], iVar9 = iVar8,
         fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4)))) {
        fVar2 = -fVar2;
      }
    }
    iVar1 = aiStack_94[iVar9];
    iVar8 = iVar13 + iVar1 * 8;
    fVar2 = local_80[iVar8];
    aiStack_94[iVar9] = aiStack_94[iVar13];
    aiStack_94[iVar13] = iVar1;
    if ((NAN(fVar2) || NAN(DAT_006e92e4)) != (fVar2 == DAT_006e92e4)) {
      return 0;
    }
    local_80[iVar8] = 1.0;
    iVar8 = iVar14;
    if (iVar14 < 8) {
      iVar9 = 8 - iVar14;
      pfVar6 = local_80 + iVar14 + iVar1 * 8;
      do {
        iVar9 = iVar9 + -1;
        *pfVar6 = (DAT_006e92e8 / fVar2) * *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (iVar9 != 0);
    }
    for (; iVar8 < 4; iVar8 = iVar8 + 1) {
      iVar10 = aiStack_94[iVar8];
      iVar9 = iVar13 + iVar10 * 8;
      fVar2 = -local_80[iVar9];
      if (((NAN(fVar2) || NAN(DAT_006e92e4)) == (fVar2 == DAT_006e92e4)) &&
         (local_80[iVar9] = 0.0, iVar14 < 8)) {
        iVar9 = 8 - iVar14;
        pfVar6 = local_80 + iVar14 + iVar10 * 8;
        pfVar15 = local_80 + iVar14 + iVar1 * 8;
        do {
          iVar9 = iVar9 + -1;
          *pfVar6 = fVar2 * *pfVar15 + *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar15 = pfVar15 + 1;
        } while (iVar9 != 0);
      }
    }
    iVar13 = iVar14;
  } while (iVar14 < 4);
  iVar13 = 3;
  do {
    iVar8 = aiStack_94[iVar13];
    iVar14 = iVar13 + -1;
    for (iVar9 = iVar14; -1 < iVar9; iVar9 = iVar9 + -1) {
      iVar1 = iVar13 + aiStack_94[iVar9] * 8;
      fVar2 = local_80[iVar1];
      if (iVar13 < 8) {
        iVar10 = 8 - iVar13;
        pfVar6 = local_80 + iVar1;
        pfVar15 = local_80 + iVar13 + iVar8 * 8;
        do {
          iVar10 = iVar10 + -1;
          *pfVar6 = *pfVar6 - fVar2 * *pfVar15;
          pfVar6 = pfVar6 + 1;
          pfVar15 = pfVar15 + 1;
        } while (iVar10 != 0);
      }
    }
    iVar13 = iVar14;
  } while (0 < iVar14);
  iVar13 = 0;
  do {
    iVar14 = aiStack_94[iVar13];
    *param_1 = local_70[iVar14 * 8];
    param_1[1] = local_70[iVar14 * 8 + 1];
    uVar4 = local_70[iVar14 * 8 + 3];
    iVar13 = iVar13 + 1;
    param_1[2] = local_70[iVar14 * 8 + 2];
    param_1[3] = uVar4;
    param_1 = param_1 + 4;
  } while (iVar13 < 4);
  return 1;
}

