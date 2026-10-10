
void __thiscall FUN_004bc800(int param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 400);
  fVar2 = *(float *)(param_1 + 0x184);
  fVar3 = *(float *)(param_1 + 0x194);
  fVar4 = *(float *)(param_1 + 0x188);
  fVar5 = *(float *)(param_1 + 0x184);
  fVar6 = *(float *)(param_1 + 0x188);
  *param_3 = (*(float *)(param_1 + 0x18c) - *(float *)(param_1 + 0x180)) * param_2 +
             *(float *)(param_1 + 0x180);
  param_3[1] = (fVar1 - fVar2) * param_2 + fVar5;
  param_3[2] = (fVar3 - fVar4) * param_2 + fVar6;
  return;
}

