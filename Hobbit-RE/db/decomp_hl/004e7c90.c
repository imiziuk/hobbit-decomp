
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004e7c90(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 3.4028235e+38;
  fVar3 = -*(float *)(param_1 + 0xac);
  local_14 = 3.4028235e+38;
  local_10 = 3.4028235e+38;
  fVar1 = -*(float *)(param_1 + 0xb0);
  local_c = -3.4028235e+38;
  local_8 = -3.4028235e+38;
  fVar2 = -*(float *)(param_1 + 0xb4);
  local_4 = -3.4028235e+38;
  if (fVar3 < _DAT_006ec00c != (NAN(fVar3) || NAN(_DAT_006ec00c))) {
    local_18 = fVar3;
  }
  if (fVar1 < _DAT_006ec00c != (NAN(fVar1) || NAN(_DAT_006ec00c))) {
    local_14 = fVar1;
  }
  if (fVar2 < _DAT_006ec00c != (NAN(fVar2) || NAN(_DAT_006ec00c))) {
    local_10 = fVar2;
  }
  if (_DAT_006ec010 < fVar3) {
    local_c = fVar3;
  }
  if (_DAT_006ec010 < fVar1) {
    local_8 = fVar1;
  }
  if (_DAT_006ec010 < fVar2) {
    local_4 = fVar2;
  }
  fVar1 = *(float *)(param_1 + 0xac);
  fVar2 = *(float *)(param_1 + 0xb4);
  fVar3 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0xb0);
  if (fVar1 < local_18 != (NAN(fVar1) || NAN(local_18))) {
    local_18 = fVar1;
  }
  if (fVar3 < local_14 != (NAN(fVar3) || NAN(local_14))) {
    local_14 = fVar3;
  }
  if (fVar2 < local_10 != (NAN(fVar2) || NAN(local_10))) {
    local_10 = fVar2;
  }
  if (local_c < fVar1) {
    local_c = fVar1;
  }
  if (local_8 < fVar3) {
    local_8 = fVar3;
  }
  if (local_4 < fVar2) {
    local_4 = fVar2;
  }
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  FUN_0041b9f0(local_24,&local_30);
  FUN_004357e0(local_24);
  iVar4 = FUN_0064e180(&local_30,1);
  return iVar4 != 0;
}

