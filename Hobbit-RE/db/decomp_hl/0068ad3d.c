
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068ad3d(int param_1,int param_2,int param_3,float *param_4)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  
  fVar3 = _DAT_006ed3a4;
  pbVar4 = (byte *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  pbVar1 = pbVar4 + *(int *)(param_1 + 0x1050) * 2;
  for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 2) {
    fVar2 = (float)*pbVar4 * fVar3;
    param_4[2] = fVar2;
    param_4[1] = fVar2;
    *param_4 = fVar2;
    param_4[3] = (float)pbVar4[1] * fVar3;
    param_4 = param_4 + 4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00689244(param_4 + *(int *)(param_1 + 0x1050) * -4);
  }
  return;
}

