
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068accf(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  pbVar3 = pbVar2 + *(int *)(param_1 + 0x1050);
  for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
    fVar1 = (float)*pbVar2 * _DAT_006ed3a4;
    param_4[2] = fVar1;
    param_4[1] = fVar1;
    *param_4 = fVar1;
    param_4[3] = 1.0;
    param_4 = param_4 + 4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00689244(param_4 + *(int *)(param_1 + 0x1050) * -4);
  }
  return;
}

