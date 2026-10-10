
void __thiscall FUN_004e79c0(int param_1,float *param_2)

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
  float10 fVar12;
  
  *param_2 = *(float *)(param_1 + 0xac);
  param_2[1] = *(float *)(param_1 + 0xb0);
  param_2[2] = *(float *)(param_1 + 0xb4);
  fVar12 = (float10)FUN_00647b30(0xbf800000,0x3f800000);
  *param_2 = (float)(fVar12 * (float10)*param_2);
  fVar12 = (float10)FUN_00647b30(0xbf800000,0x3f800000);
  param_2[1] = (float)(fVar12 * (float10)param_2[1]);
  fVar12 = (float10)FUN_00647b30(0xbf800000,0x3f800000);
  param_2[2] = (float)(fVar12 * (float10)param_2[2]);
  fVar1 = *(float *)(param_1 + 0x1f0);
  fVar2 = *param_2;
  fVar3 = *(float *)(param_1 + 0x210);
  fVar4 = param_2[2];
  fVar5 = *(float *)(param_1 + 0x200);
  fVar6 = *(float *)(param_1 + 0x220);
  fVar7 = *(float *)(param_1 + 500);
  fVar8 = *param_2;
  fVar9 = *(float *)(param_1 + 0x214);
  fVar10 = *(float *)(param_1 + 0x204);
  fVar11 = *(float *)(param_1 + 0x224);
  *param_2 = *(float *)(param_1 + 0x1ec) * *param_2 +
             *(float *)(param_1 + 0x1fc) * param_2[1] + *(float *)(param_1 + 0x20c) * param_2[2] +
             *(float *)(param_1 + 0x21c);
  param_2[2] = fVar10 * param_2[1] + fVar9 * param_2[2] + fVar7 * fVar8 + fVar11;
  param_2[1] = fVar5 * param_2[1] + fVar3 * fVar4 + fVar1 * fVar2 + fVar6;
  return;
}

