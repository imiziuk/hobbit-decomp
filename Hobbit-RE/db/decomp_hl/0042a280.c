
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042a280(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00425a40();
  local_18 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 1000);
  local_10 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x3f0);
  local_2c = DAT_006e92e8 / SQRT(local_18 * local_18 + local_10 * local_10);
  iVar1 = FUN_0064cf30(local_2c);
  if (iVar1 == 0) {
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
  }
  else {
    local_24 = local_18 * local_2c;
    local_20 = local_2c * DAT_006e92e4;
    local_1c = local_10 * local_2c;
  }
  FUN_0064ca10(local_24,local_1c);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_28,&local_2c);
  local_18 = local_2c * DAT_006e92e4 + local_28;
  local_10 = local_2c - local_28 * DAT_006e92e4;
  local_4 = *(float *)(*(int *)(param_1 + 0x450) + 0x168) * *(float *)(param_1 + 0x3fc);
  if (local_4 < _DAT_006e9994 == (NAN(local_4) || NAN(_DAT_006e9994))) {
    local_4 = _DAT_006e9994;
  }
  local_c = local_24 * local_4;
  local_8 = local_20 * local_4;
  local_4 = local_1c * local_4;
  FUN_00442560(&local_c,*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x16c));
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x184);
  iVar1 = param_1 + 0x454;
  if (*(int *)(param_1 + 0x8c4) != 0) {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    uVar6 = 0x3e000000;
    uVar5 = 1;
    uVar4 = 0;
    uVar2 = FUN_0053cc70(s_DAMAGE_DROWN_00720d7c);
    FUN_00540840(uVar2,uVar4,uVar5,uVar6);
    goto LAB_0042a4eb;
  }
  if (local_20 * DAT_006e92e4 + local_18 * local_24 + local_10 * local_1c <= DAT_006e92e4) {
    if (*(int *)(param_1 + 0x3d0) == 0) {
      pcVar3 = s_STING_KNOCK_BACK_00720d2c;
      goto LAB_0042a4c9;
    }
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    uVar5 = 0x3e000000;
    uVar4 = 1;
    uVar2 = 0;
    pcVar3 = s_STAFF_KNOCK_BACK_00720d40;
  }
  else if (*(int *)(param_1 + 0x3d0) == 0) {
    pcVar3 = s_STING_KNOCK_FORWARD_00720d54;
LAB_0042a4c9:
    uVar5 = 0x3e000000;
    uVar4 = 1;
    uVar2 = 0;
    FUN_0041ba80(pcVar3,0,1,0x3e000000);
  }
  else {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    uVar5 = 0x3e000000;
    uVar4 = 1;
    uVar2 = 0;
    pcVar3 = s_STAFF_KNOCK_FORWARD_00720d68;
  }
  uVar6 = FUN_0053cc70(pcVar3);
  FUN_00540840(uVar6,uVar2,uVar4,uVar5);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x474);
LAB_0042a4eb:
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
  FUN_004300c0();
  *(undefined4 *)(param_1 + 0x5f60) = 0;
  return;
}

