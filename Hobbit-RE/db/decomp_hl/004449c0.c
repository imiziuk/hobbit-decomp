
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004449c0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_50;
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
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_004357e0(param_1 + 0x119);
  local_20 = local_14;
  local_1c = local_10;
  local_24 = local_18;
  local_4c = (float)param_1[0x11d];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_48,&local_50);
  local_48 = local_48 * (float)param_1[0x1e6];
  local_44 = local_44 * (float)param_1[0x1e7];
  local_40 = local_40 * (float)param_1[0x1e6];
  if ((float)param_1[0x184] < _DAT_006e95a8 != (NAN((float)param_1[0x184]) || NAN(_DAT_006e95a8))) {
    local_40 = 0.0;
    local_44 = 0.0;
    local_48 = 0.0;
  }
  local_30 = local_24;
  local_2c = (float)local_20;
  local_c = local_48;
  local_8 = local_44;
  local_28 = (float)local_1c;
  local_4 = local_40;
  FUN_0042c800(&local_24,local_4c);
  local_18 = (float)param_1[0xe83];
  local_14 = (float)param_1[0xe84];
  local_10 = (float)param_1[0xe85];
  iVar2 = FUN_0042da90(&local_18,&local_c);
  if (iVar2 != 0) {
    iVar2 = param_1[0x114];
    local_3c = -*(float *)(iVar2 + 0x10c);
    local_38 = -*(float *)(iVar2 + 0x110);
    local_34 = -*(float *)(iVar2 + 0x114);
    fVar3 = (float10)FUN_0064ca10(param_1[0x210],param_1[0x212]);
    local_4c = (float)(fVar3 + (float10)_DAT_006e9368);
    FUN_0064c8e0(local_4c,&local_4c,&local_50);
    fVar1 = local_50 * local_3c + local_34 * local_4c;
    local_30 = fVar1 + local_18;
    local_2c = local_14 + local_38;
    local_34 = local_10 + (local_34 * local_50 - local_3c * local_4c);
    local_3c = fVar1;
    local_28 = local_34;
    (**(code **)(*param_1 + 0x14))(&local_30,0);
    local_40 = local_34 - local_28;
    fVar1 = DAT_006e92e8 / (float)param_1[0x248];
    local_3c = (local_30 - local_24) * fVar1;
    param_1[0x1d5] = (int)((local_38 - local_2c) * fVar1);
    param_1[0x1d7] = (int)local_3c;
    param_1[0x1d6] = (int)(local_40 * fVar1);
    if (0 < param_1[0x201]) {
      fVar3 = (float10)FUN_0064ca10(param_1[0x210],param_1[0x212]);
      param_1[0x160] = 1;
      param_1[0x164] = 1;
      param_1[0x11d] = (int)(float)(fVar3 + (float10)_DAT_006e9368);
      param_1[0x163] = param_1[0x163] + 1;
      param_1[0x167] = param_1[0x167] + 1;
    }
  }
  return;
}

