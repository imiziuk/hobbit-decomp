
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004444f0(int *param_1)

{
  int iVar1;
  undefined1 local_4c [4];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_3c = (float)param_1[0x119];
  local_38 = (float)param_1[0x11a];
  local_34 = (float)param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_c,local_4c);
  if (param_1[0x1ba] == 0) {
    if (param_1[0x1bb] == 0) {
      local_44 = 0.0;
    }
    else {
      local_44 = -(*(float *)(param_1[0x114] + 0x34) * (float)param_1[0x248]);
    }
  }
  else {
    local_44 = *(float *)(param_1[0x114] + 0x34) * (float)param_1[0x248];
  }
  local_14 = param_1[0x1eb];
  local_18 = 0;
  local_10 = 0;
  local_24 = 0.0;
  local_20 = 0;
  local_1c = 1.0;
  FUN_00429030(&local_18);
  local_48 = *(float *)(param_1[0x114] + 0x38) * (float)param_1[0x184] * (float)param_1[0x248] *
             local_24;
  local_2c = local_38;
  local_30 = local_3c;
  local_28 = local_34;
  local_40 = *(float *)(param_1[0x114] + 0x38) * (float)param_1[0x184] * (float)param_1[0x248] *
             local_1c;
  if (param_1[0x1bc] != 0) {
    local_48 = local_48 * _DAT_006e99b0;
    local_44 = local_44 * _DAT_006e99b0;
    local_40 = local_40 * _DAT_006e99b0;
  }
  if (param_1[0x1bd] == 0) {
    _DAT_0077285c = _DAT_0077285c & 0xffffffef;
    FUN_00469060(&local_30,&local_48,0,0xbf800000,0,1,1);
  }
  else {
    _DAT_0077285c = _DAT_0077285c | 0x10;
    local_30 = local_3c + local_48;
    local_2c = local_38 + local_44;
    local_28 = local_34 + local_40;
  }
  FUN_00442550(0);
  (**(code **)(*param_1 + 0x14))(&local_30,0);
  param_1[0x1d7] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d5] = 0;
  if (param_1[0x1be] == 0) {
    iVar1 = param_1[0x1eb];
  }
  else {
    iVar1 = param_1[0x185];
  }
  param_1[0x160] = 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x164] = 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x11d] = iVar1;
  return;
}

