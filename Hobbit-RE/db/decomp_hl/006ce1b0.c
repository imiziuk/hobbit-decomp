
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ce1b0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float10 extraout_ST0;
  float10 fVar18;
  float10 extraout_ST1;
  undefined1 *puVar19;
  int local_1ec;
  int local_1e8;
  undefined1 local_1b4 [12];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined1 local_170 [12];
  undefined1 local_164 [12];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined1 local_13c [12];
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined1 local_e0 [28];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
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
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e86c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_head_track_controller2__MixKeys_0075b298);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == -1) {
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else if ((NAN(*(float *)(param_1 + 0x1c)) || NAN(DAT_006e92e4)) ==
           (*(float *)(param_1 + 0x1c) == DAT_006e92e4)) {
    iVar16 = param_1 + 4;
    iVar4 = FUN_00549470(iVar16);
    FUN_00549580(iVar16);
    iVar2 = *(int *)(param_1 + 0xc);
    uVar5 = __ftol();
    if ((int)(iVar2 - 2U) <= (int)uVar5) {
      uVar5 = iVar2 - 2U;
    }
    uVar5 = uVar5 & ((int)uVar5 < 1) - 1;
    uVar14 = uVar5 + 1;
    if ((int)(iVar2 - 1U) <= (int)(uVar5 + 1)) {
      uVar14 = iVar2 - 1U;
    }
    uVar14 = ((int)uVar14 < 1) - 1 & uVar14;
    uVar6 = *(int *)(param_1 + 0x10) - 1;
    uVar7 = __ftol();
    uVar13 = *(int *)(param_1 + 0x10) - 2;
    if ((int)uVar13 <= (int)uVar7) {
      uVar7 = uVar13;
    }
    uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    uVar13 = uVar7 + 1;
    if ((int)uVar6 <= (int)(uVar7 + 1)) {
      uVar13 = uVar6;
    }
    fVar1 = (float)(extraout_ST1 - (float10)(int)uVar5);
    iVar11 = iVar2 * uVar7 + *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 8) + iVar2 * (((int)uVar13 < 1) - 1 & uVar13);
    iVar9 = FUN_00549470(iVar16);
    FUN_00549580(iVar16);
    iVar2 = *(int *)(param_1 + 8);
    iVar9 = *(int *)(iVar9 + 0x58);
    iVar10 = FUN_00549470(iVar16);
    FUN_00549580(iVar16);
    iVar17 = (uVar5 + iVar11) * 0x50 + *(int *)(iVar10 + 0x58);
    iVar10 = FUN_00549470(iVar16);
    FUN_00549580(iVar16);
    iVar10 = (uVar14 + iVar11) * 0x50 + *(int *)(iVar10 + 0x58);
    iVar11 = FUN_00549470(iVar16);
    FUN_00549580(iVar16);
    iVar15 = (iVar8 + uVar5) * 0x50 + *(int *)(iVar11 + 0x58);
    iVar11 = FUN_00549470(iVar16);
    FUN_00549580(iVar16);
    iVar16 = (iVar8 + uVar14) * 0x50 + *(int *)(iVar11 + 0x58);
    local_1ec = 0;
    if (0 < *(int *)(iVar4 + 0x4c)) {
      local_1e8 = param_2;
      do {
        iVar11 = FUN_0053f540(*(undefined4 *)(iVar2 * 0x50 + iVar9 + 0x20));
        if ((*(uint *)(iVar11 + local_1ec * 4) & 0x40000) == 0) {
          puVar19 = local_1b4;
          iVar11 = local_1ec;
          fVar18 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x24),
                                         (float)(*(short *)(iVar17 + 0x24) + -1),local_1ec,puVar19);
          FUN_0053fa30(*(undefined4 *)(iVar17 + 0x20),(float)fVar18,iVar11,puVar19);
          puVar19 = local_13c;
          iVar11 = local_1ec;
          fVar18 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x24),
                                         (float)(*(short *)(iVar10 + 0x24) + -1),local_1ec,puVar19);
          FUN_0053fa30(*(undefined4 *)(iVar10 + 0x20),(float)fVar18,iVar11,puVar19);
          puVar19 = local_18c;
          iVar11 = local_1ec;
          fVar18 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x24),
                                         (float)(*(short *)(iVar15 + 0x24) + -1),local_1ec,puVar19);
          FUN_0053fa30(*(undefined4 *)(iVar15 + 0x20),(float)fVar18,iVar11,puVar19);
          puVar19 = local_114;
          iVar11 = local_1ec;
          fVar18 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x24),
                                         (float)(*(short *)(iVar16 + 0x24) + -1),local_1ec,puVar19);
          FUN_0053fa30(*(undefined4 *)(iVar16 + 0x20),(float)fVar18,iVar11,puVar19);
          fVar3 = local_130 * local_1a8 +
                  local_12c * local_1a4 + local_128 * local_1a0 + local_124 * local_19c;
          if ((_DAT_006e999c < fVar3) ||
             (fVar3 < _DAT_006ef7fc != (NAN(fVar3) || NAN(_DAT_006ef7fc)))) {
            local_158 = local_1a8;
            local_154 = local_1a4;
            local_150 = local_1a0;
            local_14c = local_19c;
          }
          else {
            FUN_00542ec0(&local_1a8,&local_130,fVar3,fVar1,&local_158);
          }
          uVar12 = FUN_00405080(local_ac,local_13c,local_1b4);
          uVar12 = FUN_0042eea0(local_b8,fVar1,uVar12);
          uVar12 = FUN_00402130(local_c4,local_1b4,uVar12);
          FUN_004357e0(uVar12);
          uVar12 = FUN_00405080(local_94,local_120,local_198);
          uVar12 = FUN_0042eea0(local_7c,fVar1,uVar12);
          uVar12 = FUN_00402130(local_64,local_198,uVar12);
          FUN_004357e0(uVar12);
          fVar3 = local_108 * local_180 +
                  local_104 * local_17c + local_100 * local_178 + local_fc * local_174;
          if ((_DAT_006e999c < fVar3) ||
             (fVar3 < _DAT_006ef7fc != (NAN(fVar3) || NAN(_DAT_006ef7fc)))) {
            FUN_0042fda0(&local_180);
          }
          else {
            FUN_00542ec0(&local_180,&local_108,fVar3,fVar1,local_e0);
          }
          uVar12 = FUN_00405080(local_4c,local_114,local_18c);
          uVar12 = FUN_0042eea0(local_70,fVar1,uVar12);
          uVar12 = FUN_00402130(local_a0,local_18c,uVar12);
          FUN_004357e0(uVar12);
          uVar12 = FUN_00405080(local_40,local_f8,local_170);
          uVar12 = FUN_0042eea0(local_88,fVar1,uVar12);
          uVar12 = FUN_00402130(local_58,local_170,uVar12);
          FUN_004357e0(uVar12);
          FUN_00542fd0(local_164,local_ec,(float)(extraout_ST0 - (float10)(int)uVar7));
          FUN_00542fd0(local_1e8,local_34,*(undefined4 *)(param_1 + 0x1c));
        }
        local_1e8 = local_1e8 + 0x28;
        local_1ec = local_1ec + 1;
      } while (local_1ec < *(int *)(iVar4 + 0x4c));
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

