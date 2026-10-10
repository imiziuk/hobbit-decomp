
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00688f41(int param_1,int param_2,int param_3,float *param_4)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  uint *puVar4;
  
  fVar3 = _DAT_006efe40;
  puVar4 = (uint *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  puVar1 = puVar4 + *(int *)(param_1 + 0x1050);
  for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    uVar2 = *puVar4;
    *param_4 = (float)(int)((short)((short)*puVar4 << 6) >> 6) * _DAT_006f9ee8;
    param_4[1] = (float)(int)((short)((short)(uVar2 >> 10) << 5) >> 5) * fVar3;
    param_4[2] = (float)(int)(short)((int)uVar2 >> 0x15) * fVar3;
    param_4[3] = 1.0;
    param_4 = param_4 + 4;
  }
  return;
}

