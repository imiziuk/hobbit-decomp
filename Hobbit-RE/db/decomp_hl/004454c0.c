
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004454c0(int *param_1)

{
  float fVar1;
  undefined1 local_40 [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = (float)param_1[0x119];
  local_2c = (float)param_1[0x11a];
  local_28 = (float)param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_3c,local_40);
  local_3c = local_3c * (float)param_1[0x1e6];
  local_38 = local_38 * (float)param_1[0x1e7];
  local_24 = local_30;
  local_20 = local_2c;
  local_34 = local_34 * (float)param_1[0x1e6];
  local_1c = local_28;
  fVar1 = (float)param_1[0x248];
  local_14 = fVar1 * (float)param_1[0x1ee];
  local_10 = fVar1 * (float)param_1[0x1ef];
  local_c = fVar1 * (float)param_1[0x1ed] + local_3c;
  local_8 = local_14 + local_38;
  local_4 = local_10 + local_34;
  FUN_00469060(&local_24,&local_c,_DAT_00724340,0xbf800000,0,1,1);
  (**(code **)(*param_1 + 0x14))(&local_24,0);
  fVar1 = DAT_006e92e8 / (float)param_1[0x248];
  param_1[0x1d5] = (int)((local_2c - local_38) * fVar1);
  param_1[0x1d7] = (int)((local_24 - local_30) * fVar1);
  param_1[0x1d6] = (int)((local_28 - local_34) * fVar1);
  return;
}

