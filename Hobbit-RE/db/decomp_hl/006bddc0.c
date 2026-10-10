
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006bddc0(int param_1,int param_2,float param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  FUN_006bad50(param_2,param_3);
  iVar4 = *(int *)(param_1 + 4);
  piVar1 = (int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  FUN_006bdcc0(iVar4,piVar1,(int *)(param_1 + 0xac),param_1 + 0xb0);
  *(uint *)(param_1 + 0xc0) = (uint)(*(int *)(iVar4 + 0xa0) == 0x3f800000);
  *(uint *)(param_1 + 0xc4) =
       (uint)((NAN(*(float *)(iVar4 + 0xa4)) || NAN(DAT_006e92e4)) !=
             (*(float *)(iVar4 + 0xa4) == DAT_006e92e4));
  iVar10 = *piVar1;
  *(int *)(param_1 + 200) = param_1 + 0xdc;
  fVar3 = DAT_006e92e8;
  iVar14 = param_1 + 0xdc + iVar10 * 0xc;
  *(int *)(param_1 + 0xcc) = iVar14;
  iVar14 = iVar14 + iVar10 * 8;
  *(int *)(param_1 + 0xd0) = iVar14;
  iVar14 = iVar14 + iVar10 * 4;
  *(int *)(param_1 + 0xd4) = iVar14;
  *(int *)(param_1 + 0xd8) = iVar14 + *(int *)(param_1 + 0xac) * 2;
  fVar3 = (fVar3 - *(float *)(iVar4 + 0xa0)) * _DAT_006e9368 - _DAT_006e9578;
  fStack_10 = (DAT_006e92e8 - *(float *)(iVar4 + 0xa4)) * _DAT_006e9368 - _DAT_006e9578;
  param_3 = fVar3;
  if (fStack_10 < fVar3) {
    param_3 = fStack_10;
    fStack_10 = fVar3;
  }
  if (param_3 < _DAT_006e9570 != (NAN(param_3) || NAN(_DAT_006e9570))) {
    param_3 = -1.5707964;
  }
  if (_DAT_006e9578 < fStack_10) {
    fStack_10 = _DAT_006e9578;
  }
  param_2 = *(int *)(iVar4 + 0x9c);
  iVar14 = 0;
  iStack_28 = 0;
  if (param_2 != -1 && -1 < param_2 + 1) {
    fStack_10 = fStack_10 - param_3;
    do {
      iVar10 = *(int *)(iVar4 + 0x98);
      fVar3 = (float)param_2;
      param_2 = 0;
      fStack_8 = (fStack_10 * (float)iStack_28) / fVar3 + param_3;
      if (0 < iVar10) {
        fStack_c = (float)iStack_28 * _DAT_006e9598;
        do {
          fVar3 = (float)param_2 * _DAT_006e9598;
          iVar14 = (iVar10 + 1) * iStack_28 + param_2;
          iVar9 = iVar14 * 0xc;
          puVar5 = (undefined4 *)(*(int *)(param_1 + 200) + iVar9);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0x3f000000;
          iVar12 = *(int *)(param_1 + 200) + iVar9;
          fStack_4 = fVar3 / (float)iVar10 - fStack_c / (float)(iVar10 * 2);
          FUN_0064c8e0(fStack_8,&fStack_20,&fStack_1c);
          fVar3 = *(float *)(iVar12 + 4);
          *(float *)(iVar12 + 4) = fVar3 * fStack_1c - *(float *)(iVar12 + 8) * fStack_20;
          *(float *)(iVar12 + 8) = *(float *)(iVar12 + 8) * fStack_1c + fVar3 * fStack_20;
          pfVar13 = (float *)(*(int *)(param_1 + 200) + iVar9);
          FUN_0064c8e0(fStack_4,&fStack_14,&fStack_18);
          fVar3 = *pfVar13;
          param_2 = param_2 + 1;
          *pfVar13 = fVar3 * fStack_18 + fStack_14 * pfVar13[2];
          pfVar13[2] = pfVar13[2] * fStack_18 - fVar3 * fStack_14;
          iVar10 = *(int *)(iVar4 + 0x98);
        } while (param_2 < iVar10);
      }
      puVar5 = (undefined4 *)(*(int *)(param_1 + 200) + ((iVar14 - param_2) + 1) * 0xc);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 200) + (iVar14 * 3 + 3) * 4);
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      puVar2[2] = puVar5[2];
      param_2 = *(int *)(iVar4 + 0x9c);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < param_2 + 1);
  }
  if ((*(int *)(param_1 + 0xc0) != 0) && (iVar14 = 0, 0 < *(int *)(iVar4 + 0x98) + 1)) {
    iVar10 = 0;
    do {
      iVar9 = *(int *)(param_1 + 200);
      *(undefined4 *)(iVar9 + iVar10) = 0;
      iVar9 = iVar9 + iVar10;
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0xc;
      *(undefined4 *)(iVar9 + 4) = 0x3f000000;
      *(undefined4 *)(iVar9 + 8) = 0;
    } while (iVar14 < *(int *)(iVar4 + 0x98) + 1);
  }
  if ((*(int *)(param_1 + 0xc4) != 0) &&
     (iVar14 = (*piVar1 - *(int *)(iVar4 + 0x98)) + -1, iVar14 < *piVar1)) {
    iVar10 = iVar14 * 0xc;
    do {
      iVar9 = *(int *)(param_1 + 200);
      *(undefined4 *)(iVar9 + iVar10) = 0;
      iVar9 = iVar9 + iVar10;
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0xc;
      *(undefined4 *)(iVar9 + 4) = 0xbf000000;
      *(undefined4 *)(iVar9 + 8) = 0;
    } while (iVar14 < *piVar1);
  }
  iVar14 = 0;
  if (*(int *)(iVar4 + 0x84) == 0) {
    param_2 = *(int *)(iVar4 + 0x9c);
    param_3 = 0.0;
    if (param_2 != -1 && -1 < param_2 + 1) {
      do {
        iVar10 = *(int *)(iVar4 + 0x98);
        iVar9 = 0;
        fVar3 = ((float)(int)param_3 * *(float *)(iVar4 + 0x8c)) / (float)param_2;
        param_2 = 0;
        if (0 < iVar10) {
          do {
            iVar14 = (iVar10 + 1) * (int)param_3 + param_2;
            iVar9 = param_2 + 1;
            pfVar13 = (float *)(*(int *)(param_1 + 0xcc) + iVar14 * 8);
            *pfVar13 = ((float)param_2 * *(float *)(iVar4 + 0x88)) / (float)iVar10 -
                       ((float)(int)param_3 * *(float *)(iVar4 + 0x88)) / (float)(iVar10 * 2);
            pfVar13[1] = fVar3;
            iVar10 = *(int *)(iVar4 + 0x98);
            param_2 = iVar9;
          } while (iVar9 < iVar10);
        }
        param_3 = (float)((int)param_3 + 1);
        *(float *)(*(int *)(param_1 + 0xcc) + 8 + iVar14 * 8) =
             *(float *)(*(int *)(param_1 + 0xcc) + 8 + (iVar14 - iVar9) * 8) +
             *(float *)(iVar4 + 0x88);
        *(float *)(*(int *)(param_1 + 0xcc) + 0xc + iVar14 * 8) = fVar3;
        param_2 = *(int *)(iVar4 + 0x9c);
      } while ((int)param_3 < param_2 + 1);
    }
  }
  else if (0 < *piVar1) {
    iVar10 = 0;
    do {
      iVar14 = iVar14 + 1;
      pfVar13 = (float *)(*(int *)(param_1 + 200) + iVar10);
      iVar10 = iVar10 + 0xc;
      *(float *)(*(int *)(param_1 + 0xcc) + -8 + iVar14 * 8) =
           (*pfVar13 + _DAT_006e936c) * *(float *)(iVar4 + 0x88);
      *(float *)(*(int *)(param_1 + 0xcc) + -4 + iVar14 * 8) =
           (*(float *)(*(int *)(param_1 + 200) + -4 + iVar10) + _DAT_006e936c) *
           *(float *)(iVar4 + 0x8c);
    } while (iVar14 < *piVar1);
  }
  iVar14 = *(int *)(iVar4 + 0x9c);
  uVar11 = (uint)(*(int *)(param_1 + 0xc0) != 0);
  if (*(int *)(param_1 + 0xc4) != 0) {
    iVar14 = iVar14 + -1;
  }
  psVar7 = *(short **)(param_1 + 0xd4);
  for (; (int)uVar11 < iVar14; uVar11 = uVar11 + 1) {
    iVar10 = 0;
    if (*(int *)(iVar4 + 0x98) != -1 && -1 < *(int *)(iVar4 + 0x98) + 1) {
      psVar6 = psVar7;
      do {
        psVar7 = psVar6 + 2;
        sVar8 = (short)iVar10;
        *psVar6 = (*(short *)(iVar4 + 0x98) + 1) * ((short)uVar11 + 1) + sVar8;
        iVar10 = iVar10 + 1;
        psVar6[1] = (*(short *)(iVar4 + 0x98) + 1) * (short)uVar11 + sVar8;
        psVar6 = psVar7;
      } while (iVar10 < *(int *)(iVar4 + 0x98) + 1);
    }
    *psVar7 = -1;
    psVar7 = psVar7 + 1;
  }
  psVar7 = *(short **)(param_1 + 0xd8);
  if ((*(int *)(param_1 + 0xc0) != 0) && (iVar14 = 0, 0 < *(int *)(iVar4 + 0x98))) {
    do {
      sVar8 = (short)iVar14;
      *psVar7 = sVar8;
      psVar7[1] = *(short *)(iVar4 + 0x98) + sVar8 + 1;
      psVar7[2] = *(short *)(iVar4 + 0x98) + sVar8 + 2;
      psVar7 = psVar7 + 3;
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(iVar4 + 0x98));
  }
  if ((*(int *)(param_1 + 0xc4) != 0) && (iVar14 = 0, 0 < *(int *)(iVar4 + 0x98))) {
    do {
      sVar8 = (short)iVar14;
      *psVar7 = (*(short *)piVar1 - *(short *)(iVar4 + 0x98)) + sVar8;
      psVar7[1] = *(short *)piVar1 + *(short *)(iVar4 + 0x98) * -2 + -1 + sVar8;
      iVar14 = iVar14 + 1;
      psVar7[2] = *(short *)piVar1 + (*(short *)(iVar4 + 0x98) + 1) * -2 + sVar8;
      psVar7 = psVar7 + 3;
    } while (iVar14 < *(int *)(iVar4 + 0x98));
  }
  return;
}

