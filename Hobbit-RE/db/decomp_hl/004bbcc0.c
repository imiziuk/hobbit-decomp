
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bbcc0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  float10 fVar8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  int local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  int local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [20];
  undefined1 local_ac [12];
  float local_a0 [2];
  float local_98;
  undefined1 local_90 [4];
  float local_8c;
  undefined4 local_84;
  undefined1 local_80 [12];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_54;
  undefined4 local_4c;
  undefined1 local_48 [16];
  float local_38;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d45fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  local_1d4 = *(float *)(param_1 + 0x14);
  local_174 = param_1 + 0x14;
  local_1d0 = *(float *)(param_1 + 0x18);
  local_1e0 = *param_3;
  local_1d8 = param_3[2];
  local_1cc = *(float *)(param_1 + 0x1c);
  local_1dc = param_3[1];
  local_1b4 = 0;
  fVar1 = local_1dc * local_1dc + local_1e0 * local_1e0 + local_1d8 * local_1d8;
  if (fVar1 < _DAT_006ebfe4 == (NAN(fVar1) || NAN(_DAT_006ebfe4))) {
    while( true ) {
      local_ec = local_1d0;
      local_f0 = local_1d4;
      local_e8 = local_1cc;
      local_1b0 = SQRT(local_1dc * local_1dc + local_1e0 * local_1e0 + local_1d8 * local_1d8);
      FUN_00401f00(local_1e0 + local_1d4,local_1d0 + local_1dc,local_1d8 + local_1cc);
      local_1b4 = local_1b4 + 1;
      if ((3 < local_1b4) || (local_1b0 < _DAT_006e95a8 != (NAN(local_1b0) || NAN(_DAT_006e95a8))))
      break;
      FUN_0057dd60();
      FUN_005798f0(4);
      iVar4 = FUN_004bba30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_f0,
                           local_48,0x2c00411,local_a0);
      if (iVar4 == 0) goto LAB_004bc545;
      *(undefined4 *)(param_1 + 0x274) = local_6c;
      *(undefined4 *)(param_1 + 0x270) = local_70;
      FUN_004357e0(local_90);
      *(undefined4 *)(param_1 + 0x284) = local_84;
      local_1c8 = local_a0[0] - *(float *)(param_1 + 0x288) / local_1b0;
      if (local_1c8 < DAT_006e92e4 != (NAN(local_1c8) || NAN(DAT_006e92e4))) {
        local_1c8 = 0.0;
      }
      FUN_004357e0(local_80);
      local_1a0 = local_74;
      FUN_004357e0(local_90);
      fVar1 = local_1d8 * local_1c8;
      local_4c = local_84;
      fVar2 = local_1dc * local_1c8;
      fVar3 = local_1e0 * local_1c8;
      local_1b8 = fVar3;
      local_170 = fVar2;
      local_16c = fVar1;
      FUN_00401f00(fVar3,fVar2,fVar1);
      FUN_00401f00(local_fc + local_1d4,local_f8 + local_1d0,local_f4 + local_1cc);
      if ((local_54 <= _DAT_006e99a8) ||
         (local_98 - local_38 < _DAT_006e998c == (NAN(local_98 - local_38) || NAN(_DAT_006e998c))))
      {
        FUN_00401f00(fVar3,fVar2,fVar1);
        local_1d4 = local_15c + local_1d4;
        local_1d0 = local_158 + local_1d0;
        local_1cc = local_154 + local_1cc;
      }
      else {
        FUN_00649600(s_PushBox__HandleMoveStepOver_0072c564);
        fVar1 = DAT_006e92e8 / local_1b0;
        iVar4 = 0;
        local_4 = 0;
        FUN_00401f00(fVar1 * local_1e0,local_1dc * fVar1,local_1d8 * fVar1);
        local_1c4 = local_1d4;
        local_1c0 = local_1d0;
        local_1bc = local_1cc;
        local_e4 = 0;
        local_e0 = 0x41c80000;
        local_dc = 0.0;
        FUN_00401f00(local_114,local_110,local_10c);
        FUN_00401f00(local_1e0 * local_a0[0],local_1dc * local_a0[0],local_1d8 * local_a0[0]);
        FUN_00401f00(local_144 + local_168,local_140 + local_164,local_13c + local_160);
        local_d8 = local_180;
        local_d4 = local_17c;
        local_d0 = local_178;
        local_cc = 0;
        local_c8 = 0xc1c80000;
        local_c4 = 0;
        pfVar7 = &local_dc;
        do {
          FUN_005798f0(2);
          FUN_00401f00(local_1c4 + pfVar7[-2],local_1c0 + pfVar7[-1],local_1bc + *pfVar7);
          iVar5 = FUN_004bba30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                               &local_1c4,local_ac,0x2c00411,local_a0);
          if (iVar5 != 0) break;
          iVar4 = iVar4 + 1;
          local_1c4 = local_1c4 + pfVar7[-2];
          local_1c0 = local_1c0 + pfVar7[-1];
          local_1bc = local_1bc + *pfVar7;
          pfVar7 = pfVar7 + 3;
        } while (iVar4 < 3);
        if ((iVar4 < 2) || (local_8c <= _DAT_006e99f4)) {
          FUN_00401f00(local_1e0 * local_1c8,local_1dc * local_1c8,local_1d8 * local_1c8);
          local_1d4 = local_138 + local_1d4;
          local_1d0 = local_134 + local_1d0;
          fVar1 = local_130;
        }
        else {
          fVar1 = local_a0[0] - *(float *)(param_1 + 0x288) * _DAT_006ee878;
          if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
            fVar1 = DAT_006e92e4;
          }
          local_1b8 = DAT_006e92e4 * fVar1;
          FUN_00401f00(local_1b8,fVar1 * _DAT_006ec024,local_1b8);
          FUN_00401f00(local_180,local_17c + _DAT_006e998c,local_178);
          FUN_00401f00(local_12c + local_120,local_128 + local_11c,local_124 + local_118);
          local_1d4 = local_108 + local_1d4;
          local_1d0 = local_104 + local_1d0;
          fVar1 = local_100;
        }
        local_1cc = fVar1 + local_1cc;
        local_4 = 0xffffffff;
        FUN_00649720();
      }
      fVar1 = DAT_006e92e8 - local_1c8;
      local_1e0 = local_1e0 * fVar1;
      local_1dc = local_1dc * fVar1;
      local_1d8 = local_1d8 * fVar1;
      if ((local_1b4 == 2) &&
         (fVar1 = local_188 * local_1a4 + local_18c * local_1a8 + local_1ac * local_190,
         fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4))) {
        FUN_00401f00(local_18c * local_1a4 - local_188 * local_1a8,
                     local_188 * local_1ac - local_1a4 * local_190,
                     local_190 * local_1a8 - local_18c * local_1ac);
        local_194 = local_148;
        local_19c = local_150;
        local_198 = local_14c;
        FUN_0042e1f0();
        FUN_004ac490(local_19c * local_1e0 + local_198 * local_1dc + local_194 * local_1d8);
      }
      else {
        FUN_0042fda0(&local_1ac);
        FUN_004bfe30(&local_1e0,&local_19c,local_18);
      }
      if ((_DAT_0075d8e4 < local_1a8) ||
         (local_1dc < DAT_006e92e4 != (NAN(local_1dc) || NAN(DAT_006e92e4)))) {
        FUN_004357e0(&local_19c);
      }
      else {
        uVar6 = FUN_00401f00(0,0x3f800000,0);
        FUN_00468380(local_c0,uVar6);
        fVar8 = (float10)FUN_00402020(&local_19c);
        uVar6 = FUN_00402160(local_24,local_c0,(float)fVar8);
        FUN_004357e0(uVar6);
        local_1dc = 0.0;
      }
    }
    local_1d8 = 0.0;
    local_1dc = 0.0;
    local_1e0 = 0.0;
LAB_004bc545:
    FUN_0042faf0(&local_1e0);
    uVar6 = FUN_00405080(local_ac,&local_1d4,local_174);
    FUN_004357e0(uVar6);
  }
  ExceptionList = local_c;
  return;
}

