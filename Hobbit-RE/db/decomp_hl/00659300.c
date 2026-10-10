
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00659300(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6,
            float *param_7,float *param_8,float *param_9)

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
  float fVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  
  fVar2 = _DAT_007eda5c * param_7[1] + _DAT_007eda6c * param_7[2] + _DAT_007eda4c * *param_7 +
          _DAT_007eda7c;
  fVar3 = _DAT_007eda60 * param_7[1] + _DAT_007eda70 * param_7[2] + _DAT_007eda50 * *param_7 +
          _DAT_007eda80;
  fVar4 = _DAT_007eda64 * param_7[1] + _DAT_007eda74 * param_7[2] + _DAT_007eda54 * *param_7 +
          _DAT_007eda84;
  fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
  param_3 = _DAT_007eda90 * param_3;
  if (param_3 * param_3 < fVar3 != (param_3 * param_3 == fVar3)) {
    *param_8 = 0.0;
    return;
  }
  param_2 = _DAT_007eda8c * param_2;
  if ((fVar3 <= param_2 * param_2) || (param_3 <= param_2 + DAT_006e92e8)) {
    *param_8 = 1.0;
  }
  else {
    fVar14 = (float10)FUN_00658e60((SQRT(fVar3) - param_2) / (param_3 - param_2),param_4);
    *param_8 = (float)fVar14;
  }
  fVar3 = fVar4 * fVar4 + fVar2 * fVar2;
  param_5 = _DAT_007eda8c * param_5;
  param_6 = _DAT_007eda90 * param_6;
  if ((param_5 * param_5 < fVar3) && (param_5 + DAT_006e92e8 < param_6)) {
    fVar3 = SQRT(fVar3);
    fVar14 = (float10)FUN_0064ca10(-fVar2,fVar4);
    fVar14 = fVar14 * (float10)_DAT_006e9560 * (float10)_DAT_006e955c;
    if (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar14 = fVar14 + (float10)_DAT_006e9558;
      } while (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4)));
    }
    iVar12 = __ftol();
    iVar12 = iVar12 * 0x10;
    if (fVar3 < param_6) {
      pfVar1 = (float *)(iVar12 + param_1);
      fVar11 = DAT_006e92e8 - (fVar3 - param_5) / (param_6 - param_5);
      fVar2 = *(float *)(param_1 + 0x21d4);
      fVar3 = pfVar1[1];
      fVar4 = *(float *)(param_1 + 0x21d8);
      fVar5 = pfVar1[2];
      fVar6 = *(float *)(param_1 + 0x21dc);
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      *param_9 = (*(float *)(param_1 + 0x21d0) - *pfVar1) * fVar11 + *pfVar1;
      param_9[3] = fVar11 * (fVar6 - fVar7) + fVar10;
      param_9[1] = (fVar2 - fVar3) * fVar11 + fVar8;
      param_9[2] = (fVar4 - fVar5) * fVar11 + fVar9;
      FUN_0065b6f0();
      return;
    }
    iVar13 = iVar12 + param_1;
    *param_9 = *(float *)(iVar12 + param_1);
    param_9[1] = *(float *)(iVar13 + 4);
    param_9[2] = *(float *)(iVar13 + 8);
    param_9[3] = *(float *)(iVar13 + 0xc);
    return;
  }
  *param_9 = *(float *)(param_1 + 0x21d0);
  param_9[1] = *(float *)(param_1 + 0x21d4);
  param_9[2] = *(float *)(param_1 + 0x21d8);
  param_9[3] = *(float *)(param_1 + 0x21dc);
  return;
}

