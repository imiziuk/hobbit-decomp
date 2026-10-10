
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004607c0(int param_1,float *param_2,short *param_3,int param_4)

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
  
  fVar9 = (float)(int)*param_3 * _DAT_006ecc74 * *(float *)(param_1 + 200) +
          *(float *)(param_1 + 0xd4);
  fVar10 = (float)(int)param_3[1] * _DAT_006ecc74 * *(float *)(param_1 + 0xcc) +
           *(float *)(param_1 + 0xd8);
  fVar11 = (float)(int)param_3[2] * _DAT_006ecc74 * *(float *)(param_1 + 0xd0) +
           *(float *)(param_1 + 0xdc);
  if (param_4 != 0) {
    *param_2 = fVar9;
    param_2[2] = fVar11;
    param_2[1] = fVar10;
    return;
  }
  fVar1 = *(float *)(param_1 + 0x174);
  fVar2 = *(float *)(param_1 + 0x164);
  fVar3 = *(float *)(param_1 + 0x154);
  fVar4 = *(float *)(param_1 + 0x184);
  fVar5 = *(float *)(param_1 + 0x170);
  fVar6 = *(float *)(param_1 + 0x160);
  fVar7 = *(float *)(param_1 + 0x150);
  fVar8 = *(float *)(param_1 + 0x180);
  *param_2 = fVar9 * *(float *)(param_1 + 0x14c) +
             fVar10 * *(float *)(param_1 + 0x15c) + fVar11 * *(float *)(param_1 + 0x16c) +
             *(float *)(param_1 + 0x17c);
  param_2[1] = fVar9 * fVar7 + fVar10 * fVar6 + fVar11 * fVar5 + fVar8;
  param_2[2] = fVar9 * fVar3 + fVar10 * fVar2 + fVar11 * fVar1 + fVar4;
  return;
}

