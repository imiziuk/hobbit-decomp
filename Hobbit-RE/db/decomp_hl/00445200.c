
void __fastcall FUN_00445200(int *param_1)

{
  float fVar1;
  float unaff_ESI;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  int local_4;
  
  local_24 = (float)param_1[0x119];
  local_20 = param_1[0x11a];
  local_1c = param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_18,&local_28);
  local_18 = local_18 * (float)param_1[0x1e6];
  local_14 = local_14 * (float)param_1[0x1e7];
  local_c = local_24;
  local_10 = local_10 * (float)param_1[0x1e6];
  local_8 = local_20;
  local_4 = local_1c;
  FUN_00469060(&local_c,&local_18,0,0xbf800000,0,1,1);
  (**(code **)(*param_1 + 0x14))(&local_c,0);
  fVar1 = DAT_006e92e8 / (float)param_1[0x248];
  param_1[0x1d5] = (int)((local_14 - unaff_ESI) * fVar1);
  param_1[0x1d7] = (int)((local_c - local_24) * fVar1);
  param_1[0x1d6] = (int)((local_10 - local_28) * fVar1);
  return;
}

