
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006b3a30(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  byte *pbVar5;
  int iVar6;
  float *pfVar7;
  
  if (_DAT_006fd33c <
      (*param_1 - *param_2) * (*param_1 - *param_2) +
      (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
      (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])) {
    return 0;
  }
  fVar2 = param_1[4];
  if (fVar2 != param_2[4]) {
    return 0;
  }
  iVar6 = 0;
  if (0 < (int)fVar2) {
    pfVar7 = param_1 + 0x38;
    pfVar4 = param_2 + 0x39;
    do {
      fVar1 = *(float *)(((int)param_1 - (int)param_2) + (int)pfVar4);
      if (_DAT_006fd340 < fVar1 * fVar1 - *pfVar4 * *pfVar4) {
        return 0;
      }
      if (*pfVar7 != pfVar4[-1]) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar4 + 2;
      pfVar7 = pfVar7 + 2;
    } while (iVar6 < (int)fVar2);
  }
  fVar2 = param_1[5];
  if (fVar2 != param_2[5]) {
    return 0;
  }
  iVar6 = 0;
  if (0 < (int)fVar2) {
    pfVar7 = param_2 + 0x18;
    pfVar4 = param_1 + 0x19;
    do {
      fVar1 = *(float *)(((int)param_2 - (int)param_1) + (int)pfVar4) - *pfVar4;
      if (_DAT_006fd344 <
          (*pfVar7 - pfVar4[-1]) * (*pfVar7 - pfVar4[-1]) +
          fVar1 * fVar1 + (pfVar7[2] - pfVar4[1]) * (pfVar7[2] - pfVar4[1])) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar4 + 3;
      pfVar7 = pfVar7 + 3;
    } while (iVar6 < (int)fVar2);
  }
  fVar2 = param_1[6];
  if (fVar2 == param_2[6]) {
    iVar6 = 0;
    if (0 < (int)fVar2) {
      pfVar7 = param_2 + 8;
      pfVar4 = param_1 + 9;
      do {
        fVar1 = *(float *)((int)pfVar4 + ((int)param_2 - (int)param_1)) - *pfVar4;
        if (_DAT_006fd348 < (*pfVar7 - pfVar4[-1]) * (*pfVar7 - pfVar4[-1]) + fVar1 * fVar1) {
          return 0;
        }
        iVar6 = iVar6 + 1;
        pfVar4 = pfVar4 + 2;
        pfVar7 = pfVar7 + 2;
      } while (iVar6 < (int)fVar2);
    }
    fVar2 = param_1[7];
    if (fVar2 == param_2[7]) {
      if (0 < (int)fVar2) {
        pfVar7 = param_2 + 0x30;
        pbVar5 = (byte *)((int)param_1 + 0xc1);
        iVar6 = 0;
        do {
          fVar1 = (float)pbVar5[1] - (float)*(byte *)((int)pfVar7 + 2);
          fVar3 = (float)pbVar5[2] - (float)*(byte *)((int)pfVar7 + 3);
          if (_DAT_006fd34c <
              fVar1 * fVar1 +
              ((float)*pbVar5 - (float)pbVar5[(int)param_2 - (int)param_1]) *
              ((float)*pbVar5 - (float)pbVar5[(int)param_2 - (int)param_1]) +
              ((float)pbVar5[-1] - (float)*(byte *)pfVar7) *
              ((float)pbVar5[-1] - (float)*(byte *)pfVar7) + fVar3 * fVar3) {
            return 0;
          }
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 4;
          pfVar7 = pfVar7 + 1;
        } while (iVar6 < (int)fVar2);
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

