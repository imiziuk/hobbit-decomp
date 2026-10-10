
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048ede0(int *param_1,float param_2)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  int iStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160 [2];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined1 local_14c [8];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [12];
  undefined1 local_98 [40];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_58 [40];
  undefined1 auStack_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d30a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_internal__OnAdvanceLogic_00729834);
  param_1[4] = param_1[4] | 0x200000;
  DAT_0075cf7c = 0;
  local_4 = 0;
  if (((param_1[0x74] != 0) && (DAT_0075b674 != 0)) ||
     ((param_1[0x6e] == 0 && (param_1[0x6f] != 0)))) goto LAB_0048f87f;
  param_1[0x7c] = (int)param_2;
  param_1[0x6f] = 1;
  fVar10 = param_2 * (float)param_1[0x5c] * _DAT_006ed17c + (float)param_1[0x5a];
  bVar4 = DAT_006e92e8 <= fVar10;
  param_1[0x5a] = (int)fVar10;
  if (bVar4) {
    param_1[0x5a] = (int)(fVar10 - DAT_006e92e8);
  }
  iVar5 = param_1[0x58];
  iVar7 = param_1[0x59];
  if (iVar5 != 0 || iVar7 != 0) {
    local_198 = (float)param_1[0x5b] + (float)param_1[0x5a];
    if (DAT_006e92e8 < local_198) {
      local_198 = local_198 - DAT_006e92e8;
    }
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar5 = FUN_00406ce0(iVar5,iVar7);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar5 == -1) {
      FUN_00649720();
      goto LAB_0048f87f;
    }
    uVar3 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
    bVar2 = *(byte *)(uVar3 + 0x7f);
    FUN_00649720();
    fVar10 = local_198;
    if ((-(uint)((bVar2 & 0x10) != 0) & uVar3) == 0) goto LAB_0048f87f;
    FUN_004adc40(local_198,local_98);
    piVar6 = (int *)FUN_0064d8e0(local_58);
    param_1[0x4c] = *piVar6;
    param_1[0x4d] = piVar6[1];
    param_1[0x4e] = piVar6[2];
    param_1[0x4f] = piVar6[3];
    (**(code **)(*param_1 + 0x10c))(param_1 + 0x4c);
    FUN_00401f00(uStack_70,uStack_6c,uStack_68);
    pfVar1 = (float *)(param_1 + 5);
    FUN_00401f00(local_198 - *pfVar1,fStack_194 - (float)param_1[6],fStack_190 - (float)param_1[7]);
    param_1[0x69] = iStack_174;
    param_1[0x6a] = iStack_170;
    param_1[0x6b] = (int)fStack_16c;
    FUN_00401f00(uStack_70,uStack_6c,uStack_68);
    FUN_00401f00(local_198 + (float)param_1[100],fStack_194 + (float)param_1[0x65],
                 fStack_190 + (float)param_1[0x66]);
    (**(code **)(*param_1 + 0x110))(local_14c);
    if (param_1[0x74] == 1) {
      iVar5 = FUN_004ae8c0(fVar10);
      piVar6 = &DAT_007297b4;
      do {
        if (((piVar6[-1] <= iVar5) && (iVar5 < *piVar6)) &&
           (fVar8 = (float10)FUN_00647b30(0,0x3f800000),
           fVar8 < (float10)_DAT_006e9340 != (NAN(fVar8) || NAN((float10)_DAT_006e9340)))) {
          uStack_108 = 0;
          fStack_118 = 0.0;
          fStack_128 = 0.0;
          uStack_104 = 0;
          fStack_114 = 0.0;
          fStack_134 = 0.0;
          uStack_100 = 0;
          fStack_120 = 0.0;
          fStack_130 = 0.0;
          uStack_10c = 0;
          uStack_11c = 0;
          uStack_12c = 0;
          fStack_138 = 1.0;
          fStack_124 = 1.0;
          fStack_110 = 1.0;
          uStack_fc = 0x3f800000;
          FUN_0064c8e0(param_1[0x1a],local_160,&fStack_17c);
          FUN_0064c8e0(param_1[0x1b],&fStack_194,&local_198);
          FUN_0064c8e0(param_1[0x1c],&fStack_180,&fStack_184);
          fStack_138 = fStack_184 * local_198 + fStack_180 * local_160[0] * fStack_194;
          fStack_134 = fStack_180 * fStack_17c;
          fStack_130 = fStack_180 * local_160[0] * local_198 - fStack_184 * fStack_194;
          fStack_128 = fStack_194 * fStack_184 * local_160[0] - fStack_180 * local_198;
          fStack_124 = fStack_184 * fStack_17c;
          fStack_120 = fStack_184 * local_160[0] * local_198 + fStack_180 * fStack_194;
          fStack_118 = fStack_194 * fStack_17c;
          fStack_114 = -local_160[0];
          fStack_110 = local_198 * fStack_17c;
          FUN_00401f00(*pfVar1 + _DAT_006ed6f4,param_1[6],(float)param_1[7] + _DAT_006ed6f8);
          uStack_178 = uStack_ec;
          iStack_174 = uStack_e8;
          iStack_170 = uStack_e4;
          fStack_1a4 = 61.0;
          fStack_1a0 = 0.0;
          fStack_19c = 59.0;
          FUN_0041b9f0(&fStack_158,&fStack_1a4);
          fStack_1a4 = fStack_158;
          fStack_1a0 = fStack_154;
          fStack_19c = fStack_150;
          fVar10 = DAT_006e92e8 /
                   SQRT(fStack_154 * fStack_154 + fStack_150 * fStack_150 + fStack_158 * fStack_158)
          ;
          iVar7 = FUN_0064cf30(fVar10);
          if (iVar7 == 0) {
            fStack_1a4 = 0.0;
            fStack_1a0 = 0.0;
            fStack_19c = 0.0;
          }
          else {
            fStack_1a4 = fStack_1a4 * fVar10;
            fStack_1a0 = fStack_1a0 * fVar10;
            fStack_19c = fStack_19c * fVar10;
          }
          uStack_f8 = 0x3f800000;
          uStack_f4 = 0x3f800000;
          uStack_f0 = 0x3f800000;
          fVar8 = (float10)FUN_0064ca10(fStack_1a0,
                                        SQRT(fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4));
          fVar9 = (float10)FUN_0064ca10(fStack_1a4,fStack_19c);
          fStack_ac = (float)fVar9;
          uStack_a8 = 0;
          fStack_b0 = (float)-fVar8;
          FUN_00488d30(s_Sparks_007205e8,&uStack_178,&fStack_b0,&uStack_f8);
          FUN_00401f00(*pfVar1 - _DAT_006ed6f4,param_1[6],(float)param_1[7] + _DAT_006ed6f8);
          uStack_178 = uStack_bc;
          iStack_174 = uStack_b8;
          iStack_170 = uStack_b4;
          fStack_1a4 = -61.0;
          fStack_1a0 = 0.0;
          fStack_19c = 59.0;
          FUN_0041b9f0(&fStack_16c,&fStack_1a4);
          fStack_1a4 = fStack_16c;
          fStack_1a0 = fStack_168;
          fStack_19c = fStack_164;
          fVar10 = DAT_006e92e8 /
                   SQRT(fStack_168 * fStack_168 + fStack_164 * fStack_164 + fStack_16c * fStack_16c)
          ;
          iVar7 = FUN_0064cf30(fVar10);
          if (iVar7 == 0) {
            fStack_1a4 = 0.0;
            fStack_1a0 = 0.0;
            fStack_19c = 0.0;
          }
          else {
            fStack_1a4 = fVar10 * fStack_1a4;
            fStack_1a0 = fStack_1a0 * fVar10;
            fStack_19c = fStack_19c * fVar10;
          }
          uStack_d4 = 0x3f800000;
          uStack_d0 = 0x3f800000;
          uStack_cc = 0x3f800000;
          fVar8 = (float10)FUN_0064ca10(fStack_1a0,
                                        SQRT(fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4));
          fVar9 = (float10)FUN_0064ca10(fStack_1a4,fStack_19c);
          fStack_c4 = (float)fVar9;
          uStack_c0 = 0;
          fStack_c8 = (float)-fVar8;
          FUN_00488d30(s_Sparks_007205e8,&uStack_178,&fStack_c8,&uStack_d4);
          FUN_00401f00(*pfVar1 + _DAT_006ed6f4,param_1[6],(float)param_1[7] - _DAT_006ed6f8);
          uStack_178 = uStack_e0;
          iStack_174 = iStack_dc;
          iStack_170 = iStack_d8;
          fStack_1a4 = 61.0;
          fStack_1a0 = 0.0;
          fStack_19c = -59.0;
          FUN_0041b9f0(&fStack_190,&fStack_1a4);
          fStack_1a4 = fStack_190;
          fStack_1a0 = fStack_18c;
          fStack_19c = fStack_188;
          fVar10 = DAT_006e92e8 /
                   SQRT(fStack_190 * fStack_190 + fStack_18c * fStack_18c + fStack_188 * fStack_188)
          ;
          iVar7 = FUN_0064cf30(fVar10);
          if (iVar7 == 0) {
            fStack_1a4 = 0.0;
            fStack_1a0 = 0.0;
            fStack_19c = 0.0;
          }
          else {
            fStack_1a4 = fVar10 * fStack_1a4;
            fStack_1a0 = fStack_1a0 * fVar10;
            fStack_19c = fStack_19c * fVar10;
          }
          uVar11 = 0;
          uStack_144 = 0x3f800000;
          uStack_140 = 0x3f800000;
          uStack_13c = 0x3f800000;
          fVar8 = (float10)FUN_0064ca10(fStack_1a4,fStack_19c,0,&uStack_144);
          fVar10 = (float)fVar8;
          fVar8 = (float10)FUN_00491460(fVar10);
          uVar11 = FUN_00401f00((float)fVar8,fVar10,uVar11);
          FUN_00488d30(s_Sparks_007205e8,&uStack_178,uVar11);
          uVar11 = FUN_00401f00(0xc2740000,0,0xc26c0000);
          uVar11 = FUN_00402130(auStack_30,pfVar1,uVar11);
          FUN_004357e0(uVar11);
          uVar11 = FUN_00401f00(0xc2740000,0,0xc26c0000);
          FUN_004357e0(uVar11);
          FUN_0041b9f0(auStack_a4,&fStack_1a4);
          FUN_004357e0(auStack_a4);
          FUN_0042e1f0();
          fVar8 = (float10)FUN_0064ca10(fStack_1a4,fStack_19c);
          fVar10 = (float)fVar8;
          uVar11 = FUN_00401f00(0x3f800000,0x3f800000,0x3f800000);
          uVar12 = 0;
          fVar8 = (float10)FUN_00491460(fVar10,0,uVar11);
          uVar11 = FUN_00401f00((float)fVar8,fVar10,uVar12);
          FUN_00488d30(s_Sparks_007205e8,&uStack_178,uVar11);
        }
        piVar6 = piVar6 + 2;
      } while ((int)piVar6 < 0x7297e4);
      iVar5 = FUN_0065a290(param_1[0x75],pfVar1);
      if (iVar5 == 0) {
        iVar5 = FUN_00659630(s_MineCartMovement_Loop_0072981c,pfVar1,1);
        param_1[0x75] = iVar5;
      }
    }
  }
  if (param_1[0x5d] != 0) {
    if (param_1[0x77] != DAT_007297a8) {
      if (param_1[0x78] == 4) {
        FUN_00491450(5);
      }
      param_1[0x77] = DAT_007297a8;
    }
    FUN_004912a0();
  }
LAB_0048f87f:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

