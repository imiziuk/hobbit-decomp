
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068a17e(int param_1,uint param_2,uint param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint *extraout_EDX;
  uint *puVar7;
  float *pfVar8;
  
  uVar6 = param_2 & 3;
  iVar5 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  param_2 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar8 = (float *)(param_4 + 0xc);
    puVar7 = extraout_EDX;
    do {
      fVar3 = *(float *)(iVar5 + ((param_3 & 3) + uVar6 * 8) * 4 + (param_2 & 3) * 4);
      pfVar1 = pfVar8 + -3;
      pfVar2 = pfVar8 + -2;
      fVar4 = *pfVar8;
      pfVar8 = pfVar8 + 4;
      param_4._0_1_ = (undefined1)(int)ROUND(*pfVar2 * _DAT_006ee9c4 + fVar3);
      *puVar7 = (uint)CONCAT11((char)(int)ROUND(fVar4 * _DAT_006e95dc + fVar3),(undefined1)param_4)
                << 8 | (int)ROUND(*pfVar1 * _DAT_006ee9c4 + fVar3) & 0xffU;
      puVar7 = puVar7 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

