
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00606de0(float *param_1,float *param_2,float param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  fVar1 = fVar3;
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar3;
  }
  if (fVar1 < _DAT_006ebfe4 == (NAN(fVar1) || NAN(_DAT_006ebfe4))) {
    local_24 = *param_4;
    local_20 = param_4[1];
    local_1c = param_4[2];
    fVar4 = DAT_006e92e8 / fVar3;
    local_18 = fVar4 * -*param_2;
    local_14 = -param_2[1] * fVar4;
    local_10 = -param_2[2] * fVar4;
    fVar1 = *param_1 - local_24;
    fVar2 = param_1[1] - local_20;
    fVar5 = param_1[2] - local_1c;
    fVar6 = fVar1 * local_18 + fVar2 * local_14 + fVar5 * local_10;
    if ((fVar6 < DAT_006e92e4 == (fVar6 == DAT_006e92e4)) && (fVar6 - fVar3 <= param_3)) {
      fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5;
      param_3 = param_3 * param_3;
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        *param_6 = local_24;
        param_6[1] = local_20;
        param_6[2] = local_1c;
        *param_5 = 0.0;
        return 1;
      }
      param_3 = param_3 - (fVar1 - fVar6 * fVar6);
      if (param_3 < DAT_006e92e4 == (NAN(param_3) || NAN(DAT_006e92e4))) {
        fVar6 = fVar6 - SQRT(param_3);
        *param_5 = fVar6;
        if (fVar6 <= fVar3) {
          local_c = local_18 * fVar6 + local_24;
          local_8 = local_14 * fVar6 + local_20;
          local_4 = local_10 * fVar6 + local_1c;
          fVar6 = fVar6 * fVar4;
          *param_5 = fVar6;
          FUN_00401f00(fVar6 * *param_2,fVar6 * param_2[1],fVar6 * param_2[2]);
          FUN_00401f00(local_18 + local_c,local_14 + local_8,local_10 + local_4);
          FUN_004357e0(&local_24);
          return 1;
        }
      }
    }
  }
  return 0;
}

