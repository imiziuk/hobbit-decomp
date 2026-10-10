
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00402340(undefined4 *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cea8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = param_1[3] | 0x7fffffff;
  FUN_00406bd0(0);
  local_4 = 0;
  FUN_0064cbe0();
  pfVar1 = (float *)(param_1 + 0x91);
  local_38 = 5;
  do {
    FUN_00406a80();
    local_38 = local_38 + -1;
  } while (local_38 != 0);
  FUN_0064cbe0();
  FUN_0064cbe0();
  param_1[0x7f] = 1;
  param_1[0x8c] = 1;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 1;
  param_1[0x90] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 1;
  param_1[0x6d] = 1;
  param_1[0x6e] = 1;
  param_1[0x6f] = 1;
  param_1[0x70] = 1;
  param_1[0x71] = 1;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 1;
  param_1[0x75] = 1;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 1;
  param_1[0x79] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((DAT_0075b69c & 1) == 0) {
    DAT_0075b69c = DAT_0075b69c | 1;
    _DAT_0075b690 = 250.0;
    _DAT_0075b694 = 0.0;
    _DAT_0075b698 = 250.0;
    FUN_006bfe55(&DAT_00402ab0);
  }
  if ((DAT_0075b69c & 2) == 0) {
    DAT_0075b69c = DAT_0075b69c | 2;
    _DAT_0075b678 = 0.0;
    _DAT_0075b67c = 100.0;
    _DAT_0075b680 = 0.0;
    FUN_006bfe55(&DAT_00402aa0);
  }
  local_30 = -2608.7;
  local_2c = -853.262;
  local_28 = -5556.74;
  *pfVar1 = 3.4028235e+38;
  param_1[0x92] = 0x7f7fffff;
  param_1[0x93] = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  fVar2 = local_30 - _DAT_0075b690;
  local_20 = local_2c - _DAT_0075b694;
  local_1c = local_28 - _DAT_0075b698;
  if (fVar2 < *pfVar1 != (NAN(fVar2) || NAN(*pfVar1))) {
    *pfVar1 = fVar2;
  }
  if (local_20 < (float)param_1[0x92] != (NAN(local_20) || NAN((float)param_1[0x92]))) {
    param_1[0x92] = local_20;
  }
  if (local_1c < (float)param_1[0x93] != (NAN(local_1c) || NAN((float)param_1[0x93]))) {
    param_1[0x93] = local_1c;
  }
  if ((float)param_1[0x94] < fVar2) {
    param_1[0x94] = fVar2;
  }
  if ((float)param_1[0x95] < local_20) {
    param_1[0x95] = local_20;
  }
  if ((float)param_1[0x96] < local_1c) {
    param_1[0x96] = local_1c;
  }
  FUN_00401f00(local_30 + _DAT_0075b690,local_2c + _DAT_0075b694,local_28 + _DAT_0075b698);
  FUN_00401f00(local_18 + _DAT_0075b678,local_14 + _DAT_0075b67c,local_10 + _DAT_0075b680);
  if (local_24 < *pfVar1 != (NAN(local_24) || NAN(*pfVar1))) {
    *pfVar1 = local_24;
  }
  if (local_20 < (float)param_1[0x92] != (NAN(local_20) || NAN((float)param_1[0x92]))) {
    param_1[0x92] = local_20;
  }
  if (local_1c < (float)param_1[0x93] != (NAN(local_1c) || NAN((float)param_1[0x93]))) {
    param_1[0x93] = local_1c;
  }
  if ((float)param_1[0x94] < local_24) {
    param_1[0x94] = local_24;
  }
  if ((float)param_1[0x95] < local_20) {
    param_1[0x95] = local_20;
  }
  if ((float)param_1[0x96] < local_1c) {
    param_1[0x96] = local_1c;
  }
  pfVar1 = (float *)(param_1 + 0x97);
  local_30 = -4946.68;
  local_2c = -1054.33;
  local_28 = -5015.49;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_00401f00(local_30 - _DAT_0075b690,local_2c - _DAT_0075b694,local_28 - _DAT_0075b698);
  if (local_24 < *pfVar1 != (NAN(local_24) || NAN(*pfVar1))) {
    *pfVar1 = local_24;
  }
  if (local_20 < (float)param_1[0x98] != (NAN(local_20) || NAN((float)param_1[0x98]))) {
    param_1[0x98] = local_20;
  }
  if (local_1c < (float)param_1[0x99] != (NAN(local_1c) || NAN((float)param_1[0x99]))) {
    param_1[0x99] = local_1c;
  }
  if ((float)param_1[0x9a] < local_24) {
    param_1[0x9a] = local_24;
  }
  if ((float)param_1[0x9b] < local_20) {
    param_1[0x9b] = local_20;
  }
  if ((float)param_1[0x9c] < local_1c) {
    param_1[0x9c] = local_1c;
  }
  FUN_00401f00(local_30 + _DAT_0075b690,local_2c + _DAT_0075b694,local_28 + _DAT_0075b698);
  FUN_00401f00(local_18 + _DAT_0075b678,local_14 + _DAT_0075b67c,local_10 + _DAT_0075b680);
  if (local_24 < *pfVar1 != (NAN(local_24) || NAN(*pfVar1))) {
    *pfVar1 = local_24;
  }
  if (local_20 < (float)param_1[0x98] != (NAN(local_20) || NAN((float)param_1[0x98]))) {
    param_1[0x98] = local_20;
  }
  if (local_1c < (float)param_1[0x99] != (NAN(local_1c) || NAN((float)param_1[0x99]))) {
    param_1[0x99] = local_1c;
  }
  if ((float)param_1[0x9a] < local_24) {
    param_1[0x9a] = local_24;
  }
  if ((float)param_1[0x9b] < local_20) {
    param_1[0x9b] = local_20;
  }
  if ((float)param_1[0x9c] < local_1c) {
    param_1[0x9c] = local_1c;
  }
  local_30 = -2009.73;
  local_2c = -1453.5;
  local_28 = -4097.52;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_00401f00(local_30 - _DAT_0075b690,local_2c - _DAT_0075b694,local_28 - _DAT_0075b698);
  FUN_00406af0(&local_18);
  FUN_00401f00(local_30 + _DAT_0075b690,local_2c + _DAT_0075b694,local_28 + _DAT_0075b698);
  uVar3 = FUN_00402130(&local_24,&local_18,&DAT_0075b678);
  FUN_00406af0(uVar3);
  local_30 = -3003.32;
  local_2c = -1712.49;
  local_28 = -1524.41;
  FUN_00406aa0();
  uVar3 = FUN_00405080(&local_18,&local_30,&DAT_0075b690);
  FUN_00406af0(uVar3);
  uVar3 = FUN_00402130(&local_18,&local_30,&DAT_0075b690,&DAT_0075b678);
  uVar3 = FUN_00402130(&local_24,uVar3);
  FUN_00406af0(uVar3);
  FUN_00404870(0xc4224000,0xc4d60000,0xc473c000);
  FUN_00406aa0();
  uVar3 = FUN_00405080(&local_18,&local_30,&DAT_0075b690);
  FUN_00406af0(uVar3);
  uVar3 = FUN_00402130(&local_18,&local_30,&DAT_0075b690,&DAT_0075b678);
  uVar3 = FUN_00402130(&local_24,uVar3);
  FUN_00406af0(uVar3);
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0x47] = 0;
  ExceptionList = local_c;
  return param_1;
}

