
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a4350(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  uint uStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  int iStack_ac;
  uint uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  _DAT_007a59b8 = _DAT_007a59b8 + 1;
  if (*(int *)(param_1 + 100) != 0) {
    pfVar1 = (float *)FUN_0057dc80();
    local_c4 = *pfVar1 - _DAT_006e99bc;
    local_c0 = pfVar1[1] - _DAT_006e99bc;
    local_bc = pfVar1[2] - _DAT_006e99bc;
    local_b8 = pfVar1[3] + _DAT_006e99bc;
    local_b4 = pfVar1[4] + _DAT_006e99bc;
    local_b0 = pfVar1[5] + _DAT_006e99bc;
    if ((((*(float *)(param_1 + 0xc) <= local_b8) &&
         (*(float *)(param_1 + 0x18) < local_c4 ==
          (NAN(*(float *)(param_1 + 0x18)) || NAN(local_c4)))) &&
        (*(float *)(param_1 + 0x14) <= local_b0)) &&
       (((*(float *)(param_1 + 0x20) < local_bc ==
          (NAN(*(float *)(param_1 + 0x20)) || NAN(local_bc)) &&
         (*(float *)(param_1 + 0x10) <= local_b4)) &&
        (*(float *)(param_1 + 0x1c) < local_c0 == (NAN(*(float *)(param_1 + 0x1c)) || NAN(local_c0))
        )))) {
      if (DAT_007a59c0 != 0) {
        FUN_00669cf0(&local_c4,0xff00ff00);
      }
      uStack_70 = FUN_0057dca0();
      if ((short)uStack_70 == 0) {
        FUN_00648600(&DAT_007986c8,0xff,54000);
      }
      iVar2 = __ftol();
      iVar3 = __ftol();
      iVar4 = __ftol();
      iVar5 = __ftol();
      uStack_a8 = iVar5 - 0x400;
      iStack_a4 = __ftol();
      iStack_a4 = iStack_a4 + -0x400;
      iVar5 = __ftol();
      uStack_c8 = ((int)(iVar2 - 0x400U) < 0) - 1 & iVar2 - 0x400U;
      uVar10 = ((int)(iVar3 - 0x400U) < 0) - 1 & iVar3 - 0x400U;
      uVar8 = ((int)(iVar4 - 0x400U) < 0) - 1 & iVar4 - 0x400U;
      iVar2 = *(int *)(param_1 + 0x54);
      uVar12 = iVar2 - 1;
      if ((int)uVar12 < (int)uStack_a8) {
        uStack_a8 = uVar12;
      }
      iVar3 = *(int *)(param_1 + 0x58);
      if (iVar3 + -1 < iStack_a4) {
        iStack_a4 = iVar3 + -1;
      }
      uVar11 = *(int *)(param_1 + 0x5c) - 1;
      uVar6 = iVar5 - 0x400U;
      if ((int)uVar11 < (int)(iVar5 - 0x400U)) {
        uVar6 = uVar11;
      }
      if ((int)uVar12 < (int)uStack_c8) {
        uStack_c8 = uVar12;
      }
      if ((int)(iVar3 - 1U) < (int)uVar10) {
        uVar10 = iVar3 - 1U;
      }
      if ((int)uVar11 < (int)uVar8) {
        uVar8 = uVar11;
      }
      iStack_90 = iVar3 * iVar2 * uVar8;
      if ((int)uVar8 <= (int)uVar6) {
        iStack_ac = (uVar6 - uVar8) + 1;
        do {
          iStack_94 = iVar2 * uVar10 + iStack_90;
          if ((int)uVar10 <= iStack_a4) {
            iStack_98 = (iStack_a4 - uVar10) + 1;
            do {
              if ((int)uStack_c8 <= (int)uStack_a8) {
                iStack_9c = (iStack_94 + uStack_c8) * 2;
                iStack_a0 = (uStack_a8 - uStack_c8) + 1;
                do {
                  uVar12 = (uint)*(ushort *)(iStack_9c + *(int *)(param_1 + 0x84));
                  iStack_74 = *(int *)(param_1 + 0x8c) +
                              (uint)*(ushort *)(*(int *)(param_1 + 0x88) + iStack_9c) * 2;
                  iVar2 = 0;
                  if (uVar12 != 0) {
                    do {
                      uVar8 = (uint)*(ushort *)(iStack_74 + iVar2 * 2);
                      if (*(short *)(&DAT_007986c8 + uVar8 * 2) != (short)uStack_70) {
                        *(short *)(&DAT_007986c8 + uVar8 * 2) = (short)uStack_70;
                        fStack_8c = 3.4028235e+38;
                        fStack_88 = 3.4028235e+38;
                        fStack_84 = 3.4028235e+38;
                        fStack_80 = -3.4028235e+38;
                        fStack_7c = -3.4028235e+38;
                        fStack_78 = -3.4028235e+38;
                        FUN_005a4110(uVar8,auStack_6c,&fStack_8c);
                        uVar7 = extraout_ECX;
                        if (DAT_007a59c0 != 0) {
                          uVar14 = 0;
                          FUN_00406b70(0xffffffff);
                          FUN_00669ca0(auStack_6c,auStack_60,uVar7,uVar14);
                          uVar14 = 0;
                          uVar7 = extraout_ECX_00;
                          FUN_00406b70(0xffffffff);
                          FUN_00669ca0(auStack_60,auStack_54,uVar7,uVar14);
                          uVar14 = 0;
                          uVar7 = extraout_ECX_01;
                          FUN_00406b70(0xffffffff);
                          FUN_00669ca0(auStack_54,auStack_6c,uVar7,uVar14);
                          uVar7 = extraout_ECX_02;
                        }
                        if (((local_b8 < fStack_8c) ||
                            (fStack_80 < local_c4 != (NAN(fStack_80) || NAN(local_c4)))) ||
                           ((local_b0 < fStack_84 ||
                            (((fStack_78 < local_bc != (NAN(fStack_78) || NAN(local_bc)) ||
                              (local_b4 < fStack_88)) ||
                             (fStack_7c < local_c0 != (NAN(fStack_7c) || NAN(local_c0)))))))) {
                          if (DAT_007a59c0 != 0) {
                            puVar13 = &DAT_007328e4;
                            FUN_00406b70(0xffffffff);
                            uVar7 = FUN_00402130(auStack_c,auStack_6c,auStack_60,auStack_54,
                                                 0x40400000,uVar7,puVar13,uVar8);
                            uVar7 = FUN_00402130(auStack_48,uVar7);
                            puVar9 = auStack_18;
                            goto LAB_005a48ab;
                          }
                        }
                        else {
                          FUN_00579b90(auStack_6c,auStack_60,auStack_54,0,0,uVar8);
                          if (DAT_007a59c0 != 0) {
                            puVar13 = &DAT_007328e4;
                            uVar7 = extraout_ECX_03;
                            FUN_00406b70(0xffffff00);
                            uVar7 = FUN_00402130(auStack_24,auStack_6c,auStack_60,auStack_54,
                                                 0x40400000,uVar7,puVar13,uVar8);
                            uVar7 = FUN_00402130(auStack_30,uVar7);
                            puVar9 = auStack_3c;
LAB_005a48ab:
                            uVar7 = FUN_004451d0(puVar9,uVar7);
                            FUN_0066ae20(uVar7);
                          }
                        }
                      }
                      iVar2 = iVar2 + 1;
                    } while (iVar2 < (int)uVar12);
                  }
                  iStack_9c = iStack_9c + 2;
                  iStack_a0 = iStack_a0 + -1;
                } while (iStack_a0 != 0);
              }
              iStack_94 = iStack_94 + *(int *)(param_1 + 0x54);
              iStack_98 = iStack_98 + -1;
            } while (iStack_98 != 0);
          }
          iVar2 = *(int *)(param_1 + 0x54);
          iStack_90 = iStack_90 + *(int *)(param_1 + 0x58) * iVar2;
          iStack_ac = iStack_ac + -1;
        } while (iStack_ac != 0);
      }
    }
  }
  return;
}

