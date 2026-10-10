
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a5d80(int *param_1,int param_2,int param_3,int param_4,char *param_5)

{
  undefined2 uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  char *local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  uint local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [24];
  undefined1 local_168 [12];
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  float local_134;
  float local_130;
  float local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  int local_fc;
  int local_f8;
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  int local_d0;
  int local_cc;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  int local_58;
  int local_54;
  undefined1 local_50 [12];
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_1 = 0x7d2;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (param_3 != 0) {
    param_1[0x19] = param_3;
    local_20 = 0;
    local_10 = 0;
    local_8 = 0;
    local_8 = thunk_FUN_0064ff70(param_1[0x19] << 3,s_C__projects_meridian_Support_Col_00744320,
                                 0x336);
    if (param_1[0x1e] != 0) {
      param_1[0x1e] = local_8;
    }
    FUN_00648600(local_8,0,param_1[0x19] << 3);
    local_30 = thunk_FUN_0064ff70(param_1[0x19] * 0x24,s_C__projects_meridian_Support_Col_00744320,
                                  0x33e);
    FUN_00406aa0();
    for (local_24 = 0; local_24 < param_3 * 3; local_24 = local_24 + 1) {
      FUN_00406af0(param_2 + local_24 * 0xc);
    }
    FUN_005a7820(0x3f800000,0x3f800000,0x3f800000);
    local_40 = thunk_FUN_0064ff70(param_1[0x19] * 0x18,s_C__projects_meridian_Support_Col_00744320,
                                  0x34d);
    local_3c = 0;
    local_44 = thunk_FUN_0064ff70(0x8000,s_C__projects_meridian_Support_Col_00744320,0x353);
    FUN_00648600(local_44,0xffffffff,0x8000);
    for (local_24 = 0; local_24 < param_1[0x19]; local_24 = local_24 + 1) {
      for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
        FUN_004357e0(param_2 + (local_24 * 3 + local_28) * 0xc);
        local_58 = __ftol();
        for (local_54 = *(int *)(local_44 + local_58 * 4); local_54 != -1;
            local_54 = *(int *)(local_40 + 4 + local_54 * 8)) {
          FUN_004357e0(param_2 + *(int *)(local_40 + local_54 * 8) * 0xc);
          FUN_00405080(local_168,local_50,local_64);
          fVar5 = (float10)FUN_00402000();
          if (fVar5 < (float10)_DAT_006f406c != (NAN(fVar5) || NAN((float10)_DAT_006f406c))) break;
        }
        if (local_54 == -1) {
          local_54 = local_3c;
          *(int *)(local_40 + local_3c * 8) = local_24 * 3 + local_28;
          *(undefined4 *)(local_40 + 4 + local_3c * 8) = *(undefined4 *)(local_44 + local_58 * 4);
          *(int *)(local_44 + local_58 * 4) = local_3c;
          local_3c = local_3c + 1;
          FUN_004357e0(local_50);
          param_1[0x1b] = param_1[0x1b] + 1;
        }
        *(undefined2 *)(local_8 + local_24 * 8 + local_28 * 2) = (undefined2)local_54;
      }
    }
    FUN_0064ff40(local_40,s_C__projects_meridian_Support_Col_00744320,0x381);
    FUN_0064ff40(local_44,s_C__projects_meridian_Support_Col_00744320,0x382);
    if (0x7d1 < *param_1) {
      if (param_1[0x1b] < 0x100) {
        local_10 = thunk_FUN_0064ff70(param_1[0x19] * 3,s_C__projects_meridian_Support_Col_00744320,
                                      0x3a1);
        param_1[0x20] = local_10;
        FUN_00648600(local_10,0,param_1[0x19] * 3);
        for (local_24 = 0; local_24 < param_1[0x19]; local_24 = local_24 + 1) {
          for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
            *(undefined1 *)(local_10 + local_24 * 3 + local_28) =
                 *(undefined1 *)(local_8 + local_24 * 8 + local_28 * 2);
          }
        }
        FUN_0064ff40(local_8,s_C__projects_meridian_Support_Col_00744320,0x3ae);
        local_8 = 0;
        param_1[0x1e] = 0;
      }
      else {
        local_20 = thunk_FUN_0064ff70(param_1[0x19] * 6,s_C__projects_meridian_Support_Col_00744320,
                                      0x38d);
        param_1[0x1f] = local_20;
        FUN_00648600(local_20,0,param_1[0x19] * 6);
        for (local_24 = 0; local_24 < param_1[0x19]; local_24 = local_24 + 1) {
          for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
            *(undefined2 *)(local_20 + local_24 * 6 + local_28 * 2) =
                 *(undefined2 *)(local_8 + local_24 * 8 + local_28 * 2);
          }
        }
        FUN_0064ff40(local_8,s_C__projects_meridian_Support_Col_00744320,0x39a);
        local_8 = 0;
        param_1[0x1e] = 0;
      }
    }
    FUN_005a7800(local_70);
    FUN_005a7790(0);
    iVar2 = __ftol();
    param_1[0x15] = iVar2;
    FUN_005a7790(1);
    iVar2 = __ftol();
    param_1[0x16] = iVar2;
    FUN_005a7790(2);
    iVar2 = __ftol();
    param_1[0x17] = iVar2;
    if (param_1[0x15] < 1) {
      param_1[0x15] = 1;
    }
    if (param_1[0x16] < 1) {
      param_1[0x16] = 1;
    }
    if (param_1[0x17] < 1) {
      param_1[0x17] = 1;
    }
    if (param_1[0x15] < 0xd) {
      local_1bc = param_1[0x15];
    }
    else {
      local_1bc = 0xc;
    }
    param_1[0x15] = local_1bc;
    if (param_1[0x16] < 6) {
      local_1c0 = param_1[0x16];
    }
    else {
      local_1c0 = 5;
    }
    param_1[0x16] = local_1c0;
    if (param_1[0x17] < 0xd) {
      local_1c4 = param_1[0x17];
    }
    else {
      local_1c4 = 0xc;
    }
    param_1[0x17] = local_1c4;
    pfVar3 = (float *)FUN_005a7790(0);
    param_1[0xf] = (int)(*pfVar3 / (float)param_1[0x15]);
    pfVar3 = (float *)FUN_005a7790(1);
    param_1[0x10] = (int)(*pfVar3 / (float)param_1[0x16]);
    pfVar3 = (float *)FUN_005a7790(2);
    param_1[0x11] = (int)(*pfVar3 / (float)param_1[0x17]);
    param_1[0x18] = param_1[0x15] * param_1[0x16] * param_1[0x17];
    local_1c = thunk_FUN_0064ff70(param_1[0x18] << 1,s_C__projects_meridian_Support_Col_00744320,
                                  0x3d5);
    local_c = thunk_FUN_0064ff70(param_1[0x18] << 1,s_C__projects_meridian_Support_Col_00744320,
                                 0x3d6);
    local_18 = thunk_FUN_0064ff70(param_1[0x18] * 2 * param_1[0x19],
                                  s_C__projects_meridian_Support_Col_00744320,0x3d7);
    param_1[0x1a] = 0;
    local_14 = 0;
    local_94 = 0;
    local_8c = 0;
    local_98 = 0;
    local_9c = thunk_FUN_0064ff70(param_1[0x18] << 2,s_C__projects_meridian_Support_Col_00744320,999
                                 );
    FUN_00648600(local_9c,0xffffffff,param_1[0x18] << 2);
    FUN_00406a80();
    FUN_004357e0(param_1 + 3);
    uVar4 = FUN_00401f00((float)param_1[0x15] * (float)param_1[0xf],
                         (float)param_1[0x16] * (float)param_1[0x10],
                         (float)param_1[0x17] * (float)param_1[0x11]);
    uVar4 = FUN_00402130(local_180,&local_88,uVar4);
    FUN_004357e0(uVar4);
    for (local_24 = 0; local_24 < param_1[0x19]; local_24 = local_24 + 1) {
      FUN_00401080(local_f4,0xc,3,FUN_0041def0);
      iVar2 = FUN_005a40b0(local_24,0);
      FUN_004357e0(local_30 + iVar2 * 0xc);
      iVar2 = FUN_005a40b0(local_24,1);
      FUN_004357e0(local_30 + iVar2 * 0xc);
      iVar2 = FUN_005a40b0(local_24,2);
      FUN_004357e0(local_30 + iVar2 * 0xc);
      FUN_00406a80();
      FUN_00406af0(local_f4);
      FUN_00406af0(local_e8);
      FUN_00406af0(local_dc);
      FUN_005a7820(0x3f800000,0x3f800000,0x3f800000);
      local_a0 = __ftol();
      local_b0 = __ftol();
      local_a4 = __ftol();
      local_cc = __ftol();
      local_ac = __ftol();
      local_1d0 = __ftol();
      if (local_b0 < param_1[0x15] + -1) {
        local_1c8 = local_b0;
      }
      else {
        local_1c8 = param_1[0x15] + -1;
      }
      local_b0 = local_1c8;
      if (local_cc < param_1[0x16] + -1) {
        local_1cc = local_cc;
      }
      else {
        local_1cc = param_1[0x16] + -1;
      }
      local_cc = local_1cc;
      if (param_1[0x17] + -1 <= local_1d0) {
        local_1d0 = param_1[0x17] + -1;
      }
      local_d0 = local_1d0;
      for (local_a8 = local_ac; local_a8 <= local_d0; local_a8 = local_a8 + 1) {
        for (local_f8 = local_a4; local_f8 <= local_cc; local_f8 = local_f8 + 1) {
          for (local_fc = local_a0; local_fc <= local_b0; local_fc = local_fc + 1) {
            FUN_00406a80();
            local_114 = (float)local_fc * (float)param_1[0xf] + local_88;
            local_110 = (float)local_f8 * (float)param_1[0x10] + local_84;
            local_10c = (float)local_a8 * (float)param_1[0x11] + local_80;
            local_108 = local_114 + (float)param_1[0xf];
            local_104 = local_110 + (float)param_1[0x10];
            local_100 = local_10c + (float)param_1[0x11];
            FUN_005a7820(0x40000000,0x40000000,0x40000000);
            iVar2 = FUN_0064e180(local_f4,3);
            if (iVar2 != 0) {
              local_11c = local_f8 * param_1[0x15] +
                          local_fc + local_a8 * param_1[0x15] * param_1[0x16];
              if (local_8c == local_98) {
                local_98 = local_98 + param_1[0x19] * 4;
                local_94 = thunk_FUN_0064ffa0(local_94,local_98 * 8,
                                              s_C__projects_meridian_Support_Col_00744320,0x424);
              }
              local_118 = local_8c;
              *(int *)(local_94 + local_8c * 8) = local_24;
              *(undefined4 *)(local_94 + 4 + local_8c * 8) =
                   *(undefined4 *)(local_9c + local_11c * 4);
              *(int *)(local_9c + local_11c * 4) = local_8c;
              local_8c = local_8c + 1;
            }
          }
        }
      }
    }
    for (local_90 = 0; local_90 < param_1[0x17]; local_90 = local_90 + 1) {
      for (local_120 = 0; local_120 < param_1[0x16]; local_120 = local_120 + 1) {
        for (local_124 = 0; local_124 < param_1[0x15]; local_124 = local_124 + 1) {
          local_24 = local_120 * param_1[0x15] +
                     local_124 + local_90 * param_1[0x15] * param_1[0x16];
          *(short *)(local_1c + local_24 * 2) = (short)param_1[0x1a];
          *(undefined2 *)(local_c + local_24 * 2) = 0;
          for (local_128 = *(int *)(local_9c + local_24 * 4); local_128 != -1;
              local_128 = *(int *)(local_94 + 4 + local_128 * 8)) {
            *(undefined2 *)(local_18 + param_1[0x1a] * 2) =
                 *(undefined2 *)(local_94 + local_128 * 8);
            param_1[0x1a] = param_1[0x1a] + 1;
            *(short *)(local_c + local_24 * 2) = *(short *)(local_c + local_24 * 2) + 1;
            if ((int)(uint)*(ushort *)(local_c + local_24 * 2) < (int)local_14) {
              local_1d4 = local_14;
            }
            else {
              local_1d4 = (uint)*(ushort *)(local_c + local_24 * 2);
            }
            local_14 = local_1d4;
          }
        }
      }
    }
    FUN_0064ff40(local_94,s_C__projects_meridian_Support_Col_00744320,0x44f);
    FUN_0064ff40(local_9c,s_C__projects_meridian_Support_Col_00744320,0x451);
    if (*param_1 < 0x7d2) {
      local_34 = param_1[0x19] << 3;
    }
    else if (param_1[0x1b] < 0x100) {
      local_34 = param_1[0x19] * 3;
    }
    else {
      local_34 = param_1[0x19] * 6;
    }
    param_1[0x1c] =
         local_34 + param_1[0x1b] * 6 + param_1[0x18] * 2 + param_1[0x18] * 2 + param_1[0x1a] * 2;
    if (param_1[0x1d] != 0) {
      FUN_0064ff40(param_1[0x1d],s_C__projects_meridian_Support_Col_00744320,0x473);
    }
    iVar2 = thunk_FUN_0064ff70(param_1[0x1c],s_C__projects_meridian_Support_Col_00744320,0x474);
    param_1[0x1d] = iVar2;
    local_2c = param_1[0x1d];
    if (*param_1 < 0x7d2) {
      param_1[0x1e] = local_2c;
      local_2c = local_2c + param_1[0x19] * 8;
      FUN_00648480(param_1[0x1e],local_8,param_1[0x19] << 3);
    }
    else if (param_1[0x1b] < 0x100) {
      param_1[0x20] = local_2c;
      local_2c = local_2c + param_1[0x19] * 3;
      FUN_00648480(param_1[0x20],local_10,param_1[0x19] * 3);
    }
    else {
      param_1[0x1f] = local_2c;
      local_2c = local_2c + param_1[0x19] * 6;
      FUN_00648480(param_1[0x1f],local_20,param_1[0x19] * 6);
    }
    if (param_4 == 0) {
      for (local_24 = 0; local_24 < param_1[0x19]; local_24 = local_24 + 1) {
        if (*param_1 < 0x7d2) {
          *(undefined1 *)(param_1[0x1e] + 6 + local_24 * 8) = 0;
        }
      }
    }
    else {
      for (local_24 = 0; local_24 < param_1[0x19]; local_24 = local_24 + 1) {
        if (*param_1 < 0x7d2) {
          *(undefined1 *)(param_1[0x1e] + 6 + local_24 * 8) = *(undefined1 *)(param_4 + local_24);
        }
      }
    }
    param_1[0x24] = local_2c;
    local_2c = local_2c + param_1[0x1b] * 6;
    FUN_004357e0(param_1 + 3);
    uVar6 = 0x477fff00;
    uVar4 = FUN_005a7800(local_18c);
    uVar4 = FUN_004451d0(local_198,uVar4,uVar6);
    FUN_004357e0(uVar4);
    local_38 = 0.0;
    for (local_24 = 0; local_24 < param_1[0x1b]; local_24 = local_24 + 1) {
      uVar1 = __ftol();
      *(undefined2 *)(local_24 * 6 + param_1[0x24]) = uVar1;
      uVar1 = __ftol();
      *(undefined2 *)(param_1[0x24] + 2 + local_24 * 6) = uVar1;
      uVar1 = __ftol();
      *(undefined2 *)(param_1[0x24] + 4 + local_24 * 6) = uVar1;
      local_12c = (float)*(ushort *)(param_1[0x24] + local_24 * 6) * (float)param_1[0xc] +
                  (float)param_1[9];
      local_130 = (float)*(ushort *)(param_1[0x24] + 2 + local_24 * 6) * (float)param_1[0xd] +
                  (float)param_1[10];
      local_134 = (float)*(ushort *)(param_1[0x24] + 4 + local_24 * 6) * (float)param_1[0xe] +
                  (float)param_1[0xb];
      fVar5 = (float10)FUN_005a7770(*(float *)(local_30 + local_24 * 0xc) - local_12c);
      if (fVar5 < (float10)local_38 == (NAN(fVar5) || NAN((float10)local_38))) {
        fVar5 = (float10)FUN_005a7770(*(float *)(local_30 + local_24 * 0xc) - local_12c);
        local_1e4 = (float)fVar5;
      }
      else {
        local_1e4 = local_38;
      }
      local_38 = local_1e4;
      fVar5 = (float10)FUN_005a7770(*(float *)(local_30 + 4 + local_24 * 0xc) - local_130);
      if (fVar5 < (float10)local_38 == (NAN(fVar5) || NAN((float10)local_38))) {
        fVar5 = (float10)FUN_005a7770(*(float *)(local_30 + 4 + local_24 * 0xc) - local_130);
        local_1e8 = (float)fVar5;
      }
      else {
        local_1e8 = local_38;
      }
      local_38 = local_1e8;
      fVar5 = (float10)FUN_005a7770(*(float *)(local_30 + 8 + local_24 * 0xc) - local_134);
      if (fVar5 < (float10)local_38 == (NAN(fVar5) || NAN((float10)local_38))) {
        fVar5 = (float10)FUN_005a7770(*(float *)(local_30 + 8 + local_24 * 0xc) - local_134);
        local_1ec = (float)fVar5;
      }
      else {
        local_1ec = local_38;
      }
      local_38 = local_1ec;
    }
    param_1[0x21] = local_2c;
    local_2c = local_2c + param_1[0x18] * 2;
    FUN_00648480(param_1[0x21],local_c,param_1[0x18] << 1);
    param_1[0x22] = local_2c;
    local_2c = local_2c + param_1[0x18] * 2;
    FUN_00648480(param_1[0x22],local_1c,param_1[0x18] << 1);
    param_1[0x23] = local_2c;
    local_2c = local_2c + param_1[0x1a] * 2;
    FUN_00648480(param_1[0x23],local_18,param_1[0x1a] << 1);
    if (local_8 != 0) {
      FUN_0064ff40(local_8,s_C__projects_meridian_Support_Col_00744320,0x4d4);
      local_8 = 0;
    }
    if (local_20 != 0) {
      FUN_0064ff40(local_20,s_C__projects_meridian_Support_Col_00744320,0x4d9);
      local_20 = 0;
    }
    if (local_10 != 0) {
      FUN_0064ff40(local_10,s_C__projects_meridian_Support_Col_00744320,0x4de);
      local_10 = 0;
    }
    local_138 = 0;
    local_138 = FUN_0064f210(s_c__temp_collmesh_txt_00744308,&DAT_00731b64);
    if (local_138 != 0) {
      FUN_0064f4f0(local_138,s_Total_nVerts_nTris_nTrisIndices_C_007442c0);
    }
    if (local_138 != 0) {
      FUN_0064f4f0(local_138,s__8d_007442b4,param_1[0x1c]);
      FUN_0064f4f0(local_138,s__8d__8d__8d_007442a4,param_1[0x1b],param_1[0x19],param_1[0x1a]);
      local_140 = FUN_005a7750(param_1[0x1b]);
      local_140 = local_140 * 3;
      local_158 = FUN_005a7750(param_1[0x19]);
      local_158 = local_158 * param_1[0x1a];
      uVar4 = __ftol();
      local_144 = FUN_005a7750(uVar4);
      local_144 = local_144 * param_1[0x1b];
      uVar4 = __ftol();
      local_148 = FUN_005a7750(uVar4);
      local_148 = local_148 * param_1[0x1b];
      uVar4 = __ftol();
      local_14c = FUN_005a7750(uVar4);
      local_14c = local_14c * param_1[0x1b];
      local_154 = FUN_005a7750(*(undefined2 *)(local_1c + -2 + param_1[0x18] * 2));
      local_154 = local_154 * param_1[0x18];
      local_15c = FUN_005a7750(local_14);
      local_15c = local_15c * param_1[0x18];
      local_150 = local_140 + local_158 + local_144 + local_148 + local_14c + local_154 + local_15c;
      FUN_0064f4f0(local_138,s__8d_007442b4,(int)(local_150 + 4 + (local_150 + 4 >> 0x1f & 7U)) >> 3
                  );
      if (*param_1 < 0x7d2) {
        local_13c = param_1[0x19] << 3;
      }
      else if (param_1[0x1b] < 0x100) {
        local_13c = param_1[0x19] * 3;
      }
      else {
        local_13c = param_1[0x19] * 6;
      }
      FUN_0064f4f0(local_138,s__8d__8d__8d__8d_00744294,local_13c,param_1[0x1b] * 6,
                   param_1[0x18] << 2,param_1[0x1a] << 1);
      if (param_5 == (char *)0x0) {
        local_1f0 = s_Unknown_0074428c;
      }
      else {
        local_1f0 = param_5;
      }
      FUN_0064f4f0(local_138,s__15s_00744284,local_1f0);
      FUN_0064f5c0(local_138);
      FUN_0064f2b0(local_138);
    }
    FUN_0064ff40(local_30,s_C__projects_meridian_Support_Col_00744320,0x518);
    FUN_0064ff40(local_c,s_C__projects_meridian_Support_Col_00744320,0x519);
    FUN_0064ff40(local_1c,s_C__projects_meridian_Support_Col_00744320,0x51a);
    FUN_0064ff40(local_18,s_C__projects_meridian_Support_Col_00744320,0x51b);
  }
  return;
}

