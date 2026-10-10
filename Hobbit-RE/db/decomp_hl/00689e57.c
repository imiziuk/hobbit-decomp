
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689e57(int param_1,uint param_2,uint param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  ushort *extraout_EDX;
  ushort *puVar8;
  float *pfVar9;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar7 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar9 = (float *)(param_4 + 4);
    puVar8 = extraout_EDX;
    do {
      fVar4 = *(float *)(iVar6 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 + (uVar7 & 3) * 4);
      pfVar1 = pfVar9 + -1;
      pfVar2 = pfVar9 + 1;
      fVar5 = *pfVar9;
      pfVar3 = pfVar9 + 2;
      pfVar9 = pfVar9 + 4;
      *puVar8 = (ushort)(byte)(int)ROUND(*pfVar3 * _DAT_006e95dc + fVar4) << 8 |
                (ushort)(int)ROUND((fVar5 * _DAT_006f9ec8 +
                                   *pfVar2 * _DAT_006f9ecc + *pfVar1 * _DAT_006f9ed0) *
                                   _DAT_006e95dc + fVar4);
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

