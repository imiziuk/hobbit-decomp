
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0057a0b0(int param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float *local_d0;
  float *pfStack_cc;
  float *pfStack_c8;
  undefined4 local_c4;
  float *local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  undefined4 *local_b0;
  float *local_ac;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 *local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [12];
  undefined4 local_28;
  float *local_24;
  float local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbd58;
  local_c = ExceptionList;
  local_ac = (float *)s_Coll_ApplySphereToRay_0074040c;
  local_b0 = (undefined4 *)0x57a0df;
  ExceptionList = &local_c;
  FUN_00649600();
  uVar1 = *(undefined4 *)(param_1 + 0x42d8);
  uVar2 = *(undefined4 *)(param_1 + 0x42dc);
  local_ac = &local_7c;
  local_b0 = &local_70;
  local_b4 = param_1 + (*(int *)(param_1 + 0x42d0) * 3 + 0x813) * 8;
  local_b8 = param_1 + 0x408c + *(int *)(param_1 + 0x42d0) * 0x18;
  local_bc = param_3;
  local_c0 = param_2;
  local_4 = 0;
  local_c4 = 0x57a131;
  iVar4 = FUN_00607c40();
  if (iVar4 != 0) {
    local_80 = (undefined1 *)(local_7c - *param_2);
    local_90 = DAT_006e92e8 / param_3;
    local_88 = (local_74 - param_2[2]) * local_90;
    local_8c = (local_78 - param_2[1]) * local_90;
    local_90 = (float)local_80 * local_90;
    fVar3 = local_88 * local_88 + local_8c * local_8c + local_90 * local_90;
    if ((_DAT_006e92f0 < fVar3 == (_DAT_006e92f0 == fVar3)) ||
       (fVar3 < _DAT_006e92ec == (fVar3 == _DAT_006e92ec))) {
      fVar3 = DAT_006e92e8 / SQRT(fVar3);
      local_90 = local_90 * fVar3;
      local_8c = fVar3 * local_8c;
      local_88 = fVar3 * local_88;
    }
    local_ac = (float *)0x0;
    local_6c = local_90;
    local_68 = local_8c;
    local_64 = local_88;
    pfStack_c8 = &local_6c;
    pfStack_cc = &local_90;
    local_84 = -(local_90 * local_7c + local_88 * local_74 + local_8c * local_78);
    local_b0 = (undefined4 *)(param_3 + param_2[1]);
    local_b4 = 0;
    local_b8 = 7;
    local_bc = (float)param_6;
    local_d0 = &local_7c;
    local_d4 = local_70;
    local_d8 = 0x57a26b;
    local_c4 = uVar1;
    local_c0 = (float *)uVar2;
    local_60 = local_84;
    FUN_0057ddb0();
    local_80 = (undefined1 *)&local_f0;
    local_f0 = local_54;
    local_ec = local_50;
    local_e8 = local_4c;
    local_e4 = local_48;
    local_e0 = local_44;
    local_dc = local_40;
    local_d8 = local_3c;
    local_d4 = local_38;
    FUN_004357e0(local_34);
    local_c4 = local_28;
    local_c0 = local_24;
    local_bc = local_20;
    local_b8 = local_1c;
    local_b4 = local_18;
    local_b0 = local_14;
    local_ac = (float *)local_10;
    FUN_0057da20();
  }
  local_4 = 0xffffffff;
  local_ac = (float *)0x57a333;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

