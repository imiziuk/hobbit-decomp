
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a4930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float *pfVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  uint local_90;
  float local_8c;
  float local_88;
  int *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_007a59bc = DAT_007a59bc + 1;
  local_84 = (int *)FUN_004021c0(param_3,param_4);
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      local_10 = 0;
      local_20 = 0;
      local_30 = 0;
      local_c = 0;
      local_1c = 0;
      local_3c = 0;
      local_8 = 0;
      local_28 = 0;
      local_38 = 0;
      local_14 = 0;
      local_24 = 0;
      local_34 = 0;
      local_40 = 0x3f800000;
      local_2c = 0x3f800000;
      local_18 = 0x3f800000;
      local_4 = 0x3f800000;
      fVar13 = (float10)FUN_005a77a0(&local_40);
      if (fVar13 < (float10)_DAT_006ee9b4 == (NAN(fVar13) || NAN((float10)_DAT_006ee9b4))) {
        pfVar2 = (float *)FUN_0057dcb0();
        local_70 = *pfVar2;
        local_6c = pfVar2[1];
        local_68 = pfVar2[2];
        local_64 = pfVar2[3];
        local_60 = pfVar2[4];
        local_5c = pfVar2[5];
        *(float **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
        DAT_007f23d4 = DAT_007f23d4 + 1;
        pfVar2 = (float *)((int)DAT_007f23cc - (*(int *)(param_1 + 0x6c) * 0xc + 0xfU & 0xfffffff0))
        ;
        iVar9 = 0;
        DAT_007f23cc = pfVar2;
        if (0 < *(int *)(param_1 + 0x6c)) {
          iVar3 = 0;
          pfVar8 = pfVar2 + 2;
          do {
            iVar9 = iVar9 + 1;
            pfVar8[-2] = (float)*(ushort *)(iVar3 + *(int *)(param_1 + 0x90)) *
                         *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24);
            pfVar8[-1] = (float)*(ushort *)(iVar3 + 2 + *(int *)(param_1 + 0x90)) *
                         *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x28);
            local_90 = (uint)*(ushort *)(iVar3 + 4 + *(int *)(param_1 + 0x90));
            *pfVar8 = (float)local_90 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c);
            iVar3 = iVar3 + 6;
            pfVar8 = pfVar8 + 3;
          } while (iVar9 < *(int *)(param_1 + 0x6c));
        }
        iVar9 = *(int *)(param_1 + 0x6c);
        pfVar8 = pfVar2;
        if (0 < iVar9) {
          do {
            FUN_0041b9f0(&local_a8,pfVar8);
            *pfVar8 = local_a8;
            pfVar8[1] = local_a4;
            pfVar8[2] = local_a0;
            iVar9 = iVar9 + -1;
            pfVar8 = pfVar8 + 3;
          } while (iVar9 != 0);
        }
        iVar9 = 0;
        piVar11 = local_84;
        if (0 < *(int *)(param_1 + 100)) {
          do {
            local_a8 = 3.4028235e+38;
            local_a4 = 3.4028235e+38;
            local_a0 = 3.4028235e+38;
            local_98 = -3.4028235e+38;
            local_94 = -3.4028235e+38;
            iVar3 = FUN_005a40b0(iVar9,0);
            pfVar8 = pfVar2 + iVar3 * 3;
            if (pfVar2[iVar3 * 3] < _DAT_006ec00c != (NAN(pfVar2[iVar3 * 3]) || NAN(_DAT_006ec00c)))
            {
              local_a8 = *pfVar8;
            }
            if (pfVar8[1] < _DAT_006ec00c != (NAN(pfVar8[1]) || NAN(_DAT_006ec00c))) {
              local_a4 = pfVar8[1];
            }
            if (pfVar8[2] < _DAT_006ec00c != (NAN(pfVar8[2]) || NAN(_DAT_006ec00c))) {
              local_a0 = pfVar8[2];
            }
            if (_DAT_006ec010 < pfVar8[1]) {
              local_98 = pfVar8[1];
            }
            if (_DAT_006ec010 < pfVar8[2]) {
              local_94 = pfVar8[2];
            }
            iVar3 = FUN_005a40b0(iVar9,1);
            pfVar8 = pfVar2 + iVar3 * 3;
            if (pfVar2[iVar3 * 3] < local_a8 != (NAN(pfVar2[iVar3 * 3]) || NAN(local_a8))) {
              local_a8 = *pfVar8;
            }
            if (pfVar8[1] < local_a4 != (NAN(pfVar8[1]) || NAN(local_a4))) {
              local_a4 = pfVar8[1];
            }
            if (pfVar8[2] < local_a0 != (NAN(pfVar8[2]) || NAN(local_a0))) {
              local_a0 = pfVar8[2];
            }
            if (local_98 < pfVar8[1]) {
              local_98 = pfVar8[1];
            }
            if (local_94 < pfVar8[2]) {
              local_94 = pfVar8[2];
            }
            iVar3 = FUN_005a40b0(iVar9,2);
            pfVar8 = pfVar2 + iVar3 * 3;
            if (pfVar2[iVar3 * 3] < local_a8 != (NAN(pfVar2[iVar3 * 3]) || NAN(local_a8))) {
              local_a8 = *pfVar8;
            }
            if (pfVar8[1] < local_a4 != (NAN(pfVar8[1]) || NAN(local_a4))) {
              local_a4 = pfVar8[1];
            }
            if (pfVar8[2] < local_a0 != (NAN(pfVar8[2]) || NAN(local_a0))) {
              local_a0 = pfVar8[2];
            }
            fVar13 = extraout_ST0;
            if (extraout_ST0 < (float10)*pfVar8 != (NAN(extraout_ST0) || NAN((float10)*pfVar8))) {
              fVar13 = (float10)*pfVar8;
            }
            if (local_98 < pfVar8[1]) {
              local_98 = pfVar8[1];
            }
            if (local_94 < pfVar8[2]) {
              local_94 = pfVar8[2];
            }
            if ((((((float10)local_70 <= fVar13) &&
                  (local_64 < local_a8 == (NAN(local_64) || NAN(local_a8)))) &&
                 (local_68 <= local_94)) &&
                ((local_5c < local_a0 == (NAN(local_5c) || NAN(local_a0)) && (local_6c <= local_98))
                )) && (local_60 < local_a4 == (NAN(local_60) || NAN(local_a4)))) {
              uVar4 = 0;
              if (piVar11 != (int *)0x0) {
                uVar4 = (**(code **)(*piVar11 + 0xbc))(iVar9);
                uVar4 = uVar4 & 0xff;
                piVar11 = local_84;
              }
              iVar3 = iVar9;
              uVar15 = param_3;
              uVar16 = param_4;
              iVar5 = FUN_005a40b0(iVar9,2);
              pfVar8 = pfVar2 + iVar5 * 3;
              iVar5 = FUN_005a40b0(iVar9,1);
              pfVar14 = pfVar2 + iVar5 * 3;
              iVar5 = FUN_005a40b0(iVar9,0);
              FUN_005785c0(pfVar2 + iVar5 * 3,pfVar14,pfVar8,iVar3,uVar4,uVar15,uVar16);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(param_1 + 100));
        }
        DAT_007f23d4 = DAT_007f23d4 + -1;
        DAT_007f23cc = (float *)*(undefined4 *)(&DAT_007f23e0 + DAT_007f23d4 * 4);
        return;
      }
    }
    pfVar2 = (float *)FUN_0057dcb0();
    local_a8 = *pfVar2 - _DAT_006e99bc;
    local_a4 = pfVar2[1] - _DAT_006e99bc;
    local_a0 = pfVar2[2] - _DAT_006e99bc;
    local_9c = pfVar2[3] + _DAT_006e99bc;
    local_98 = pfVar2[4] + _DAT_006e99bc;
    local_94 = pfVar2[5] + _DAT_006e99bc;
    if (((*(float *)(param_1 + 0xc) <= local_9c) &&
        (*(float *)(param_1 + 0x18) < local_a8 == (NAN(*(float *)(param_1 + 0x18)) || NAN(local_a8))
        )) && ((*(float *)(param_1 + 0x14) <= local_94 &&
               (((*(float *)(param_1 + 0x20) < local_a0 ==
                  (NAN(*(float *)(param_1 + 0x20)) || NAN(local_a0)) &&
                 (*(float *)(param_1 + 0x10) <= local_98)) &&
                (*(float *)(param_1 + 0x1c) < local_a4 ==
                 (NAN(*(float *)(param_1 + 0x1c)) || NAN(local_a4)))))))) {
      local_54 = FUN_0057dca0();
      if ((short)local_54 == 0) {
        FUN_00648600(&DAT_007986c8,0xff,54000);
      }
      iVar9 = __ftol();
      local_88 = DAT_006e92e8 / *(float *)(param_1 + 0x40);
      iVar3 = __ftol();
      local_8c = DAT_006e92e8 / *(float *)(param_1 + 0x44);
      iVar5 = __ftol();
      iVar6 = __ftol();
      local_7c = iVar6 - 0x400;
      local_74 = __ftol();
      local_74 = local_74 + -0x400;
      iVar6 = __ftol();
      local_80 = ((int)(iVar9 - 0x400U) < 0) - 1 & iVar9 - 0x400U;
      iVar9 = *(int *)(param_1 + 0x54);
      local_78 = ((int)(iVar3 - 0x400U) < 0) - 1 & iVar3 - 0x400U;
      uVar4 = iVar9 - 1;
      uVar10 = ((int)(iVar5 - 0x400U) < 0) - 1 & iVar5 - 0x400U;
      if ((int)uVar4 < (int)local_7c) {
        local_7c = uVar4;
      }
      iVar3 = *(int *)(param_1 + 0x58);
      if (iVar3 + -1 < local_74) {
        local_74 = iVar3 + -1;
      }
      uVar12 = *(int *)(param_1 + 0x5c) - 1;
      uVar7 = iVar6 - 0x400U;
      if ((int)uVar12 < (int)(iVar6 - 0x400U)) {
        uVar7 = uVar12;
      }
      if ((int)uVar4 < (int)local_80) {
        local_80 = uVar4;
      }
      if ((int)(iVar3 - 1U) < (int)local_78) {
        local_78 = iVar3 - 1U;
      }
      if ((int)uVar12 < (int)uVar10) {
        uVar10 = uVar12;
      }
      local_88 = (float)(iVar3 * iVar9 * uVar10);
      if ((int)uVar10 <= (int)uVar7) {
        local_90 = (uVar7 - uVar10) + 1;
        piVar11 = local_84;
        do {
          local_8c = (float)(iVar9 * local_78 + (int)local_88);
          if ((int)local_78 <= local_74) {
            local_50 = (local_74 - local_78) + 1;
            do {
              if ((int)local_80 <= (int)local_7c) {
                local_58 = ((int)local_8c + local_80) * 2;
                local_4c = (local_7c - local_80) + 1;
                do {
                  local_44 = (uint)*(ushort *)(local_58 + *(int *)(param_1 + 0x84));
                  local_48 = *(int *)(param_1 + 0x8c) +
                             (uint)*(ushort *)(local_58 + *(int *)(param_1 + 0x88)) * 2;
                  iVar9 = 0;
                  if (local_44 != 0) {
                    do {
                      uVar4 = (uint)*(ushort *)(local_48 + iVar9 * 2);
                      if (*(short *)(&DAT_007986c8 + uVar4 * 2) != (short)local_54) {
                        *(short *)(&DAT_007986c8 + uVar4 * 2) = (short)local_54;
                        local_70 = 3.4028235e+38;
                        local_6c = 3.4028235e+38;
                        local_68 = 3.4028235e+38;
                        local_64 = -3.4028235e+38;
                        local_60 = -3.4028235e+38;
                        local_5c = -3.4028235e+38;
                        FUN_005a4110(uVar4,&local_40,&local_70);
                        if ((((local_70 <= local_9c) &&
                             (local_64 < local_a8 == (NAN(local_64) || NAN(local_a8)))) &&
                            ((local_68 <= local_94 &&
                             ((local_5c < local_a0 == (NAN(local_5c) || NAN(local_a0)) &&
                              (local_6c <= local_98)))))) &&
                           (local_60 < local_a4 == (NAN(local_60) || NAN(local_a4)))) {
                          uVar1 = 0;
                          if (piVar11 != (int *)0x0) {
                            uVar1 = (**(code **)(*piVar11 + 0xbc))(uVar4);
                            piVar11 = local_84;
                          }
                          FUN_005785c0(&local_40,&local_34,&local_28,uVar4,uVar1,param_3,param_4);
                        }
                      }
                      iVar9 = iVar9 + 1;
                    } while (iVar9 < (int)local_44);
                  }
                  local_58 = local_58 + 2;
                  local_4c = local_4c + -1;
                } while (local_4c != 0);
              }
              local_8c = (float)((int)local_8c + *(int *)(param_1 + 0x54));
              local_50 = local_50 + -1;
            } while (local_50 != 0);
          }
          iVar9 = *(int *)(param_1 + 0x54);
          local_88 = (float)((int)local_88 + *(int *)(param_1 + 0x58) * iVar9);
          local_90 = local_90 + -1;
        } while (local_90 != 0);
      }
    }
  }
  return;
}

