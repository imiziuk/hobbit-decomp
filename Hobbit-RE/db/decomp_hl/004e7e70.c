
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004e7e70(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float10 extraout_ST0;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(byte *)(param_1 + 0x1d3) & 1) != 0) {
    fVar2 = *(float *)(param_1 + 0x288);
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      fVar2 = -fVar2;
    }
    local_c = *param_2;
    local_8 = *(float *)(param_1 + 0x1b8) + *(float *)(param_1 + 0x48) + fVar2 + _DAT_006e936c;
    local_4 = param_2[2];
    FUN_005c2500(&local_c,param_3,param_7,param_4,param_5,param_6,*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
    if ((*(byte *)(param_1 + 0x1d2) & 1) != 0) {
      fVar2 = *(float *)(param_1 + 0x24c);
      fVar3 = param_2[2];
      fVar4 = *(float *)(param_1 + 0x23c);
      fVar5 = param_2[1];
      fVar6 = *param_2;
      fVar7 = *(float *)(param_1 + 0x22c);
      fVar8 = *(float *)(param_1 + 0x25c);
      fVar9 = *(float *)(param_1 + 0xac);
      fVar10 = *(float *)(param_1 + 0x164);
      iVar11 = __ftol();
      iVar12 = __ftol();
      fVar2 = (fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8 + fVar9) / fVar10 -
              (float)iVar11;
      iVar14 = *(short *)(param_1 + 0x1cc) + -2;
      fVar15 = extraout_ST0 - (float10)iVar12;
      iVar13 = iVar14;
      if (iVar11 <= iVar14) {
        iVar13 = iVar11;
      }
      if (iVar13 < 1) {
        iVar11 = 1;
      }
      else if (iVar14 < iVar11) {
        iVar11 = iVar14;
      }
      iVar13 = *(short *)(param_1 + 0x1ce) + -2;
      iVar14 = iVar13;
      if (iVar12 <= iVar13) {
        iVar14 = iVar12;
      }
      if (iVar14 < 1) {
        iVar12 = 1;
      }
      else if (iVar13 < iVar12) {
        iVar12 = iVar13;
      }
      fVar3 = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3) *
              _DAT_006edf8c;
      if (fVar3 < _DAT_0072eaf4) {
        fVar3 = _DAT_0072eaf4;
      }
      fVar4 = fVar3 - _DAT_0075e2d8;
      if (fVar3 - _DAT_0075e2d8 < DAT_006e92e4) {
        fVar4 = DAT_006e92e4;
      }
      fVar4 = fVar4 / (DAT_006e92e8 - _DAT_0075e2d8);
      pfVar1 = (float *)(*(int *)(param_1 + 0x270) +
                        (*(short *)(param_1 + 0x1cc) * iVar12 + iVar11) * 4);
      fVar16 = (float10)DAT_006e92e8;
      fVar17 = (float10)DAT_006e92e8;
      *pfVar1 = (float)((fVar17 - (float10)fVar2) * (fVar16 - fVar15) * (float10)_DAT_0072eaf0 *
                        (float10)fVar4 + (float10)*pfVar1);
      iVar14 = iVar12 + 1;
      if (iVar14 < *(short *)(param_1 + 0x1ce) + -1) {
        pfVar1 = (float *)(*(int *)(param_1 + 0x270) +
                          (*(short *)(param_1 + 0x1cc) * iVar14 + iVar11) * 4);
        *pfVar1 = (float)((float10)(float)(fVar17 - (float10)fVar2) * fVar15 *
                          (float10)_DAT_0072eaf0 * (float10)fVar4 + (float10)*pfVar1);
      }
      if (iVar11 + 1 < *(short *)(param_1 + 0x1cc) + -1) {
        pfVar1 = (float *)(*(int *)(param_1 + 0x270) + 4 +
                          (*(short *)(param_1 + 0x1cc) * iVar12 + iVar11) * 4);
        *pfVar1 = _DAT_0072eaf0 * (float)((float10)fVar2 * (fVar16 - fVar15)) * fVar4 + *pfVar1;
      }
      if ((iVar14 < *(short *)(param_1 + 0x1ce) + -1) &&
         (iVar11 + 1 < *(short *)(param_1 + 0x1cc) + -1)) {
        pfVar1 = (float *)(*(int *)(param_1 + 0x270) + 4 +
                          (iVar14 * *(short *)(param_1 + 0x1cc) + iVar11) * 4);
        *pfVar1 = _DAT_0072eaf0 * (float)(fVar15 * (float10)fVar2) * fVar4 + *pfVar1;
      }
    }
  }
  return;
}

