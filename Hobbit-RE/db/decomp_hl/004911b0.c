
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004911b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_0041bcd0();
  iVar4 = FUN_004021c0(uVar5);
  fVar1 = *(float *)(iVar4 + 0x44) + _DAT_006e99a0;
  fVar3 = *(float *)(iVar4 + 0x4c) + _DAT_006e99a0;
  fVar2 = *(float *)(iVar4 + 0x48) - _DAT_006e99a0;
  if ((((*(float *)(param_1 + 0x44) <= *(float *)(iVar4 + 0x50) - _DAT_006e99a0) &&
       (*(float *)(param_1 + 0x50) < fVar1 == (NAN(*(float *)(param_1 + 0x50)) || NAN(fVar1)))) &&
      (*(float *)(param_1 + 0x4c) <= *(float *)(iVar4 + 0x58) - _DAT_006e99a0)) &&
     (((*(float *)(param_1 + 0x58) < fVar3 == (NAN(*(float *)(param_1 + 0x58)) || NAN(fVar3)) &&
       (*(float *)(param_1 + 0x48) <= *(float *)(iVar4 + 0x48))) &&
      (*(float *)(param_1 + 0x54) < fVar2 == (NAN(*(float *)(param_1 + 0x54)) || NAN(fVar2)))))) {
    *(undefined4 *)(param_1 + 0x1cc) = 1;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  return 0;
}

