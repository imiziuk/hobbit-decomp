
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f8dc0(int param_1)

{
  float fVar1;
  float local_8 [2];
  
  if (*(int *)(param_1 + 0x554) != 0) {
    *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x560);
    *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x564);
    *(float *)(param_1 + 0x558) = *(float *)(param_1 + 0x558) * _DAT_006e936c;
    local_8[1] = 48.0;
    *(float *)(param_1 + 0x55c) = *(float *)(param_1 + 0x55c) * _DAT_006e936c;
    fVar1 = *(float *)(param_1 + 0x564) - _DAT_006ec0ac;
    *(float *)(param_1 + 0x5a4) = *(float *)(param_1 + 0x560) - _DAT_006ec0e4;
    *(float *)(param_1 + 0x5a8) = fVar1;
    *(undefined4 *)(param_1 + 0x5bc) = 0x42700000;
    *(float *)(param_1 + 0x5c0) = *(float *)(param_1 + 0x564) - _DAT_006ec0ac;
    local_8[0] = ((*(float *)(param_1 + 0x560) - _DAT_006efaa0) + _DAT_006efaa8) - _DAT_006ec08c;
    FUN_004fa430(local_8);
    local_8[0] = (*(float *)(param_1 + 0x560) - _DAT_006efaa0) + _DAT_006efaa4;
    local_8[1] = 112.0;
    FUN_004fa430(local_8);
  }
  return;
}

