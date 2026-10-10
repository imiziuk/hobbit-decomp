
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00542740(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined1 local_1c4 [12];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined1 local_1a8 [12];
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_174 [12];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined1 local_158 [12];
  undefined1 local_14c [12];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined1 local_130 [12];
  undefined1 local_124 [12];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 local_d4 [12];
  undefined1 local_c8 [28];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d93ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_head_track_controller__MixKeys_00737edc);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == -1) {
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else if ((NAN(*(float *)(param_1 + 0x1c)) || NAN(DAT_006e92e4)) ==
           (*(float *)(param_1 + 0x1c) == DAT_006e92e4)) {
    iVar1 = param_1 + 4;
    iVar4 = FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    iVar15 = *(int *)(param_1 + 8) * 0x50 + *(int *)(iVar4 + 0x58);
    iVar4 = FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    iVar1 = *(int *)(param_1 + 0xc);
    uVar5 = __ftol();
    if ((int)(iVar1 - 2U) <= (int)uVar5) {
      uVar5 = iVar1 - 2U;
    }
    uVar5 = uVar5 & ((int)uVar5 < 1) - 1;
    uVar13 = uVar5 + 1;
    if ((int)(iVar1 - 1U) <= (int)(uVar5 + 1)) {
      uVar13 = iVar1 - 1U;
    }
    uVar13 = ((int)uVar13 < 1) - 1 & uVar13;
    iVar8 = *(int *)(param_1 + 0x10);
    uVar6 = iVar8 - 1;
    uVar7 = __ftol();
    uVar12 = iVar8 - 2;
    if ((int)uVar12 <= (int)uVar7) {
      uVar7 = uVar12;
    }
    uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    uVar12 = uVar7 + 1;
    if ((int)uVar6 <= (int)(uVar7 + 1)) {
      uVar12 = uVar6;
    }
    fVar2 = (float)(extraout_ST1 - (float10)(int)uVar5);
    iVar8 = iVar1 * (((int)uVar12 < 1) - 1 & uVar12);
    iVar16 = 1;
    if (1 < *(int *)(iVar4 + 0x4c)) {
      puVar14 = (undefined4 *)(param_2 + 0x4c);
      do {
        iVar9 = FUN_00543230(*(undefined4 *)(iVar15 + 0x20),iVar16);
        if (iVar9 == 0) {
          FUN_0053f7a0(*(undefined4 *)(iVar15 + 0x20),
                       (int)(iVar1 * uVar7 + uVar5) % (int)*(short *)(iVar15 + 0x24),iVar16,
                       local_1c4);
          FUN_0053f7a0(*(undefined4 *)(iVar15 + 0x20),
                       (int)(iVar1 * uVar7 + uVar13) % (int)*(short *)(iVar15 + 0x24),iVar16,
                       local_14c);
          FUN_0053f7a0(*(undefined4 *)(iVar15 + 0x20),
                       (int)(uVar5 + iVar8) % (int)*(short *)(iVar15 + 0x24),iVar16,local_174);
          FUN_0053f7a0(*(undefined4 *)(iVar15 + 0x20),
                       (int)(iVar8 + uVar13) % (int)*(short *)(iVar15 + 0x24),iVar16,local_124);
          fVar3 = local_140 * local_1b8 +
                  local_13c * local_1b4 + local_138 * local_1b0 + local_134 * local_1ac;
          if ((_DAT_006e999c < fVar3) ||
             (fVar3 < _DAT_006ef7fc != (NAN(fVar3) || NAN(_DAT_006ef7fc)))) {
            local_f0 = local_1b8;
            local_ec = local_1b4;
            local_e8 = local_1b0;
            local_e4 = local_1ac;
          }
          else {
            FUN_00542ec0(&local_1b8,&local_140,fVar3,fVar2,&local_f0);
          }
          uVar10 = FUN_00405080(local_64,local_14c,local_1c4);
          uVar10 = FUN_0042eea0(local_a0,fVar2,uVar10);
          uVar10 = FUN_00402130(local_94,local_1c4,uVar10);
          FUN_004357e0(uVar10);
          uVar10 = FUN_00405080(local_7c,local_130,local_1a8);
          uVar10 = FUN_0042eea0(local_ac,fVar2,uVar10);
          uVar10 = FUN_00402130(local_4c,local_1a8,uVar10);
          FUN_004357e0(uVar10);
          fVar3 = local_118 * local_168 +
                  local_114 * local_164 + local_110 * local_160 + local_10c * local_15c;
          if ((_DAT_006e999c < fVar3) ||
             (fVar3 < _DAT_006ef7fc != (NAN(fVar3) || NAN(_DAT_006ef7fc)))) {
            FUN_0042fda0(&local_168);
          }
          else {
            FUN_00542ec0(&local_168,&local_118,fVar3,fVar2,local_c8);
          }
          uVar10 = FUN_00405080(local_28,local_124,local_174);
          uVar10 = FUN_0042eea0(local_34,fVar2,uVar10);
          uVar10 = FUN_00402130(local_58,local_174,uVar10);
          FUN_004357e0(uVar10);
          uVar10 = FUN_00405080(local_88,local_108,local_158);
          uVar10 = FUN_0042eea0(local_40,fVar2,uVar10);
          uVar10 = FUN_00402130(local_70,local_158,uVar10);
          FUN_004357e0(uVar10);
          FUN_00542fd0(local_fc,local_d4,(float)(extraout_ST0 - (float10)(int)uVar7));
          local_19c = puVar14[-9];
          local_198 = puVar14[-8];
          local_194 = puVar14[-7];
          local_180 = puVar14[-2];
          local_17c = puVar14[-1];
          local_178 = *puVar14;
          puVar11 = (undefined4 *)FUN_00463b80(local_1c,puVar14 + -6,&local_190);
          local_190 = *puVar11;
          local_18c = puVar11[1];
          local_188 = puVar11[2];
          local_184 = puVar11[3];
          FUN_00542fd0(puVar14 + -9,&local_19c,*(undefined4 *)(param_1 + 0x1c));
        }
        iVar16 = iVar16 + 1;
        puVar14 = puVar14 + 10;
      } while (iVar16 < *(int *)(iVar4 + 0x4c));
    }
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return;
}

