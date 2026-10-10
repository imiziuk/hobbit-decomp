
void __thiscall FUN_00447c60(int *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
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
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined1 local_84 [8];
  float local_7c [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfa76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_bilbo__Platform_CollideWithPlatf_00724518);
  local_4 = 0;
  if (param_1[0x133a] == 0) {
    FUN_00588ff0(param_2);
    iVar5 = FUN_00589010(param_2,&local_c4);
    uVar3 = local_c4;
    uVar4 = local_c0;
    while (iVar5 != 0) {
      local_c4 = uVar3;
      local_c0 = uVar4;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar5 = FUN_00406ce0(uVar3,uVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar5 == -1) {
        FUN_00649720();
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
        uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
        FUN_00649720();
      }
      if (((((*(uint *)(uVar6 + 0x10) & 0x200000) != 0) &&
           (*(float *)(uVar6 + 0x44) <= (float)param_1[0x14])) &&
          (fVar1 = (float)param_1[0x11],
          *(float *)(uVar6 + 0x50) < fVar1 == (NAN(*(float *)(uVar6 + 0x50)) || NAN(fVar1)))) &&
         (((*(float *)(uVar6 + 0x4c) <= (float)param_1[0x16] &&
           (*(float *)(uVar6 + 0x58) < (float)param_1[0x13] ==
            (NAN(*(float *)(uVar6 + 0x58)) || NAN((float)param_1[0x13])))) &&
          ((*(float *)(uVar6 + 0x48) <= (float)param_1[0x15] &&
           (*(float *)(uVar6 + 0x54) < (float)param_1[0x12] ==
            (NAN(*(float *)(uVar6 + 0x54)) || NAN((float)param_1[0x12])))))))) {
        local_c8 = 4;
        do {
          local_c8 = local_c8 + -1;
          FUN_004357e0(param_1 + 0x11);
          FUN_004357e0(param_1 + 0x14);
          FUN_005788e0(&local_bc,local_c4,local_c0);
          if (DAT_00777218 == 0) goto LAB_00448258;
          local_e0 = 3.4028235e+38;
          local_dc = 3.4028235e+38;
          local_d8 = 3.4028235e+38;
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_e0 = 3.4028235e+38;
          local_dc = 3.4028235e+38;
          local_d8 = 3.4028235e+38;
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          iVar5 = 0;
          if (0 < DAT_00777218) {
            puVar9 = &DAT_00773a18;
            do {
              FUN_00447870(&local_bc,puVar9,3,local_84,&local_9c);
              if (0 < local_9c) {
                pfVar7 = local_7c;
                iVar8 = local_9c;
                do {
                  if (pfVar7[-2] < local_e0 != (NAN(pfVar7[-2]) || NAN(local_e0))) {
                    local_e0 = pfVar7[-2];
                  }
                  if (pfVar7[-1] < local_dc != (NAN(pfVar7[-1]) || NAN(local_dc))) {
                    local_dc = pfVar7[-1];
                  }
                  if (*pfVar7 < local_d8 != (NAN(*pfVar7) || NAN(local_d8))) {
                    local_d8 = *pfVar7;
                  }
                  if (local_d4 < pfVar7[-2]) {
                    local_d4 = pfVar7[-2];
                  }
                  if (local_d0 < pfVar7[-1]) {
                    local_d0 = pfVar7[-1];
                  }
                  if (local_cc < *pfVar7) {
                    local_cc = *pfVar7;
                  }
                  pfVar7 = pfVar7 + 3;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 0xe;
            } while (iVar5 < DAT_00777218);
          }
          if (((local_d4 < local_bc) || (local_b0 < local_e0 != (NAN(local_b0) || NAN(local_e0))))
             || ((local_cc < local_b4 ||
                 (((local_a8 < local_d8 != (NAN(local_a8) || NAN(local_d8)) || (local_d0 < local_b8)
                   ) || (local_ac < local_dc != (NAN(local_ac) || NAN(local_dc))))))))
          goto LAB_00448258;
          fVar1 = (local_b0 - local_e0) + DAT_006e92e8;
          local_f0 = (local_d4 - local_bc) + DAT_006e92e8;
          if (fVar1 < local_f0 != (NAN(fVar1) || NAN(local_f0))) {
            local_f0 = -fVar1;
          }
          fVar1 = (local_ac - local_dc) + DAT_006e92e8;
          local_ec = (local_d0 - local_b8) + DAT_006e92e8;
          if (fVar1 < local_ec != (NAN(fVar1) || NAN(local_ec))) {
            local_ec = -fVar1;
          }
          local_e4 = (local_a8 - local_d8) + DAT_006e92e8;
          local_e8 = (local_cc - local_b4) + DAT_006e92e8;
          if (local_e4 < local_e8 != (NAN(local_e4) || NAN(local_e8))) {
            local_e8 = -local_e4;
          }
          fVar1 = local_f0;
          if (local_f0 < DAT_006e92e4 != (NAN(local_f0) || NAN(DAT_006e92e4))) {
            fVar1 = -local_f0;
          }
          fVar2 = local_ec;
          if (local_ec < DAT_006e92e4 != (NAN(local_ec) || NAN(DAT_006e92e4))) {
            fVar2 = -local_ec;
          }
          if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) {
LAB_004480d3:
            fVar1 = local_ec;
            if (local_ec < DAT_006e92e4 != (NAN(local_ec) || NAN(DAT_006e92e4))) {
              fVar1 = -local_ec;
            }
            fVar2 = local_f0;
            if (local_f0 < DAT_006e92e4 != (NAN(local_f0) || NAN(DAT_006e92e4))) {
              fVar2 = -local_f0;
            }
            if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) {
LAB_0044815e:
              fVar1 = local_e8;
              if (local_e8 < DAT_006e92e4 != (NAN(local_e8) || NAN(DAT_006e92e4))) {
                fVar1 = -local_e8;
              }
              fVar2 = local_f0;
              if (local_f0 < DAT_006e92e4 != (NAN(local_f0) || NAN(DAT_006e92e4))) {
                fVar2 = -local_f0;
              }
              if (fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2))) {
                fVar1 = local_e8;
                if (local_e8 < DAT_006e92e4 != (NAN(local_e8) || NAN(DAT_006e92e4))) {
                  fVar1 = -local_e8;
                }
                fVar2 = local_ec;
                if (local_ec < DAT_006e92e4 != (NAN(local_ec) || NAN(DAT_006e92e4))) {
                  fVar2 = -local_ec;
                }
                if (fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2))) {
                  local_f0 = 0.0;
                  goto LAB_004481dc;
                }
              }
            }
            else {
              fVar1 = local_ec;
              if (local_ec < DAT_006e92e4 != (NAN(local_ec) || NAN(DAT_006e92e4))) {
                fVar1 = -local_ec;
              }
              fVar2 = local_e8;
              if (local_e8 < DAT_006e92e4 != (NAN(local_e8) || NAN(DAT_006e92e4))) {
                fVar2 = -local_e8;
              }
              if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) goto LAB_0044815e;
              local_f0 = 0.0;
              local_e8 = 0.0;
            }
          }
          else {
            fVar1 = local_f0;
            if (local_f0 < DAT_006e92e4 != (NAN(local_f0) || NAN(DAT_006e92e4))) {
              fVar1 = -local_f0;
            }
            fVar2 = local_e8;
            if (local_e8 < DAT_006e92e4 != (NAN(local_e8) || NAN(DAT_006e92e4))) {
              fVar2 = -local_e8;
            }
            if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) goto LAB_004480d3;
            local_e8 = 0.0;
LAB_004481dc:
            local_ec = 0.0;
          }
          local_98 = param_1[5];
          local_94 = param_1[6];
          local_90 = param_1[7];
          FUN_00469060(&local_98,&local_f0,0,0xbf800000,0,1,1);
          (**(code **)(*param_1 + 0x14))(&local_98,0);
        } while (local_c8 != 0);
      }
      iVar5 = FUN_00589010(param_2,&local_c4);
      uVar3 = local_c4;
      uVar4 = local_c0;
    }
  }
LAB_00448258:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

