
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044d7f0(int param_1)

{
  int iVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  if (*(int *)(param_1 + 0x5948) != 0 || *(int *)(param_1 + 0x594c) != 0) {
    iVar1 = FUN_004021c0(*(int *)(param_1 + 0x5948),*(int *)(param_1 + 0x594c));
    if (iVar1 != 0) {
      local_24 = (*(float *)(iVar1 + 0x44) + *(float *)(iVar1 + 0x50)) * _DAT_006e936c;
      local_20 = (*(float *)(iVar1 + 0x54) + *(float *)(iVar1 + 0x48)) * _DAT_006e936c;
      local_1c = (*(float *)(iVar1 + 0x58) + *(float *)(iVar1 + 0x4c)) * _DAT_006e936c;
      local_4 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x4c);
      local_18 = (*(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x50)) * _DAT_006e936c;
      local_14 = (*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x48)) * _DAT_006e936c;
      local_10 = local_4 * _DAT_006e936c;
      local_18 = (float)FUN_00431660(&local_18,&local_24);
      if (local_18 == 0.0) {
        local_14 = local_18;
        local_10 = local_18;
        FUN_0044ce60(param_1 + 0x5948,&local_18);
      }
    }
  }
  return;
}

