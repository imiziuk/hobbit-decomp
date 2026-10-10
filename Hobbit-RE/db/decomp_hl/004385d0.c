
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004385d0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_EBX;
  float unaff_EBP;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1ec] = 0x47c35000;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  FUN_004357e0(&local_28);
  local_28 = (float)param_1[0x11ab];
  pfVar1 = (float *)(param_1 + 5);
  FUN_00401f00(local_28 - (float)param_1[5],0,(float)param_1[0x11ad] - (float)param_1[7]);
  local_38 = DAT_006e92e8 / SQRT(local_34 * local_34 + local_30 * local_30 + local_2c * local_2c);
  iVar3 = FUN_0064cf30(local_38);
  if (iVar3 == 0) {
    local_34 = 0.0;
    local_30 = 0.0;
    local_2c = 0.0;
  }
  else {
    local_34 = local_34 * local_38;
    local_30 = local_30 * local_38;
    local_2c = local_2c * local_38;
  }
  fVar2 = local_34 * (float)param_1[0x11ae] +
          local_30 * (float)param_1[0x11af] + local_2c * (float)param_1[0x11b0];
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar2 = -fVar2;
  }
  if (fVar2 < _DAT_006e99a8 == (NAN(fVar2) || NAN(_DAT_006e99a8))) {
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 1;
    pcVar9 = s_CLIMB_UP_LADDER_00723ca0;
    FUN_0041ba80(s_CLIMB_UP_LADDER_00723ca0,1,1,0);
    uVar4 = FUN_0053cc70(pcVar9);
    FUN_00540840(uVar4,uVar6,uVar7,uVar8);
    local_38 = (float)param_1[0x14b];
    param_1[0x160] = 1;
    param_1[0x164] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x167] = param_1[0x167] + 1;
    fVar5 = (float10)FUN_0064c6b0((float)(int)local_38 - _DAT_006e999c,
                                  (float)param_1[0x14b] - DAT_006e92e8);
    param_1[0x14c] = (int)(float)fVar5;
    param_1[0x1e5] = 0;
    goto LAB_0043887e;
  }
  FUN_00401f00(local_30 * DAT_006e92e4 - local_2c,local_2c * DAT_006e92e4 - local_34 * DAT_006e92e4,
               local_34 - local_30 * DAT_006e92e4);
  fVar2 = local_28 * (float)param_1[0x11ae] +
          local_24 * (float)param_1[0x11af] + local_20 * (float)param_1[0x11b0];
  if (fVar2 < DAT_006e92e4 == (fVar2 == DAT_006e92e4)) {
    if (DAT_006e92e4 < fVar2) {
      pcVar9 = s_jump_to_ladder_left_00723cb0;
      goto LAB_004387d0;
    }
  }
  else {
    pcVar9 = s_jump_to_ladder_right_00723cc4;
LAB_004387d0:
    uVar8 = 0x3e800000;
    uVar7 = 1;
    uVar6 = 0;
    FUN_0041ba80(pcVar9,0,1,0x3e800000);
    uVar4 = FUN_0053cc70(pcVar9);
    FUN_00540840(uVar4,uVar6,uVar7,uVar8);
  }
  param_1[0x1e5] = 0x3f800000;
LAB_0043887e:
  (**(code **)(*param_1 + 0x140))(pfVar1,0,local_1c,local_10);
  local_38 = *pfVar1;
  local_30 = (float)param_1[7];
  local_34 = *(float *)(param_1[0x114] + 0x4c) * _DAT_006e99bc + local_28;
  (**(code **)(*param_1 + 0x14))(&local_38,0);
  FUN_004430e0(5);
  FUN_00421f80();
  FUN_00401f00(*pfVar1 - (float)param_1[0x11a8],(float)param_1[6] - (float)param_1[0x11a9],
               (float)param_1[7] - (float)param_1[0x11aa]);
  fVar2 = SQRT(unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX + local_38 * local_38);
  if (fVar2 < _DAT_006e9984 != (NAN(fVar2) || NAN(_DAT_006e9984))) {
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pcVar9 = s_mount_ladder_top_00723c8c;
    param_1[0x1e5] = 0x3fc00000;
    FUN_0041ba80(s_mount_ladder_top_00723c8c,0,0,0);
    uVar4 = FUN_0053cc70(pcVar9);
    FUN_00540840(uVar4,uVar6,uVar7,uVar8);
    FUN_004430e0(0x11);
  }
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  return;
}

