
void __thiscall FUN_004dd480(int *param_1,float param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  int **ppiVar15;
  uint *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  char *pcVar21;
  int local_ec;
  uint local_e8;
  uint local_e4;
  int local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 *local_d4;
  float local_d0;
  float local_cc;
  undefined4 *local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 *local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 *local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_70;
  int *local_6c [16];
  undefined4 uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d572a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_trigger__OnAdvanceLogic_0072e48c);
  local_4 = 0;
  if (param_1[0x55] == 0) {
    iVar5 = FUN_004aabb0(s_OnEnter_0072e478,s_v_lobject__0072e480);
    if ((((iVar5 == 0) &&
         (iVar5 = FUN_004aabb0(s_OnPivotEnter_0072e468,s_v_lobject__0072e480), iVar5 == 0)) &&
        (iVar5 = FUN_004aabb0(s_OnExit_0072e460,s_v_lobject__0072e480), iVar5 == 0)) &&
       ((iVar5 = FUN_004aabb0(s_OnEmpty_0072e458,&DAT_0071fa28), iVar5 == 0 &&
        (iVar5 = FUN_004aabb0(s_OnNotEmpty_0072e44c,&DAT_0071fa28), iVar5 == 0)))) {
      param_1[0x55] = 2;
    }
    else {
      param_1[0x55] = 1;
    }
    if ((*(byte *)((int)param_1 + 0x122) & 1) != 0) {
      param_1[0x55] = 1;
    }
  }
  if (param_1[0x6b] != 0) {
    if ((float)param_1[0x6c] <= DAT_006e92e4) {
      FUN_00659c80(param_1[0x6b],0);
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
    }
    else {
      param_1[0x6c] = (int)((float)param_1[0x6c] - param_2);
    }
  }
  if (((*(byte *)(param_1 + 0x48) & 8) != 0) && (iVar5 = FUN_004de6e0(), iVar5 != 0)) {
    param_1[0x49] = (int)(param_2 + (float)param_1[0x49]);
    FUN_004aaaf0(s_OnUpdate_0072e440,&DAT_0071fa28,param_1);
  }
  if (((param_1[0x48] & 1U) == 0) &&
     (((param_1[0x48] & 8U) == 0 ||
      ((iVar5 = FUN_004de670(), iVar5 != 0 && (iVar5 = FUN_004de640(), iVar5 != 0))))))
  goto LAB_004de197;
  if (param_1[0x55] == 1) {
    FUN_004e2dc0(local_6c);
    if ((param_1[0x48] & 0x40000U) == 0) {
      piVar6 = (int *)FUN_0054d4f0(&local_e8,0xffffffff,param_1[0x47],param_1 + 0x11);
      local_ec = *piVar6;
    }
    else {
      piVar6 = (int *)FUN_00588a30(&local_e8);
      local_ec = *piVar6;
      uVar20 = FUN_0041bcd0();
      FUN_00588c70(local_ec,uVar20);
    }
    FUN_00588ff0(local_ec);
    iVar7 = FUN_00589010(local_ec,&local_e0);
    iVar5 = local_e0;
    uVar2 = local_dc;
    while (local_e0 = iVar5, iVar7 != 0) {
      local_dc = uVar2;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar5 = FUN_00406ce0(iVar5,uVar2);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar5 == -1) {
        FUN_00649720();
      }
      else {
        uVar9 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
        uVar9 = -(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9;
        FUN_00649720();
        if (uVar9 != 0) {
          if (*(char *)(uVar9 + 0x7c) == '\x1e') goto LAB_004dd878;
          if ((*(uint *)(uVar9 + 0x10) & 0x1000) == 0) {
LAB_004dd748:
            local_cc = *(float *)(uVar9 + 0x4c);
            local_d4 = *(undefined4 **)(uVar9 + 0x44);
            local_d0 = *(float *)(uVar9 + 0x48);
            FUN_004357e0(uVar9 + 0x50);
            if (((((float)param_1[0x11] <= (float)local_c8) &&
                 ((float)param_1[0x14] < (float)local_d4 ==
                  (NAN((float)param_1[0x14]) || NAN((float)local_d4)))) &&
                ((float)param_1[0x13] <= local_c0)) &&
               ((((float)param_1[0x16] < local_cc == (NAN((float)param_1[0x16]) || NAN(local_cc)) &&
                 ((float)param_1[0x12] <= local_c4)) &&
                ((float)param_1[0x15] < local_d0 == (NAN((float)param_1[0x15]) || NAN(local_d0))))))
            {
              iVar5 = 0;
              ppiVar15 = local_6c + 1;
              do {
                puVar10 = local_d4;
                if (DAT_006e92e4 < (float)ppiVar15[-1]) {
                  puVar10 = local_c8;
                }
                fVar19 = local_d0;
                if (DAT_006e92e4 < (float)*ppiVar15) {
                  fVar19 = local_c4;
                }
                fVar17 = local_cc;
                if (DAT_006e92e4 < (float)ppiVar15[1]) {
                  fVar17 = local_c0;
                }
                fVar19 = fVar17 * (float)ppiVar15[1] +
                         (float)puVar10 * (float)ppiVar15[-1] + fVar19 * (float)*ppiVar15 +
                         (float)ppiVar15[2];
                if (fVar19 < DAT_006e92e4 != (NAN(fVar19) || NAN(DAT_006e92e4))) {
                  FUN_00588dc0(local_ec,local_e0,local_dc);
                  break;
                }
                iVar5 = iVar5 + 1;
                ppiVar15 = ppiVar15 + 4;
              } while (iVar5 < 6);
              if (iVar5 == 6) goto LAB_004dd881;
            }
          }
          else if ((*(ushort *)(uVar9 + 0x15a) & 0x400) == 0) {
            if ((*(uint *)(uVar9 + 0x10) & 1) == 0) goto LAB_004dd748;
          }
          else if ((*(ushort *)(uVar9 + 0x15a) & 0x1000) == 0) goto LAB_004dd748;
LAB_004dd878:
          FUN_00588dc0(local_ec,local_e0,local_dc);
        }
      }
LAB_004dd881:
      iVar7 = FUN_00589010(local_ec,&local_e0);
      iVar5 = local_e0;
      uVar2 = local_dc;
    }
    if ((local_ec != -1) && (iVar5 = FUN_00588bd0(local_ec), iVar5 == 0)) {
      FUN_00588b20(local_ec);
      local_ec = -1;
    }
    uVar9 = param_1[0x48];
    if ((uVar9 & 1) == 0) {
      fVar19 = 0.0;
      local_c8 = (undefined4 *)0x0;
      local_cc = 0.0;
      local_c4 = 0.0;
      local_bc = 0;
      local_c0 = 0.0;
      local_d4 = (undefined4 *)0x0;
      local_d0 = 0.0;
      local_ac = (undefined4 *)0x0;
      local_b0 = 0.0;
      local_a8 = 0;
      local_a0 = 0;
      local_a4 = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_88 = (undefined4 *)0x0;
      local_8c = 0;
      local_84 = 0.0;
      local_7c = 0;
      local_80 = 0;
      local_94 = 0;
      local_90 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      param_1[0x48] = uVar9 & 0xfffffffb;
      if (local_ec != -1) {
        FUN_00588ff0(local_ec);
        iVar5 = FUN_00589010(local_ec,&local_e8);
        while (iVar5 != 0) {
          local_d8 = (float)((int)fVar19 + 1);
          fVar17 = fVar19;
          if ((int)local_c4 < (int)local_d8) {
            iVar7 = (int)local_c4 / 2;
            iVar5 = 1;
            if (0 < iVar7) {
              iVar5 = iVar7;
            }
            if (iVar5 + (int)fVar19 < 1) {
              fVar18 = 1.4013e-45;
            }
            else {
              if (iVar7 < 1) {
                iVar7 = 1;
              }
              fVar18 = (float)(iVar7 + (int)fVar19);
            }
            puVar10 = (undefined4 *)operator_new((int)fVar18 * 8);
            if (0 < (int)fVar19) {
              puVar12 = puVar10;
              do {
                *puVar12 = *(undefined4 *)(((int)local_c8 - (int)puVar10) + (int)puVar12);
                puVar12[1] = *(undefined4 *)(((int)local_c8 - (int)puVar10) + 4 + (int)puVar12);
                puVar12 = puVar12 + 2;
                fVar19 = (float)((int)fVar19 + -1);
                fVar17 = local_cc;
              } while (fVar19 != 0.0);
            }
            FUN_006bf840(local_c8);
            local_c8 = puVar10;
            local_c4 = fVar18;
          }
          fVar19 = local_d8;
          local_c8[(int)fVar17 * 2] = local_e8;
          local_c8[(int)fVar17 * 2 + 1] = local_e4;
          iVar5 = 0;
          local_cc = local_d8;
          if (0 < param_1[0x42]) {
            puVar16 = (uint *)param_1[0x43];
            do {
              if ((*puVar16 == local_e8) && (puVar16[1] == local_e4)) {
                if (iVar5 != -1) goto LAB_004ddc7c;
                break;
              }
              iVar5 = iVar5 + 1;
              puVar16 = puVar16 + 2;
            } while (iVar5 < param_1[0x42]);
          }
          local_d8 = (float)((int)local_b0 + 1);
          if (local_a8 < (int)local_d8) {
            iVar5 = local_a8 / 2;
            iVar7 = 1;
            if (0 < iVar5) {
              iVar7 = iVar5;
            }
            if (iVar7 + (int)local_b0 < 1) {
              iVar5 = 1;
            }
            else {
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              iVar5 = iVar5 + (int)local_b0;
            }
            puVar10 = (undefined4 *)operator_new(iVar5 * 8);
            if (0 < (int)local_b0) {
              puVar12 = puVar10;
              fVar17 = local_b0;
              do {
                *puVar12 = *(undefined4 *)(((int)local_ac - (int)puVar10) + (int)puVar12);
                puVar12[1] = *(undefined4 *)(((int)local_ac - (int)puVar10) + 4 + (int)puVar12);
                puVar12 = puVar12 + 2;
                fVar17 = (float)((int)fVar17 + -1);
                fVar19 = local_cc;
              } while (fVar17 != 0.0);
            }
            FUN_006bf840(local_ac);
            local_ac = puVar10;
            local_a8 = iVar5;
          }
          local_ac[(int)local_b0 * 2] = local_e8;
          local_ac[(int)local_b0 * 2 + 1] = local_e4;
          param_1[0x48] = param_1[0x48] | 4;
          local_b0 = local_d8;
LAB_004ddc7c:
          iVar5 = FUN_00589010(local_ec,&local_e8);
        }
        FUN_00588b20(local_ec);
      }
      local_e8 = param_1[0x42];
      local_ec = 0;
      if (0 < (int)local_e8) {
        do {
          iVar5 = 0;
          if (0 < (int)local_cc) {
            do {
              if ((local_c8[iVar5 * 2] == *(int *)(param_1[0x43] + local_ec * 8)) &&
                 (local_c8[iVar5 * 2 + 1] == *(int *)(param_1[0x43] + 4 + local_ec * 8))) {
                if (iVar5 != -1) goto LAB_004dde31;
                break;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)local_cc);
          }
          iVar5 = local_ec * 8;
          uVar2 = *(undefined4 *)(iVar5 + param_1[0x43]);
          uVar3 = *(undefined4 *)(iVar5 + 4 + param_1[0x43]);
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          local_4._0_1_ = 5;
          iVar7 = FUN_00406ce0(uVar2,uVar3);
          local_4 = CONCAT31(local_4._1_3_,4);
          if (iVar7 == -1) {
            FUN_00649720();
          }
          else {
            uVar9 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
            bVar1 = *(byte *)(uVar9 + 0x7f);
            FUN_00649720();
            iVar7 = local_8c;
            if ((-(uint)((bVar1 & 0x10) != 0) & uVar9) != 0) {
              local_70 = (undefined4 *)(param_1[0x43] + iVar5);
              local_e0 = local_8c + 1;
              if ((int)local_84 < local_e0) {
                iVar11 = (int)local_84 / 2;
                iVar5 = 1;
                if (0 < iVar11) {
                  iVar5 = iVar11;
                }
                if (iVar5 + local_8c < 1) {
                  fVar19 = 1.4013e-45;
                }
                else {
                  if (iVar11 < 1) {
                    iVar11 = 1;
                  }
                  fVar19 = (float)(iVar11 + local_8c);
                }
                local_d8 = fVar19;
                puVar10 = (undefined4 *)operator_new((int)fVar19 * 8);
                if (0 < iVar7) {
                  puVar12 = puVar10;
                  iVar5 = iVar7;
                  do {
                    *puVar12 = *(undefined4 *)(((int)local_88 - (int)puVar10) + (int)puVar12);
                    puVar12[1] = *(undefined4 *)(((int)local_88 - (int)puVar10) + 4 + (int)puVar12);
                    puVar12 = puVar12 + 2;
                    iVar5 = iVar5 + -1;
                    fVar19 = local_d8;
                  } while (iVar5 != 0);
                }
                FUN_006bf840(local_88);
                local_88 = puVar10;
                local_84 = fVar19;
              }
              local_88[iVar7 * 2] = *local_70;
              local_88[iVar7 * 2 + 1] = local_70[1];
              local_8c = local_e0;
            }
          }
LAB_004dde31:
          local_ec = local_ec + 1;
        } while (local_ec < (int)local_e8);
      }
      fVar19 = local_b0;
      puVar10 = local_ac;
      if (0 < (int)local_b0) {
        do {
          FUN_004de1d0(puVar10);
          fVar19 = (float)((int)fVar19 + -1);
          puVar10 = puVar10 + 2;
        } while (fVar19 != 0.0);
      }
      iVar5 = local_8c;
      puVar10 = local_88;
      if (0 < local_8c) {
        do {
          FUN_004de220(puVar10);
          iVar5 = iVar5 + -1;
          puVar10 = puVar10 + 2;
        } while (iVar5 != 0);
      }
      fVar19 = local_cc;
      if (param_1[0x42] == 0) {
LAB_004ddea1:
        if (local_cc != 0.0) {
          pcVar21 = s_OnNotEmpty_0072e44c;
LAB_004ddeb0:
          FUN_004aaaf0(pcVar21,&DAT_0071fa28,param_1);
        }
      }
      else {
        if (local_cc == 0.0) {
          pcVar21 = s_OnEmpty_0072e458;
          goto LAB_004ddeb0;
        }
        if (param_1[0x42] == 0) goto LAB_004ddea1;
      }
      if ((undefined4 **)(param_1 + 0x40) != &local_d4) {
        if (param_1[0x44] < (int)fVar19) {
          FUN_006bf840(param_1[0x43]);
          pvVar8 = operator_new((int)fVar19 * 8);
          param_1[0x43] = (int)pvVar8;
          param_1[0x42] = 0;
          param_1[0x44] = (int)fVar19;
        }
        iVar5 = 0;
        if (0 < (int)fVar19) {
          do {
            iVar7 = param_1[0x43];
            *(undefined4 *)(iVar7 + iVar5 * 8) = local_c8[iVar5 * 2];
            *(undefined4 *)(iVar7 + 4 + iVar5 * 8) = local_c8[iVar5 * 2 + 1];
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)fVar19);
        }
        param_1[0x42] = (int)fVar19;
      }
      if (((param_1[0x48] & 0x20000U) == 0) && (local_ec = 0, 0 < (int)local_cc)) {
        do {
          uVar9 = local_c8[local_ec * 2];
          uVar4 = local_c8[local_ec * 2 + 1];
          local_e8 = uVar9;
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          iVar7 = (int)*(short *)(&DAT_0076cd88 + ((uVar9 ^ uVar4) * -0xfb & 0xfff) * 2);
          for (iVar5 = iVar7; iVar5 != -1;
              iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
          }
          if (iVar7 == -1) {
LAB_004ddfe0:
            local_4 = CONCAT31(local_4._1_3_,4);
            FUN_00649720();
          }
          else {
            do {
              piVar6 = (int *)(DAT_0076f648 + iVar7 * 0x14);
              iVar5 = *piVar6;
              if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == local_e8)) &&
                 (*(uint *)(iVar5 + 0xc) == uVar4)) {
                if (iVar7 == -1) goto LAB_004ddfe0;
                uVar9 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
                local_4 = CONCAT31(local_4._1_3_,4);
                piVar6 = (int *)(-(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9);
                FUN_00649720();
                if (piVar6 != (int *)0x0) {
                  pfVar13 = (float *)(**(code **)(*piVar6 + 0x28))();
                  pfVar14 = (float *)FUN_005c0150();
                  if ((((*pfVar13 < pfVar14[3] != (*pfVar13 == pfVar14[3])) &&
                       (pfVar13[1] < pfVar14[4] != (pfVar13[1] == pfVar14[4]))) &&
                      ((pfVar13[2] < pfVar14[5] != (pfVar13[2] == pfVar14[5]) &&
                       ((*pfVar14 <= *pfVar13 && (pfVar14[1] <= pfVar13[1])))))) &&
                     (pfVar14[2] <= pfVar13[2])) {
                    uStack_2c = 2;
                    local_6c[0] = param_1;
                    local_6c[1] = piVar6;
                    FUN_004aab50(s_OnPivotEnter_0072e468,s_v_lobject__0072e480,local_6c);
                    param_1[0x48] = param_1[0x48] | 0x20000;
                  }
                }
                goto LAB_004de0c4;
              }
              iVar7 = (int)*(short *)((int)piVar6 + 0xe);
            } while (iVar7 != -1);
            local_4 = CONCAT31(local_4._1_3_,4);
            FUN_00649720();
          }
LAB_004de0c4:
          local_ec = local_ec + 1;
        } while (local_ec < (int)local_cc);
      }
      FUN_006bf840(local_88);
      FUN_006bf840(local_ac);
      local_4 = local_4 & 0xffffff00;
      FUN_006bf840(local_c8);
      goto LAB_004de137;
    }
    if ((char)(uVar9 >> 8) < '\0') {
      FUN_004aaaf0(s_OnInit_0072d84c,&DAT_0071fa28,param_1);
      param_1[0x48] = param_1[0x48] & 0xffff7fff;
    }
    if (local_ec != -1) {
      if (param_1[0x45] == 0) {
        FUN_006bf840(param_1[0x43]);
        param_1[0x43] = 0;
        param_1[0x44] = 0;
      }
      param_1[0x42] = 0;
      FUN_00588ff0(local_ec);
      iVar5 = FUN_00589010(local_ec,&local_e8);
      while (iVar5 != 0) {
        iVar5 = param_1[0x42];
        if (param_1[0x44] < iVar5 + 1) {
          if (param_1[0x46] == 0) {
            iVar7 = param_1[0x44] / 2;
            iVar11 = 1;
            if (0 < iVar7) {
              iVar11 = iVar7;
            }
            if (iVar11 + iVar5 < 1) {
              iVar7 = 1;
            }
            else {
              if (iVar7 < 1) {
                iVar7 = 1;
              }
              iVar7 = iVar7 + iVar5;
            }
          }
          else {
            iVar7 = param_1[0x46] + iVar5;
          }
          pvVar8 = operator_new(iVar7 * 8);
          iVar5 = 0;
          if (0 < param_1[0x42]) {
            do {
              iVar11 = param_1[0x43];
              *(undefined4 *)((int)pvVar8 + iVar5 * 8) = *(undefined4 *)(iVar11 + iVar5 * 8);
              *(undefined4 *)((int)pvVar8 + iVar5 * 8 + 4) = *(undefined4 *)(iVar11 + 4 + iVar5 * 8)
              ;
              iVar5 = iVar5 + 1;
            } while (iVar5 < param_1[0x42]);
          }
          FUN_006bf840(param_1[0x43]);
          param_1[0x44] = iVar7;
          param_1[0x43] = (int)pvVar8;
        }
        iVar5 = param_1[0x42];
        iVar7 = param_1[0x43];
        *(uint *)(iVar7 + iVar5 * 8) = local_e8;
        *(uint *)(iVar7 + 4 + iVar5 * 8) = local_e4;
        param_1[0x42] = param_1[0x42] + 1;
        iVar5 = FUN_00589010(local_ec,&local_e8);
      }
      FUN_00588b20(local_ec);
    }
    uVar9 = param_1[0x48] & 0xfffffffe;
  }
  else {
    if ((param_1[0x48] & 1U) != 0) {
      if ((char)((uint)param_1[0x48] >> 8) < '\0') {
        FUN_004aaaf0(s_OnInit_0072d84c,&DAT_0071fa28,param_1);
        param_1[0x48] = param_1[0x48] & 0xffff7fff;
      }
      param_1[0x48] = param_1[0x48] & 0xfffffffe;
    }
LAB_004de137:
    if (((param_1[0x48] & 4U) != 0) && ((param_1[0x48] & 0x4000U) != 0)) {
      FUN_004aaaf0(s_OnUpdate_0072e440,&DAT_0071fa28,param_1);
    }
    if (((*(byte *)(param_1 + 0x48) & 0x10) == 0) || (iVar5 = FUN_004de670(), iVar5 != 0))
    goto LAB_004de197;
    uVar9 = param_1[0x48];
    if ((uVar9 & 0x2000) != 0) {
      param_1[0x48] = uVar9 & 0xffffdfff;
      FUN_004de610(0);
      goto LAB_004de197;
    }
    uVar9 = uVar9 | 0x2000;
  }
  param_1[0x48] = uVar9;
LAB_004de197:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

