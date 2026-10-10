
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058d800(undefined4 param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  float10 fVar18;
  float *local_ec;
  float *local_e8;
  float *local_e4;
  float local_e0 [9];
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
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
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  uint local_50 [3];
  uint local_44 [5];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcc83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_poly_cache__LoadUpBucketWithTria_00742218);
  param_2[2] = 3.4028235e+38;
  param_2[3] = 3.4028235e+38;
  param_2[4] = 3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  param_2[6] = -3.4028235e+38;
  param_2[7] = -3.4028235e+38;
  *(undefined2 *)((int)param_2 + 0x22) = 0;
  fVar3 = (float)(&DAT_00773a48)[param_3 * 0xe];
  local_4 = 0;
  *param_2 = fVar3;
  fVar7 = (float)(&DAT_00773a4c)[param_3 * 0xe];
  param_2[1] = fVar7;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar2 = FUN_00406ce0(fVar3,fVar7);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar2 == -1) {
    FUN_00649720();
    piVar16 = (int *)0x0;
  }
  else {
    uVar13 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
    piVar16 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
    FUN_00649720();
    if (piVar16 != (int *)0x0) {
      fVar3 = (float)(**(code **)(*piVar16 + 0x90))();
      goto LAB_0058d8f6;
    }
  }
  fVar3 = 0.0;
