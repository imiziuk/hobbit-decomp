
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006898df(int param_1,uint param_2,uint param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  byte *extraout_EDX;
  byte *pbVar6;
  float *pfVar7;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  FUN_0068900c();
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    pfVar7 = (float *)(param_4 + 8);
    pbVar6 = extraout_EDX;
    do {
      fVar2 = *(float *)(iVar4 + ((param_3 & 3) + (param_2 & 3) * 8) * 4 + (uVar5 & 3) * 4);
      pfVar1 = pfVar7 + -2;
      fVar3 = *pfVar7;
      param_4._0_1_ = (byte)(int)ROUND(pfVar7[-1] * _DAT_006ebff0 + fVar2);
      pfVar7 = pfVar7 + 4;
      *pbVar6 = ((char)(int)ROUND(*pfVar1 * _DAT_006ebff0 + fVar2) << 3 | (byte)param_4) << 2 |
                (byte)(int)ROUND(fVar3 * _DAT_006e958c + fVar2);
      pbVar6 = pbVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}

