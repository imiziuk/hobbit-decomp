
void __thiscall FUN_004935d0(float *param_1,float *param_2)

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
  float fVar12;
  
  fVar8 = *param_2 + *param_2;
  fVar11 = param_2[1] + param_2[1];
  fVar10 = param_2[2] + param_2[2];
  fVar9 = fVar8 * param_2[3];
  fVar1 = param_2[3];
  fVar2 = param_2[3];
  fVar8 = fVar8 * *param_2;
  fVar3 = *param_2;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  fVar12 = DAT_006e92e8 - (fVar10 * fVar7 + fVar11 * fVar5);
  param_1[0xc] = 0.0;
  *param_1 = fVar12;
  param_1[1] = fVar11 * fVar3 + fVar10 * fVar2;
  param_1[2] = fVar10 * fVar4 - fVar11 * fVar1;
  param_1[4] = fVar11 * fVar3 - fVar10 * fVar2;
  param_1[5] = DAT_006e92e8 - (fVar10 * fVar7 + fVar8);
  param_1[6] = fVar9 + fVar10 * fVar6;
  param_1[8] = fVar10 * fVar4 + fVar11 * fVar1;
  param_1[9] = fVar10 * fVar6 - fVar9;
  param_1[10] = DAT_006e92e8 - (fVar11 * fVar5 + fVar8);
  return;
}

