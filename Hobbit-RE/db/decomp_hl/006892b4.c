
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006892b4(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined1 *extraout_EDX;
  undefined1 *puVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar3 = (float *)(param_4 + 4);
    puVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(iVar2 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 + (uVar5 & 3) * 4);
      *puVar4 = (char)(int)ROUND(pfVar3[1] * _DAT_006e95dc + fVar1);
      puVar4[1] = (char)(int)ROUND(*pfVar3 * _DAT_006e95dc + fVar1);
      puVar4[2] = (char)(int)ROUND(pfVar3[-1] * _DAT_006e95dc + fVar1);
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 + 1;
      pfVar3 = pfVar3 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

