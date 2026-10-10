
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004482e0(float *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  undefined4 local_2c;
  
  *param_3 = 0;
  iVar16 = (param_5 * 3 + -3) * 4;
  local_2c = 0;
  if (param_5 < 1) {
    return 0;
  }
  pfVar18 = (float *)(param_4 + 8);
  fVar3 = *(float *)(iVar16 + param_4) * *param_1 +
          *(float *)(iVar16 + 4 + param_4) * param_1[1] +
          *(float *)(iVar16 + 8 + param_4) * param_1[2] + param_1[3];
  do {
    iVar17 = (-8 - param_4) + (int)pfVar18;
    fVar14 = pfVar18[-1] * param_1[1] + param_1[2] * *pfVar18 + pfVar18[-2] * *param_1 + param_1[3];
    if (fVar3 < DAT_006e92e4) {
LAB_004483a6:
      if ((fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) && (DAT_006e92e4 <= fVar14))
      goto LAB_004483cc;
    }
    else {
      bVar12 = NAN(DAT_006e92e4);
      bVar13 = fVar14 < DAT_006e92e4;
      puVar1 = (undefined4 *)(param_2 + *param_3 * 0xc);
      *param_3 = *param_3 + 1;
      *puVar1 = *(undefined4 *)(iVar16 + param_4);
      puVar1[1] = *(undefined4 *)(iVar16 + 4 + param_4);
      puVar1[2] = *(undefined4 *)(iVar16 + 8 + param_4);
      if (bVar13 == (NAN(fVar14) || bVar12)) goto LAB_004483a6;
LAB_004483cc:
      fVar15 = fVar14 - fVar3;
      fVar4 = fVar15;
      if (fVar15 < DAT_006e92e4 != (NAN(fVar15) || NAN(DAT_006e92e4))) {
        fVar4 = -fVar15;
      }
      if (fVar4 < _DAT_006ec0e0 != (NAN(fVar4) || NAN(_DAT_006ec0e0))) {
        fVar15 = _DAT_006ec0e0;
      }
      fVar15 = -fVar3 / fVar15;
      local_2c = 1;
      fVar3 = pfVar18[-2];
      fVar4 = *(float *)(iVar16 + param_4);
      fVar5 = pfVar18[-1];
      fVar6 = *(float *)(iVar16 + 4 + param_4);
      fVar7 = *pfVar18;
      fVar8 = *(float *)(iVar16 + 8 + param_4);
      fVar9 = *(float *)(iVar16 + param_4);
      fVar10 = *(float *)(iVar16 + 4 + param_4);
      fVar11 = *(float *)(iVar16 + 8 + param_4);
      pfVar2 = (float *)(param_2 + *param_3 * 0xc);
      *param_3 = *param_3 + 1;
      *pfVar2 = (fVar3 - fVar4) * fVar15 + fVar9;
      pfVar2[1] = (fVar5 - fVar6) * fVar15 + fVar10;
      pfVar2[2] = fVar15 * (fVar7 - fVar8) + fVar11;
    }
    pfVar18 = pfVar18 + 3;
    param_5 = param_5 + -1;
    iVar16 = iVar17;
    fVar3 = fVar14;
    if (param_5 == 0) {
      return local_2c;
    }
  } while( true );
}

