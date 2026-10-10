
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057b700(int param_1,int *param_2,undefined4 param_3,float *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_54 [72];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbdbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_118 = *(float *)(*param_2 + 8);
  puVar1 = (undefined4 *)param_2[1];
  local_114 = *puVar1;
  local_110 = puVar1[1];
  local_10c = puVar1[2];
  puVar1 = (undefined4 *)param_2[2];
  local_108 = *puVar1;
  local_104 = puVar1[1];
  local_100 = puVar1[2];
  local_4 = 0;
  local_150 = 3.4028235e+38;
  local_14c = 3.4028235e+38;
  local_148 = 3.4028235e+38;
  FUN_00404870();
  pfVar9 = &local_118;
  iVar10 = 3;
  do {
    if (pfVar9[-2] < local_150 != (NAN(pfVar9[-2]) || NAN(local_150))) {
      local_150 = pfVar9[-2];
    }
    if (pfVar9[-1] < local_14c != (NAN(pfVar9[-1]) || NAN(local_14c))) {
      local_14c = pfVar9[-1];
    }
    if (*pfVar9 < local_148 != (NAN(*pfVar9) || NAN(local_148))) {
      local_148 = *pfVar9;
    }
    if (local_144 < pfVar9[-2]) {
      local_144 = pfVar9[-2];
    }
    if (local_140 < pfVar9[-1]) {
      local_140 = pfVar9[-1];
    }
    if (local_13c < *pfVar9) {
      local_13c = *pfVar9;
    }
    pfVar9 = pfVar9 + 3;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  fVar2 = *(float *)(param_1 + 0x3dc8);
  fVar3 = *(float *)(param_1 + 0x3dcc);
  fVar4 = *(float *)(param_1 + 0x3dc0);
  local_198 = *(float *)(param_1 + 0x3dbc);
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0x3f800000;
  local_e8 = 0;
  if (fVar4 < local_198 != (NAN(fVar4) || NAN(local_198))) {
    local_198 = fVar4;
  }
  fVar4 = DAT_006e92e8 / *(float *)(param_1 + 0x3ddc);
  local_198 = fVar4 * local_198;
  if (local_198 < DAT_006e92e8 == (NAN(local_198) || NAN(DAT_006e92e8))) {
    local_198 = 1.0;
  }
  fVar4 = fVar4 * _DAT_0074021c;
  local_190 = 0.0;
  local_158 = 1.0;
  local_19c = local_198;
  if (((DAT_007778d4 != 0) &&
      ((NAN(*(float *)(param_1 + 0x3dc4)) || NAN(DAT_006e92e4)) !=
       (*(float *)(param_1 + 0x3dc4) == DAT_006e92e4))) &&
     ((NAN(fVar3) || NAN(DAT_006e92e4)) != (fVar3 == DAT_006e92e4))) {
    fVar5 = fVar2 / param_4[1];
    local_194 = 3.4028235e+38;
    FUN_00401f00();
    fVar6 = -((fVar2 * param_4[1] + fVar3 * param_4[2] + local_188 * *param_4 + param_4[3]) * fVar5)
    ;
    if (_DAT_006ec00c < fVar6 == (NAN(_DAT_006ec00c) || NAN(fVar6))) {
      local_194 = fVar6;
    }
    FUN_00401f00();
    fVar6 = -((fVar2 * param_4[1] + fVar3 * param_4[2] + local_188 * *param_4 + param_4[3]) * fVar5)
    ;
    if (local_194 < fVar6 == (NAN(local_194) || NAN(fVar6))) {
      local_194 = fVar6;
    }
    FUN_00401f00();
    fVar6 = -((fVar2 * param_4[1] + fVar3 * param_4[2] + local_188 * *param_4 + param_4[3]) * fVar5)
    ;
    if (local_194 < fVar6 == (NAN(local_194) || NAN(fVar6))) {
      local_194 = fVar6;
    }
    FUN_00401f00();
    fVar2 = -((fVar2 * param_4[1] + fVar3 * param_4[2] + local_188 * *param_4 + param_4[3]) * fVar5)
    ;
    if (local_194 < fVar2 == (NAN(local_194) || NAN(fVar2))) {
      local_194 = fVar2;
    }
    local_19c = DAT_006e92e4;
    if ((local_194 < DAT_006e92e4 == (NAN(local_194) || NAN(DAT_006e92e4))) &&
       (local_19c = local_194, DAT_006e92e8 < local_194)) {
      local_19c = DAT_006e92e8;
    }
    if (local_198 < local_19c) {
      local_19c = local_198;
    }
  }
  iVar10 = 0;
  local_e4 = 0;
  local_e0 = 0x3f800000;
  local_dc = 0;
  bVar7 = true;
  do {
    iVar10 = iVar10 + 1;
    FUN_00401f00();
    FUN_00401f00();
    FUN_00401f00();
    FUN_00404870();
    FUN_00404870();
    FUN_00401f00();
    local_d0 = local_8c;
    local_d8 = local_94;
    local_d4 = local_90;
    FUN_00401f00();
    local_cc = local_ac;
    local_c4 = local_a4;
    local_c8 = local_a8;
    iVar8 = FUN_004322c0();
    if (((iVar8 == 0) || (iVar8 = FUN_0057add0(), iVar8 == 0)) ||
       (iVar8 = FUN_0057a350(), iVar8 == 0)) {
      local_190 = local_19c;
    }
    else {
      local_b8 = local_a0;
      local_b4 = local_9c;
      local_b0 = local_98;
      FUN_004357e0();
      FUN_004357e0();
      bVar7 = false;
      local_158 = local_19c;
    }
    fVar2 = local_158 - local_190;
  } while ((fVar2 < fVar4 == (NAN(fVar2) || NAN(fVar4))) &&
          (local_19c = fVar2 * _DAT_00740218 + local_190, iVar10 < 10));
  FUN_004357e0();
  FUN_004357e0();
  if (!bVar7) {
    FUN_00499d00();
    FUN_0057ddb0();
    FUN_0057b680(local_54);
    FUN_0057da20();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

