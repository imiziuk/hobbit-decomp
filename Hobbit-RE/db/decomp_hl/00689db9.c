
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689db9(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  undefined1 *extraout_EDX;
  undefined1 *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar4 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar2 = (float *)(param_4 + 4);
    puVar3 = extraout_EDX;
    do {
      *puVar3 = (char)(int)ROUND(*(float *)(iVar1 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 +
                                           (uVar4 & 3) * 4) +
                                 (*pfVar2 * _DAT_006f9ec8 +
                                 pfVar2[1] * _DAT_006f9ecc + pfVar2[-1] * _DAT_006f9ed0) *
                                 _DAT_006e95dc);
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
      pfVar2 = pfVar2 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

