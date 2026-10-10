
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00442640(int param_1)

{
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_28,&local_2c);
  local_c = local_2c * DAT_006e92e4 + local_28 * _DAT_006e9988;
  local_4 = local_2c * _DAT_006e9988 - local_28 * DAT_006e92e4;
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_20 = *(float *)(param_1 + 0x18) + _DAT_006ec0a8;
  local_1c = *(float *)(param_1 + 0x1c);
  local_18 = *(float *)(param_1 + 0x14);
  local_14 = *(float *)(param_1 + 0x18) + _DAT_006ec0a4;
  local_10 = *(float *)(param_1 + 0x1c);
  FUN_00579460(0,0,&local_18,&local_24,0x41700000,1);
  FUN_00577e70();
  if (0 < DAT_00773970) {
    return false;
  }
  local_14 = *(float *)(param_1 + 0x18) + _DAT_006ec0a8;
  local_1c = *(float *)(param_1 + 0x1c);
  local_18 = *(float *)(param_1 + 0x14) + local_c;
  local_10 = local_4 + local_1c;
  local_c = *(float *)(param_1 + 0x14);
  local_8 = *(float *)(param_1 + 0x18) + _DAT_006ec0a8;
  local_4 = *(float *)(param_1 + 0x1c);
  FUN_00579460(0,0,&local_c,&local_18,0x41700000,1);
  FUN_00577e70();
  return DAT_00773970 < 1;
}

