
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042fe80(int param_1)

{
  int iVar1;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = *(float *)(param_1 + 0x5eb8);
  local_8 = *(float *)(param_1 + 0x920) * _DAT_006ebff0;
  local_c = *(float *)(param_1 + 0x5eb4);
  local_14 = 0.0;
  local_10 = 0.0;
  iVar1 = FUN_00430450();
  if (iVar1 != 0) {
    iVar1 = FUN_00430b50(*(undefined4 *)(param_1 + 0x5ec4),*(undefined4 *)(param_1 + 0x5ec8),
                         *(undefined4 *)(param_1 + 0x5ecc));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x5ee0) = 0;
      *(undefined4 *)(param_1 + 0x5ed8) = 0;
      *(undefined4 *)(param_1 + 0x5edc) = 0;
      FUN_004357e0(param_1 + 0x5ec4);
      FUN_00430b90();
      goto LAB_0042ff9d;
    }
  }
  if (*(int *)(param_1 + 0x5ed8) == 0) {
    if (*(int *)(param_1 + 0x5ee4) != 8) {
      FUN_004312b0(&local_14);
      goto LAB_0042ff9d;
    }
    iVar1 = FUN_00647b10(0,999);
    if (0 < iVar1) {
      if (0x3e6 < iVar1) {
        FUN_00431260(&local_14);
      }
      goto LAB_0042ff9d;
    }
    *(undefined4 *)(param_1 + 0x5ed8) = 1;
  }
  FUN_00430ff0(&local_10,&local_14);
LAB_0042ff9d:
  FUN_004300e0();
  if ((local_14 < _DAT_006ebfe4 != (NAN(local_14) || NAN(_DAT_006ebfe4))) &&
     (DAT_006e92e4 < local_14)) {
    local_14 = 0.0;
  }
  if ((local_10 < _DAT_006ebfe4 != (NAN(local_10) || NAN(_DAT_006ebfe4))) &&
     (DAT_006e92e4 < local_10)) {
    local_10 = 0.0;
  }
  local_c = (local_14 - local_c) * local_8 + local_c;
  *(float *)(param_1 + 0x5eb4) = local_c;
  local_4 = (local_10 - local_4) * local_8 + local_4;
  *(float *)(param_1 + 0x5eb8) = local_4;
  if (DAT_006e92e8 < local_c != (NAN(DAT_006e92e8) || NAN(local_c))) {
    local_c = DAT_006e92e8;
  }
  *(float *)(param_1 + 0x5eb4) = local_c;
  if (local_c < _DAT_006e9370 != (NAN(local_c) || NAN(_DAT_006e9370))) {
    local_c = _DAT_006e9370;
  }
  *(float *)(param_1 + 0x5eb4) = local_c;
  if (DAT_006e92e8 < local_4 != (NAN(DAT_006e92e8) || NAN(local_4))) {
    local_4 = DAT_006e92e8;
  }
  *(float *)(param_1 + 0x5eb8) = local_4;
  if (local_4 < _DAT_006e9370 == (NAN(local_4) || NAN(_DAT_006e9370))) {
    *(float *)(param_1 + 0x5eb8) = local_4;
    return;
  }
  *(undefined4 *)(param_1 + 0x5eb8) = 0xbf800000;
  return;
}

