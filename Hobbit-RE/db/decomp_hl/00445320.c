
void __fastcall FUN_00445320(int *param_1)

{
  float fVar1;
  undefined1 local_28 [4];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = (float)param_1[0x119];
  local_14 = (float)param_1[0x11a];
  local_10 = (float)param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_24,local_28);
  local_24 = local_24 * (float)param_1[0x1e6];
  local_20 = local_20 * (float)param_1[0x1e7];
  local_1c = local_1c * (float)param_1[0x1e6];
  local_c = local_18 + local_24;
  local_8 = local_14 + local_20;
  local_4 = local_10 + local_1c;
  (**(code **)(*param_1 + 0x14))(&local_c,0);
  fVar1 = DAT_006e92e8 / (float)param_1[0x248];
  param_1[0x1d5] = (int)((local_14 - local_20) * fVar1);
  param_1[0x1d7] = (int)((local_c - local_18) * fVar1);
  param_1[0x1d6] = (int)((local_10 - local_1c) * fVar1);
  return;
}

