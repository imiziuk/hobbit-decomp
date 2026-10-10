
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004698c0(int param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 == 0) {
    return iVar1;
  }
  *(int *)(param_1 + 0x124) = iVar1 + -1;
  local_20 = *(float *)(param_1 + 0x44) - _DAT_006e9364;
  local_1c = *(float *)(param_1 + 0x48) - _DAT_006e9364;
  local_28 = *(undefined4 *)(param_1 + 8);
  local_24 = *(undefined4 *)(param_1 + 0xc);
  local_18 = *(float *)(param_1 + 0x4c) - _DAT_006e9364;
  local_14 = *(float *)(param_1 + 0x50) + _DAT_006e9364;
  local_10 = *(float *)(param_1 + 0x54) + _DAT_006e9364;
  local_c = *(float *)(param_1 + 0x58) + _DAT_006e9364;
  FUN_0058c830(&local_20,&local_28);
  return 1;
}

