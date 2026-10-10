
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068a09f(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  ushort *extraout_EDX;
  ushort *puVar4;
  float *pfVar5;
  
  uVar3 = param_2 & 3;
  iVar2 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  param_2 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar5 = (float *)(param_4 + 0xc);
    puVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(iVar2 + ((param_3 & 3) + uVar3 * 8) * 4 + (param_2 & 3) * 4);
      *puVar4 = (ushort)(((int)ROUND(pfVar5[-2] * _DAT_006ef418 + fVar1) & 0x1fU |
                         (int)ROUND(*pfVar5 * _DAT_006f9eec + fVar1) << 5) << 5) |
                (ushort)(int)ROUND(pfVar5[-3] * _DAT_006ef418 + fVar1) & 0x1f;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
      pfVar5 = pfVar5 + 4;
    } while (param_2 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

