
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068aa93(int param_1,int param_2,int param_3,float *param_4)

{
  byte *pbVar1;
  float fVar2;
  byte *pbVar3;
  
  fVar2 = _DAT_006ec11c;
  pbVar3 = (byte *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  pbVar1 = pbVar3 + *(int *)(param_1 + 0x1050) * 2;
  for (; pbVar3 < pbVar1; pbVar3 = pbVar3 + 2) {
    *param_4 = (float)(*pbVar3 >> 5) * fVar2;
    param_4[1] = (float)(*pbVar3 >> 2 & 7) * fVar2;
    param_4[2] = (float)(*pbVar3 & 3) * _DAT_006e9338;
    param_4[3] = (float)pbVar3[1] * _DAT_006ed3a4;
    param_4 = param_4 + 4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00689244(param_4 + *(int *)(param_1 + 0x1050) * -4);
  }
  return;
}

