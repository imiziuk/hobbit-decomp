
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689375(int param_1,uint param_2,uint param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint *extraout_EDX;
  uint *puVar8;
  uint uVar9;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar9 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar7 = (float *)(param_4 + 8);
    puVar8 = extraout_EDX;
    do {
      fVar4 = *(float *)(iVar6 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 + (uVar9 & 3) * 4);
      pfVar1 = pfVar7 + -2;
      pfVar2 = pfVar7 + -1;
      fVar5 = *pfVar7;
      pfVar3 = pfVar7 + 1;
      pfVar7 = pfVar7 + 4;
      *puVar8 = (((int)ROUND(*pfVar3 * _DAT_006e95dc + fVar4) << 8 |
                 (int)ROUND(*pfVar1 * _DAT_006e95dc + fVar4)) << 8 |
                (int)ROUND(*pfVar2 * _DAT_006e95dc + fVar4)) << 8 |
                (int)ROUND(fVar5 * _DAT_006e95dc + fVar4);
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

