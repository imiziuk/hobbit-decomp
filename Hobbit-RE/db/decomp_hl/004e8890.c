
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e8890(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float *local_70;
  float afStack_60 [5];
  float local_4c [4];
  float local_3c [4];
  float local_2c [4];
  int aiStack_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_water__Render___BuildPositions_0072eb98);
  iVar12 = 0;
  local_4 = 0;
  fVar14 = (float10)FUN_00557bb0();
  fVar2 = *(float *)(param_1 + 0x178);
  fVar3 = *(float *)(param_1 + 0x1b8);
  fVar4 = *(float *)(param_1 + 0xb0);
  iVar13 = *(int *)(param_1 + 0x1d4);
  local_70 = *(float **)(param_1 + 0x270);
  iVar1 = iVar13 + (int)*(short *)(param_1 + 0x1ce) * (int)*(short *)(param_1 + 0x1cc) * 0xc;
  pfVar10 = (float *)(param_1 + 0x298);
  pfVar9 = (float *)(param_1 + 0x2c0);
  iVar7 = 0;
  do {
    iVar11 = iVar7;
    if (DAT_006e92e4 < *pfVar9) {
      fVar5 = pfVar10[-2];
      fVar6 = *pfVar9;
      aiStack_1c[iVar7] = iVar12;
      afStack_60[iVar7 + 1] = fVar6;
      iVar11 = iVar7 + 1;
      afStack_60[iVar7 + 9] = fVar5 * _DAT_006ee9c4;
      afStack_60[iVar7 + 5] = *pfVar10 * _DAT_006ee9c4;
      afStack_60[iVar7 + 0xd] =
           (float)(fVar14 * (float10)fVar2 * (float10)pfVar9[0xc] * (float10)_DAT_006ef800);
    }
    iVar12 = iVar12 + 1;
    pfVar9 = pfVar9 + 1;
    pfVar10 = pfVar10 + 3;
    iVar7 = iVar11;
  } while (iVar12 < 4);
  iVar7 = 0;
  if (0 < iVar11) {
    do {
      iVar7 = iVar7 + 1;
      afStack_60[iVar7] = (DAT_006e92e8 / (float)iVar11) * afStack_60[iVar7];
    } while (iVar7 < iVar11);
  }
  for (; iVar13 != iVar1; iVar13 = iVar13 + 0xc) {
    iVar7 = 0;
    *(float *)(iVar13 + 4) = fVar3 - fVar4;
    if (0 < iVar11) {
      do {
        uVar8 = __ftol();
        iVar7 = iVar7 + 1;
        *(float *)(iVar13 + 4) =
             (float)(&DAT_0075e080)[uVar8 & 0x7f] * afStack_60[iVar7] + *(float *)(iVar13 + 4);
      } while (iVar7 < iVar11);
    }
    if ((*(byte *)(param_1 + 0x1d2) & 1) != 0) {
      fVar2 = *local_70;
      local_70 = local_70 + 1;
      *(float *)(iVar13 + 4) = *(float *)(iVar13 + 4) + fVar2;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

