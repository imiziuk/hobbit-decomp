
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00611260(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float param_6)

{
  float fVar1;
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
  
  fVar1 = param_6 * param_6;
  fVar9 = param_6 * fVar1;
  fVar11 = ((fVar9 + fVar9) - fVar1 * _DAT_006e958c) + DAT_006e92e8;
  fVar10 = fVar9 * _DAT_006ef7fc + fVar1 * _DAT_006e958c;
  param_6 = (fVar9 - (fVar1 + fVar1)) + param_6;
  fVar9 = fVar9 - fVar1;
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  *param_1 = fVar11 * *param_2 + fVar10 * *param_4 + param_6 * *param_3 + fVar9 * *param_5;
  param_1[1] = fVar11 * fVar7 + fVar10 * fVar5 + param_6 * fVar3 + fVar9 * fVar1;
  param_1[2] = fVar11 * fVar8 + fVar10 * fVar6 + param_6 * fVar4 + fVar9 * fVar2;
  return;
}

