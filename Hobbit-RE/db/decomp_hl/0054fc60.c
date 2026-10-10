
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0054fc60(int param_1,uint param_2,float *param_3,float param_4,uint param_5,undefined4 param_6,
            int param_7)

{
  byte *pbVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  float *pfVar18;
  float10 extraout_ST0;
  float10 fVar19;
  undefined8 uVar20;
  float *pfVar21;
  undefined4 uVar22;
  float local_168;
  float local_164;
  float local_160;
  int local_15c;
  int local_154;
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
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_cc [64];
  undefined1 local_8c [64];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d9a73;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649600(s_decal_mgr__UpdateDecal_0073d2cc);
  local_4._0_1_ = 1;
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x10))) &&
     (iVar9 = *(int *)(param_1 + 0x24), iVar9 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar17 = (int)param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f);
    uVar20 = __allshl();
    if ((*(uint *)(iVar9 + iVar17 * 0x18) & (uint)uVar20) == 0 &&
        (*(uint *)(iVar9 + 4 + iVar17 * 0x18) & (uint)((ulonglong)uVar20 >> 0x20)) == 0) {
      pfVar18 = param_3 + 2;
      iVar17 = (uVar2 & param_2) * 0x2fc + *(int *)(iVar9 + 8 + iVar17 * 0x18);
      fVar3 = *pfVar18 - param_3[5];
      local_12c = param_3[1] - param_3[4];
      local_120 = *param_3 - param_3[3];
      fVar4 = param_3[8] - param_3[5];
      local_128 = param_3[7] - param_3[4];
      local_124 = param_3[6] - param_3[3];
      local_130 = local_128 * local_120 - local_124 * local_12c;
      local_134 = local_124 * fVar3 - fVar4 * local_120;
      local_138 = fVar4 * local_12c - local_128 * fVar3;
      local_e0 = (local_124 + local_120) * _DAT_006e936c + param_3[3];
      local_dc = (local_128 + local_12c) * _DAT_006e936c + param_3[4];
      local_d8 = (fVar4 + fVar3) * _DAT_006e936c + param_3[5];
      fVar5 = DAT_006e92e8 /
              SQRT(local_130 * local_130 + local_134 * local_134 + local_138 * local_138);
      iVar9 = FUN_0064cf30(fVar5);
      if (iVar9 == 0) {
        local_138 = 0.0;
        local_134 = 0.0;
        local_130 = DAT_006e92e4;
      }
      else {
        fVar5 = fVar5 * param_4;
        local_138 = local_138 * fVar5;
        local_134 = local_134 * fVar5;
        local_130 = fVar5 * local_130;
      }
      local_e8 = local_12c;
      local_ec = local_120;
      local_104 = local_124;
      local_100 = local_128;
      fVar5 = local_12c * local_12c + local_120 * local_120 + fVar3 * fVar3;
      local_11c = local_138;
      local_118 = local_134;
      local_12c = SQRT(fVar5);
      local_128 = SQRT(fVar4 * fVar4 + local_128 * local_128 + local_124 * local_124);
      fVar5 = DAT_006e92e8 / SQRT(fVar5);
      local_114 = local_130;
      local_fc = fVar4;
      local_e4 = fVar3;
      iVar9 = FUN_0064cf30(fVar5);
      if (iVar9 == 0) {
        local_ec = 0.0;
        local_e8 = 0.0;
        local_e4 = 0.0;
      }
      else {
        local_ec = fVar5 * local_ec;
        local_e8 = local_e8 * fVar5;
        local_e4 = local_e4 * fVar5;
      }
      fVar3 = DAT_006e92e8 /
              SQRT(local_104 * local_104 + local_100 * local_100 + local_fc * local_fc);
      iVar9 = FUN_0064cf30(fVar3);
      if (iVar9 == 0) {
        local_104 = 0.0;
        local_100 = 0.0;
        local_fc = 0.0;
      }
      else {
        local_104 = fVar3 * local_104;
        local_100 = local_100 * fVar3;
        local_fc = local_fc * fVar3;
      }
      fVar3 = DAT_006e92e8 /
              SQRT(local_11c * local_11c + local_118 * local_118 + local_114 * local_114);
      iVar9 = FUN_0064cf30(fVar3);
      if (iVar9 == 0) {
        local_11c = 0.0;
        local_118 = 0.0;
        local_114 = 0.0;
      }
      else {
        local_11c = fVar3 * local_11c;
        local_118 = local_118 * fVar3;
        local_114 = local_114 * fVar3;
      }
      local_150 = 3.4028235e+38;
      local_14c = 3.4028235e+38;
      local_148 = 3.4028235e+38;
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      iVar9 = 4;
      do {
        if (pfVar18[-2] < local_150 != (NAN(pfVar18[-2]) || NAN(local_150))) {
          local_150 = pfVar18[-2];
        }
        if (pfVar18[-1] < local_14c != (NAN(pfVar18[-1]) || NAN(local_14c))) {
          local_14c = pfVar18[-1];
        }
        if (*pfVar18 < local_148 != (NAN(*pfVar18) || NAN(local_148))) {
          local_148 = *pfVar18;
        }
        if (local_144 < pfVar18[-2]) {
          local_144 = pfVar18[-2];
        }
        if (local_140 < pfVar18[-1]) {
          local_140 = pfVar18[-1];
        }
        if (local_13c < *pfVar18) {
          local_13c = *pfVar18;
        }
        pfVar18 = pfVar18 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      fVar3 = local_130 + param_3[2];
      fVar4 = local_134 + param_3[1];
      fVar5 = local_138 + *param_3;
      if (fVar5 < local_150 != (NAN(fVar5) || NAN(local_150))) {
        local_150 = fVar5;
      }
      if (fVar4 < local_14c != (NAN(fVar4) || NAN(local_14c))) {
        local_14c = fVar4;
      }
      if (fVar3 < local_148 != (NAN(fVar3) || NAN(local_148))) {
        local_148 = fVar3;
      }
      if (local_144 < fVar5) {
        local_144 = fVar5;
      }
      if (local_140 < fVar4) {
        local_140 = fVar4;
      }
      if (local_13c < fVar3) {
        local_13c = fVar3;
      }
      FUN_00401f00(local_138 + param_3[3],local_134 + param_3[4],local_130 + param_3[5]);
      if (local_168 < local_150 != (NAN(local_168) || NAN(local_150))) {
        local_150 = local_168;
      }
      if (local_164 < local_14c != (NAN(local_164) || NAN(local_14c))) {
        local_14c = local_164;
      }
      if (local_160 < local_148 != (NAN(local_160) || NAN(local_148))) {
        local_148 = local_160;
      }
      if (local_144 < local_168) {
        local_144 = local_168;
      }
      if (local_140 < local_164) {
        local_140 = local_164;
      }
      if (local_13c < local_160) {
        local_13c = local_160;
      }
      FUN_00401f00(local_138 + param_3[6],local_134 + param_3[7],local_130 + param_3[8]);
      if (local_168 < local_150 != (NAN(local_168) || NAN(local_150))) {
        local_150 = local_168;
      }
      if (local_164 < local_14c != (NAN(local_164) || NAN(local_14c))) {
        local_14c = local_164;
      }
      if (local_160 < local_148 != (NAN(local_160) || NAN(local_148))) {
        local_148 = local_160;
      }
      if (local_144 < local_168) {
        local_144 = local_168;
      }
      if (local_140 < local_164) {
        local_140 = local_164;
      }
      if (local_13c < local_160) {
        local_13c = local_160;
      }
      FUN_00401f00(local_138 + param_3[9],local_134 + param_3[10],local_130 + param_3[0xb]);
      if (local_168 < local_150 != (NAN(local_168) || NAN(local_150))) {
        local_150 = local_168;
      }
      if (local_164 < local_14c != (NAN(local_164) || NAN(local_14c))) {
        local_14c = local_164;
      }
      if (local_160 < local_148 != (NAN(local_160) || NAN(local_148))) {
        local_148 = local_160;
      }
      if (local_144 < local_168) {
        local_144 = local_168;
      }
      if (local_140 < local_164) {
        local_140 = local_164;
      }
      if (local_13c < local_160) {
        local_13c = local_160;
      }
      FUN_00578950(&local_150,0x1000000);
      *(undefined4 **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
      DAT_007f23d4 = DAT_007f23d4 + 1;
      iVar9 = (int)DAT_007f23cc - (DAT_00777218 * 4 + 0xfU & 0xfffffff0);
      local_15c = 0;
      local_154 = 0;
      DAT_007f23cc = (undefined4 *)iVar9;
      if (0 < DAT_00777218) {
        pfVar18 = (float *)&DAT_00773a18;
        do {
          iVar14 = 0;
          bVar6 = false;
          if (local_15c < 1) {
LAB_00550586:
            *(float **)(iVar9 + local_15c * 4) = pfVar18;
            local_15c = local_15c + 1;
          }
          else {
            do {
              if (bVar6) goto LAB_00550593;
              pfVar21 = *(float **)(iVar9 + iVar14 * 4);
              FUN_00401f00(*pfVar18 - *pfVar21,pfVar18[1] - pfVar21[1],pfVar18[2] - pfVar21[2]);
              fVar3 = local_164 * local_164 + local_160 * local_160 + local_168 * local_168;
              if (fVar3 < DAT_006e92e8 != (NAN(fVar3) || NAN(DAT_006e92e8))) {
                iVar15 = *(int *)(iVar9 + iVar14 * 4);
                FUN_00401f00(pfVar18[3] - *(float *)(iVar15 + 0xc),
                             pfVar18[4] - *(float *)(iVar15 + 0x10),
                             pfVar18[5] - *(float *)(iVar15 + 0x14));
                fVar3 = local_f4 * local_f4 + local_f0 * local_f0 + local_f8 * local_f8;
                if (fVar3 < DAT_006e92e8 != (NAN(fVar3) || NAN(DAT_006e92e8))) {
                  iVar15 = *(int *)(iVar9 + iVar14 * 4);
                  FUN_00401f00(pfVar18[6] - *(float *)(iVar15 + 0x18),
                               pfVar18[7] - *(float *)(iVar15 + 0x1c),
                               pfVar18[8] - *(float *)(iVar15 + 0x20));
                  fVar3 = local_10c * local_10c + local_108 * local_108 + local_110 * local_110;
                  if (fVar3 < DAT_006e92e8 != (NAN(fVar3) || NAN(DAT_006e92e8))) {
                    bVar6 = true;
                  }
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < local_15c);
            if (!bVar6) goto LAB_00550586;
          }
LAB_00550593:
          local_154 = local_154 + 1;
          pfVar18 = pfVar18 + 0xe;
        } while (local_154 < DAT_00777218);
      }
      if ((*(int *)(iVar17 + 0x2e8) != 0) && (*(int *)(iVar17 + 0x2e8) < local_15c)) {
        FUN_006bf840(*(undefined4 *)(iVar17 + 0x2dc));
        FUN_006bf840(*(undefined4 *)(iVar17 + 0x2e0));
        *(int *)(iVar17 + 0x2dc) = iVar17;
        *(int *)(iVar17 + 0x2e0) = iVar17 + 0x1b0;
        *(undefined4 *)(iVar17 + 0x2e8) = 0;
      }
      if (*(int *)(iVar17 + 0x2e8) == 0) {
        if (0xc < local_15c) {
          pvVar10 = operator_new(local_15c * 0x24);
          *(void **)(iVar17 + 0x2dc) = pvVar10;
          if (pvVar10 != (void *)0x0) {
            pvVar10 = operator_new(local_15c * 0x18);
            *(void **)(iVar17 + 0x2e0) = pvVar10;
            if (pvVar10 != (void *)0x0) {
              *(int *)(iVar17 + 0x2e8) = local_15c;
              goto LAB_005506cd;
            }
            FUN_006bf840(*(undefined4 *)(iVar17 + 0x2dc));
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
          local_4 = 0xffffffff;
          FUN_00549580(&param_5);
          FUN_00549350(&param_5);
          param_5 = param_5 | 0x7fffffff;
          FUN_00406bd0(0);
          ExceptionList = local_c;
          return 0;
        }
        *(int *)(iVar17 + 0x2dc) = iVar17;
        *(int *)(iVar17 + 0x2e0) = iVar17 + 0x1b0;
      }
LAB_005506cd:
      iVar14 = 0;
      *(int *)(iVar17 + 0x2e4) = local_15c;
      if (0 < local_15c) {
        iVar15 = 0;
        do {
          pfVar18 = *(float **)(iVar9 + iVar14 * 4);
          FUN_00401f00(*pfVar18 - pfVar18[3],pfVar18[1] - pfVar18[4],pfVar18[2] - pfVar18[5]);
          iVar11 = *(int *)(iVar9 + iVar14 * 4);
          FUN_00401f00(*(float *)(iVar11 + 0x18) - *(float *)(iVar11 + 0xc),
                       *(float *)(iVar11 + 0x1c) - *(float *)(iVar11 + 0x10),
                       *(float *)(iVar11 + 0x20) - *(float *)(iVar11 + 0x14));
          FUN_00401f00(local_108 * local_f4 - local_10c * local_f0,
                       local_110 * local_f0 - local_108 * local_f8,
                       local_10c * local_f8 - local_110 * local_f4);
          fVar3 = DAT_006e92e8 /
                  SQRT(local_160 * local_160 + local_164 * local_164 + local_168 * local_168);
          iVar11 = FUN_0064cf30(fVar3);
          if (iVar11 == 0) {
            local_168 = 0.0;
            local_164 = 0.0;
            local_160 = 0.0;
          }
          else {
            local_168 = fVar3 * local_168;
            local_164 = fVar3 * local_164;
            local_160 = fVar3 * local_160;
          }
          if (local_168 * local_138 + local_134 * local_164 + local_130 * local_160 < _DAT_006e95a8)
          {
            *(int *)(iVar17 + 0x2e4) = *(int *)(iVar17 + 0x2e4) + -1;
          }
          else {
            puVar16 = *(undefined4 **)(iVar9 + iVar14 * 4);
            iVar11 = *(int *)(iVar17 + 0x2dc);
            *(undefined4 *)(iVar11 + iVar15) = *puVar16;
            *(undefined4 *)(iVar11 + 4 + iVar15) = puVar16[1];
            *(undefined4 *)(iVar11 + 8 + iVar15) = puVar16[2];
            iVar11 = *(int *)(iVar9 + iVar14 * 4);
            puVar16 = (undefined4 *)(*(int *)(iVar17 + 0x2dc) + 0xc + iVar15);
            *puVar16 = *(undefined4 *)(iVar11 + 0xc);
            puVar16[1] = *(undefined4 *)(iVar11 + 0x10);
            puVar16[2] = *(undefined4 *)(iVar11 + 0x14);
            iVar11 = *(int *)(iVar9 + iVar14 * 4);
            puVar16 = (undefined4 *)(*(int *)(iVar17 + 0x2dc) + 0x18 + iVar15);
            *puVar16 = *(undefined4 *)(iVar11 + 0x18);
            puVar16[1] = *(undefined4 *)(iVar11 + 0x1c);
            puVar16[2] = *(undefined4 *)(iVar11 + 0x20);
            iVar15 = iVar15 + 0x24;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < local_15c);
      }
      FUN_004064d0();
      FUN_00401f00(-*param_3,-param_3[1],-param_3[2]);
      FUN_004ee2d0(&local_110);
      FUN_004064d0();
      pfVar18 = &local_11c;
      pfVar21 = &local_104;
      uVar12 = FUN_0042ebd0(&local_110);
      FUN_00550ef0(uVar12,pfVar21,pfVar18);
      uVar12 = FUN_0064e040(local_4c,local_cc,local_8c);
      FUN_00406570(uVar12);
      FUN_004064d0();
      uVar12 = FUN_00401f00(DAT_006e92e8 / local_12c,DAT_006e92e8 / local_128,0x3f800000);
      FUN_00550e00(uVar12);
      uVar12 = FUN_0064e040(local_4c,local_8c,local_cc);
      FUN_00406570(uVar12);
      puVar16 = (undefined4 *)((int)DAT_007f23cc - (local_15c * 0x24 + 0xfU & 0xfffffff0));
      iVar9 = local_15c * 3;
      DAT_007f23cc = puVar16;
      FUN_00550f70(puVar16,*(undefined4 *)(iVar17 + 0x2dc),iVar9);
      puVar13 = puVar16;
      if (0 < iVar9) {
        do {
          uVar12 = puVar13[1];
          puVar13[1] = *puVar13;
          *puVar13 = uVar12;
          iVar9 = iVar9 + -1;
          puVar13 = puVar13 + 3;
        } while (iVar9 != 0);
      }
      if (0 < local_15c) {
        iVar9 = 0;
        puVar16 = puVar16 + 3;
        do {
          *(undefined4 *)(iVar9 + *(int *)(iVar17 + 0x2e0)) = puVar16[-3];
          *(undefined4 *)(iVar9 + 4 + *(int *)(iVar17 + 0x2e0)) = puVar16[-2];
          *(undefined4 *)(iVar9 + 8 + *(int *)(iVar17 + 0x2e0)) = *puVar16;
          *(undefined4 *)(iVar9 + 0xc + *(int *)(iVar17 + 0x2e0)) = puVar16[1];
          *(undefined4 *)(iVar9 + 0x10 + *(int *)(iVar17 + 0x2e0)) = puVar16[3];
          *(undefined4 *)(iVar9 + 0x14 + *(int *)(iVar17 + 0x2e0)) = puVar16[4];
          puVar16 = puVar16 + 9;
          iVar9 = iVar9 + 0x18;
          local_15c = local_15c + -1;
        } while (local_15c != 0);
      }
      DAT_007f23d4 = DAT_007f23d4 + -1;
      DAT_007f23cc = *(undefined4 **)(&DAT_007f23e0 + DAT_007f23d4 * 4);
      FUN_00469af0(&param_5);
      *(char *)(iVar17 + 0x2d6) = (char)((uint)param_6 >> 0x10);
      *(char *)(iVar17 + 0x2d7) = (char)((uint)param_6 >> 0x18);
      pbVar1 = (byte *)(iVar17 + 0x2d4);
      *(char *)(iVar17 + 0x2d5) = (char)((uint)param_6 >> 8);
      *pbVar1 = (byte)param_6;
      if (param_7 != 0) {
        uVar22 = 0x1000000;
        uVar12 = FUN_00402130(&local_110,&local_e0,&local_138,0x1000000);
        FUN_00579720(0,0,&local_e0,uVar12,uVar22);
        FUN_005798f0(1);
        iVar9 = FUN_00577e70();
        if (iVar9 == 0) {
          *(undefined1 *)(iVar17 + 0x2d6) = 0;
          *(undefined1 *)(iVar17 + 0x2d5) = 0;
          *pbVar1 = 0;
        }
        else {
          uVar7 = __ftol();
          *(undefined1 *)(iVar17 + 0x2d6) = uVar7;
          uVar7 = __ftol();
          *(undefined1 *)(iVar17 + 0x2d5) = uVar7;
          fVar19 = extraout_ST0 * (float10)*pbVar1;
          if ((fVar19 < (float10)DAT_006e92e4) ||
             ((float10)_DAT_006e95dc < fVar19 == (NAN((float10)_DAT_006e95dc) || NAN(fVar19)))) {
            bVar8 = __ftol();
            *pbVar1 = bVar8;
          }
          else {
            bVar8 = __ftol();
            *pbVar1 = bVar8;
          }
        }
      }
      FUN_00425250(pbVar1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      local_4 = 0xffffffff;
      FUN_00406ba0();
      ExceptionList = local_c;
      return 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_00549580(&param_5);
  FUN_00549350(&param_5);
  ExceptionList = local_c;
  return 0;
}

