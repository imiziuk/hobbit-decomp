
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006899b0(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *extraout_EDX;
  undefined1 *puVar3;
  float *pfVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar4 = (float *)(param_4 + 0xc);
    puVar3 = extraout_EDX;
    do {
      *puVar3 = (char)(int)ROUND(*pfVar4 * _DAT_006e95dc +
                                 *(float *)(iVar1 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 +
                                           (uVar2 & 3) * 4));
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      pfVar4 = pfVar4 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

