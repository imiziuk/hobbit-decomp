
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004adbd0(float *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  sVar1 = *(short *)(param_2 + 6);
  sVar2 = *(short *)(param_2 + 8);
  sVar3 = *(short *)(param_2 + 10);
  fVar4 = (float)_PTR_DAT_006ecc78;
  fVar5 = (float)_PTR_DAT_006ecc78;
  fVar6 = (float)_PTR_DAT_006ecc78;
  param_1[3] = (float)(int)*(short *)(param_2 + 0xc) * (float)_PTR_DAT_006ecc78;
  *param_1 = (float)(int)sVar1 * fVar4;
  param_1[1] = (float)(int)sVar2 * fVar5;
  param_1[2] = (float)(int)sVar3 * fVar6;
  return;
}

