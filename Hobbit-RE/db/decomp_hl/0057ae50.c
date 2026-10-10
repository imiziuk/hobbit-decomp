
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0057ae50(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined1 auStack_1f8 [24];
  undefined4 uStack_1e0;
  float fStack_1dc;
  float *pfStack_1d8;
  float *pfStack_1d4;
  undefined1 *puStack_1d0;
  float *pfStack_1cc;
  float *pfStack_1c8;
  undefined1 *puStack_1c4;
  float *pfStack_1c0;
  float *local_1bc;
  float *local_1b8;
  float *local_1b4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float *local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124 [7];
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [16];
  float local_78;
  float local_74 [8];
  undefined1 local_54 [72];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbd9b;
  local_c = ExceptionList;
  local_1b4 = (float *)s_Coll__T2C_00740438;
  local_1b8 = (float *)0x57ae7f;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (DAT_007777c0 == 1) {
    pfVar6 = local_74;
    iVar7 = 3;
    do {
      local_1b4 = (float *)(((int)param_2 - (int)local_74) + (int)pfVar6);
      local_1b8 = &local_194;
      local_1bc = (float *)0x57aec4;
      FUN_0041b9f0();
      pfVar6[-1] = local_194;
      *pfVar6 = local_190;
      pfVar6[1] = local_18c;
      pfVar6 = pfVar6 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    param_2 = &local_78;
  }
  local_1b4 = (float *)0xff7fffff;
  local_1b8 = (float *)0xff7fffff;
  local_1bc = (float *)0xff7fffff;
  local_180 = 3.4028235e+38;
  local_17c = 3.4028235e+38;
  local_178 = 3.4028235e+38;
  pfStack_1c0 = (float *)0x57af1c;
  FUN_00404870();
  pfVar6 = param_2 + 2;
  iVar7 = 3;
  do {
    if (pfVar6[-2] < local_180) {
      local_180 = pfVar6[-2];
    }
    if (pfVar6[-1] < local_17c != (NAN(pfVar6[-1]) || NAN(local_17c))) {
      local_17c = pfVar6[-1];
    }
    if (*pfVar6 < local_178 != (NAN(*pfVar6) || NAN(local_178))) {
      local_178 = *pfVar6;
    }
    if (local_174 < pfVar6[-2]) {
      local_174 = pfVar6[-2];
    }
    if (local_170 < pfVar6[-1]) {
      local_170 = pfVar6[-1];
    }
    if (local_16c < *pfVar6) {
      local_16c = *pfVar6;
    }
    pfVar6 = pfVar6 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (((((local_180 <= *(float *)(param_1 + 0x3d58)) &&
        (fVar1 = *(float *)(param_1 + 0x3d4c), local_174 < fVar1 == (NAN(local_174) || NAN(fVar1))))
       && (local_178 <= *(float *)(param_1 + 0x3d60))) &&
      ((local_16c < *(float *)(param_1 + 0x3d54) ==
        (NAN(local_16c) || NAN(*(float *)(param_1 + 0x3d54))) &&
       (local_17c <= *(float *)(param_1 + 0x3d5c))))) &&
     (local_170 < *(float *)(param_1 + 0x3d50) ==
      (NAN(local_170) || NAN(*(float *)(param_1 + 0x3d50))))) {
    local_190 = *(float *)(param_1 + 0x3dc8);
    local_18c = *(float *)(param_1 + 0x3dcc);
    local_194 = *(float *)(param_1 + 0x3dc4);
    local_1b4 = param_2 + 6;
    local_188 = *(float *)(param_1 + 0x3ddc);
    local_1b8 = param_2 + 3;
    pfStack_1c0 = (float *)0x57b04d;
    local_1bc = param_2;
    FUN_004b8740();
    if (local_168 * local_194 + local_164 * local_190 + local_160 * local_18c <= _DAT_006f3ee0) {
      local_124[0] = 0.0;
      if (local_168 < DAT_006e92e4) {
        local_124[0] = 4.2039e-45;
      }
      local_124[1] = 1.4013e-45;
      if (local_164 < DAT_006e92e4) {
        local_124[1] = 5.60519e-45;
      }
      local_124[2] = 2.8026e-45;
      if (local_160 < DAT_006e92e4) {
        local_124[2] = 7.00649e-45;
      }
      local_130 = 3;
      if (local_168 < DAT_006e92e4) {
        local_130 = 0;
      }
      local_12c = 4;
      if (local_164 < DAT_006e92e4) {
        local_12c = 1;
      }
      local_128 = 5;
      if (local_160 < DAT_006e92e4) {
        local_128 = 2;
      }
      local_1b4 = (float *)&local_130;
      local_1b8 = local_124;
      pfStack_1c0 = &local_168;
      puStack_1c4 = (undefined1 *)0x57b173;
      local_1bc = (float *)(param_1 + 0x3d4c);
      iVar7 = FUN_0057add0();
      if (iVar7 != 0) {
        local_144 = *(float *)(param_1 + 0x3d8c);
        local_140 = *(float *)(param_1 + 0x3d90);
        local_13c = *(float *)(param_1 + 0x3d94);
        local_184 = *(float **)(param_1 + 0x3dc0);
        pfVar2 = *(float **)(param_1 + 0x3dbc);
        local_124[3] = 0.0;
        local_124[4] = 0.0;
        local_124[5] = 0.0;
        local_100 = 0;
        local_fc = 0x3f800000;
        local_f8 = 0;
        pfVar6 = pfVar2;
        if ((float)local_184 < (float)pfVar2 != (NAN((float)local_184) || NAN((float)pfVar2))) {
          pfVar6 = local_184;
        }
        fVar1 = DAT_006e92e8 / local_188;
        local_198 = fVar1 * (float)pfVar6;
        if (local_198 < DAT_006e92e8 == (NAN(local_198) || NAN(DAT_006e92e8))) {
          local_198 = DAT_006e92e8;
        }
        local_188 = 1.4013e-45;
        local_134 = (undefined1 *)(fVar1 * _DAT_006e95a8);
        local_1a0 = 0.0;
        local_138 = 1.0;
        local_194 = 0.0;
        local_190 = 1.0;
        local_18c = 0.0;
        iVar7 = 0;
        fVar3 = *(float *)(param_1 + 0x3da0) - local_13c;
        fVar1 = *(float *)(param_1 + 0x3d9c) - local_140;
        local_104 = *(float *)(param_1 + 0x3d98) - local_144;
        local_124[6] = fVar3;
        local_108 = fVar1;
        do {
          local_1bc = (float *)local_104;
          iVar7 = iVar7 + 1;
          pfStack_1c0 = (float *)0x57b2c8;
          local_1b8 = (float *)fVar1;
          local_1b4 = (float *)fVar3;
          FUN_00401f00();
          local_1b4 = (float *)(local_d4 * local_198);
          local_1b8 = (float *)(local_d8 * local_198);
          local_1bc = (float *)(local_dc * local_198);
          pfStack_1c0 = (float *)0x57b300;
          FUN_00401f00();
          local_1b4 = (float *)(local_150 + local_13c);
          local_1b8 = (float *)(local_154 + local_140);
          local_1bc = (float *)(local_158 + local_144);
          pfStack_1c0 = (float *)0x57b335;
          FUN_00401f00();
          local_1b4 = (float *)0x7f7fffff;
          local_1b8 = (float *)0x7f7fffff;
          local_1bc = (float *)0x7f7fffff;
          pfStack_1c0 = (float *)0x57b350;
          FUN_00404870();
          local_1b4 = (float *)0xff7fffff;
          local_1b8 = (float *)0xff7fffff;
          local_1bc = (float *)0xff7fffff;
          pfStack_1c0 = (float *)0x57b36b;
          FUN_00404870();
          local_1b4 = (float *)(local_150 + *(float *)(param_1 + 0x3de8));
          local_1b8 = (float *)(local_154 + *(float *)(param_1 + 0x3de4));
          local_1bc = (float *)(local_158 + *(float *)(param_1 + 0x3de0));
          pfStack_1c0 = (float *)0x57b3a3;
          FUN_00401f00();
          local_1b4 = (float *)(local_150 + *(float *)(param_1 + 0x3df4));
          local_f4 = local_c4;
          local_1b8 = (float *)(local_154 + *(float *)(param_1 + 0x3df0));
          local_f0 = local_c0;
          local_ec = local_bc;
          local_1bc = (float *)(local_158 + *(float *)(param_1 + 0x3dec));
          pfStack_1c0 = (float *)0x57b405;
          FUN_00401f00();
          local_e8 = local_b8;
          local_1b4 = &local_180;
          local_e4 = local_b4;
          local_e0 = local_b0;
          local_1b8 = (float *)0x57b440;
          iVar5 = FUN_004322c0();
          if (iVar5 == 0) {
LAB_0057b50d:
            local_1a0 = local_198;
          }
          else {
            local_1b4 = (float *)&local_130;
            local_1b8 = local_124;
            local_1bc = &local_f4;
            pfStack_1c0 = &local_168;
            puStack_1c4 = (undefined1 *)0x57b46a;
            iVar5 = FUN_0057add0();
            if (iVar5 == 0) goto LAB_0057b50d;
            local_1b4 = &local_a0;
            local_1b8 = (float *)&local_d0;
            local_1bc = local_184;
            puStack_1c4 = local_94;
            pfStack_1c8 = &local_168;
            pfStack_1cc = param_2;
            puStack_1d0 = (undefined1 *)0x57b4a9;
            pfStack_1c0 = pfVar2;
            iVar5 = FUN_0057a350();
            if (iVar5 == 0) goto LAB_0057b50d;
            local_ac = local_d0;
            local_a8 = local_cc;
            local_a4 = local_c8;
            local_194 = local_a0;
            local_190 = local_9c;
            local_18c = local_98;
            local_188 = 0.0;
            local_138 = local_198;
          }
          fVar4 = local_138 - local_1a0;
        } while ((fVar4 < (float)local_134 == (NAN(fVar4) || NAN((float)local_134))) &&
                (local_198 = fVar4 * _DAT_006e95a8 + local_1a0, iVar7 < 10));
        local_1b4 = (float *)&local_ac;
        local_1b8 = (float *)0x57b557;
        FUN_004357e0();
        local_1b4 = &local_194;
        local_1b8 = (float *)0x57b568;
        FUN_004357e0();
        if (local_188 == 0.0) {
          local_1b4 = (float *)&local_100;
          local_1b8 = local_124 + 3;
          local_1bc = (float *)0x57b590;
          FUN_00499d00();
          if (param_2[7] < param_2[4] == (NAN(param_2[7]) || NAN(param_2[4]))) {
            fVar1 = param_2[7];
          }
          else {
            fVar1 = param_2[4];
          }
          if (param_2[1] <= fVar1) {
            if (param_2[7] < param_2[4] == (NAN(param_2[7]) || NAN(param_2[4]))) {
              local_1b8 = (float *)param_2[7];
            }
            else {
              local_1b8 = (float *)param_2[4];
            }
          }
          else {
            local_1b8 = (float *)param_2[1];
          }
          pfStack_1c8 = *(float **)(param_1 + 0x42dc);
          local_1b4 = (float *)0x1;
          pfStack_1cc = *(float **)(param_1 + 0x42d8);
          local_1bc = (float *)0x0;
          pfStack_1c0 = (float *)0x8;
          puStack_1c4 = param_5;
          puStack_1d0 = local_88;
          pfStack_1d4 = &local_168;
          pfStack_1d8 = local_124 + 3;
          fStack_1dc = local_1a0;
          uStack_1e0 = 0x57b623;
          FUN_0057ddb0();
          local_134 = auStack_1f8;
          FUN_0057b680(local_54);
          FUN_0057da20();
        }
      }
    }
  }
  local_4 = 0xffffffff;
  local_1b4 = (float *)0x57b657;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

