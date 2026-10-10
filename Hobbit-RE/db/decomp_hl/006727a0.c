
void __thiscall FUN_006727a0(int param_1,float *param_2,float *param_3)

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
  
  FUN_00673d50();
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar2 = *param_3;
  fVar3 = *(float *)(param_1 + 0xf4);
  fVar4 = param_3[2];
  fVar5 = *(float *)(param_1 + 0xe4);
  fVar6 = param_3[1];
  fVar7 = *(float *)(param_1 + 0x104);
  fVar8 = *(float *)(param_1 + 0xd0);
  fVar9 = *param_3;
  fVar10 = *(float *)(param_1 + 0xf0);
  fVar11 = param_3[2];
  fVar12 = *(float *)(param_1 + 0xe0);
  fVar13 = param_3[1];
  fVar14 = *(float *)(param_1 + 0x100);
  *param_2 = *(float *)(param_1 + 0xcc) * *param_3 +
             *(float *)(param_1 + 0xdc) * param_3[1] + *(float *)(param_1 + 0xec) * param_3[2] +
             *(float *)(param_1 + 0xfc);
  param_2[1] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  param_2[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  return;
}