LAB_0058d8f6:
  param_2[9] = fVar3;
  if (piVar16 == (int *)0x0) {
    fVar3 = -NAN;
  }
  else {
    fVar3 = (float)piVar16[4];
  }
  param_2[10] = fVar3;
  param_2[100] = (float)s_NONAME_00742210;
  pfVar4 = param_2 + 0xc;
  iVar2 = 0x10;
  do {
    pfVar4[1] = 0.0;
    *pfVar4 = 0.0;
    pfVar4[-1] = 0.0;
    pfVar4 = pfVar4 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_9c = (float)(DAT_00777218 - param_3);
  local_ec = (float *)0x0;
  local_a0 = 0;
  if (0 < (int)local_9c) {
    pfVar4 = (float *)(&DAT_00773a18 + param_3 * 0xe);
    do {
      if (((*(short *)((int)param_2 + 0x22) == 10) || (pfVar4[0xc] != *param_2)) ||
         (pfVar4[0xd] != param_2[1])) break;
      iVar2 = FUN_0058d110(param_1,pfVar4);
      if (iVar2 != 0) {
        pfVar5 = param_2 + (int)local_ec * 3 + 0xd;
        iVar2 = 0;
        pfVar8 = pfVar4;
        local_e4 = pfVar5;
        do {
          fVar3 = 0.0;
          if (0 < (int)local_ec) {
            pfVar12 = param_2 + 0xd;
            do {
              pfVar5 = local_e4;
              if ((((NAN(pfVar12[-2]) || NAN(*pfVar8)) != (pfVar12[-2] == *pfVar8)) &&
                  ((NAN(pfVar12[-1]) || NAN(pfVar8[1])) != (pfVar12[-1] == pfVar8[1]))) &&
                 ((NAN(*pfVar12) || NAN(pfVar8[2])) != (*pfVar12 == pfVar8[2]))) break;
              fVar3 = (float)((int)fVar3 + 1);
              pfVar12 = pfVar12 + 3;
            } while ((int)fVar3 < (int)local_ec);
          }
          if ((float *)fVar3 == local_ec) {
            if (local_ec == (float *)0x10) {
              if (iVar2 < 3) goto LAB_0058ddf8;
              break;
            }
            pfVar5[-2] = *pfVar8;
            pfVar5[-1] = pfVar8[1];
            *pfVar5 = pfVar8[2];
            local_ec = (float *)((int)local_ec + 1);
            pfVar5 = pfVar5 + 3;
            local_e4 = pfVar5;
          }
          local_e0[iVar2] = fVar3;
          iVar2 = iVar2 + 1;
          pfVar8 = pfVar8 + 3;
        } while (iVar2 < 3);
        fVar3 = local_e0[0];
        local_bc = 0.0;
        if (DAT_00742068 != 0) {
          pfVar5 = param_2 + (int)local_e0[0] * 3 + 0xb;
          iVar2 = (int)local_e0[1] * 3;
          FUN_00401f00(param_2[(int)local_e0[2] * 3 + 0xb] - *pfVar5,
                       (param_2 + (int)local_e0[2] * 3 + 0xb)[1] - pfVar5[1],
                       param_2[(int)local_e0[2] * 3 + 0xd] - param_2[(int)local_e0[0] * 3 + 0xd]);
          uVar6 = FUN_00405080(local_30,param_2 + iVar2 + 0xb,pfVar5,local_50);
          uVar6 = FUN_0042eb90(local_18,uVar6);
          FUN_004357e0(uVar6);
          FUN_0042e1f0();
          fVar18 = (float10)FUN_00402020(pfVar5);
          local_e0[6] = (float)-fVar18;
          local_b8 = 0.0;
          if (0 < *(short *)((int)param_2 + 0x22)) {
            pfVar5 = param_2 + 0x50;
            do {
              fVar3 = *pfVar5;
              uVar13 = (uint)fVar3 & 0xf;
              if (((uint)fVar3 >> 0xc & 0xf) == uVar13) {
                uVar9 = (uint)fVar3 >> 8 & 0xf;
                pfVar8 = param_2 + uVar13 * 3 + 0xb;
                FUN_00401f00(param_2[uVar9 * 3 + 0xb] - *pfVar8,
                             (param_2 + uVar9 * 3 + 0xb)[1] - pfVar8[1],
                             param_2[uVar9 * 3 + 0xd] - param_2[uVar13 * 3 + 0xd]);
                uVar6 = FUN_00405080(local_24,param_2 + ((uint)fVar3 >> 4 & 0xf) * 3 + 0xb,pfVar8,
                                     local_44);
                uVar6 = FUN_0042eb90(&local_b0,uVar6);
                FUN_004357e0(uVar6);
                FUN_0042e1f0();
                fVar18 = (float10)FUN_00402020(pfVar8);
                local_54 = (float)-fVar18;
                fVar3 = local_5c * local_e0[4] + local_58 * local_e0[5] + local_e0[3] * local_60;
                if (fVar3 < _DAT_006e92f0 == (NAN(fVar3) || NAN(_DAT_006e92f0))) {
                  fVar3 = *pfVar5;
                  fVar14 = (float)((uint)fVar3 & 0xf);
                  fVar7 = (float)((uint)fVar3 >> 4 & 0xf);
                  fVar10 = (float)((uint)fVar3 >> 8 & 0xf);
                  local_e4 = (float *)0x0;
                  do {
                    fVar1 = local_e0[0];
                    if (fVar14 == local_e0[0]) {
                      if (fVar7 == local_e0[2]) {
                        uVar13 = ((uint)fVar3 ^ (uint)fVar7) & 0xf ^ (uint)fVar3;
                        uVar13 = ((int)fVar10 << 4 ^ uVar13) & 0xf0 ^ uVar13;
                        uVar13 = ((int)fVar14 << 8 ^ uVar13) & 0xf00 ^ uVar13;
                        *pfVar5 = (float)(((int)local_e0[1] << 0xc ^ uVar13) & 0xf000 ^ uVar13);
                        break;
                      }
                      if (fVar10 == local_e0[1]) {
                        uVar13 = ((uint)fVar3 ^ (uint)fVar14) & 0xf ^ (uint)fVar3;
                        uVar13 = ((int)fVar7 << 4 ^ uVar13) & 0xf0 ^ uVar13;
                        uVar13 = ((int)fVar10 << 8 ^ uVar13) & 0xf00 ^ uVar13;
                        *pfVar5 = (float)(((int)local_e0[2] << 0xc ^ uVar13) & 0xf000 ^ uVar13);
                        break;
                      }
                    }
                    if ((fVar7 == local_e0[0]) && (fVar10 == local_e0[2])) {
                      uVar13 = ((uint)fVar3 ^ (uint)fVar10) & 0xf ^ (uint)fVar3;
                      uVar13 = ((int)fVar14 << 4 ^ uVar13) & 0xf0 ^ uVar13;
                      uVar13 = ((int)fVar7 << 8 ^ uVar13) & 0xf00 ^ uVar13;
                      *pfVar5 = (float)(((int)local_e0[1] << 0xc ^ uVar13) & 0xf000 ^ uVar13);
                      break;
                    }
                    local_b4 = local_e0[0];
                    local_e0[0] = local_e0[1];
                    local_e0[1] = local_e0[2];
                    local_e0[2] = fVar1;
                    local_e4 = (float *)((int)local_e4 + 1);
                  } while ((int)local_e4 < 3);
                  if (local_e4 != (float *)0x3) {
                    pfVar5[1] = (float)(((int)pfVar4[10] << 0xf ^ (uint)pfVar5[1]) & 0x1fff8000 ^
                                       (uint)pfVar5[1]);
                    local_bc = 1.4013e-45;
                  }
                }
              }
              local_b8 = (float)((int)local_b8 + 1);
              pfVar5 = pfVar5 + 2;
            } while ((int)local_b8 < (int)*(short *)((int)param_2 + 0x22));
            fVar3 = local_e0[0];
            if (local_bc != 0.0) goto LAB_0058ddd8;
          }
        }
        pfVar5 = param_2 + *(short *)((int)param_2 + 0x22) * 2 + 0x50;
        *(short *)((int)param_2 + 0x22) = *(short *)((int)param_2 + 0x22) + 1;
        uVar13 = ((uint)*pfVar5 ^ (uint)fVar3) & 0xf ^ (uint)*pfVar5;
        uVar13 = ((int)local_e0[1] << 4 ^ uVar13) & 0xf0 ^ uVar13;
        uVar13 = ((int)local_e0[2] << 8 ^ uVar13) & 0xf00 ^ uVar13;
        fVar3 = (float)(((int)fVar3 << 0xc ^ uVar13) & 0xf000 ^ uVar13);
        *pfVar5 = fVar3;
        *pfVar5 = (float)(((int)pfVar4[10] << 0x10 ^ (uint)fVar3) & 0x3fff0000 ^ (uint)fVar3);
        pfVar5[1] = (float)(((int)pfVar4[10] << 0xf ^ (uint)pfVar5[1]) & 0x1fff8000 ^
                           (uint)pfVar5[1]);
      }
LAB_0058ddd8:
      local_a0 = local_a0 + 1;
      pfVar4 = pfVar4 + 0xe;
    } while (local_a0 < (int)local_9c);
  }
LAB_0058ddf8:
  param_2[2] = 3.4028235e+38;
  param_2[3] = 3.4028235e+38;
  param_2[4] = 3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  param_2[6] = -3.4028235e+38;
  param_2[7] = -3.4028235e+38;
  local_e4 = (float *)0x0;
  pfVar4 = param_2 + 0x3c;
  iVar2 = 7;
  do {
    pfVar4[1] = 0.0;
    *pfVar4 = 0.0;
    pfVar4[-1] = 0.0;
    pfVar4 = pfVar4 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_b4 = 0.0;
  if (0 < *(short *)((int)param_2 + 0x22)) {
    local_e8 = param_2 + 0x50;
    do {
      fVar3 = *local_e8;
      uVar13 = (uint)fVar3 & 0xf;
      local_90 = param_2[uVar13 * 3 + 0xb];
      local_8c = param_2[uVar13 * 3 + 0xc];
      local_88 = param_2[uVar13 * 3 + 0xd];
      pfVar4 = param_2 + ((uint)fVar3 >> 4 & 0xf) * 3 + 0xb;
      local_84 = *pfVar4;
      local_80 = pfVar4[1];
      local_7c = pfVar4[2];
      pfVar4 = param_2 + ((uint)fVar3 >> 8 & 0xf) * 3 + 0xb;
      local_78 = *pfVar4;
      local_74 = pfVar4[1];
      local_70 = pfVar4[2];
      pfVar4 = param_2 + ((uint)fVar3 >> 0xc & 0xf) * 3 + 0xb;
      local_6c = *pfVar4;
      local_68 = pfVar4[1];
      local_64 = pfVar4[2];
      local_e0[3] = 3.4028235e+38;
      local_e0[4] = 3.4028235e+38;
      local_e0[5] = 3.4028235e+38;
      local_e0[6] = -3.4028235e+38;
      local_e0[7] = -3.4028235e+38;
      pfVar4 = &local_88;
      iVar2 = 4;
      local_e0[8] = _DAT_006ec010;
      do {
        if (pfVar4[-2] < local_e0[3] != (NAN(pfVar4[-2]) || NAN(local_e0[3]))) {
          local_e0[3] = pfVar4[-2];
        }
        if (pfVar4[-1] < local_e0[4] != (NAN(pfVar4[-1]) || NAN(local_e0[4]))) {
          local_e0[4] = pfVar4[-1];
        }
        if (*pfVar4 < local_e0[5] != (NAN(*pfVar4) || NAN(local_e0[5]))) {
          local_e0[5] = *pfVar4;
        }
        if (local_e0[6] < pfVar4[-2]) {
          local_e0[6] = pfVar4[-2];
        }
        if (local_e0[7] < pfVar4[-1]) {
          local_e0[7] = pfVar4[-1];
        }
        if (local_e0[8] < *pfVar4 != (NAN(local_e0[8]) || NAN(*pfVar4))) {
          local_e0[8] = *pfVar4;
        }
        pfVar4 = pfVar4 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (local_e0[3] < param_2[2] != (NAN(local_e0[3]) || NAN(param_2[2]))) {
        param_2[2] = local_e0[3];
      }
      if (local_e0[4] < param_2[3] != (NAN(local_e0[4]) || NAN(param_2[3]))) {
        param_2[3] = local_e0[4];
      }
      if (local_e0[5] < param_2[4] != (NAN(local_e0[5]) || NAN(param_2[4]))) {
        param_2[4] = local_e0[5];
      }
      if (param_2[5] < local_e0[6]) {
        param_2[5] = local_e0[6];
      }
      if (param_2[6] < local_e0[7]) {
        param_2[6] = local_e0[7];
      }
      if (param_2[7] < local_e0[8]) {
        param_2[7] = local_e0[8];
      }
      local_b8 = local_70 - local_88;
      fVar3 = local_74 - local_8c;
      local_bc = local_78 - local_90;
      FUN_00401f00(local_84 - local_90,local_80 - local_8c,local_7c - local_88);
      FUN_00401f00(local_e0[1] * local_b8 - local_e0[2] * fVar3,
                   local_e0[2] * local_bc - local_b8 * local_e0[0],
                   fVar3 * local_e0[0] - local_e0[1] * local_bc);
      local_ac = local_98;
      local_b0 = local_9c;
      local_a8 = local_94;
      FUN_0042e1f0();
      fVar18 = (float10)FUN_00402020(&local_90);
      local_a4 = (float)-fVar18;
      if ((local_ac < DAT_006e92e4) ||
         (local_e0[7] - local_e0[4] < _DAT_006e936c ==
          (NAN(local_e0[7] - local_e0[4]) || NAN(_DAT_006e936c)))) {
        fVar3 = (float)((uint)*local_e8 & 0xbfffffff);
      }
      else {
        fVar3 = (float)((uint)*local_e8 | 0x40000000);
      }
      *local_e8 = fVar3;
      fVar3 = local_ac;
      if (local_ac < DAT_006e92e4 != (NAN(local_ac) || NAN(DAT_006e92e4))) {
        fVar3 = -local_ac;
      }
      if (fVar3 < _DAT_006ebfe4 == (NAN(fVar3) || NAN(_DAT_006ebfe4))) {
        fVar3 = ABS(*local_e8);
      }
      else {
        fVar3 = (float)((uint)*local_e8 | 0x80000000);
      }
      uVar13 = 0xffffffff;
      *local_e8 = fVar3;
      local_ec = &local_8c;
      local_44[0] = 0xffffffff;
      uVar9 = 0xffffffff;
      uVar15 = 0xffffffff;
      local_50[0] = 0xffffffff;
      uVar17 = 0xffffffff;
      uVar11 = 0;
      do {
        if ((NAN(local_ec[-1]) || NAN(local_e0[3])) != (local_ec[-1] == local_e0[3])) {
          local_44[0] = uVar11;
        }
        if ((NAN(local_ec[-1]) || NAN(local_e0[6])) != (local_ec[-1] == local_e0[6])) {
          local_50[0] = uVar11;
        }
        if ((NAN(*local_ec) || NAN(local_e0[4])) != (*local_ec == local_e0[4])) {
          uVar9 = uVar11;
        }
        if ((NAN(*local_ec) || NAN(local_e0[7])) != (*local_ec == local_e0[7])) {
          uVar17 = uVar11;
        }
        if ((NAN(local_ec[1]) || NAN(local_e0[5])) != (local_ec[1] == local_e0[5])) {
          uVar15 = uVar11;
        }
        if ((NAN(local_ec[1]) || NAN(local_e0[8])) != (local_ec[1] == local_e0[8])) {
          uVar13 = uVar11;
        }
        uVar11 = uVar11 + 1;
        local_ec = local_ec + 3;
      } while ((int)uVar11 < 4);
      uVar11 = ((uint)local_e8[1] ^ local_44[0]) & 3 ^ (uint)local_e8[1];
      uVar11 = (local_50[0] << 2 ^ uVar11) & 0xc ^ uVar11;
      uVar11 = (uVar9 << 4 ^ uVar11) & 0x30 ^ uVar11;
      uVar11 = (uVar17 << 6 ^ uVar11) & 0xc0 ^ uVar11;
      uVar11 = (uVar15 << 8 ^ uVar11) & 0x300 ^ uVar11;
      fVar3 = (float)((uVar13 << 10 ^ uVar11) & 0xc00 ^ uVar11);
      local_e8[1] = fVar3;
      iVar2 = 0;
      if (0 < (int)local_e4) {
        pfVar4 = param_2 + 0x3d;
        do {
          if (_DAT_006e92f0 < local_a8 * *pfVar4 + local_ac * pfVar4[-1] + local_b0 * pfVar4[-2])
          break;
          iVar2 = iVar2 + 1;
          pfVar4 = pfVar4 + 3;
        } while (iVar2 < (int)local_e4);
      }
      if ((float *)iVar2 == local_e4) {
        if ((int)local_e4 < 7) {
          pfVar4 = param_2 + iVar2 * 3 + 0x3b;
          *pfVar4 = local_b0;
          pfVar4[1] = local_ac;
          local_e4 = (float *)((int)local_e4 + 1);
          pfVar4[2] = local_a8;
        }
        fVar3 = local_e8[1];
      }
      local_e8[1] = (float)((iVar2 << 0xc ^ (uint)fVar3) & 0x7000 ^ (uint)fVar3);
      local_e8 = local_e8 + 2;
      local_b4 = (float)((int)local_b4 + 1);
    } while ((int)local_b4 < (int)*(short *)((int)param_2 + 0x22));
  }
  local_4 = 0xffffffff;
  param_2[2] = param_2[2] - DAT_006e92e8;
  param_2[3] = param_2[3] - DAT_006e92e8;
  param_2[4] = param_2[4] - DAT_006e92e8;
  param_2[5] = param_2[5] + DAT_006e92e8;
  param_2[6] = param_2[6] + DAT_006e92e8;
  param_2[7] = param_2[7] + DAT_006e92e8;
  FUN_00649720();
  ExceptionList = local_c;
  return local_a0;
}

