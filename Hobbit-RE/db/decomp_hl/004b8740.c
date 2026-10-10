
void __thiscall FUN_004b8740(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar13;
  int iVar14;
  
  fVar1 = *param_4;
  fVar2 = *param_2;
  fVar3 = param_4[1];
  fVar4 = param_2[1];
  fVar5 = param_4[2];
  fVar6 = param_2[2];
  fVar7 = *param_3;
  fVar8 = *param_2;
  fVar9 = param_3[1];
  fVar10 = param_2[1];
  fVar11 = param_3[2];
  fVar12 = param_2[2];
  fVar13 = (fVar9 - fVar10) * (fVar5 - fVar6) - (fVar11 - fVar12) * (fVar3 - fVar4);
  *param_1 = fVar13;
  fVar5 = (fVar11 - fVar12) * (fVar1 - fVar2) - (fVar5 - fVar6) * (fVar7 - fVar8);
  param_1[1] = fVar5;
  fVar1 = (fVar7 - fVar8) * (fVar3 - fVar4) - (fVar9 - fVar10) * (fVar1 - fVar2);
  param_1[2] = fVar1;
  fVar1 = DAT_006e92e8 / SQRT(fVar13 * fVar13 + fVar5 * fVar5 + fVar1 * fVar1);
  iVar14 = FUN_0064cf30(fVar1);
  if (iVar14 == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  else {
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  param_1[3] = -(param_1[1] * param_2[1] + *param_2 * *param_1 + param_2[2] * param_1[2]);
  return;
}

