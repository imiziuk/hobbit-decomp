
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00431660(float *param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_18 = 3.4028235e+38;
  local_14 = 3.4028235e+38;
  local_10 = 3.4028235e+38;
  local_c = -3.4028235e+38;
  local_8 = -3.4028235e+38;
  if (local_24 < _DAT_006ec00c != (NAN(local_24) || NAN(_DAT_006ec00c))) {
    local_18 = local_24;
  }
  if (local_20 < _DAT_006ec00c != (NAN(local_20) || NAN(_DAT_006ec00c))) {
    local_14 = local_20;
  }
  if (local_1c < _DAT_006ec00c != (NAN(local_1c) || NAN(_DAT_006ec00c))) {
    local_10 = local_1c;
  }
  if (_DAT_006ec010 < local_24) {
    local_c = local_24;
  }
  if (_DAT_006ec010 < local_20) {
    local_8 = local_20;
  }
  local_4 = _DAT_006ec010;
  if (_DAT_006ec010 < local_1c) {
    local_4 = local_1c;
  }
  if (local_30 < local_18 != (NAN(local_30) || NAN(local_18))) {
    local_18 = local_30;
  }
  if (local_2c < local_14 != (NAN(local_2c) || NAN(local_14))) {
    local_14 = local_2c;
  }
  if (local_28 < local_10 != (NAN(local_28) || NAN(local_10))) {
    local_10 = local_28;
  }
  if (local_c < local_30) {
    local_c = local_30;
  }
  if (local_8 < local_2c) {
    local_8 = local_2c;
  }
  if (local_4 < local_28) {
    local_4 = local_28;
  }
  local_18 = local_18 - _DAT_006e9988;
  local_14 = local_14 - _DAT_006e9988;
  uVar4 = 0;
  local_10 = local_10 - _DAT_006e9988;
  local_c = local_c + _DAT_006e9988;
  local_8 = local_8 + _DAT_006e9988;
  local_4 = local_4 + _DAT_006e9988;
  uVar2 = FUN_0054c5c0(0x2e,s_C__projects_meridian_Support_Obj_00720f10,0x60);
  while( true ) {
    iVar3 = *(int *)(&DAT_0076f664 + DAT_0076f864 * 4);
    if (iVar3 == -1) break;
    iVar1 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
    *(int *)(&DAT_0076f664 + DAT_0076f864 * 4) = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 4);
    if (iVar1 == 0) break;
    if ((*(byte *)(iVar1 + 0x154) & 0x40) != 0) {
      iVar3 = FUN_004322c0(iVar1 + 0x44);
      if (iVar3 != 0) {
        iVar3 = FUN_004e6af0(&local_24,&local_30,0x41c80000);
        if (iVar3 != 0) {
          uVar4 = 1;
        }
      }
    }
  }
  FUN_0054c880(uVar2);
  return uVar4;
}

