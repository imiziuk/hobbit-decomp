
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_005b4840(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,undefined4 param_8,float param_9,uint param_10,uint param_11)

{
  undefined1 *puVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  int iVar19;
  undefined4 *puVar20;
  int *piVar21;
  bool bVar22;
  float10 fVar23;
  int *piStack_278;
  int *piStack_270;
  void *pvStack_268;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int local_24c;
  int local_248;
  int local_244;
  undefined1 local_240 [8];
  int iStack_238;
  int iStack_234;
  undefined4 uStack_230;
  int iStack_22c;
  float local_224;
  float local_220;
  int local_214;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  int *local_1f4;
  int iStack_1f0;
  float fStack_1ec;
  int iStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [12];
  undefined4 uStack_134;
  int iStack_12c;
  undefined1 auStack_124 [12];
  undefined4 uStack_118;
  int iStack_110;
  undefined1 auStack_108 [12];
  undefined4 uStack_fc;
  int iStack_f4;
  undefined1 auStack_ec [12];
  undefined4 uStack_e0;
  int iStack_d8;
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  int iStack_bc;
  undefined1 auStack_b4 [12];
  undefined4 uStack_a8;
  int iStack_a0;
  undefined1 auStack_98 [12];
  undefined4 uStack_8c;
  int iStack_84;
  undefined1 auStack_7c [12];
  undefined4 uStack_70;
  int iStack_68;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  int iStack_4c;
  undefined1 auStack_44 [12];
  undefined4 uStack_38;
  int iStack_30;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006deb24;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NavController__FindNavPath_00745678);
  local_4 = 0;
  FUN_005b47a0();
  if ((param_2 == param_5) && (param_3 == param_6)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    iVar8 = 1;
  }
  else {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar8 = FUN_00406ce0(param_2,param_3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar8 == -1) {
      FUN_00649720();
      piVar21 = (int *)0x0;
    }
    else {
      uVar12 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
      piVar21 = (int *)(-(uint)((*(byte *)(uVar12 + 0x7f) & 0x10) != 0) & uVar12);
      FUN_00649720();
    }
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 2;
    iVar8 = FUN_00406ce0(param_5,param_6);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar8 == -1) {
      FUN_00649720();
      piVar18 = (int *)0x0;
    }
    else {
      uVar12 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
      piVar18 = (int *)(-(uint)((*(byte *)(uVar12 + 0x7f) & 0x10) != 0) & uVar12);
      FUN_00649720();
    }
    local_1f4 = piVar18;
    if ((((piVar21 == (int *)0x0) || (piVar18 == (int *)0x0)) || ((char)piVar21[0x1f] != '#')) ||
       ((char)piVar18[0x1f] != '#')) {
LAB_005b5d7b:
      local_4 = 0xffffffff;
      FUN_00649720();
      iVar8 = 0;
    }
    else {
      FUN_0064cc00();
      FUN_006a1cb0();
      local_244 = 0;
      local_224 = 0.0;
      local_220 = 0.0;
      local_24c = param_2;
      local_248 = param_3;
      local_4._0_1_ = 3;
      local_214 = 0;
      pfVar9 = (float *)(**(code **)(*piVar21 + 0x28))();
      pfVar10 = (float *)(**(code **)(*piVar18 + 0x28))();
      FUN_00401f00(*pfVar10 - *pfVar9,pfVar10[1] - pfVar9[1],pfVar10[2] - pfVar9[2]);
      iVar8 = *(int *)(param_1 + 0x2c);
      local_224 = 0.0;
      local_220 = (fStack_1fc * fStack_1fc + fStack_1f8 * fStack_1f8 + fStack_200 * fStack_200) *
                  _DAT_006e936c;
      fVar6 = local_220 * _DAT_006e99bc;
      if (*(int *)(param_1 + 0x34) < iVar8 + 1) {
        if (*(int *)(param_1 + 0x3c) == 0) {
          iVar11 = *(int *)(param_1 + 0x34) / 2;
          iVar19 = 1;
          if (0 < iVar11) {
            iVar19 = iVar11;
          }
          if (iVar19 + iVar8 < 1) {
            iVar8 = 1;
          }
          else {
            if (iVar11 < 1) {
              iVar11 = 1;
            }
            iVar8 = iVar8 + iVar11;
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x3c) + iVar8;
        }
        piVar21 = (int *)operator_new(iVar8 * 0x30 + 4);
        iVar19 = 0;
        local_4._0_1_ = 4;
        if (piVar21 == (int *)0x0) {
          piStack_270 = (int *)0x0;
        }
        else {
          piStack_270 = piVar21 + 1;
          *piVar21 = iVar8;
          FUN_006c043b(piStack_270,0x30,iVar8,&LAB_005b6990,FUN_005b69c0);
        }
        local_4._0_1_ = 3;
        if (0 < *(int *)(param_1 + 0x2c)) {
          iVar11 = 0;
          do {
            FUN_005b5e30(*(int *)(param_1 + 0x30) + iVar11);
            iVar19 = iVar19 + 1;
            iVar11 = iVar11 + 0x30;
          } while (iVar19 < *(int *)(param_1 + 0x2c));
        }
        if (*(int *)(param_1 + 0x30) != 0) {
          FUN_005b68b0(3);
        }
        *(int **)(param_1 + 0x30) = piStack_270;
        *(int *)(param_1 + 0x34) = iVar8;
      }
      FUN_005b5e30(&local_24c);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      iStack_1f0 = DAT_00745510;
      do {
        iVar8 = 0;
        if ((*(int *)(param_1 + 0x2c) < 1) ||
           (iVar19 = iStack_1f0 + -1, bVar22 = iStack_1f0 == 0, iStack_1f0 = iVar19, bVar22)) break;
        FUN_00649600(s_NavController__ExpandANavPath_00745658);
        piVar21 = *(int **)(param_1 + 0x30);
        fStack_1ec = (float)piVar21[0xb];
        local_24c = *piVar21;
        local_248 = piVar21[1];
        local_244 = piVar21[2];
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_005b64a0(piVar21 + 3);
        local_224 = (float)piVar21[10];
        local_220 = (float)piVar21[0xb];
        iVar19 = 1;
        if (1 < *(int *)(param_1 + 0x2c)) {
          pfVar9 = (float *)(*(int *)(param_1 + 0x30) + 0x5c);
          do {
            if (*pfVar9 < fStack_1ec != (NAN(*pfVar9) || NAN(fStack_1ec))) {
              fStack_1ec = *pfVar9;
              iVar8 = iVar19;
            }
            iVar19 = iVar19 + 1;
            pfVar9 = pfVar9 + 0xc;
          } while (iVar19 < *(int *)(param_1 + 0x2c));
        }
        iVar19 = iVar8 * 0x30;
        local_24c = *(int *)(*(int *)(param_1 + 0x30) + iVar19);
        iVar11 = *(int *)(param_1 + 0x30) + iVar19;
        local_248 = *(int *)(iVar11 + 4);
        local_244 = *(undefined4 *)(iVar11 + 8);
        FUN_005b64a0(iVar11 + 0xc);
        local_224 = *(float *)(iVar11 + 0x28);
        local_220 = *(float *)(iVar11 + 0x2c);
        FUN_005b69c0();
        iVar8 = (*(int *)(param_1 + 0x2c) - iVar8) + -1;
        if (0 < iVar8) {
          do {
            FUN_005b5e30(*(int *)(param_1 + 0x30) + 0x30 + iVar19);
            iVar19 = iVar19 + 0x30;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        iVar8 = *(int *)(param_1 + 0x10);
        if (iVar8 == 0x1f) {
          FUN_005b5e70(param_7,fVar6 * _DAT_006e9550);
          FUN_0064cc50();
          local_4._0_1_ = 3;
          FUN_00649720();
          local_4._0_1_ = 6;
LAB_005b5d61:
          FUN_005b6470();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_005c8440();
          goto LAB_005b5d7b;
        }
        if (*(int *)(param_1 + 0x18) < iVar8 + 1) {
          iVar19 = 0;
          if (*(int *)(param_1 + 0x20) == 0) {
            iVar11 = *(int *)(param_1 + 0x18) / 2;
            iVar13 = 1;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (iVar13 + iVar8 < 1) {
              iVar11 = 1;
            }
            else {
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar11 = iVar11 + iVar8;
            }
          }
          else {
            iVar11 = *(int *)(param_1 + 0x20) + iVar8;
          }
          piVar21 = (int *)operator_new(iVar11 * 0x30 + 4);
          local_4._0_1_ = 7;
          if (piVar21 == (int *)0x0) {
            piStack_270 = (int *)0x0;
          }
          else {
            piStack_270 = piVar21 + 1;
            *piVar21 = iVar11;
            FUN_006c043b(piStack_270,0x30,iVar11,&LAB_005b6990,FUN_005b69c0);
          }
          local_4 = CONCAT31(local_4._1_3_,5);
          if (0 < *(int *)(param_1 + 0x10)) {
            iVar8 = 0;
            do {
              FUN_005b5e30(*(int *)(param_1 + 0x14) + iVar8);
              iVar19 = iVar19 + 1;
              iVar8 = iVar8 + 0x30;
            } while (iVar19 < *(int *)(param_1 + 0x10));
          }
          if (*(int *)(param_1 + 0x14) != 0) {
            FUN_005b68b0(3);
          }
          *(int **)(param_1 + 0x14) = piStack_270;
          *(int *)(param_1 + 0x18) = iVar11;
        }
        FUN_005b5e30(&local_24c);
        iVar19 = local_248;
        iVar8 = local_24c;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 8;
        iVar8 = FUN_00406ce0(iVar8,iVar19);
        local_4 = CONCAT31(local_4._1_3_,5);
        if (iVar8 == -1) {
          FUN_00649720();
        }
        else {
          uVar12 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
          piVar21 = (int *)(-(uint)((*(byte *)(uVar12 + 0x7f) & 0x10) != 0) & uVar12);
          FUN_00649720();
          if (piVar21 != (int *)0x0) {
            iStack_258 = 0;
            while( true ) {
              iVar8 = FUN_0049d8c0(auStack_44);
              iVar8 = *(int *)(iVar8 + 8);
              if (iStack_30 != 2) {
                FUN_006bf840(uStack_38);
              }
              if (iVar8 <= iStack_258) break;
              FUN_00649600(s_NavController__CheckANavPath_00745638);
              local_4._0_1_ = 9;
              iVar8 = FUN_0049d8c0(auStack_98);
              iVar19 = iStack_258 * 0x10;
              uVar3 = *(undefined4 *)(*(int *)(iVar8 + 0xc) + iVar19);
              uVar15 = *(undefined4 *)(*(int *)(iVar8 + 0xc) + 4 + iVar19);
              local_4._0_1_ = 10;
              FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
              local_4._0_1_ = 0xb;
              iVar8 = FUN_00406ce0(uVar3,uVar15);
              local_4 = CONCAT31(local_4._1_3_,10);
              if (iVar8 == -1) {
                FUN_00649720();
                piVar18 = (int *)0x0;
              }
              else {
                uVar12 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
                piVar18 = (int *)(-(uint)((*(byte *)(uVar12 + 0x7f) & 0x10) != 0) & uVar12);
                FUN_00649720();
              }
              local_4._0_1_ = 9;
              if (iStack_84 != 2) {
                FUN_006bf840(uStack_8c);
              }
              if ((piVar18 != (int *)0x0) &&
                 ((iVar8 = FUN_0049dbc0(), iVar8 == 0 ||
                  (uVar12 = FUN_0049dbc0(), (param_10 & uVar12) != 0)))) {
                iVar8 = FUN_0049d8c0(auStack_28);
                local_4 = CONCAT31(local_4._1_3_,0xc);
                if (*(int *)(*(int *)(iVar8 + 0xc) + 0xc + iVar19) == 0) {
LAB_005b4ff0:
                  bVar22 = false;
                }
                else {
                  iVar8 = FUN_0049d8c0(auStack_60);
                  uVar12 = *(uint *)(*(int *)(iVar8 + 0xc) + 0xc + iVar19);
                  if (iStack_4c != 2) {
                    FUN_006bf840(uStack_54);
                  }
                  if ((uVar12 & param_11) != 0) goto LAB_005b4ff0;
                  bVar22 = true;
                }
                local_4._0_1_ = 9;
                if (iStack_14 != 2) {
                  FUN_006bf840(uStack_1c);
                }
                if (!bVar22) {
                  pfVar9 = (float *)(**(code **)(*piVar21 + 0x28))();
                  pfVar10 = (float *)(**(code **)(*piVar18 + 0x28))();
                  FUN_00401f00(*pfVar10 - *pfVar9,pfVar10[1] - pfVar9[1],pfVar10[2] - pfVar9[2]);
                  fVar4 = fStack_1e4 * fStack_1e4 +
                          fStack_1dc * fStack_1dc + fStack_1e0 * fStack_1e0 + local_224;
                  pfVar9 = (float *)(**(code **)(*piVar18 + 0x28))();
                  pfVar10 = (float *)(**(code **)(*local_1f4 + 0x28))();
                  FUN_00401f00(*pfVar10 - *pfVar9,pfVar10[1] - pfVar9[1],pfVar10[2] - pfVar9[2]);
                  fVar5 = (fStack_1d8 * fStack_1d8 +
                          fStack_1d0 * fStack_1d0 + fStack_1d4 * fStack_1d4) * param_9 + fVar4;
                  FUN_0049d8c0(auStack_140);
                  if (iStack_12c != 2) {
                    FUN_006bf840(uStack_134);
                  }
                  FUN_00649600(s_NavController__LookingForPointIn_0074560c);
                  iVar8 = 0;
                  local_4._0_1_ = 0xd;
                  piStack_278 = (int *)0x0;
                  if (0 < *(int *)(param_1 + 0x10)) {
                    do {
                      iVar11 = FUN_0049d8c0(auStack_ec);
                      if ((*(int *)(iVar8 + *(int *)(param_1 + 0x14)) ==
                           *(int *)(*(int *)(iVar11 + 0xc) + iVar19)) &&
                         (*(int *)(iVar8 + 4 + *(int *)(param_1 + 0x14)) ==
                          *(int *)(*(int *)(iVar11 + 0xc) + 4 + iVar19))) {
                        bVar22 = true;
                      }
                      else {
                        bVar22 = false;
                      }
                      if (iStack_d8 != 2) {
                        FUN_006bf840(uStack_e0);
                      }
                      if (bVar22) goto LAB_005b5c20;
                      piStack_278 = (int *)((int)piStack_278 + 1);
                      iVar8 = iVar8 + 0x30;
                    } while ((int)piStack_278 < *(int *)(param_1 + 0x10));
                  }
                  local_4._0_1_ = 9;
                  FUN_00649720();
                  iVar8 = 0;
                  iStack_1e8 = 0;
                  FUN_00649600(s_NavController__LookingForPointIn_007455e4);
                  local_4._0_1_ = 0xe;
                  if (0 < *(int *)(param_1 + 0x2c)) {
                    iVar11 = 0;
LAB_005b5205:
                    iVar13 = FUN_0049d8c0(auStack_7c);
                    if ((*(int *)(iVar11 + *(int *)(param_1 + 0x30)) !=
                         *(int *)(*(int *)(iVar13 + 0xc) + iVar19)) ||
                       (bVar22 = true,
                       *(int *)(iVar11 + 4 + *(int *)(param_1 + 0x30)) !=
                       *(int *)(*(int *)(iVar13 + 0xc) + 4 + iVar19))) {
                      bVar22 = false;
                    }
                    if (iStack_68 != 2) {
                      FUN_006bf840(uStack_70);
                    }
                    if (!bVar22) goto code_r0x005b525a;
                    iVar8 = iVar8 * 0x30;
                    fVar2 = *(float *)(iVar8 + 0x28 + *(int *)(param_1 + 0x30));
                    iStack_1e8 = 1;
                    if (fVar4 < fVar2 != (NAN(fVar4) || NAN(fVar2))) {
                      *(float *)(iVar8 + 0x28 + *(int *)(param_1 + 0x30)) = fVar4;
                      *(float *)(iVar8 + 0x2c + *(int *)(param_1 + 0x30)) = fVar5;
                      iVar11 = iVar8 + 0xc + *(int *)(param_1 + 0x30);
                      if (*(int *)(iVar8 + 0x20 + *(int *)(param_1 + 0x30)) == 0) {
                        FUN_006bf840(*(undefined4 *)(iVar11 + 0xc));
                        *(undefined4 *)(iVar11 + 0xc) = 0;
                        *(undefined4 *)(iVar11 + 8) = 0;
                        *(undefined4 *)(iVar11 + 0x10) = 0;
                      }
                      else {
                        *(undefined4 *)(iVar11 + 8) = 0;
                      }
                      puVar1 = (undefined1 *)(iVar8 + 0xc + *(int *)(param_1 + 0x30));
                      if (puVar1 != local_240) {
                        if (*(int *)(puVar1 + 0x10) < iStack_238) {
                          FUN_006bf840(*(undefined4 *)(puVar1 + 0xc));
                          iVar11 = iStack_238;
                          pvVar14 = operator_new(iStack_238 << 4);
                          local_4._0_1_ = 0xf;
                          if (pvVar14 == (void *)0x0) {
                            pvVar14 = (void *)0x0;
                          }
                          else {
                            FUN_00401080(pvVar14,0x10,iVar11,FUN_005b6940);
                          }
                          *(void **)(puVar1 + 0xc) = pvVar14;
                          *(undefined4 *)(puVar1 + 8) = 0;
                          *(int *)(puVar1 + 0x10) = iStack_238;
                          local_4._0_1_ = 0xe;
                        }
                        iVar11 = 0;
                        if (0 < iStack_238) {
                          iVar13 = 0;
                          do {
                            puVar16 = (undefined4 *)(iStack_234 + iVar13);
                            puVar20 = (undefined4 *)(*(int *)(puVar1 + 0xc) + iVar13);
                            *puVar20 = *puVar16;
                            puVar20[1] = puVar16[1];
                            puVar20[2] = puVar16[2];
                            puVar20[3] = puVar16[3];
                            iVar11 = iVar11 + 1;
                            iVar13 = iVar13 + 0x10;
                          } while (iVar11 < iStack_238);
                        }
                        *(int *)(puVar1 + 8) = iStack_238;
                      }
                      if (*(int *)(param_1 + 0x2c) < 0x1f) {
                        iVar13 = FUN_0049d8c0(auStack_b4);
                        iStack_260 = *(int *)(iVar8 + 0x1c + *(int *)(param_1 + 0x30));
                        iVar8 = iVar8 + 0xc + *(int *)(param_1 + 0x30);
                        iVar11 = *(int *)(iVar8 + 8);
                        puVar16 = (undefined4 *)(*(int *)(iVar13 + 0xc) + iVar19);
                        local_4._0_1_ = 0x11;
                        if (iStack_260 < iVar11 + 1) {
                          if (*(int *)(iVar8 + 0x18) == 0) {
                            iStack_260 = iStack_260 / 2;
                            iVar13 = 1;
                            if (0 < iStack_260) {
                              iVar13 = iStack_260;
                            }
                            if (iVar13 + iVar11 < 1) {
                              iStack_260 = 1;
                            }
                            else {
                              if (iStack_260 < 1) {
                                iStack_260 = 1;
                              }
                              iStack_260 = iStack_260 + iVar11;
                            }
                          }
                          else {
                            iStack_260 = *(int *)(iVar8 + 0x18) + iVar11;
                          }
                          piStack_278 = (int *)operator_new(iStack_260 << 4);
                          local_4._0_1_ = 0x12;
                          if (piStack_278 == (int *)0x0) {
                            piStack_278 = (int *)0x0;
                          }
                          else {
                            FUN_00401080(piStack_278,0x10,iStack_260,FUN_005b6940);
                          }
                          iStack_254 = 0;
                          if (0 < *(int *)(iVar8 + 8)) {
                            iVar11 = 0;
                            do {
                              puVar20 = (undefined4 *)(*(int *)(iVar8 + 0xc) + iVar11);
                              puVar17 = (undefined4 *)((int)piStack_278 + iVar11);
                              *puVar17 = *puVar20;
                              puVar17[1] = puVar20[1];
                              puVar17[2] = puVar20[2];
                              puVar17[3] = puVar20[3];
                              iStack_254 = iStack_254 + 1;
                              iVar11 = iVar11 + 0x10;
                            } while (iStack_254 < *(int *)(iVar8 + 8));
                          }
                          FUN_006bf840(*(undefined4 *)(iVar8 + 0xc));
                          *(int **)(iVar8 + 0xc) = piStack_278;
                          *(int *)(iVar8 + 0x10) = iStack_260;
                        }
                        puVar20 = (undefined4 *)(*(int *)(iVar8 + 8) * 0x10 + *(int *)(iVar8 + 0xc))
                        ;
                        *puVar20 = *puVar16;
                        puVar20[1] = puVar16[1];
                        puVar20[2] = puVar16[2];
                        puVar20[3] = puVar16[3];
                        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
                        if (iStack_a0 != 2) {
                          FUN_006bf840(uStack_a8);
                        }
                        goto LAB_005b5511;
                      }
                      FUN_005b5e70(param_7,fVar6 * _DAT_006e9550);
                      FUN_0064cc50();
                      local_4._0_1_ = 9;
                      FUN_00649720();
                      local_4._0_1_ = 5;
                      FUN_00649720();
                      local_4._0_1_ = 3;
                      FUN_00649720();
                      local_4._0_1_ = 0x10;
                      goto LAB_005b5d61;
                    }
                  }
LAB_005b5511:
                  local_4._0_1_ = 9;
                  FUN_00649720();
                  if (iStack_1e8 == 0) {
                    FUN_00649600(s_NavController__AddingNewActivePa_007455c0);
                    local_4._0_1_ = 0x13;
                    uVar7 = (undefined1)local_4;
                    local_4._0_1_ = 0x13;
                    if ((0xf < iStack_238) || (0x1f < *(int *)(param_1 + 0x2c))) {
                      local_4._0_1_ = uVar7;
                      FUN_005b5e70(param_7,fVar6 * _DAT_006e9550);
                      FUN_0064cc50();
                      local_4._0_1_ = 9;
                      FUN_00649720();
                      local_4._0_1_ = 5;
                      FUN_00649720();
                      local_4._0_1_ = 3;
                      FUN_00649720();
                      local_4._0_1_ = 0x14;
                      goto LAB_005b5d61;
                    }
                    FUN_006a1cb0();
                    uStack_170 = 0;
                    uStack_16c = 0;
                    uStack_168 = 0;
                    uStack_148 = 0;
                    uStack_144 = 0;
                    iVar8 = *(int *)(param_1 + 0x2c);
                    local_4._0_1_ = 0x15;
                    uVar7 = (undefined1)local_4;
                    local_4._0_1_ = 0x15;
                    if (*(int *)(param_1 + 0x34) < iVar8 + 1) {
                      if (*(int *)(param_1 + 0x3c) == 0) {
                        iVar11 = *(int *)(param_1 + 0x34) / 2;
                        iVar13 = 1;
                        if (0 < iVar11) {
                          iVar13 = iVar11;
                        }
                        if (iVar13 + iVar8 < 1) {
                          iVar11 = 1;
                        }
                        else {
                          if (iVar11 < 1) {
                            iVar11 = 1;
                          }
                          iVar11 = iVar11 + iVar8;
                        }
                      }
                      else {
                        iVar11 = *(int *)(param_1 + 0x3c) + iVar8;
                      }
                      piVar18 = (int *)operator_new(iVar11 * 0x30 + 4);
                      local_4._0_1_ = 0x16;
                      if (piVar18 == (int *)0x0) {
                        piStack_278 = (int *)0x0;
                      }
                      else {
                        piStack_278 = piVar18 + 1;
                        *piVar18 = iVar11;
                        FUN_006c043b(piStack_278,0x30,iVar11,&LAB_005b6990,FUN_005b69c0);
                      }
                      iVar8 = 0;
                      local_4._0_1_ = 0x15;
                      if (0 < *(int *)(param_1 + 0x2c)) {
                        iVar13 = 0;
                        do {
                          FUN_005b5e30(*(int *)(param_1 + 0x30) + iVar13);
                          iVar8 = iVar8 + 1;
                          iVar13 = iVar13 + 0x30;
                        } while (iVar8 < *(int *)(param_1 + 0x2c));
                      }
                      if (*(int *)(param_1 + 0x30) != 0) {
                        FUN_005b68b0(3);
                      }
                      *(int **)(param_1 + 0x30) = piStack_278;
                      *(int *)(param_1 + 0x34) = iVar11;
                      uVar7 = (undefined1)local_4;
                    }
                    local_4._0_1_ = uVar7;
                    FUN_005b5e30(&uStack_170);
                    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
                    iVar8 = FUN_0049d8c0(auStack_124);
                    iVar8 = *(int *)(iVar8 + 0xc);
                    iVar11 = *(int *)(param_1 + 0x30);
                    iVar13 = *(int *)(param_1 + 0x2c) * 0x30;
                    *(undefined4 *)(iVar13 + -0x30 + iVar11) = *(undefined4 *)(iVar8 + iVar19);
                    *(undefined4 *)(iVar13 + -0x2c + iVar11) = *(undefined4 *)(iVar8 + 4 + iVar19);
                    if (iStack_110 != 2) {
                      FUN_006bf840(uStack_118);
                    }
                    *(float *)(*(int *)(param_1 + 0x2c) * 0x30 + -8 + *(int *)(param_1 + 0x30)) =
                         fVar4;
                    *(float *)(*(int *)(param_1 + 0x2c) * 0x30 + -4 + *(int *)(param_1 + 0x30)) =
                         fVar5;
                    puVar1 = (undefined1 *)
                             (*(int *)(param_1 + 0x2c) * 0x30 + -0x24 + *(int *)(param_1 + 0x30));
                    if (puVar1 != local_240) {
                      if (*(int *)(puVar1 + 0x10) < iStack_238) {
                        FUN_006bf840(*(undefined4 *)(puVar1 + 0xc));
                        iVar8 = iStack_238;
                        pvVar14 = operator_new(iStack_238 << 4);
                        local_4._0_1_ = 0x17;
                        if (pvVar14 == (void *)0x0) {
                          pvVar14 = (void *)0x0;
                        }
                        else {
                          FUN_00401080(pvVar14,0x10,iVar8,FUN_005b6940);
                        }
                        *(void **)(puVar1 + 0xc) = pvVar14;
                        *(undefined4 *)(puVar1 + 8) = 0;
                        *(int *)(puVar1 + 0x10) = iStack_238;
                        local_4._0_1_ = 0x15;
                      }
                      iVar8 = 0;
                      if (0 < iStack_238) {
                        iVar11 = 0;
                        do {
                          puVar16 = (undefined4 *)(iStack_234 + iVar11);
                          puVar20 = (undefined4 *)(*(int *)(puVar1 + 0xc) + iVar11);
                          *puVar20 = *puVar16;
                          puVar20[1] = puVar16[1];
                          puVar20[2] = puVar16[2];
                          puVar20[3] = puVar16[3];
                          iVar8 = iVar8 + 1;
                          iVar11 = iVar11 + 0x10;
                        } while (iVar8 < iStack_238);
                      }
                      *(int *)(puVar1 + 8) = iStack_238;
                    }
                    iVar13 = FUN_0049d8c0(auStack_108);
                    iVar8 = *(int *)(param_1 + 0x2c) * 0x30 + -0x24 + *(int *)(param_1 + 0x30);
                    iVar11 = *(int *)(iVar8 + 8);
                    puVar16 = (undefined4 *)(*(int *)(iVar13 + 0xc) + iVar19);
                    local_4._0_1_ = 0x18;
                    if (*(int *)(iVar8 + 0x10) < iVar11 + 1) {
                      if (*(int *)(iVar8 + 0x18) == 0) {
                        iStack_260 = *(int *)(iVar8 + 0x10) / 2;
                        iVar13 = 1;
                        if (0 < iStack_260) {
                          iVar13 = iStack_260;
                        }
                        if (iVar13 + iVar11 < 1) {
                          iStack_260 = 1;
                        }
                        else {
                          if (iStack_260 < 1) {
                            iStack_260 = 1;
                          }
                          iStack_260 = iStack_260 + iVar11;
                        }
                      }
                      else {
                        iStack_260 = *(int *)(iVar8 + 0x18) + iVar11;
                      }
                      pvStack_268 = operator_new(iStack_260 << 4);
                      local_4._0_1_ = 0x19;
                      if (pvStack_268 == (void *)0x0) {
                        pvStack_268 = (void *)0x0;
                      }
                      else {
                        FUN_00401080(pvStack_268,0x10,iStack_260,FUN_005b6940);
                      }
                      iStack_25c = 0;
                      if (0 < *(int *)(iVar8 + 8)) {
                        iVar11 = 0;
                        do {
                          puVar20 = (undefined4 *)(*(int *)(iVar8 + 0xc) + iVar11);
                          puVar17 = (undefined4 *)((int)pvStack_268 + iVar11);
                          *puVar17 = *puVar20;
                          puVar17[1] = puVar20[1];
                          puVar17[2] = puVar20[2];
                          puVar17[3] = puVar20[3];
                          iStack_25c = iStack_25c + 1;
                          iVar11 = iVar11 + 0x10;
                        } while (iStack_25c < *(int *)(iVar8 + 8));
                      }
                      FUN_006bf840(*(undefined4 *)(iVar8 + 0xc));
                      *(void **)(iVar8 + 0xc) = pvStack_268;
                      *(int *)(iVar8 + 0x10) = iStack_260;
                    }
                    puVar20 = (undefined4 *)(*(int *)(iVar8 + 8) * 0x10 + *(int *)(iVar8 + 0xc));
                    *puVar20 = *puVar16;
                    puVar20[1] = puVar16[1];
                    puVar20[2] = puVar16[2];
                    puVar20[3] = puVar16[3];
                    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
                    local_4._0_1_ = 0x15;
                    if (iStack_f4 != 2) {
                      FUN_006bf840(uStack_fc);
                    }
                    iVar8 = FUN_0049d8c0(auStack_d0);
                    if ((*(int *)(*(int *)(iVar8 + 0xc) + iVar19) == param_5) &&
                       (*(int *)(*(int *)(iVar8 + 0xc) + 4 + iVar19) == param_6)) {
                      bVar22 = true;
                    }
                    else {
                      bVar22 = false;
                    }
                    if (iStack_bc != 2) {
                      FUN_006bf840(uStack_c4);
                    }
                    if (bVar22) {
                      iVar8 = *(int *)(param_1 + 0x2c);
                      iVar19 = *(int *)(param_1 + 0x30);
                      iStack_258 = 0;
                      if (0 < *(int *)(iVar8 * 0x30 + -0x1c + iVar19)) {
                        iStack_25c = 0;
                        do {
                          iVar8 = *(int *)(iVar8 * 0x30 + -0x18 + iVar19);
                          uVar3 = *(undefined4 *)(iStack_25c + iVar8);
                          uVar15 = *(undefined4 *)(iStack_25c + 4 + iVar8);
                          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
                          local_4._0_1_ = 0x1a;
                          iVar8 = FUN_00406ce0(uVar3,uVar15);
                          local_4._0_1_ = 0x15;
                          if (iVar8 == -1) {
                            FUN_00649720();
                          }
                          else {
                            uVar12 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
                            piVar18 = (int *)(-(uint)((*(byte *)(uVar12 + 0x7f) & 0x10) != 0) &
                                             uVar12);
                            FUN_00649720();
                            if (piVar18 != (int *)0x0) {
                              uVar3 = *(undefined4 *)
                                       (*(int *)(*(int *)(param_1 + 0x2c) * 0x30 + -0x18 +
                                                *(int *)(param_1 + 0x30)) + 0xc + iStack_25c);
                              fVar23 = (float10)FUN_0049e280();
                              uVar15 = (**(code **)(*piVar18 + 0x28))();
                              FUN_004357e0(uVar15);
                              uStack_190 = uStack_19c;
                              uStack_18c = uStack_198;
                              uStack_188 = uStack_194;
                              uStack_184 = uVar3;
                              fStack_180 = (float)fVar23;
                              FUN_00404870(0,0,0);
                              iVar8 = *(int *)(param_7 + 8);
                              if (*(int *)(param_7 + 0x10) < iVar8 + 1) {
                                if (*(int *)(param_7 + 0x18) == 0) {
                                  iVar19 = *(int *)(param_7 + 0x10) / 2;
                                  iVar11 = 1;
                                  if (0 < iVar19) {
                                    iVar11 = iVar19;
                                  }
                                  if (iVar11 + iVar8 < 1) {
                                    iVar19 = 1;
                                  }
                                  else {
                                    if (iVar19 < 1) {
                                      iVar19 = 1;
                                    }
                                    iVar19 = iVar19 + iVar8;
                                  }
                                }
                                else {
                                  iVar19 = *(int *)(param_7 + 0x18) + iVar8;
                                }
                                pvStack_268 = operator_new(iVar19 << 5);
                                local_4._0_1_ = 0x1b;
                                if (pvStack_268 == (void *)0x0) {
                                  pvStack_268 = (void *)0x0;
                                }
                                else {
                                  FUN_00401080(pvStack_268,0x20,iVar19,FUN_0059b670);
                                }
                                iVar8 = 0;
                                local_4._0_1_ = 0x15;
                                if (0 < *(int *)(param_7 + 8)) {
                                  iVar11 = 0;
                                  do {
                                    FUN_0059b3e0(*(int *)(param_7 + 0xc) + iVar11);
                                    iVar8 = iVar8 + 1;
                                    iVar11 = iVar11 + 0x20;
                                  } while (iVar8 < *(int *)(param_7 + 8));
                                }
                                FUN_006bf840(*(undefined4 *)(param_7 + 0xc));
                                *(void **)(param_7 + 0xc) = pvStack_268;
                                *(int *)(param_7 + 0x10) = iVar19;
                              }
                              FUN_0059b3e0(&uStack_190);
                              *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 1;
                            }
                          }
                          iVar8 = *(int *)(param_1 + 0x2c);
                          iVar19 = *(int *)(param_1 + 0x30);
                          iStack_258 = iStack_258 + 1;
                          iStack_25c = iStack_25c + 0x10;
                        } while (iStack_258 < *(int *)(iVar8 * 0x30 + -0x1c + iVar19));
                      }
                      local_214 = 1;
                    }
                    local_4._0_1_ = 0x1c;
                    FUN_005b6470();
                    local_4._0_1_ = 0x13;
                    FUN_005c8440();
LAB_005b5c20:
                    local_4._0_1_ = 9;
                    FUN_00649720();
                  }
                }
              }
              local_4 = CONCAT31(local_4._1_3_,5);
              FUN_00649720();
              iStack_258 = iStack_258 + 1;
            }
          }
        }
        local_4._0_1_ = 3;
        FUN_00649720();
      } while (local_214 == 0);
      FUN_0064cc50();
      iVar8 = local_214;
      if (local_214 == 0) {
        FUN_005b5e70(param_7,fVar6 * _DAT_006e9550);
      }
      if (iStack_22c == 0) {
        FUN_006bf840(iStack_234);
        iStack_234 = 0;
        uStack_230 = 0;
      }
      iStack_238 = 0;
      if (iStack_22c != 2) {
        FUN_006bf840(iStack_234);
      }
      local_4 = 0xffffffff;
      FUN_00649720();
    }
  }
  ExceptionList = local_c;
  return iVar8;
code_r0x005b525a:
  iVar8 = iVar8 + 1;
  iVar11 = iVar11 + 0x30;
  if (*(int *)(param_1 + 0x2c) <= iVar8) goto LAB_005b5511;
  goto LAB_005b5205;
}

