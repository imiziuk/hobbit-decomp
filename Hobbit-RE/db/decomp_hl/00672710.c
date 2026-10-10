
void __thiscall FUN_00672710(int param_1,float *param_2,float *param_3)

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
  float fVar14;
  
  FUN_00673c30();
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = *param_3;
  fVar3 = *(float *)(param_1 + 0xb4);
  fVar4 = param_3[2];
  fVar5 = *(float *)(param_1 + 0xa4);
  fVar6 = param_3[1];
  fVar7 = *(float *)(param_1 + 0xc4);
  fVar8 = *(float *)(param_1 + 0x90);
  fVar9 = *param_3;
  fVar10 = *(float *)(param_1 + 0xb0);
  fVar11 = param_3[2];
  fVar12 = *(float *)(param_1 + 0xa0);
  fVar13 = param_3[1];
  fVar14 = *(float *)(param_1 + 0xc0);
  *param_2 = *(float *)(param_1 + 0x8c) * *param_3 +
             *(float *)(param_1 + 0x9c) * param_3[1] + *(float *)(param_1 + 0xac) * param_3[2] +
             *(float *)(param_1 + 0xbc);
  param_2[1] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  param_2[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  return;
}

