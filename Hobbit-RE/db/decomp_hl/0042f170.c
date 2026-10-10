
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0042f170(int *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,
            int param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float fVar8;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  uint uStack_dc;
  int local_d8;
  float fStack_d4;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [28];
  float fStack_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf683;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__EdgeGrab_HandleMove_00720ecc);
  iVar5 = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_130 = *param_3;
  local_12c = param_3[1];
  local_128 = param_3[2];
  local_4 = 0;
  fVar8 = local_128 * local_128 + local_12c * local_12c + local_130 * local_130;
  if (fVar8 < _DAT_006ebfe4 == (NAN(fVar8) || NAN(_DAT_006ebfe4))) {
    local_104 = 0;
    if (param_6 == 0) {
      local_104 = 0x2800401;
    }
    else if (param_6 == 1) {
      local_104 = 1;
    }
    else if (param_6 == 2) {
      local_104 = 0x8800;
    }
    while( true ) {
      local_a4 = *param_2;
      local_a0 = param_2[1];
      local_9c = param_2[2];
      iVar5 = iVar5 + 1;
      fVar8 = SQRT(local_128 * local_128 + local_12c * local_12c + local_130 * local_130);
      local_c0 = local_128 + param_2[2];
      local_c4 = local_12c + param_2[1];
      local_c8 = local_130 + *param_2;
      local_e0 = iVar5;
      if ((5 < iVar5) || (fVar8 < _DAT_006e95a8 != (NAN(fVar8) || NAN(_DAT_006e95a8))))
      goto LAB_0042fa76;
      local_d8 = param_1[0x38];
      (**(code **)(*param_1 + 0x148))
                (param_1[2],param_1[3],&local_a4,&local_c8,param_1[0x39],local_d8,local_104);
      FUN_005798f0(8);
      if ((*(byte *)(param_1 + 0x6b) & 1) != 0) {
        FUN_00579940();
      }
      FUN_00577e70();
      if (DAT_00773970 == 0) goto LAB_0042fa8e;
      uStack_dc = FUN_0057dcc0(&DAT_00773520,DAT_00773528);
      param_1[0x3e] = DAT_00773520;
      uStack_dc = uStack_dc & 0x20;
      param_1[0x3f] = DAT_00773524;
      FUN_004357e0(&DAT_00773500);
      param_1[0x43] = DAT_0077350c;
      fVar1 = (float)param_1[0x210] * (float)param_1[0x40] +
              (float)param_1[0x211] * (float)param_1[0x41] +
              (float)param_1[0x212] * (float)param_1[0x42];
      if ((fVar1 < _DAT_006ebfe0 != (fVar1 == _DAT_006ebfe0)) && (_DAT_006ebfdc < fVar1)) break;
      fStack_124 = DAT_007734f0 - (float)param_1[0x37] / fVar8;
      if (fStack_124 < DAT_006e92e4 != (NAN(fStack_124) || NAN(DAT_006e92e4))) {
        fStack_124 = 0.0;
      }
      fStack_f4 = local_12c * fStack_124;
      fStack_10c = DAT_00773518;
      fStack_114 = DAT_00773510;
      fStack_110 = DAT_00773514;
      uStack_108 = DAT_0077351c;
      if (((DAT_00773504 < _DAT_006ebfd8 == (NAN(DAT_00773504) || NAN(_DAT_006ebfd8))) ||
          (DAT_00773504 <= _DAT_006ebfd4)) ||
         (fVar8 = DAT_007734f8 - (fStack_f4 + param_2[1]),
         fVar8 < _DAT_006e9554 == (NAN(fVar8) || NAN(_DAT_006e9554)))) {
        fStack_4c = local_128 * fStack_124;
        *param_2 = local_130 * fStack_124 + *param_2;
        param_2[1] = fStack_f4 + param_2[1];
        param_2[2] = fStack_4c + param_2[2];
      }
      else {
        FUN_00649600(s_Character__HandleMoveStepOver_00720eac);
        fStack_100 = *param_2;
        fStack_fc = param_2[1];
        fStack_f8 = param_2[2];
        local_4 = CONCAT31(local_4._1_3_,1);
        uStack_8c = 0;
        uStack_88 = 0x41200000;
        fStack_84 = 0.0;
        fStack_80 = local_130;
        uStack_7c = 0;
        fStack_78 = local_128;
        uStack_74 = 0;
        uStack_70 = 0xc1200000;
        uStack_6c = 0;
        local_134 = 0.0;
        pfVar6 = &fStack_84;
        do {
          fStack_a8 = fStack_f8 + *pfVar6;
          fStack_ac = fStack_fc + pfVar6[-1];
          fStack_b0 = fStack_100 + pfVar6[-2];
          (**(code **)(*param_1 + 0x148))
                    (param_1[2],param_1[3],&fStack_100,&fStack_b0,param_1[0x39],param_1[0x38],
                     local_104);
          FUN_005798f0(1);
          if ((*(byte *)(param_1 + 0x6b) & 1) != 0) {
            FUN_00579940();
          }
          FUN_00577e70();
          if (DAT_00773970 != 0) break;
          fStack_100 = fStack_100 + pfVar6[-2];
          local_134 = (float)((int)local_134 + 1);
          fStack_fc = fStack_fc + pfVar6[-1];
          fStack_f8 = fStack_f8 + *pfVar6;
          pfVar6 = pfVar6 + 3;
        } while ((int)local_134 < 3);
        if ((local_134 != 2.8026e-45) || (DAT_00773504 <= _DAT_006ebfd0)) {
          fVar1 = local_128 * fStack_124;
          fVar2 = local_12c * fStack_124;
          fVar8 = local_130 * fStack_124;
        }
        else {
          local_134 = DAT_007734f0 - (float)param_1[0x37] * _DAT_006e95a8;
          if (local_134 < DAT_006e92e4 != (NAN(local_134) || NAN(DAT_006e92e4))) {
            local_134 = 0.0;
          }
          fStack_f4 = local_134 * DAT_006e92e4;
          fStack_d4 = fStack_80;
          fVar1 = fStack_f4 + fStack_78;
          fVar2 = local_134 * _DAT_006ebfcc + _DAT_006e9554;
          fVar8 = fStack_80 + fStack_f4;
        }
        local_4 = local_4 & 0xffffff00;
        *param_2 = fVar8 + *param_2;
        param_2[1] = fVar2 + param_2[1];
        param_2[2] = fVar1 + param_2[2];
        FUN_00649720();
        iVar5 = local_e0;
      }
      fVar8 = DAT_006e92e8 - fStack_124;
      local_130 = local_130 * fVar8;
      local_12c = local_12c * fVar8;
      local_128 = local_128 * fVar8;
      if ((iVar5 < 2) ||
         (fVar8 = fStack_e8 * fStack_10c + fStack_ec * fStack_110 + fStack_f0 * fStack_114,
         fVar8 < DAT_006e92e4 == (fVar8 == DAT_006e92e4))) {
        FUN_004357e0(&fStack_114);
        pfVar6 = &fStack_114;
        uStack_e4 = uStack_108;
        fVar7 = (float10)FUN_00402020(&local_130);
        uVar4 = FUN_0042eea0(auStack_3c,(float)fVar7,pfVar6);
        FUN_004357e0(uVar4);
        uVar4 = FUN_00405080(auStack_24,&local_130,auStack_48);
        FUN_004357e0(uVar4);
        if ((param_5 < fStack_110) ||
           ((local_12c < DAT_006e92e4 != (NAN(local_12c) || NAN(DAT_006e92e4)) || (uStack_dc != 0)))
           ) {
          fVar8 = DAT_006e92e8 - param_4;
          FUN_00401f00(fVar8 * fStack_120,fStack_11c * fVar8,fStack_118 * fVar8);
          local_130 = fStack_bc;
          local_12c = fStack_b8;
          local_128 = fStack_b4;
        }
        else {
          FUN_00401f00(fStack_110 * DAT_006e92e4 - fStack_10c,
                       fStack_10c * DAT_006e92e4 - fStack_114 * DAT_006e92e4,
                       fStack_114 - fStack_110 * DAT_006e92e4);
          fVar8 = DAT_006e92e8 - param_4;
          fVar7 = (float10)FUN_00402020(&fStack_120);
          uVar4 = FUN_00402160(auStack_30,auStack_68,(float)fVar7,fVar8);
          uVar4 = FUN_00402160(auStack_18,uVar4);
          FUN_004357e0(uVar4);
          local_12c = 0.0;
        }
      }
      else {
        fStack_120 = fStack_ec * fStack_10c - fStack_e8 * fStack_110;
        fStack_11c = fStack_e8 * fStack_114 - fStack_10c * fStack_f0;
        fStack_118 = fStack_f0 * fStack_110 - fStack_ec * fStack_114;
        fVar8 = DAT_006e92e8 /
                SQRT(fStack_120 * fStack_120 + fStack_11c * fStack_11c + fStack_118 * fStack_118);
        iVar3 = FUN_0064cf30(fVar8);
        if (iVar3 == 0) {
          fStack_118 = 0.0;
          fStack_120 = DAT_006e92e4;
          fStack_11c = DAT_006e92e4;
        }
        else {
          fStack_118 = fStack_118 * fVar8;
          fStack_120 = fStack_120 * fVar8;
          fStack_11c = fStack_11c * fVar8;
        }
        fVar8 = fStack_118 * local_128 + fStack_120 * local_130 + local_12c * fStack_11c;
        fStack_120 = fVar8 * fStack_120;
        fStack_11c = fStack_11c * fVar8;
        fStack_118 = fStack_118 * fVar8;
        fVar8 = DAT_006e92e8 - param_4;
        FUN_00401f00(fVar8 * fStack_120,fStack_11c * fVar8,fStack_118 * fVar8);
        local_130 = fStack_98;
        local_128 = fStack_90;
        local_12c = fStack_94;
        FUN_004357e0(&fStack_114);
        uStack_e4 = uStack_108;
      }
    }
    param_3[2] = 0.0;
    param_3[1] = 0.0;
    *param_3 = 0.0;
LAB_0042fa76:
    local_128 = 0.0;
    local_12c = 0.0;
    local_130 = 0.0;
LAB_0042fa8e:
    FUN_0042faf0(&local_130);
    if ((param_7 != 0) && (iVar5 = (**(code **)(*param_1 + 0x120))(0), iVar5 != 0)) {
      FUN_004688e0(param_2);
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

