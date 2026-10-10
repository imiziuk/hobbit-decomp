
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068a376(int param_1,uint param_2,uint param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint *extraout_EDX;
  uint *puVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar4 = 0;
  puVar3 = extraout_EDX;
  if (*(int *)(param_1 + 0x1050) != 0) {
    do {
      fVar1 = *(float *)(iVar2 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 + (uVar4 & 3) * 4);
      *puVar3 = (int)ROUND(param_4[1] * _DAT_006f9ef4 + fVar1) << 0x10 |
                (int)ROUND(*param_4 * _DAT_006f9ef4 + fVar1) & 0xffffU;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

