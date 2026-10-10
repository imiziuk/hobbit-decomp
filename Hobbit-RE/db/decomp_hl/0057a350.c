
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0057a350(float *param_1,float *param_2,float *param_3,float param_4,float param_5,float *param_6
            ,float *param_7)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float10 fVar16;
  float local_168;
  int local_164;
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
  int local_134;
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
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [21];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbd7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_C_TIntersect__00740424);
  local_128 = param_5 * param_5;
  local_4 = 0;
  local_7c = param_1[2] - param_3[2];
  local_80 = param_1[1] - param_3[1];
  local_84 = *param_1 - *param_3;
  local_70 = param_1[5] - param_3[2];
  local_74 = param_1[4] - param_3[1];
  local_78 = param_1[3] - *param_3;
  local_64 = param_1[8] - param_3[2];
  local_68 = param_1[7] - param_3[1];
  local_6c = param_1[6] - *param_3;
  local_150 = *param_2;
  local_14c = param_2[1];
  local_148 = param_2[2];
  fVar16 = (float10)FUN_00402020(&local_84);
  local_144 = (float)-fVar16;
  pfVar15 = &local_80;
  local_134 = 3;
  pfVar11 = local_60 + 3;
  iVar9 = 0;
  pfVar14 = &local_6c;
  do {
    pfVar1 = pfVar15 + -1;
    pfVar10 = pfVar11;
    iVar13 = iVar9;
    if (pfVar14[1] < DAT_006e92e4 == (NAN(pfVar14[1]) || NAN(DAT_006e92e4))) {
      fVar7 = *pfVar15;
      if (pfVar14[1] <= param_4) {
        *pfVar11 = *pfVar14;
        pfVar11[1] = pfVar14[1];
        pfVar11[2] = pfVar14[2];
        iVar13 = iVar9 + 1;
        pfVar10 = pfVar11 + 3;
        if (fVar7 < DAT_006e92e4 != (NAN(fVar7) || NAN(DAT_006e92e4))) {
          fVar7 = -pfVar14[1] / (*pfVar15 - pfVar14[1]);
          FUN_00401f00(*pfVar1 - *pfVar14,*pfVar15 - pfVar14[1],pfVar15[1] - pfVar14[2]);
          FUN_00401f00(local_c0 * fVar7,local_bc * fVar7,local_b8 * fVar7);
          FUN_00401f00(local_108 + *pfVar14,local_104 + pfVar14[1],local_100 + pfVar14[2]);
          *pfVar10 = local_fc;
          iVar13 = iVar9 + 2;
          pfVar11[5] = local_f4;
          pfVar10 = pfVar11 + 6;
          pfVar11[4] = local_f8;
        }
        if (param_4 < *pfVar15) {
          fVar7 = (param_4 - pfVar14[1]) / (*pfVar15 - pfVar14[1]);
          FUN_00401f00(*pfVar1 - *pfVar14,*pfVar15 - pfVar14[1],pfVar15[1] - pfVar14[2]);
          FUN_00401f00(local_e4 * fVar7,local_e0 * fVar7,local_dc * fVar7);
          FUN_00401f00(local_120 + *pfVar14,local_11c + pfVar14[1],local_118 + pfVar14[2]);
          *pfVar10 = local_140;
          fVar7 = local_138;
          fVar8 = local_13c;
          pfVar11 = pfVar10;
          goto LAB_0057a96f;
        }
      }
      else {
        if (fVar7 < param_4 != (NAN(fVar7) || NAN(param_4))) {
          fVar7 = (param_4 - pfVar14[1]) / (*pfVar15 - pfVar14[1]);
          FUN_00401f00(*pfVar1 - *pfVar14,*pfVar15 - pfVar14[1],pfVar15[1] - pfVar14[2]);
          FUN_00401f00(local_9c * fVar7,local_98 * fVar7,local_94 * fVar7);
          FUN_00401f00(local_114 + *pfVar14,local_110 + pfVar14[1],local_10c + pfVar14[2]);
          *pfVar11 = local_f0;
          iVar13 = iVar9 + 1;
          pfVar11[2] = local_e8;
          pfVar10 = pfVar11 + 3;
          pfVar11[1] = local_ec;
        }
        if (*pfVar15 < DAT_006e92e4 != (NAN(*pfVar15) || NAN(DAT_006e92e4))) {
          fVar7 = -pfVar14[1] / (*pfVar15 - pfVar14[1]);
          FUN_00401f00(*pfVar1 - *pfVar14,*pfVar15 - pfVar14[1],pfVar15[1] - pfVar14[2]);
          FUN_00401f00(local_a8 * fVar7,local_a4 * fVar7,local_a0 * fVar7);
          FUN_00401f00(local_d8 + *pfVar14,local_d4 + pfVar14[1],local_d0 + pfVar14[2]);
          *pfVar10 = local_60[0];
          fVar7 = local_60[2];
          fVar8 = local_60[1];
          pfVar11 = pfVar10;
LAB_0057a96f:
          iVar13 = iVar13 + 1;
          pfVar11[1] = fVar8;
          pfVar10 = pfVar11 + 3;
          pfVar11[2] = fVar7;
        }
      }
    }
    else {
      if (DAT_006e92e4 < *pfVar15) {
        fVar7 = -pfVar14[1] / (*pfVar15 - pfVar14[1]);
        local_124 = (*pfVar15 - pfVar14[1]) * fVar7;
        FUN_00401f00(fVar7 * (*pfVar1 - *pfVar14) + *pfVar14,local_124 + pfVar14[1],
                     (pfVar15[1] - pfVar14[2]) * fVar7 + pfVar14[2]);
        *pfVar11 = local_15c;
        iVar13 = iVar9 + 1;
        pfVar11[1] = local_158;
        pfVar10 = pfVar11 + 3;
        pfVar11[2] = local_154;
      }
      if (param_4 < *pfVar15) {
        fVar7 = (param_4 - pfVar14[1]) / (*pfVar15 - pfVar14[1]);
        FUN_00401f00(*pfVar1 - *pfVar14,*pfVar15 - pfVar14[1],pfVar15[1] - pfVar14[2]);
        FUN_00401f00(local_90 * fVar7,local_8c * fVar7,local_88 * fVar7);
        FUN_00401f00(local_cc + *pfVar14,local_c8 + pfVar14[1],local_c4 + pfVar14[2]);
        *pfVar10 = local_b4;
        fVar7 = local_ac;
        fVar8 = local_b0;
        pfVar11 = pfVar10;
        goto LAB_0057a96f;
      }
    }
    pfVar15 = pfVar15 + 3;
    local_134 = local_134 + -1;
    pfVar11 = pfVar10;
    iVar9 = iVar13;
    pfVar14 = pfVar1;
  } while (local_134 != 0);
  iVar9 = 0;
  iVar12 = 0;
  local_164 = 0;
  if (0 < iVar13) {
    pfVar15 = local_60;
    pfVar11 = local_60 + iVar13 * 3;
    do {
      pfVar15 = pfVar15 + 3;
      fVar7 = *pfVar15 - *pfVar11;
      fVar8 = pfVar15[2] - pfVar11[2];
      local_168 = -(fVar7 * *pfVar11 + pfVar11[2] * fVar8) / (fVar7 * fVar7 + fVar8 * fVar8);
      if (local_168 <= DAT_006e92e8) {
        if (local_168 < DAT_006e92e4 != (NAN(local_168) || NAN(DAT_006e92e4))) {
          local_168 = 0.0;
        }
      }
      else {
        local_168 = 1.0;
      }
      fVar5 = local_168 * fVar7 + *pfVar11;
      fVar4 = local_168 * fVar8 + pfVar11[2];
      fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
      if (fVar4 < local_128 != (NAN(fVar4) || NAN(local_128))) {
        FUN_00401f00(*pfVar15 - *pfVar11,pfVar15[1] - pfVar11[1],pfVar15[2] - pfVar11[2]);
        FUN_00401f00(local_140 * local_168,local_13c * local_168,local_138 * local_168);
        FUN_00401f00(local_140 + *pfVar11,local_13c + pfVar11[1],local_138 + pfVar11[2]);
        *param_6 = local_15c;
        bVar2 = NAN(DAT_006e92e4);
        bVar3 = local_14c < DAT_006e92e4;
        param_6[1] = local_158;
        param_6[2] = local_154;
        fVar7 = local_14c;
        if (bVar3 != (NAN(local_14c) || bVar2)) {
          fVar7 = -local_14c;
        }
        if (fVar7 < _DAT_006e95a8 == (NAN(fVar7) || NAN(_DAT_006e95a8))) {
          if ((local_158 < DAT_006e92e8 != (local_158 == DAT_006e92e8)) ||
             (param_4 - DAT_006e92e8 < local_158 != (param_4 - DAT_006e92e8 == local_158))) {
            *param_7 = local_150;
            param_7[1] = local_14c;
            param_7[2] = local_148;
            FUN_0042faf0(param_3);
            goto LAB_0057ad97;
          }
          FUN_00401f00(-local_15c,-local_158,-local_154);
          *param_7 = local_140;
          param_7[2] = local_138;
          param_7[1] = 0.0;
          FUN_0042e1f0();
          fVar16 = (float10)FUN_00402020(&local_150);
          if ((float10)_DAT_006e99a8 < fVar16) {
            FUN_004357e0(&local_150);
          }
        }
        else {
          FUN_00401f00(-local_15c,-local_158,-local_154);
          *param_7 = local_15c;
          param_7[2] = local_154;
          param_7[1] = 0.0;
          fVar7 = DAT_006e92e8 / SQRT(local_15c * local_15c + local_154 * local_154);
          iVar9 = FUN_0064cf30(fVar7);
          if (iVar9 == 0) {
            *param_7 = 0.0;
            param_7[1] = 0.0;
            param_7[2] = 0.0;
          }
          else {
            *param_7 = fVar7 * *param_7;
            param_7[1] = fVar7 * param_7[1];
            param_7[2] = fVar7 * param_7[2];
          }
          if (_DAT_006e99a8 < local_14c * param_7[1] + local_148 * param_7[2] + local_150 * *param_7
             ) {
            *param_7 = local_150;
            param_7[2] = local_148;
            param_7[1] = local_14c;
            FUN_0042faf0(param_3);
            goto LAB_0057ad97;
          }
        }
        FUN_0042faf0(param_3);
        goto LAB_0057ad97;
      }
      fVar7 = fVar8 * *pfVar11 - pfVar11[2] * fVar7;
      if (fVar7 < DAT_006e92e4 == (fVar7 == DAT_006e92e4)) {
        iVar12 = iVar12 + 1;
      }
      else {
        local_164 = local_164 + 1;
      }
      iVar9 = iVar9 + 1;
      pfVar11 = pfVar15;
    } while (iVar9 < iVar13);
  }
  if (local_14c < DAT_006e92e4 == (NAN(local_14c) || NAN(DAT_006e92e4))) {
    if (0 < iVar12) goto LAB_0057ad5a;
    FUN_004357e0(param_3);
  }
  else {
    if (0 < local_164) {
LAB_0057ad5a:
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 0;
    }
    uVar6 = FUN_00401f00(0,param_4,0);
    uVar6 = FUN_00402130(&local_120,param_3,uVar6);
    FUN_004357e0(uVar6);
  }
  FUN_004357e0(&local_150);
LAB_0057ad97:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

