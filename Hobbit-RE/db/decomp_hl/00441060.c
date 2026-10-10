
void __fastcall FUN_00441060(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined1 local_34 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  if (DAT_006e92e8 <= (float)param_1[0x247]) {
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0xfd3);
    return;
  }
  iVar2 = param_1[0x114];
  fVar1 = (float)param_1[0x1d6] - *(float *)(iVar2 + 0x68) * (float)param_1[0x248];
  param_1[0x1d6] = (int)fVar1;
  if (fVar1 < *(float *)(iVar2 + 0x1bc) != (fVar1 == *(float *)(iVar2 + 0x1bc))) {
    param_1[0x1d6] = *(int *)(iVar2 + 0x1bc);
  }
  local_30 = (float)param_1[0x119];
  local_2c = (float)param_1[0x11a];
  local_28 = (float)param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_c,local_34);
  fVar1 = (float)param_1[0x248];
  local_20 = fVar1 * (float)param_1[0x1d6];
  local_1c = fVar1 * (float)param_1[0x1d7];
  local_18 = fVar1 * (float)param_1[0x1d5] + local_30;
  local_14 = local_20 + local_2c;
  local_10 = local_1c + local_28;
  (**(code **)(*param_1 + 0x14))(&local_18,0);
  return;
}

