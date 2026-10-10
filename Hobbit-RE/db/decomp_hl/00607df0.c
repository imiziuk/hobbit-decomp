
undefined4
FUN_00607df0(float *param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float local_10;
  
  iVar7 = FUN_00607c40(param_1,param_2 + param_3,param_4,param_5,param_6,param_7);
  if (iVar7 == 0) {
    return 0;
  }
  fVar1 = *param_7;
  fVar2 = param_7[1];
  fVar3 = param_7[2];
  fVar4 = *param_1 - fVar1;
  fVar5 = param_1[1] - fVar2;
  local_10 = param_1[2] - fVar3;
  fVar6 = DAT_006e92e8 / SQRT(fVar4 * fVar4 + fVar5 * fVar5 + local_10 * local_10);
  iVar7 = FUN_0064cf30(fVar6);
  if (iVar7 == 0) {
    local_10 = 0.0;
    fVar4 = DAT_006e92e4;
    fVar5 = DAT_006e92e4;
  }
  else {
    local_10 = local_10 * fVar6;
    fVar4 = fVar4 * fVar6;
    fVar5 = fVar5 * fVar6;
  }
  *param_7 = fVar4 * param_3 + fVar1;
  param_7[2] = local_10 * param_3 + fVar3;
  param_7[1] = fVar5 * param_3 + fVar2;
  return 1;
}

