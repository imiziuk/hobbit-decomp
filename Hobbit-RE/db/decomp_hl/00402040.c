
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402040(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_10;
  
  fVar2 = *param_1 - *param_3;
  fVar5 = param_1[1] - param_3[1];
  local_10 = param_1[2] - param_3[2];
  fVar6 = *param_4 - *param_3;
  fVar1 = param_4[1] - param_3[1];
  fVar4 = param_4[2] - param_3[2];
  fVar3 = fVar6 * fVar2 + fVar1 * fVar5 + fVar4 * local_10;
  if ((float)_DAT_006e92f8 < fVar3) {
    fVar7 = fVar6 * fVar6 + fVar1 * fVar1 + fVar4 * fVar4;
    if (fVar7 <= fVar3) {
      fVar2 = fVar2 - fVar6;
      fVar5 = fVar5 - fVar1;
      local_10 = local_10 - fVar4;
    }
    else {
      fVar3 = fVar3 / fVar7;
      fVar2 = fVar2 - fVar6 * fVar3;
      fVar5 = fVar5 - fVar1 * fVar3;
      local_10 = local_10 - fVar4 * fVar3;
    }
  }
  *param_2 = -fVar2;
  param_2[1] = -fVar5;
  param_2[2] = -local_10;
  return;
}

