
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00542fd0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar7 = param_3;
  pfVar6 = param_2;
  fVar2 = param_2[3] * param_3[3] +
          param_2[4] * param_3[4] + param_2[5] * param_3[5] + param_2[6] * param_3[6];
  if ((_DAT_006e999c < fVar2) || (fVar2 < _DAT_006ef7fc != (NAN(fVar2) || NAN(_DAT_006ef7fc)))) {
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
  }
  else {
    fVar1 = param_2[3];
    if (fVar2 < DAT_006e92e4 == (NAN(fVar2) || NAN(DAT_006e92e4))) {
      fVar2 = param_2[4];
      param_3 = (float *)param_2[6];
      param_2 = (float *)param_2[5];
    }
    else {
      fVar1 = -fVar1;
      fVar2 = -param_2[4];
      param_3 = (float *)-param_2[6];
      param_2 = (float *)-param_2[5];
    }
    fVar1 = (pfVar7[3] - fVar1) * param_4 + fVar1;
    fVar2 = (pfVar7[4] - fVar2) * param_4 + fVar2;
    fVar3 = (pfVar7[5] - (float)param_2) * param_4 + (float)param_2;
    fVar4 = (pfVar7[6] - (float)param_3) * param_4 + (float)param_3;
    fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
    if (fVar5 < _DAT_006f3c0c == (NAN(fVar5) || NAN(_DAT_006f3c0c))) {
      fVar5 = (_DAT_006f3bfc * fVar5 - _DAT_006f3bf8) * fVar5 + _DAT_006f3bf4;
    }
    else {
      fVar5 = (_DAT_006f3c08 * fVar5 - _DAT_006f3c04) * fVar5 + _DAT_006f3c00;
    }
    param_1[3] = fVar1 * fVar5;
    param_1[4] = fVar5 * fVar2;
    param_1[5] = fVar3 * fVar5;
    param_1[6] = fVar5 * fVar4;
  }
  fVar1 = (*pfVar7 - *pfVar6) * param_4;
  fVar3 = (pfVar7[1] - pfVar6[1]) * param_4;
  fVar2 = pfVar6[1];
  fVar4 = (pfVar7[2] - pfVar6[2]) * param_4 + pfVar6[2];
  *param_1 = fVar1 + *pfVar6;
  param_1[2] = fVar4;
  param_1[1] = fVar3 + fVar2;
  FUN_00401f00(pfVar7[7] - pfVar6[7],pfVar7[8] - pfVar6[8],pfVar7[9] - pfVar6[9]);
  FUN_00401f00(fVar1 * param_4,fVar3 * param_4,local_1c * param_4);
  FUN_00401f00(local_18 + pfVar6[7],local_14 + pfVar6[8],local_10 + pfVar6[9]);
  param_1[7] = local_c;
  param_1[8] = local_8;
  param_1[9] = fVar4;
  return;
}

