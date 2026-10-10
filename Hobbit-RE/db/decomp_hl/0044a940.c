
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044a940(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  undefined1 local_4c [4];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24 [3];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_004357e0(param_1 + 0x119);
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_48,local_4c);
  local_48 = local_48 * (float)param_1[0x1e6];
  local_44 = local_44 * (float)param_1[0x1e7];
  local_40 = local_40 * (float)param_1[0x1e6];
  if ((float)param_1[0x184] < _DAT_006e95a8 != (NAN((float)param_1[0x184]) || NAN(_DAT_006e95a8))) {
    local_40 = 0.0;
    local_44 = 0.0;
    local_48 = 0.0;
  }
  local_34 = local_40;
  local_3c = local_48;
  FUN_0044a760(local_48,local_44,local_40);
  FUN_0044a0b0(local_24,local_4c);
  local_30 = local_3c * _DAT_006ec0a4;
  local_28 = local_34 * _DAT_006ec0a4;
  local_3c = DAT_006e92e4 * (float)param_1[0x248];
  local_38 = (float)param_1[0x248] * _DAT_006ec0ec;
  local_34 = local_3c;
  iVar2 = FUN_004021c0(param_1[0xe94],param_1[0xe95]);
  if (iVar2 != 0) {
    iVar2 = param_1[0x1197];
    iVar3 = FUN_004c8970();
    if (iVar2 + 1 < iVar3) {
      local_18 = local_3c + local_30;
      local_14 = local_38;
      local_10 = local_28 + local_34;
      FUN_004c89c0(&local_18,iVar2 + 1);
    }
    iVar2 = param_1[0x1197];
    iVar3 = FUN_004c8970();
    if (iVar2 < iVar3) {
      local_18 = local_3c + local_30;
      local_14 = local_38;
      local_10 = local_28 + local_34;
      FUN_004c89c0(&local_18,iVar2);
    }
  }
  (**(code **)(*param_1 + 0x14))(local_24,0);
  fVar1 = DAT_006e92e8 / (float)param_1[0x248];
  param_1[0x1d5] = (int)((fStack_2c - local_14) * fVar1);
  param_1[0x1d7] = (int)((local_24[0] - local_c) * fVar1);
  param_1[0x1d6] = (int)((local_28 - local_10) * fVar1);
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x11d] = unaff_EBX;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  return;
}

