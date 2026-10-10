
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689f27(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte *extraout_EDX;
  byte *pbVar4;
  float *pfVar5;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar5 = (float *)(param_4 + 4);
    pbVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(iVar2 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 + (uVar3 & 3) * 4);
      *pbVar4 = (char)(int)ROUND(pfVar5[2] * _DAT_006ec0a4 + fVar1) << 4 |
                (byte)(int)ROUND((*pfVar5 * _DAT_006f9ec8 +
                                 pfVar5[1] * _DAT_006f9ecc + pfVar5[-1] * _DAT_006f9ed0) *
                                 _DAT_006ec0a4 + fVar1);
      pbVar4 = pbVar4 + 1;
      uVar3 = uVar3 + 1;
      pfVar5 = pfVar5 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

