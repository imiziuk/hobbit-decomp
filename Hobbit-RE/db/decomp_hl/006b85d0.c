
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b85d0(int param_1,undefined1 ****param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char ***pppcVar6;
  float *pfVar7;
  char ***pppcVar8;
  char ***pppcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 ****extraout_ECX;
  undefined1 ****ppppuVar12;
  float *pfVar13;
  undefined1 ****ppppuVar14;
  int iVar15;
  float10 fVar16;
  char ****ppppcVar17;
  undefined1 ****local_198;
  char ****local_194;
  char ****local_190;
  float local_17c;
  undefined1 ****local_178;
  undefined1 ****local_174;
  undefined1 ****local_170;
  undefined1 ****local_16c;
  undefined1 ***local_168;
  undefined1 ****local_164;
  undefined1 ****local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined1 ****local_150;
  int local_14c;
  undefined1 ****local_148;
  undefined1 ****local_144;
  undefined1 ***local_140;
  float local_13c;
  undefined1 ***local_138;
  undefined4 local_134;
  undefined1 ***local_12c;
  float local_128;
  float local_124;
  undefined1 ****local_120;
  undefined1 ****local_11c;
  undefined1 ***local_118;
  undefined1 ***local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined1 ****local_fc;
  undefined1 ****local_f8;
  undefined1 ***local_f4;
  undefined1 ***local_f0;
  float local_ec;
  float local_e8;
  undefined1 ***local_e4;
  float local_e0;
  float local_dc;
  undefined1 ***local_d8;
  undefined1 ****local_d4;
  undefined1 ****local_d0;
  undefined1 ***local_cc;
  undefined1 ****local_c8;
  undefined1 ****local_c4;
  undefined1 ***local_c0;
  undefined1 ***local_bc;
  float local_b8 [6];
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined1 ***local_74 [3];
  undefined1 ***local_68;
  undefined1 ***local_64 [3];
  undefined1 ***local_58 [3];
  undefined1 ***local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8468;
  local_c = ExceptionList;
  local_190 = (char ****)s_fx_spemitter__Render_00757c58;
  local_194 = (undefined1 ****)0x6b8602;
  ExceptionList = &local_c;
  FUN_00649600();
  iVar15 = *(int *)(param_1 + 0x100);
  iVar10 = *(int *)(param_1 + 4);
  local_4 = 0;
  local_14c = iVar10;
  if ((iVar15 != 0) && (iVar15 + DAT_00815cc0 <= DAT_00757a38)) {
    DAT_00815cc0 = DAT_00815cc0 + iVar15;
    local_190 = (undefined1 ****)0x6b8655;
    fVar16 = (float10)FUN_006ba270();
    local_13c = (float)fVar16;
    local_194 = &local_d8;
    local_d8 = (undefined1 ***)0x0;
    local_68 = (undefined1 ***)0x0;
    local_198 = *(undefined1 *****)(iVar10 + 0x80);
    local_190 = &local_68;
    ppppuVar14 = (undefined1 ****)0x626;
    FUN_006ba340();
    if ((*(byte *)(iVar10 + 0x84) & 2) != 0) {
      local_190 = (undefined1 ****)0x6b869c;
      fVar16 = (float10)FUN_006bad30();
      local_13c = (float)(fVar16 * (float10)local_13c);
    }
    if (0 < *(int *)(iVar10 + 0xc)) {
      ppppuVar14 = (undefined1 ****)0x6a6;
    }
    if (*(int *)(iVar10 + 0xc) < 0) {
      ppppuVar14 = (undefined1 ****)((uint)ppppuVar14 | 0x100);
    }
    if (*(int *)(iVar10 + 8) == 0) {
      ppppuVar14 = (undefined1 ****)((uint)ppppuVar14 | 0x10);
    }
    if ((*(byte *)(iVar10 + 0x84) & 0x20) == 0) {
      local_194 = (undefined1 ****)0x7;
      local_138 = (undefined1 ***)0x0;
      local_134 = 0;
      local_f0 = (undefined1 ***)0x3f800000;
      local_ec = 1.0;
      local_198 = (undefined1 ****)0x6b909f;
      local_190 = ppppuVar14;
      FUN_0066c3a0();
      local_198 = (undefined1 ****)0x0;
      FUN_0066db80(local_d8);
      local_190 = (undefined1 ****)0x6b90b6;
      FUN_0066dac0();
      if ((*(byte *)(iVar10 + 0x84) & 1) == 0) {
        local_190 = param_2;
        local_194 = (undefined1 ****)0x6b914d;
        FUN_006bae20();
        ppppuVar14 = (undefined1 ****)(*(int *)(param_1 + 0x104) + -1);
        ppppuVar12 = extraout_ECX;
        do {
          if ((int)ppppuVar14 < 0) {
            ppppuVar14 = *(undefined1 *****)(iVar10 + 0x88);
          }
          else {
            iVar15 = param_1 + 0x10c + (int)ppppuVar14 * 0x44;
            iVar10 = local_14c;
            if (*(int *)(param_1 + 0x110 + (int)ppppuVar14 * 0x44) != 0) {
              local_170 = (undefined1 ****)(local_13c * *(float *)(iVar15 + 0x28));
              local_198 = (undefined1 ****)(iVar15 + 0x3c);
              local_190 = *(char *****)(iVar15 + 0x2c);
              local_160 = (undefined1 ****)&local_194;
              local_194 = ppppuVar12;
              local_16c = local_170;
              FUN_00425250();
              local_198 = &local_f0;
              pppcVar8 = (char ***)&local_138;
              ppppcVar17 = (char ****)&local_170;
              uVar11 = FUN_0041b9f0(local_74,iVar15 + 0x30);
              FUN_0066e740(uVar11,ppppcVar17,pppcVar8);
              iVar10 = local_14c;
            }
          }
          ppppuVar14 = (undefined1 ****)((int)ppppuVar14 + -1);
          ppppuVar12 = (undefined1 ****)(*(int *)(param_1 + 0x104) + -1);
        } while (ppppuVar14 != ppppuVar12);
      }
      else {
        iVar15 = *(int *)(param_1 + 0x104) + -1;
        do {
          if (iVar15 < 0) {
            iVar15 = *(int *)(iVar10 + 0x88);
          }
          else {
            iVar5 = param_1 + 0x10c + iVar15 * 0x44;
            iVar10 = local_14c;
            if (*(int *)(param_1 + 0x110 + iVar15 * 0x44) != 0) {
              local_170 = (undefined1 ****)(local_13c * *(float *)(iVar5 + 0x28));
              local_198 = (undefined1 ****)(iVar5 + 0x3c);
              local_190 = *(char *****)(iVar5 + 0x2c);
              local_160 = (undefined1 ****)&local_194;
              local_194 = (undefined1 ****)(iVar15 * 0x11);
              local_16c = local_170;
              FUN_00425250();
              local_198 = &local_f0;
              FUN_0066e740(iVar5 + 0x30,&local_170,&local_138);
              iVar10 = local_14c;
            }
          }
          iVar15 = iVar15 + -1;
        } while (iVar15 != *(int *)(param_1 + 0x104) + -1);
      }
    }
    else {
      local_190 = &local_114;
      local_194 = (undefined1 ****)0x0;
      local_198 = (undefined1 ****)0x6b86db;
      FUN_0065fce0();
      local_194 = (undefined1 ****)0x6b86e5;
      FUN_00672330();
      local_13c = local_13c * _DAT_006e936c;
      local_194 = (undefined1 ****)0x3;
      local_198 = (undefined1 ****)0x6b86fb;
      local_190 = ppppuVar14;
      FUN_0066c3a0();
      local_198 = (undefined1 ****)0x0;
      FUN_0066db80(local_d8);
      local_190 = (undefined1 ****)0x6b8712;
      FUN_0066dac0();
      if ((*(byte *)(iVar10 + 0x84) & 1) == 0) {
        local_190 = param_2;
        local_194 = (undefined1 ****)0x6b8adf;
        pfVar7 = (float *)FUN_006bae20();
        local_190 = &local_e4;
        local_194 = (char ****)(param_1 + 0x18);
        local_198 = (undefined1 ****)(param_1 + 0xc);
        local_e4 = (undefined1 ***)0x0;
        local_e0 = 0.0;
        local_dc = 0.0;
        FUN_0066bf90();
        local_190 = &local_bc;
        local_194 = (undefined1 ****)0x6b8b2d;
        local_194 = (char ****)FUN_006ba140();
        local_198 = local_4c;
        pppcVar8 = (char ***)FUN_0064e040();
        if ((&local_bc != (undefined1 ****)pppcVar8) && (pppcVar8 != pppcVar8 + 0x10)) {
          pfVar13 = local_b8 + 1;
          pppcVar9 = pppcVar8;
          do {
            pppcVar6 = pppcVar9 + 4;
            pfVar13[-2] = (float)*pppcVar9;
            pfVar13[-1] = (float)pppcVar9[1];
            *pfVar13 = (float)*(undefined4 *)(((int)pppcVar8 - (int)&local_bc) + (int)pfVar13);
            pfVar13[1] = (float)pppcVar9[3];
            pfVar13 = pfVar13 + 4;
            pppcVar9 = pppcVar6;
          } while (pppcVar6 != pppcVar8 + 0x10);
        }
        local_138 = (undefined1 ***)(*(int *)(param_1 + 0x104) + -1);
        iVar15 = local_14c;
        do {
          if ((int)local_138 < 0) {
            local_138 = *(undefined1 ****)(iVar15 + 0x88);
          }
          else {
            iVar10 = param_1 + 0x10c + (int)local_138 * 0x44;
            if (*(int *)(param_1 + 0x110 + (int)local_138 * 0x44) != 0) {
              local_17c = local_13c * *(float *)(iVar10 + 0x28);
              local_144 = *(undefined1 *****)(iVar10 + 0x1c);
              fVar1 = *(float *)(iVar15 + 0xb8) * *(float *)(iVar10 + 8);
              local_170 = (undefined1 ****)(fVar1 * *(float *)(iVar10 + 0x20));
              local_160 = (undefined1 ****)(fVar1 * *(float *)(iVar10 + 0x1c));
              fVar1 = fVar1 * *(float *)(iVar10 + 0x18) + *(float *)(iVar10 + 0x18);
              local_140 = (undefined1 ***)(*(float *)(iVar10 + 0x20) + (float)local_170);
              fVar3 = ((float)local_160 + (float)local_144) -
                      *(float *)(iVar15 + 0xb4) * *(float *)(iVar10 + 8);
              local_150 = (undefined1 ****)
                          (local_94 * (float)local_140 + local_b8[1] * fVar1 + local_b8[5] * fVar3 +
                          local_84);
              local_164 = (undefined1 ****)
                          ((float)local_140 * local_98 + local_b8[4] * fVar3 + local_b8[0] * fVar1 +
                          local_88);
              local_178 = (undefined1 ****)
                          ((float)local_140 * local_9c +
                           (float)local_bc * fVar1 + local_b8[3] * fVar3 + local_8c);
              local_190 = (char ****)
                          (DAT_006e92e8 /
                          SQRT((float)local_150 * (float)local_150 +
                               (float)local_164 * (float)local_164 +
                               (float)local_178 * (float)local_178));
              local_194 = (undefined1 ****)0x6b8cd4;
              local_174 = local_190;
              iVar15 = FUN_0064cf30();
              if (iVar15 == 0) {
                local_140 = (undefined1 ***)0x0;
                local_108 = DAT_006e92e4;
                local_104 = DAT_006e92e4;
              }
              else {
                local_140 = (undefined1 ***)((float)local_150 * (float)local_174);
                local_108 = (float)local_178 * (float)local_174;
                local_104 = (float)local_164 * (float)local_174;
              }
              local_f0 = (undefined1 ***)((float)local_114 * local_104 - local_110 * local_108);
              local_170 = (undefined1 ****)
                          (local_10c * local_108 - (float)local_140 * (float)local_114);
              local_160 = (undefined1 ****)(local_110 * (float)local_140 - local_10c * local_104);
              local_108 = local_108 * local_17c;
              local_104 = local_17c * local_104;
              local_100 = (float)local_140 * local_17c;
              local_15c = (float)local_160 * local_17c;
              local_158 = (float)local_170 * local_17c;
              local_154 = (float)local_f0 * local_17c;
              local_190 = (char ****)
                          (pfVar7[6] * *(float *)(iVar10 + 0x34) +
                           pfVar7[10] * *(float *)(iVar10 + 0x38) +
                           pfVar7[2] * *(float *)(iVar10 + 0x30) + pfVar7[0xe]);
              local_194 = (char ****)
                          (pfVar7[5] * *(float *)(iVar10 + 0x34) +
                           pfVar7[9] * *(float *)(iVar10 + 0x38) +
                           pfVar7[1] * *(float *)(iVar10 + 0x30) + pfVar7[0xd]);
              local_198 = (undefined1 ****)
                          (*(float *)(iVar10 + 0x30) * *pfVar7 +
                           pfVar7[4] * *(float *)(iVar10 + 0x34) +
                           pfVar7[8] * *(float *)(iVar10 + 0x38) + pfVar7[0xc]);
              FUN_00401f00();
              local_12c = (undefined1 ***)((float)local_fc + local_108);
              local_160 = (undefined1 ****)&local_190;
              local_128 = (float)local_f8 + local_104;
              local_190 = *(char *****)(iVar10 + 0x3c);
              local_124 = (float)local_f4 + local_100;
              local_120 = (undefined1 ****)((float)local_fc - local_108);
              local_11c = (undefined1 ****)((float)local_f8 - local_104);
              local_118 = (undefined1 ***)((float)local_f4 - local_100);
              local_194 = (undefined1 ****)0x6b8e9b;
              FUN_0066ddd0();
              local_194 = (undefined1 ****)0x0;
              local_198 = (undefined1 ****)0x3f800000;
              FUN_0066dd10();
              ppppuVar14 = (undefined1 ****)(local_124 - local_154);
              ppppuVar12 = (undefined1 ****)(local_128 - local_158);
              local_198 = (undefined1 ****)((float)local_12c - local_15c);
              local_194 = ppppuVar12;
              local_190 = ppppuVar14;
              local_178 = local_198;
              local_170 = ppppuVar12;
              local_160 = ppppuVar14;
              FUN_00401f00();
              local_190 = &local_e4;
              local_194 = (undefined1 ****)0x6b8ef6;
              FUN_0066de80();
              local_194 = (undefined1 ****)0x0;
              local_198 = (undefined1 ****)0x0;
              FUN_0066dd10();
              local_190 = (char ****)((float)local_118 - local_154);
              local_194 = (char ****)((float)local_11c - local_158);
              local_198 = (undefined1 ****)((float)local_120 - local_15c);
              FUN_00401f00();
              local_190 = (char ****)&local_d4;
              local_194 = (undefined1 ****)0x6b8f3e;
              FUN_0066de80();
              local_194 = (undefined1 ****)0x3f800000;
              local_198 = (undefined1 ****)0x0;
              FUN_0066dd10();
              local_190 = (char ****)((float)local_118 + local_154);
              local_194 = (char ****)((float)local_11c + local_158);
              local_198 = (undefined1 ****)((float)local_120 + local_15c);
              local_174 = local_198;
              local_164 = local_190;
              local_150 = local_194;
              FUN_00401f00();
              local_190 = (char ****)&local_c8;
              local_194 = (undefined1 ****)0x6b8f9c;
              FUN_0066de80();
              local_194 = (undefined1 ****)0x0;
              local_198 = (undefined1 ****)0x3f800000;
              FUN_0066dd10();
              local_198 = local_178;
              local_194 = ppppuVar12;
              local_190 = ppppuVar14;
              FUN_00401f00();
              local_190 = local_64;
              local_194 = (undefined1 ****)0x6b8fcb;
              FUN_0066de80();
              local_194 = (undefined1 ****)0x3f800000;
              local_198 = (undefined1 ****)0x0;
              FUN_0066dd10();
              local_190 = local_164;
              local_194 = local_150;
              local_198 = local_174;
              FUN_00401f00();
              local_190 = local_58;
              local_194 = (undefined1 ****)0x6b9002;
              FUN_0066de80();
              local_194 = (undefined1 ****)0x3f800000;
              local_198 = (undefined1 ****)0x3f800000;
              FUN_0066dd10();
              local_190 = (char ****)(local_154 + local_124);
              local_194 = (char ****)(local_158 + local_128);
              local_198 = (undefined1 ****)((float)local_12c + local_15c);
              FUN_00401f00();
              local_190 = local_74;
              local_194 = (undefined1 ****)0x6b904d;
              FUN_0066de80();
              iVar15 = local_14c;
            }
          }
          local_138 = (undefined1 ***)((int)local_138 + -1);
        } while (local_138 != (undefined1 ***)(*(int *)(param_1 + 0x104) + -1));
      }
      else {
        iVar15 = *(int *)(param_1 + 0x104) + -1;
        do {
          if (iVar15 < 0) {
            iVar15 = *(int *)(local_14c + 0x88);
          }
          else {
            iVar10 = param_1 + 0x10c + iVar15 * 0x44;
            if (*(int *)(param_1 + 0x110 + iVar15 * 0x44) != 0) {
              local_17c = local_13c * *(float *)(iVar10 + 0x28);
              fVar1 = *(float *)(local_14c + 0xb8) * *(float *)(iVar10 + 8);
              local_178 = (undefined1 ****)(fVar1 * *(float *)(iVar10 + 0x20));
              local_138 = (undefined1 ***)(fVar1 * *(float *)(iVar10 + 0x1c));
              local_148 = (undefined1 ****)
                          (fVar1 * *(float *)(iVar10 + 0x18) + *(float *)(iVar10 + 0x18));
              local_140 = (undefined1 ***)(*(float *)(iVar10 + 0x20) + (float)local_178);
              local_144 = (undefined1 ****)
                          (((float)local_138 + *(float *)(iVar10 + 0x1c)) -
                          *(float *)(local_14c + 0xb4) * *(float *)(iVar10 + 8));
              local_190 = (char ****)
                          (DAT_006e92e8 /
                          SQRT((float)local_144 * (float)local_144 +
                               (float)local_148 * (float)local_148 +
                               (float)local_140 * (float)local_140));
              local_194 = (undefined1 ****)0x6b87f5;
              local_174 = local_190;
              iVar5 = FUN_0064cf30();
              if (iVar5 == 0) {
                local_140 = (undefined1 ***)0x0;
                fVar1 = DAT_006e92e4;
                fVar3 = DAT_006e92e4;
              }
              else {
                local_140 = (undefined1 ***)((float)local_140 * (float)local_174);
                fVar1 = (float)local_148 * (float)local_174;
                fVar3 = (float)local_174 * (float)local_144;
              }
              local_160 = (undefined1 ****)&local_190;
              local_108 = fVar1 * local_17c;
              fVar4 = fVar3 * local_17c;
              fVar2 = (float)local_140 * local_17c;
              local_15c = (local_110 * (float)local_140 - local_10c * fVar3) * local_17c;
              local_158 = (local_10c * fVar1 - (float)local_140 * (float)local_114) * local_17c;
              local_154 = ((float)local_114 * fVar3 - local_110 * fVar1) * local_17c;
              local_150 = (undefined1 ****)(fVar2 + *(float *)(iVar10 + 0x38));
              local_174 = (undefined1 ****)(fVar4 + *(float *)(iVar10 + 0x34));
              local_17c = local_108 + *(float *)(iVar10 + 0x30);
              local_138 = (undefined1 ***)(*(float *)(iVar10 + 0x38) - fVar2);
              local_178 = (undefined1 ****)(*(float *)(iVar10 + 0x34) - fVar4);
              local_164 = (undefined1 ****)(*(float *)(iVar10 + 0x30) - local_108);
              local_190 = *(char *****)(iVar10 + 0x3c);
              local_194 = (undefined1 ****)0x6b8915;
              FUN_0066ddd0();
              local_194 = (undefined1 ****)0x0;
              local_198 = (undefined1 ****)0x3f800000;
              FUN_0066dd10();
              local_f4 = (undefined1 ***)((float)local_150 - local_154);
              local_170 = (undefined1 ****)((float)local_174 - local_158);
              local_160 = (undefined1 ****)(local_17c - local_15c);
              local_fc = local_160;
              local_f8 = local_170;
              local_f0 = local_f4;
              FUN_0066de80(&local_fc);
              FUN_0066dd10(0,0);
              local_124 = (float)local_138 - local_154;
              local_128 = (float)local_178 - local_158;
              local_12c = (undefined1 ***)((float)local_164 - local_15c);
              FUN_0066de80(&local_12c);
              FUN_0066dd10(0,0x3f800000);
              local_138 = (undefined1 ***)(local_154 + (float)local_138);
              local_178 = (undefined1 ****)(local_158 + (float)local_178);
              local_164 = (undefined1 ****)((float)local_164 + local_15c);
              local_120 = local_164;
              local_11c = local_178;
              local_118 = local_138;
              FUN_0066de80(&local_120);
              FUN_0066dd10(0x3f800000,0);
              local_c4 = local_170;
              local_c8 = local_160;
              local_c0 = local_f0;
              FUN_0066de80(&local_c8);
              FUN_0066dd10(0,0x3f800000);
              local_d0 = local_178;
              local_d4 = local_164;
              local_cc = local_138;
              FUN_0066de80(&local_d4);
              local_190 = (undefined1 ****)0x3f800000;
              local_194 = (undefined1 ****)0x3f800000;
              local_198 = (undefined1 ****)0x6b8a85;
              FUN_0066dd10();
              local_dc = local_154 + (float)local_150;
              local_e0 = local_158 + (float)local_174;
              local_e4 = (undefined1 ***)(local_17c + local_15c);
              local_198 = &local_e4;
              FUN_0066de80();
            }
          }
          iVar15 = iVar15 + -1;
        } while (iVar15 != *(int *)(param_1 + 0x104) + -1);
      }
    }
    local_190 = (undefined1 ****)0x6b91e5;
    FUN_0066d9a0();
    if (DAT_00815cb4 != 0) {
      if (DAT_00815ca8 != 0) {
        if ((*(byte *)(local_14c + 0x84) & 1) == 0) {
          local_190 = param_2;
          local_194 = (undefined1 ****)0x6b9265;
          local_160 = (undefined1 ****)FUN_006bae20();
          iVar15 = 0;
          if (0 < *(int *)(param_1 + 0x108)) {
            ppppuVar14 = (undefined1 ****)(param_1 + 0x13c);
            do {
              if (ppppuVar14[-0xb] != (undefined1 ***)0x0) {
                local_170 = (undefined1 ****)&local_190;
                local_198 = local_74;
                local_190 = (undefined1 ****)0xffffffff;
                local_194 = ppppuVar14;
                local_194 = (char ****)FUN_0041b9f0();
                local_198 = (undefined1 ****)0x6b92ae;
                FUN_0066a810();
              }
              iVar15 = iVar15 + 1;
              ppppuVar14 = ppppuVar14 + 0x11;
            } while (iVar15 < *(int *)(param_1 + 0x108));
          }
        }
        else {
          iVar15 = 0;
          if (0 < *(int *)(param_1 + 0x108)) {
            ppppuVar14 = (undefined1 ****)(param_1 + 0x13c);
            do {
              if (ppppuVar14[-0xb] != (undefined1 ***)0x0) {
                local_160 = (undefined1 ****)&local_190;
                local_190 = (undefined1 ****)0xffffffff;
                local_198 = (undefined1 ****)0x6b9243;
                local_194 = ppppuVar14;
                FUN_0066a810();
              }
              iVar15 = iVar15 + 1;
              ppppuVar14 = ppppuVar14 + 0x11;
            } while (iVar15 < *(int *)(param_1 + 0x108));
          }
        }
      }
      if (DAT_00815ca4 != 0) {
        if ((*(byte *)(local_14c + 0x84) & 0x20) == 0) {
          local_190 = (undefined1 ****)0x20000008;
          local_194 = (char ****)0x7;
          local_138 = (undefined1 ***)0x0;
          local_134 = 0;
          local_f0 = (undefined1 ***)0x3f800000;
          local_ec = 1.0;
          local_198 = (undefined1 ****)0x6b99d0;
          FUN_0066c3a0();
          if ((*(byte *)(local_14c + 0x84) & 1) == 0) {
            local_190 = param_2;
            local_194 = (char ****)0x6b9a60;
            FUN_006bae20();
            iVar15 = 0;
            if (0 < *(int *)(param_1 + 0x108)) {
              pfVar7 = (float *)(param_1 + 0x134);
              do {
                if (pfVar7[-9] != 0.0) {
                  local_194 = (char ****)pfVar7[1];
                  local_170 = (undefined1 ****)(local_13c * *pfVar7);
                  local_160 = (undefined1 ****)&local_194;
                  local_198 = (undefined1 ****)0xff0000ff;
                  local_190 = local_194;
                  local_16c = local_170;
                  FUN_00406b70();
                  local_198 = &local_f0;
                  pppcVar8 = (char ***)&local_138;
                  ppppcVar17 = (char ****)&local_170;
                  uVar11 = FUN_0041b9f0(local_74,pfVar7 + 2);
                  FUN_0066e740(uVar11,ppppcVar17,pppcVar8);
                }
                iVar15 = iVar15 + 1;
                pfVar7 = pfVar7 + 0x11;
              } while (iVar15 < *(int *)(param_1 + 0x108));
            }
          }
          else {
            iVar15 = 0;
            if (0 < *(int *)(param_1 + 0x108)) {
              pfVar7 = (float *)(param_1 + 0x134);
              do {
                if (pfVar7[-9] != 0.0) {
                  local_194 = (char ****)pfVar7[1];
                  local_170 = (undefined1 ****)(local_13c * *pfVar7);
                  local_160 = (undefined1 ****)&local_194;
                  local_198 = (undefined1 ****)0xff0000ff;
                  local_190 = local_194;
                  local_16c = local_170;
                  FUN_00406b70();
                  local_198 = &local_f0;
                  FUN_0066e740(pfVar7 + 2,&local_170,&local_138);
                }
                iVar15 = iVar15 + 1;
                pfVar7 = pfVar7 + 0x11;
              } while (iVar15 < *(int *)(param_1 + 0x108));
            }
          }
        }
        else {
          local_190 = (undefined1 ****)0x28;
          local_194 = (undefined1 ****)0x5;
          local_198 = (undefined1 ****)0x6b92e6;
          FUN_0066c3a0();
          local_190 = (undefined1 ****)0x6b92ee;
          FUN_0066dac0();
          local_190 = (char ****)&local_fc;
          local_194 = (undefined1 ****)0x0;
          local_198 = (undefined1 ****)0x6b92fd;
          FUN_0065fce0();
          local_194 = (undefined1 ****)0x6b9307;
          FUN_00672330();
          local_190 = param_2;
          local_194 = (char ****)0x6b9316;
          pfVar7 = (float *)FUN_006bae20();
          if ((*(byte *)(local_14c + 0x84) & 1) == 0) {
            local_198 = *(undefined1 *****)(param_1 + 0x18);
            local_190 = (char ****)&local_178;
            local_194 = &local_138;
            FUN_0064c8e0();
            FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&local_17c,&local_174);
            FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),&local_164,&local_150);
            local_bc = (undefined1 ***)
                       (((float)local_150 * (float)local_174 +
                        (float)local_164 * (float)local_138 * local_17c) * *(float *)(param_1 + 0xc)
                       );
            local_b8[0] = (float)local_164 * (float)local_178 * *(float *)(param_1 + 0xc);
            local_b8[1] = ((float)local_164 * (float)local_138 * (float)local_174 -
                          (float)local_150 * local_17c) * *(float *)(param_1 + 0xc);
            local_b8[3] = (local_17c * (float)local_150 * (float)local_138 -
                          (float)local_164 * (float)local_174) * *(float *)(param_1 + 0x10);
            local_b8[4] = (float)local_150 * (float)local_178 * *(float *)(param_1 + 0x10);
            local_b8[5] = ((float)local_164 * local_17c +
                          (float)local_150 * (float)local_138 * (float)local_174) *
                          *(float *)(param_1 + 0x10);
            local_9c = local_17c * (float)local_178 * *(float *)(param_1 + 0x14);
            local_98 = -(float)local_138 * *(float *)(param_1 + 0x14);
            local_94 = (float)local_174 * (float)local_178 * *(float *)(param_1 + 0x14);
            local_190 = &local_bc;
            local_8c = 0.0;
            local_88 = 0.0;
            local_84 = 0.0;
            local_b8[2] = 0.0;
            local_a0 = 0;
            local_90 = 0;
            local_80 = 0x3f800000;
            local_194 = (undefined1 ****)0x6b9494;
            local_194 = (char ****)FUN_006ba140();
            local_198 = local_4c;
            pppcVar8 = (char ***)FUN_0064e040();
            if ((&local_bc != (undefined1 ****)pppcVar8) && (pppcVar8 != pppcVar8 + 0x10)) {
              pfVar13 = local_b8 + 1;
              pppcVar9 = pppcVar8;
              do {
                pppcVar6 = pppcVar9 + 4;
                pfVar13[-2] = (float)*pppcVar9;
                pfVar13[-1] = (float)pppcVar9[1];
                *pfVar13 = (float)*(undefined4 *)(((int)pppcVar8 - (int)&local_bc) + (int)pfVar13);
                pfVar13[1] = (float)pppcVar9[3];
                pfVar13 = pfVar13 + 4;
                pppcVar9 = pppcVar6;
              } while (pppcVar6 != pppcVar8 + 0x10);
            }
          }
          iVar15 = 0;
          if (0 < *(int *)(param_1 + 0x108)) {
            pfVar13 = (float *)(param_1 + 0x144);
            do {
              if (pfVar13[-0xd] != 0.0) {
                local_17c = local_13c * pfVar13[-4];
                local_170 = (undefined1 ****)pfVar13[-8];
                local_16c = (undefined1 ****)pfVar13[-7];
                fVar1 = *(float *)(local_14c + 0xb8) * pfVar13[-0xc];
                local_168 = (undefined1 ***)pfVar13[-6];
                local_190 = (char ****)(fVar1 * pfVar13[-6]);
                local_194 = (char ****)(fVar1 * pfVar13[-7]);
                local_198 = (undefined1 ****)(fVar1 * pfVar13[-8]);
                FUN_00401f00();
                local_170 = (undefined1 ****)((float)local_e4 + (float)local_170);
                local_168 = (undefined1 ***)((float)local_168 + local_dc);
                local_16c = (undefined1 ****)
                            ((local_e0 + (float)local_16c) -
                            *(float *)(local_14c + 0xb4) * pfVar13[-0xc]);
                if ((*(byte *)(local_14c + 0x84) & 1) == 0) {
                  local_190 = (char ****)
                              (local_b8[1] * (float)local_170 +
                               (float)local_168 * local_94 + local_b8[5] * (float)local_16c +
                              local_84);
                  local_194 = (char ****)
                              (local_b8[0] * (float)local_170 +
                               (float)local_168 * local_98 + local_b8[4] * (float)local_16c +
                              local_88);
                  local_198 = (undefined1 ****)
                              ((float)local_170 * (float)local_bc +
                               (float)local_168 * local_9c + local_b8[3] * (float)local_16c +
                              local_8c);
                  FUN_00401f00();
                  local_170 = local_d4;
                  local_16c = local_d0;
                  local_168 = local_cc;
                }
                local_190 = (char ****)
                            (DAT_006e92e8 /
                            SQRT((float)local_170 * (float)local_170 +
                                 (float)local_168 * (float)local_168 +
                                 (float)local_16c * (float)local_16c));
                local_194 = (undefined1 ****)0x6b969c;
                local_178 = local_190;
                iVar10 = FUN_0064cf30();
                if (iVar10 == 0) {
                  local_170 = (undefined1 ****)0x0;
                  local_16c = (undefined1 ****)0x0;
                  local_168 = (undefined1 ***)0x0;
                }
                else {
                  local_170 = (undefined1 ****)((float)local_170 * (float)local_178);
                  local_16c = (undefined1 ****)((float)local_178 * (float)local_16c);
                  local_168 = (undefined1 ***)((float)local_168 * (float)local_178);
                }
                local_190 = (char ****)
                            ((float)local_fc * (float)local_16c - (float)local_f8 * (float)local_170
                            );
                local_194 = (char ****)
                            ((float)local_f4 * (float)local_170 - (float)local_168 * (float)local_fc
                            );
                local_198 = (undefined1 ****)
                            ((float)local_168 * (float)local_f8 - (float)local_f4 * (float)local_16c
                            );
                FUN_00401f00();
                local_15c = (float)local_170 * local_17c;
                local_158 = (float)local_16c * local_17c;
                local_154 = (float)local_168 * local_17c;
                local_114 = (undefined1 ***)((float)local_c8 * local_17c);
                local_110 = (float)local_c4 * local_17c;
                local_10c = (float)local_c0 * local_17c;
                if ((*(byte *)(local_14c + 0x84) & 1) == 0) {
                  local_190 = (char ****)
                              (pfVar7[2] * pfVar13[-2] +
                               pfVar7[6] * pfVar13[-1] + pfVar7[10] * *pfVar13 + pfVar7[0xe]);
                  local_194 = (char ****)
                              (pfVar7[1] * pfVar13[-2] +
                               pfVar7[5] * pfVar13[-1] + pfVar7[9] * *pfVar13 + pfVar7[0xd]);
                  local_198 = (undefined1 ****)
                              (*pfVar7 * pfVar13[-2] +
                               pfVar7[4] * pfVar13[-1] + pfVar7[8] * *pfVar13 + pfVar7[0xc]);
                  FUN_00401f00();
                  local_120 = (undefined1 ****)(local_108 + local_15c);
                  local_11c = (undefined1 ****)(local_104 + local_158);
                  local_118 = (undefined1 ***)(local_100 + local_154);
                  local_12c = (undefined1 ***)(local_108 - local_15c);
                  local_128 = local_104 - local_158;
                  local_124 = local_100 - local_154;
                }
                else {
                  local_190 = (char ****)(local_154 + *pfVar13);
                  local_194 = (char ****)(local_158 + pfVar13[-1]);
                  local_198 = (undefined1 ****)(local_15c + pfVar13[-2]);
                  FUN_00401f00();
                  local_190 = (char ****)(*pfVar13 - local_154);
                  local_11c = local_144;
                  local_194 = (char ****)(pfVar13[-1] - local_158);
                  local_120 = local_148;
                  local_118 = local_140;
                  local_198 = (undefined1 ****)(pfVar13[-2] - local_15c);
                  FUN_00401f00();
                  local_12c = local_f0;
                  local_128 = local_ec;
                  local_124 = local_e8;
                }
                local_190 = &local_114;
                local_194 = (char ****)&local_120;
                local_198 = local_74;
                uVar11 = FUN_00405080();
                FUN_0066de80(uVar11);
                uVar11 = FUN_00405080(local_58,&local_12c,&local_114);
                FUN_0066de80(uVar11);
                uVar11 = FUN_00402130(local_64,&local_12c,&local_114);
                FUN_0066de80(uVar11);
                uVar11 = FUN_00402130(&local_138,&local_120,&local_114);
                FUN_0066de80(uVar11);
              }
              iVar15 = iVar15 + 1;
              pfVar13 = pfVar13 + 0x11;
            } while (iVar15 < *(int *)(param_1 + 0x108));
          }
        }
        local_190 = (undefined1 ****)0x6b9adf;
        FUN_0066d9a0();
      }
      if (DAT_00815cac != 0) {
        local_198 = *(undefined1 *****)(param_1 + 0x100);
        local_194 = (char ****)&DAT_007328e4;
        local_160 = (undefined1 ****)&local_198;
        local_190 = local_198;
        FUN_00406b70(0xffffff00);
        param_1 = param_1 + 0x24;
        pppcVar8 = (char ***)local_74;
        FUN_006ba140(pppcVar8,param_1);
        uVar11 = FUN_0041b9f0(pppcVar8,param_1);
        FUN_0066ae20(uVar11);
      }
      local_190 = param_2;
      local_194 = (undefined1 ****)0x6b9b3c;
      FUN_006bb1e0();
    }
  }
  local_4 = 0xffffffff;
  local_190 = (undefined1 ****)0x6b9b53;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

