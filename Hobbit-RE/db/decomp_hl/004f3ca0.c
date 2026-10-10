
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f3ca0(uint *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_18 = (float)param_1[0x158] - (float)param_1[0x158] / _DAT_006efa3c;
  local_14 = (float)param_1[0x159] / _DAT_006efa40;
  local_40 = _DAT_0075e360 * (float)param_1[0x15c];
  local_3c = _DAT_0075e364 * (float)param_1[0x15c];
  local_38 = local_40 * _DAT_006e936c + local_18;
  local_34 = local_3c * _DAT_006e936c + local_14;
  iVar2 = FUN_0041bcc0();
  if (*(int *)(iVar2 + 0x41c) != 0) {
    return;
  }
  fVar1 = (float)param_1[1] - _DAT_006efa50;
  param_1[1] = (uint)fVar1;
  if (fVar1 <= DAT_006e92e4) {
    *param_1 = 0;
  }
  else {
    uVar3 = *param_1;
    *param_1 = uVar3 ^ 1;
    if ((uVar3 ^ 1) != 0) {
      return;
    }
  }
  FUN_0041bcc0();
  iVar2 = FUN_00423c80();
  if (iVar2 == 0) {
    FUN_0058e880(param_1[0x1ea]);
    param_1[0x1ea] = 0xffffffff;
  }
  else if (param_1[0x1ea] == 0xffffffff) {
    uVar3 = FUN_0058e610(s_HUD_silverPenny_0072f7fc,&local_38,0);
    param_1[0x1ea] = uVar3;
    FUN_0058e6a0(uVar3,0x3f400000);
  }
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0xbd,0);
  FUN_0066e5a0(&local_18,&local_40,0xffffffff);
  FUN_0066d9a0();
  FUN_0066c3a0(7,0x17);
  FUN_0066db80(param_1 + 0xc5,0);
  local_c = local_18;
  local_4 = local_10;
  local_8 = (local_3c - (float)param_1[0x210] * _DAT_006e9360 * local_3c) + local_14;
  uVar7 = 0xffffffff;
  fVar1 = (float)param_1[0x210] * _DAT_006e9360;
  uVar4 = FUN_0041b9c0(0x3f800000,0x3f800000);
  uVar5 = FUN_0041b9c0(0,DAT_006e92e8 - fVar1);
  uVar6 = FUN_0041b9c0(local_40,fVar1 * local_3c);
  FUN_0066e6b0(&local_c,uVar6,uVar5,uVar4,uVar7);
  FUN_0066d9a0();
  return;
}

