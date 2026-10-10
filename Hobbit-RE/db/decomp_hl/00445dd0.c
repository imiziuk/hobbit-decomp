
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00445dd0(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 local_64 [4];
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  FUN_00442550(0);
  if ((float)param_1[0x1d6] < _DAT_006e9348) {
    if (((float)param_1[0x1d6] < _DAT_006e9348 == (NAN((float)param_1[0x1d6]) || NAN(_DAT_006e9348))
        ) || ((float)param_1[0x1d6] <= _DAT_006ec0d8)) {
      if ((float)param_1[0x1d6] < (float)_DAT_006ec0d0 ==
          (NAN((float)param_1[0x1d6]) || NAN((float)_DAT_006ec0d0))) goto LAB_00445e66;
      fVar1 = *(float *)(param_1[0x114] + 0x68) * _DAT_006e95d8;
    }
    else {
      fVar1 = *(float *)(param_1[0x114] + 0x68) * _DAT_006e99ac;
    }
  }
  else {
    fVar1 = *(float *)(param_1[0x114] + 0x68);
  }
  param_1[0x1d6] = (int)((float)param_1[0x1d6] - fVar1 * (float)param_1[0x248]);
LAB_00445e66:
  fVar1 = *(float *)(param_1[0x114] + 0x1bc);
  if ((float)param_1[0x1d6] < fVar1 != ((float)param_1[0x1d6] == fVar1)) {
    param_1[0x1d6] = *(int *)(param_1[0x114] + 0x1bc);
  }
  local_54 = param_1[0x119];
  local_50 = param_1[0x11a];
  local_4c = param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_c,local_64);
  FUN_00447610();
  fVar1 = (float)param_1[0x248];
  local_20 = fVar1 * (float)param_1[0x1ee];
  local_1c = fVar1 * (float)param_1[0x1ef];
  fVar2 = (float)param_1[0x248];
  local_38 = fVar2 * (float)param_1[0x1e9];
  local_34 = fVar2 * (float)param_1[0x1ea];
  local_58 = (float)param_1[0x248];
  local_60 = local_58 * (float)param_1[0x1d5];
  local_5c = local_58 * (float)param_1[0x1d6];
  local_58 = local_58 * (float)param_1[0x1d7];
  local_2c = local_5c + local_38;
  local_28 = local_58 + local_34;
  local_18 = local_60 + fVar2 * (float)param_1[0x1e8] + fVar1 * (float)param_1[0x1ed];
  local_14 = local_2c + local_20;
  local_10 = local_28 + local_1c;
  local_48 = local_54;
  local_44 = local_50;
  local_40 = local_4c;
  FUN_00469060(&local_48,&local_18,0,0xbf800000,0,1,0);
  (**(code **)(*param_1 + 0x14))(&local_48,0);
  return;
}

