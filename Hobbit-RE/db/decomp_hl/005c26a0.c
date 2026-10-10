
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c26a0(int *param_1,float param_2)

{
  short sVar1;
  int iVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  float *pfVar6;
  
  FUN_00649600(s_water_splash_mgr__OnAdvanceLogic_00745d74);
  sVar4 = (short)param_1[3];
  while (sVar4 != -1) {
    iVar2 = *param_1;
    iVar5 = sVar4 * 0x38;
    fVar3 = *(float *)(iVar5 + 0x18 + iVar2) - param_2;
    *(float *)(iVar5 + 0x18 + iVar2) = fVar3;
    sVar1 = *(short *)(iVar5 + 0x28 + iVar2);
    pfVar6 = (float *)(iVar5 + iVar2);
    if (fVar3 < DAT_006e92e4 == (fVar3 == DAT_006e92e4)) {
      *pfVar6 = pfVar6[3] * param_2 + *pfVar6;
      pfVar6[1] = pfVar6[4] * param_2 + pfVar6[1];
      pfVar6[2] = pfVar6[5] * param_2 + pfVar6[2];
      pfVar6[3] = pfVar6[3] * _DAT_006e99f4;
      pfVar6[4] = pfVar6[4] * _DAT_006e99f4;
      pfVar6[5] = pfVar6[5] * _DAT_006e99f4;
      sVar4 = sVar1;
    }
    else {
      FUN_005c2580(sVar4);
      sVar4 = sVar1;
    }
  }
  FUN_00649720();
  return;
}

