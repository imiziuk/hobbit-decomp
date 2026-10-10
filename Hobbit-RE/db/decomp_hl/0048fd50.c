
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048fd50(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 local_d0 [12];
  undefined1 local_c4 [24];
  undefined1 local_ac [12];
  undefined1 local_a0 [24];
  undefined1 local_88 [64];
  undefined1 local_48 [68];
  
  iVar1 = param_1 + 0x44;
  FUN_004357e0(iVar1);
  FUN_004357e0(param_1 + 0x50);
  local_11c = *(float *)(param_1 + 0x144) * DAT_006e92e4;
  local_120 = *(float *)(param_1 + 0x140);
  local_10c = *(float *)(param_1 + 0x144);
  local_f8 = *(float *)(param_1 + 0x148);
  local_118 = *(float *)(param_1 + 0x148) * DAT_006e92e4;
  local_f4 = 0.0;
  local_104 = 0.0;
  local_114 = 0.0;
  local_110 = *(float *)(param_1 + 0x140) * DAT_006e92e4;
  local_e4 = 1.0;
  local_108 = local_118;
  local_100 = local_110;
  local_fc = local_11c;
  local_f0 = local_110;
  local_ec = local_11c;
  local_e8 = local_118;
  FUN_004935d0(param_1 + 0x130);
  uVar6 = FUN_0064e040(local_48,local_88,&local_120);
  FUN_00406570(uVar6);
  pfVar2 = (float *)(param_1 + 0x14);
  if (((((NAN(local_114) || NAN(DAT_006e92e4)) == (local_114 == DAT_006e92e4)) ||
       ((NAN(local_104) || NAN(DAT_006e92e4)) == (local_104 == DAT_006e92e4))) ||
      ((NAN(local_f4) || NAN(DAT_006e92e4)) == (local_f4 == DAT_006e92e4))) ||
     ((NAN(local_e4) || NAN(DAT_006e92e8)) == (local_e4 == DAT_006e92e8))) {
    local_120 = local_114 * *pfVar2 + local_120;
    local_110 = local_104 * *pfVar2 + local_110;
    local_100 = local_f4 * *pfVar2 + local_100;
    fVar3 = local_e4 * *pfVar2;
    local_11c = local_114 * *(float *)(param_1 + 0x18) + local_11c;
    local_10c = local_104 * *(float *)(param_1 + 0x18) + local_10c;
    local_fc = local_f4 * *(float *)(param_1 + 0x18) + local_fc;
    fVar4 = local_e4 * *(float *)(param_1 + 0x18);
    local_118 = local_114 * *(float *)(param_1 + 0x1c) + local_118;
    local_108 = local_104 * *(float *)(param_1 + 0x1c) + local_108;
    local_f8 = local_f4 * *(float *)(param_1 + 0x1c) + local_f8;
    fVar5 = local_e4 * *(float *)(param_1 + 0x1c);
  }
  else {
    fVar3 = *pfVar2;
    fVar4 = *(float *)(param_1 + 0x18);
    fVar5 = *(float *)(param_1 + 0x1c);
  }
  local_ec = local_ec + fVar4;
  local_f0 = local_f0 + fVar3;
  local_e8 = local_e8 + fVar5;
  iVar7 = FUN_00549470(param_1 + 0x150);
  if (iVar7 == 0) {
    local_e0 = iVar7;
    local_dc = iVar7;
    local_d8 = iVar7;
    uVar6 = FUN_00401f00(0x42480000,0x42480000,0x42480000);
    uVar6 = FUN_00405080(local_d0,&local_e0,uVar6);
    FUN_004357e0(uVar6);
    uVar6 = FUN_00401f00(0x42480000,0x42480000,0x42480000);
    uVar6 = FUN_00402130(local_ac,&local_e0,uVar6);
    FUN_004357e0(uVar6);
  }
  else {
    FUN_00480f60(iVar7 + 0xac);
  }
  FUN_004936f0(&local_120);
  FUN_00549580(param_1 + 0x150);
  FUN_00480f60(iVar1);
  uVar6 = FUN_0042eea0(local_d0,0xbf800000,pfVar2);
  FUN_004937a0(uVar6);
  FUN_0058b130(local_c4,iVar1,(int)*(char *)(param_1 + 0x7d),param_1,param_1 + 0x62);
  FUN_00480f60(iVar1);
  fVar8 = (float10)FUN_004937e0(local_a0);
  if ((float10)_DAT_006e9350 < fVar8) {
    local_e0 = *(int *)(param_1 + 8);
    local_dc = *(undefined4 *)(param_1 + 0xc);
    FUN_0058c830(local_c4,&local_e0);
    local_e0 = *(int *)(param_1 + 8);
    local_dc = *(undefined4 *)(param_1 + 0xc);
    FUN_0058c830(local_a0,&local_e0);
  }
  return;
}

