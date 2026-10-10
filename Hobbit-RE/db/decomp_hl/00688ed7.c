
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00688ed7(int param_1,int param_2,int param_3,float *param_4)

{
  short *psVar1;
  float fVar2;
  short *psVar3;
  
  fVar2 = _DAT_006f9ee4;
  psVar3 = (short *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                    *(int *)(param_1 + 0x18));
  psVar1 = psVar3 + *(int *)(param_1 + 0x1050) * 2;
  for (; psVar3 < psVar1; psVar3 = psVar3 + 2) {
    *param_4 = (float)(int)*psVar3 * fVar2;
    param_4[1] = (float)(int)psVar3[1] * fVar2;
    param_4[2] = 0.0;
    param_4[3] = 1.0;
    param_4 = param_4 + 4;
  }
  return;
}

