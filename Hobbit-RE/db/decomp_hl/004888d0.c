
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004888d0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2d30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x3f800000;
  param_1[0x4c] = 0x3f800000;
  FUN_005a3f00();
  local_4._0_1_ = 1;
  FUN_006b75e0();
  param_1[0x54] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x55) = 1;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  local_4._0_1_ = 3;
  FUN_006499d0();
  *param_1 = &PTR_FUN_006ed3c0;
  DAT_0075ceb8 = DAT_0075ceb8 + 1;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004aa910(&DAT_0075b6e0);
  FUN_0048a690(&DAT_0075cec0);
  *(ushort *)((int)param_1 + 0x7a) = *(ushort *)((int)param_1 + 0x7a) | 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x137) = 0xff;
  *(undefined1 *)((int)param_1 + 0x136) = 0xff;
  *(undefined1 *)((int)param_1 + 0x135) = 0xff;
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  fVar2 = _DAT_006ed3b0;
  fVar4 = -_DAT_006ed3b0;
  fVar3 = _DAT_006ed3b0;
  if (fVar4 < _DAT_006ed3b0) {
    fVar3 = fVar4;
  }
  fVar1 = _DAT_006ed3b0;
  if (fVar4 < _DAT_006ed3b0 != (NAN(fVar4) || NAN(_DAT_006ed3b0))) {
    fVar1 = fVar4;
  }
  param_1[0xb] = fVar1;
  param_1[0xc] = fVar3;
  param_1[0xd] = fVar3;
  fVar3 = fVar2;
  if (fVar2 < fVar4 != (NAN(fVar2) || NAN(fVar4))) {
    fVar3 = fVar4;
  }
  fVar1 = fVar2;
  if (fVar2 < fVar4 != (NAN(fVar2) || NAN(fVar4))) {
    fVar1 = fVar4;
  }
  if (fVar2 < fVar4) {
    fVar2 = fVar4;
  }
  param_1[0xe] = fVar2;
  param_1[0xf] = fVar1;
  param_1[0x10] = fVar3;
  ExceptionList = local_c;
  return param_1;
}

