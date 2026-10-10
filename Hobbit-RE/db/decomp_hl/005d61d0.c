
undefined4 __thiscall FUN_005d61d0(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  int local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e075f;
  local_c = ExceptionList;
  iVar10 = 0;
  local_3c = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_00649920(&local_58,s_AIManager_Actions_Action__d_NPC_007470b8,*(undefined4 *)(param_1 + 4));
  local_4._0_1_ = 1;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  if ((iVar3 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_3c = param_3[0x91];
    iVar10 = param_3[0x90];
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_4._0_1_ = 0;
  FUN_00649950();
  if (bVar1) {
    if (*(int *)(param_1 + 0x20) < 1) {
      local_58 = (undefined4 *)operator_new(0x68);
      local_4c = local_58;
      if (local_58 == (undefined4 *)0x0) {
        local_58 = (undefined4 *)0x0;
      }
      else {
        local_58[3] = 0;
        local_58[2] = 0;
        local_58[4] = 0;
        local_58[6] = 0;
        local_58[5] = 0;
        *local_58 = 0;
        local_58[1] = 0;
        local_4._0_1_ = 3;
        FUN_006499d0();
        local_58[8] = 0;
        local_58[9] = 0;
        local_58[10] = 0;
        local_58[0xb] = 0;
        local_58[0xc] = 0;
        local_58[0xd] = 0;
      }
      iVar3 = *(int *)(param_1 + 0x20);
      local_4._0_1_ = 0;
      if (*(int *)(param_1 + 0x28) < iVar3 + 1) {
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar4 = *(int *)(param_1 + 0x28) / 2;
          iVar6 = 1;
          if (0 < iVar4) {
            iVar6 = iVar4;
          }
          if (iVar6 + iVar3 < 1) {
            iVar3 = 1;
          }
          else {
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            iVar3 = iVar3 + iVar4;
          }
        }
        else {
          iVar3 = iVar3 + *(int *)(param_1 + 0x30);
        }
        pvVar5 = operator_new(iVar3 * 4);
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = pvVar5;
        *(int *)(param_1 + 0x28) = iVar3;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = local_58;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    iVar3 = **(int **)(param_1 + 0x24);
    *(int *)(iVar3 + 0x20) = iVar10;
    *(int *)(iVar3 + 0x24) = local_3c;
  }
  FUN_00649920(&local_58,s_AIManager_Actions_Action__d_Loca_00747090,*(undefined4 *)(param_1 + 4));
  local_4._0_1_ = 4;
  uVar2 = FUN_00649940();
  iVar10 = FUN_00647e40(param_2,uVar2);
  if ((iVar10 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_54 = param_3[0x90];
    local_50 = param_3[0x91];
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_4._0_1_ = 0;
  FUN_00649950();
  if (bVar1) {
    if (*(int *)(param_1 + 0x20) < 1) {
      puVar7 = (undefined4 *)operator_new(0x68);
      local_4c = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[4] = 0;
        puVar7[6] = 0;
        puVar7[5] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        local_4._0_1_ = 6;
        FUN_006499d0();
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
      }
      iVar10 = *(int *)(param_1 + 0x20);
      local_4._0_1_ = 0;
      if (*(int *)(param_1 + 0x28) < iVar10 + 1) {
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar6 = *(int *)(param_1 + 0x28) / 2;
          iVar3 = 1;
          if (0 < iVar6) {
            iVar3 = iVar6;
          }
          if (iVar3 + iVar10 < 1) {
            iVar10 = 1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            iVar10 = iVar10 + iVar6;
          }
        }
        else {
          iVar10 = iVar10 + *(int *)(param_1 + 0x30);
        }
        pvVar5 = operator_new(iVar10 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = pvVar5;
        *(int *)(param_1 + 0x28) = iVar10;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = puVar7;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    iVar10 = **(int **)(param_1 + 0x24);
    *(int *)(iVar10 + 0x28) = local_54;
    *(int *)(iVar10 + 0x2c) = local_50;
  }
  FUN_00649920(&local_58,s_AIManager_Actions_Action__d_Faci_0074706c,*(undefined4 *)(param_1 + 4));
  local_4._0_1_ = 7;
  uVar2 = FUN_00649940();
  iVar10 = FUN_00647e40(param_2,uVar2);
  piVar8 = param_3;
  if ((iVar10 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_48 = param_3[0x90];
    local_44 = param_3[0x91];
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_4._0_1_ = 0;
  FUN_00649950();
  if (bVar1) {
    if (*(int *)(param_1 + 0x20) < 1) {
      puVar7 = (undefined4 *)operator_new(0x68);
      local_4c = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        local_58 = (undefined4 *)0x0;
      }
      else {
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[4] = 0;
        puVar7[6] = 0;
        puVar7[5] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        local_4._0_1_ = 9;
        FUN_006499d0();
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        local_58 = puVar7;
      }
      iVar10 = *(int *)(param_1 + 0x20);
      local_4._0_1_ = 0;
      if (*(int *)(param_1 + 0x28) < iVar10 + 1) {
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar6 = *(int *)(param_1 + 0x28) / 2;
          iVar3 = 1;
          if (0 < iVar6) {
            iVar3 = iVar6;
          }
          if (iVar3 + iVar10 < 1) {
            iVar10 = 1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            iVar10 = iVar10 + iVar6;
          }
        }
        else {
          iVar10 = iVar10 + *(int *)(param_1 + 0x30);
        }
        pvVar5 = operator_new(iVar10 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = pvVar5;
        *(int *)(param_1 + 0x28) = iVar10;
        piVar8 = param_3;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = local_58;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    iVar10 = **(int **)(param_1 + 0x24);
    *(int *)(iVar10 + 0x30) = local_48;
    *(int *)(iVar10 + 0x34) = local_44;
  }
  FUN_00649920(&local_58,s_AIManager_Actions_Action__d_Anim_00747044,*(undefined4 *)(param_1 + 4));
  local_4 = CONCAT31(local_4._1_3_,10);
  uVar2 = FUN_00649940();
  iVar10 = FUN_00647e40(param_2,uVar2);
  if ((iVar10 == 0) && (((iVar10 = *piVar8, iVar10 == 0xd || (iVar10 == 4)) || (iVar10 == 0xe)))) {
    FUN_0064a2e0(piVar8 + 2);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649950();
  if (bVar1) {
    if (*(int *)(param_1 + 0x20) < 1) {
      puVar7 = (undefined4 *)operator_new(0x68);
      local_4c = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        local_58 = (undefined4 *)0x0;
      }
      else {
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[4] = 0;
        puVar7[6] = 0;
        puVar7[5] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        local_4 = CONCAT31(local_4._1_3_,0xc);
        FUN_006499d0();
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        local_58 = puVar7;
      }
      iVar10 = *(int *)(param_1 + 0x20);
      local_4 = local_4 & 0xffffff00;
      if (*(int *)(param_1 + 0x28) < iVar10 + 1) {
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar6 = *(int *)(param_1 + 0x28) / 2;
          iVar3 = 1;
          if (0 < iVar6) {
            iVar3 = iVar6;
          }
          if (iVar3 + iVar10 < 1) {
            iVar10 = 1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            iVar10 = iVar10 + iVar6;
          }
        }
        else {
          iVar10 = iVar10 + *(int *)(param_1 + 0x30);
        }
        pvVar5 = operator_new(iVar10 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = pvVar5;
        *(int *)(param_1 + 0x28) = iVar10;
        piVar8 = param_3;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = local_58;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    FUN_0064a320(local_38);
  }
  iVar10 = 0;
  FUN_00649920(&local_58,s_AIManager_Actions_Action__d_Spaw_0074701c,*(undefined4 *)(param_1 + 4));
  local_4._0_1_ = 0xd;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  if (iVar3 == 0) {
    if (*piVar8 == 1) {
      iVar10 = param_3[0x93];
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  uVar2 = param_2;
  iVar3 = *(int *)(param_1 + 0x20);
  if (bVar1) {
    if (iVar3 < iVar10) {
      if (iVar3 < iVar10) {
        param_2 = iVar10 - iVar3;
        do {
          piVar8 = (int *)operator_new(0x68);
          if (piVar8 == (int *)0x0) {
            param_3 = (int *)0x0;
          }
          else {
            piVar8[3] = 0;
            piVar8[2] = 0;
            piVar8[4] = 0;
            piVar8[6] = 0;
            piVar8[5] = 0;
            *piVar8 = 0;
            piVar8[1] = 0;
            local_4 = CONCAT31(local_4._1_3_,0xf);
            param_3 = piVar8;
            FUN_006499d0();
            piVar8[8] = 0;
            piVar8[9] = 0;
            piVar8[10] = 0;
            piVar8[0xb] = 0;
            piVar8[0xc] = 0;
            piVar8[0xd] = 0;
            param_3 = piVar8;
          }
          iVar10 = *(int *)(param_1 + 0x20);
          local_4 = local_4 & 0xffffff00;
          if (*(int *)(param_1 + 0x28) < iVar10 + 1) {
            if (*(int *)(param_1 + 0x30) == 0) {
              iVar6 = *(int *)(param_1 + 0x28) / 2;
              iVar3 = 1;
              if (0 < iVar6) {
                iVar3 = iVar6;
              }
              if (iVar3 + iVar10 < 1) {
                iVar10 = 1;
              }
              else {
                if (iVar6 < 1) {
                  iVar6 = 1;
                }
                iVar10 = iVar10 + iVar6;
              }
            }
            else {
              iVar10 = iVar10 + *(int *)(param_1 + 0x30);
            }
            pvVar5 = operator_new(iVar10 * 4);
            iVar3 = 0;
            if (0 < *(int *)(param_1 + 0x20)) {
              do {
                *(undefined4 *)((int)pvVar5 + iVar3 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar3 * 4);
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(param_1 + 0x20));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
            *(void **)(param_1 + 0x24) = pvVar5;
            *(int *)(param_1 + 0x28) = iVar10;
          }
          *(int **)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) * 4) = param_3;
          param_2 = param_2 + -1;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        } while (param_2 != 0);
        param_2 = 0;
      }
    }
    else if (iVar10 < iVar3) {
      iVar3 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x28) < iVar10) {
        iVar3 = iVar10;
      }
      FUN_005a2a20(iVar3);
      *(int *)(param_1 + 0x20) = iVar10;
    }
LAB_005d6bf0:
    local_4 = 0xffffffff;
    FUN_00649ba0();
    uVar2 = 1;
  }
  else {
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Spaw_00746fc8,
                     *(undefined4 *)(param_1 + 4),iVar10);
        local_4._0_1_ = 0x10;
        uVar9 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar2,uVar9);
        local_4._0_1_ = 0;
        FUN_00649950();
        if (iVar3 == 0) {
          if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
LAB_005d6bc6:
            local_4 = 0xffffffff;
            FUN_00649ba0();
            ExceptionList = local_c;
            return 0;
          }
          iVar10 = *(int *)(*(int *)(param_1 + 0x24) + iVar10 * 4);
          *(int *)(iVar10 + 0x20) = param_3[0x90];
          *(int *)(iVar10 + 0x24) = param_3[0x91];
          goto LAB_005d6bf0;
        }
        FUN_00649920(&local_58,s_AIManager_Actions_Action__d_Spaw_00746f98,
                     *(undefined4 *)(param_1 + 4),iVar10);
        local_4._0_1_ = 0x11;
        uVar9 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar2,uVar9);
        local_4._0_1_ = 0;
        FUN_00649950();
        if (iVar3 == 0) {
          if ((*param_3 != 0xf) && (*param_3 != 0x10)) goto LAB_005d6bc6;
          iVar10 = *(int *)(*(int *)(param_1 + 0x24) + iVar10 * 4);
          *(int *)(iVar10 + 0x28) = param_3[0x90];
          *(int *)(iVar10 + 0x2c) = param_3[0x91];
          goto LAB_005d6bf0;
        }
        FUN_00649920(&local_54,s_AIManager_Actions_Action__d_Spaw_00746f6c,
                     *(undefined4 *)(param_1 + 4),iVar10);
        local_4._0_1_ = 0x12;
        uVar9 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar2,uVar9);
        local_4._0_1_ = 0;
        FUN_00649950();
        if (iVar3 == 0) {
          if ((*param_3 != 0xf) && (*param_3 != 0x10)) goto LAB_005d6bc6;
          iVar10 = *(int *)(*(int *)(param_1 + 0x24) + iVar10 * 4);
          *(int *)(iVar10 + 0x30) = param_3[0x90];
          *(int *)(iVar10 + 0x34) = param_3[0x91];
          goto LAB_005d6bf0;
        }
        FUN_00649920(&local_4c,s_AIManager_Actions_Action__d_Spaw_00746f3c,
                     *(undefined4 *)(param_1 + 4),iVar10);
        local_4._0_1_ = 0x13;
        uVar9 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar2,uVar9);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649950();
        if (iVar3 == 0) {
          if ((*param_3 != 0xd) && (*param_3 != 4)) goto LAB_005d6bc6;
          FUN_0064a2e0(param_3 + 2);
          goto LAB_005d6bf0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x20));
    }
    uVar2 = FUN_005ccb60(uVar2,param_3);
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return uVar2;
}

