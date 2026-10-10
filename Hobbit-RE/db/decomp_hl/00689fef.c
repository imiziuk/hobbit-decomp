
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689fef(int param_1,uint param_2,uint param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *extraout_EDX;
  undefined2 *puVar7;
  
  uVar6 = param_3 & 3;
  iVar4 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar5 = 0;
  puVar7 = extraout_EDX;
  if (*(int *)(param_1 + 0x1050) != 0) {
    do {
      fVar2 = *(float *)(iVar4 + (uVar6 + (param_2 & 3) * 8) * 4 + (uVar5 & 3) * 4);
      fVar3 = *param_4;
      pfVar1 = param_4 + 1;
      param_4 = param_4 + 4;
      param_3._0_1_ = (undefined1)(int)ROUND(*pfVar1 * _DAT_006ee9c4 + fVar2);
      *puVar7 = CONCAT11((undefined1)param_3,(char)(int)ROUND(fVar3 * _DAT_006ee9c4 + fVar2));
      puVar7 = puVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

