
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068a427(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint *extraout_EDX;
  uint *puVar5;
  
  uVar3 = param_2 & 3;
  iVar2 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  param_2 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar4 = (float *)(param_4 + 8);
    puVar5 = extraout_EDX;
    do {
      fVar1 = *(float *)(iVar2 + ((param_3 & 3) + uVar3 * 8) * 4 + (param_2 & 3) * 4);
      *puVar5 = (((int)ROUND(*pfVar4 * _DAT_006f3ee4 + fVar1) & 0xfffffffeU) << 0xb |
                (int)ROUND(pfVar4[-1] * _DAT_006f3ee4 + fVar1) & 0x7ffU) << 10 |
                (int)ROUND(pfVar4[-2] * _DAT_006f9ef8 + fVar1) & 0x3ffU;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
      pfVar4 = pfVar4 + 4;
    } while (param_2 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

