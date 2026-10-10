
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00445630(int *param_1)

{
  float fVar1;
  float10 fVar2;
  undefined4 uVar3;
  float unaff_ESI;
  float10 fVar4;
  float *pfVar5;
  float local_4c;
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
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_48 = (float)param_1[0x119];
  local_44 = (float)param_1[0x11a];
  local_40 = (float)param_1[0x11b];
  fVar4 = (float10)FUN_0064ca10(param_1[0x11ae],param_1[0x11b0]);
  fVar2 = (float10)_DAT_006e9368;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x11d] = (int)(float)(fVar4 + fVar2);
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_18,&local_4c);
  pfVar5 = &local_24;
  param_1[0x38] = (int)(*(float *)(param_1[0x114] + 0x70) * _DAT_006e99ac);
  fVar1 = (float)param_1[0x248];
  local_8 = fVar1 * (float)param_1[0x1e9];
  local_4 = fVar1 * (float)param_1[0x1ea];
  local_2c = local_14 + local_44;
  local_28 = local_10 + local_40;
  local_24 = local_18 + local_48 + fVar1 * (float)param_1[0x1e8];
  local_20 = local_2c + local_8;
  local_1c = local_28 + local_4;
  uVar3 = FUN_00402040(&local_c,param_1 + 0x11ab,param_1 + 0x11a8);
  FUN_00402130(&local_3c,uVar3,pfVar5);
  fVar1 = (float)param_1[0x38];
  local_30 = local_48;
  local_3c = local_3c + fVar1 * (float)param_1[0x11ae];
  local_2c = local_44;
  local_28 = local_40;
  local_38 = local_38 + fVar1 * (float)param_1[0x11af];
  local_34 = local_34 + fVar1 * (float)param_1[0x11b0];
  local_c = local_3c - local_48;
  local_8 = local_38 - local_44;
  local_4 = local_34 - local_40;
  FUN_00469060(&local_30,&local_c,0,0xbf800000,0,1,1);
  (**(code **)(*param_1 + 0x14))(&local_30,0);
  FUN_00401f00(local_38 - unaff_ESI,local_34 - local_4c,local_30 - local_48);
  fVar1 = DAT_006e92e8 / (float)param_1[0x248];
  FUN_00401f00(local_14 * fVar1,local_10 * fVar1,local_c * fVar1);
  FUN_004357e0(&local_14);
  return;
}

