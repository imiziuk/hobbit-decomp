
undefined4
FUN_00607c40(float *param_1,float param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  pfVar5 = (float *)FUN_00402040(local_c,param_3,param_4);
  FUN_00401f00(*param_1 + *pfVar5,pfVar5[1] + param_1[1],pfVar5[2] + param_1[2]);
  fVar1 = (local_18 - *param_1) * (local_18 - *param_1) +
          (local_14 - param_1[1]) * (local_14 - param_1[1]) +
          (local_10 - param_1[2]) * (local_10 - param_1[2]);
  param_2 = param_2 * param_2;
  if (fVar1 < param_2 != (NAN(fVar1) || NAN(param_2))) {
    fVar3 = local_18 - *param_3;
    fVar4 = local_14 - param_3[1];
    local_10 = local_10 - param_3[2];
    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + local_10 * local_10);
    param_2 = fVar2 - SQRT(param_2 - fVar1);
    if (param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) {
      param_2 = 0.0;
    }
    if (DAT_006e92e4 < fVar2) {
      fVar2 = DAT_006e92e8 / fVar2;
      fVar3 = fVar3 * fVar2;
      fVar4 = fVar4 * fVar2;
      local_10 = local_10 * fVar2;
    }
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    *param_6 = fVar3 * param_2 + *param_3;
    param_6[1] = fVar4 * param_2 + fVar1;
    param_6[2] = local_10 * param_2 + fVar2;
    param_2 = param_2 / SQRT((*param_3 - *param_4) * (*param_3 - *param_4) +
                             (param_3[1] - param_4[1]) * (param_3[1] - param_4[1]) +
                             (param_3[2] - param_4[2]) * (param_3[2] - param_4[2]));
    *param_5 = param_2;
    if ((param_2 < DAT_006e92e4 == (NAN(param_2) || NAN(DAT_006e92e4))) && (param_2 <= DAT_006e92e8)
       ) {
      return 1;
    }
  }
  return 0;
}

