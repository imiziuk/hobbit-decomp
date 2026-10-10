
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412ae0(float *param_1)

{
  int iVar1;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  iVar1 = FUN_004131e0();
  if (iVar1 != 0) {
    local_18 = (*(float *)(iVar1 + 0x50) + *(float *)(iVar1 + 0x44)) * _DAT_006e936c;
    local_14 = (*(float *)(iVar1 + 0x48) + *(float *)(iVar1 + 0x54)) * _DAT_006e936c;
    local_10 = (*(float *)(iVar1 + 0x4c) + *(float *)(iVar1 + 0x58)) * _DAT_006e936c;
  }
  FUN_00429100();
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}

