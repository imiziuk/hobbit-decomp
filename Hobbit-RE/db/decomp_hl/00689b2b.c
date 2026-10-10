
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689b2b(int param_1,uint param_2,uint param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  ushort *extraout_EDX;
  ushort *puVar7;
  uint uVar8;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar8 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar6 = (float *)(param_4 + 8);
    puVar7 = extraout_EDX;
    do {
      fVar3 = *(float *)(iVar5 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 + (uVar8 & 3) * 4);
      pfVar1 = pfVar6 + -2;
      pfVar2 = pfVar6 + -1;
      fVar4 = *pfVar6;
      pfVar6 = pfVar6 + 4;
      *puVar7 = (ushort)(((int)ROUND(*pfVar1 * _DAT_006ec0a4 + fVar3) << 4 |
                         (int)ROUND(*pfVar2 * _DAT_006ec0a4 + fVar3)) << 4) |
                (ushort)(int)ROUND(fVar4 * _DAT_006ec0a4 + fVar3);
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

