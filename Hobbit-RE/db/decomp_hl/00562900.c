
void __thiscall FUN_00562900(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 **ppuVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined4 *local_d8;
  int local_d4;
  int local_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  uint local_b0;
  undefined1 local_ac [4];
  undefined4 local_a8;
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dae62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063ff20();
  FUN_0063ffc0();
  local_c0 = 0;
  local_bc = 0;
  local_c4 = 0;
  FUN_00640450(s_TriggerCount_0073f0d0,&local_c0);
  FUN_00640450(s_ActionCount_0073f0c4,&local_bc);
  FUN_00640450(s_LinkCount_0073f0b8,&local_c4);
  iVar11 = local_c0;
  if ((local_c0 != 0) && (local_c0 != *(int *)(param_1 + 0x18))) {
    pvVar3 = operator_new(local_c0 << 2);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
    *(void **)(param_1 + 0x14) = pvVar3;
    *(int *)(param_1 + 0x18) = iVar11;
  }
  iVar11 = local_bc;
  if ((local_bc != 0) && (local_bc != *(int *)(param_1 + 0x34))) {
    pvVar3 = operator_new(local_bc * 4);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x2c));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
    *(void **)(param_1 + 0x30) = pvVar3;
    *(int *)(param_1 + 0x34) = iVar11;
  }
  iVar11 = local_c4;
  if ((local_c4 != 0) && (local_c4 != *(int *)(param_1 + 0x50))) {
    pvVar3 = operator_new(local_c4 * 4);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x48));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
    *(void **)(param_1 + 0x4c) = pvVar3;
    *(int *)(param_1 + 0x50) = iVar11;
  }
  iVar11 = 0;
  if (0 < local_c0) {
    do {
      FUN_0063ff20();
      FUN_0063ffc0();
      puVar5 = (undefined4 *)operator_new(100);
      local_4 = 0;
      local_b4 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        local_c8 = (undefined4 *)0x0;
      }
      else {
        FUN_006499d0();
        local_4._0_1_ = 1;
        FUN_006499d0();
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_0064a2e0(s_Enter_Trigger_s_Name_0073efe0);
        puVar5[0x17] = 0;
        puVar5[0x16] = 0;
        puVar5[0x18] = puVar5[0x18] & 0xfffffff8;
        local_c8 = puVar5;
      }
      iVar4 = *(int *)(param_1 + 0x10);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x18) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x20) == 0) {
          local_d4 = *(int *)(param_1 + 0x18) / 2;
          iVar8 = 1;
          if (0 < local_d4) {
            iVar8 = local_d4;
          }
          if (iVar8 + iVar4 < 1) {
            local_d4 = 1;
          }
          else {
            if (local_d4 < 1) {
              local_d4 = 1;
            }
            local_d4 = local_d4 + iVar4;
          }
        }
        else {
          local_d4 = *(int *)(param_1 + 0x20) + iVar4;
        }
        pvVar3 = operator_new(local_d4 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x10)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x10));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
        *(void **)(param_1 + 0x14) = pvVar3;
        *(int *)(param_1 + 0x18) = local_d4;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 4) = local_c8;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_00649920(&local_cc,s_TriggerType_d_0073f0a8,iVar11);
      ppuVar12 = &local_d8;
      local_4 = 3;
      uVar6 = FUN_00649940(ppuVar12);
      FUN_00640450(uVar6,ppuVar12);
      local_4 = 0xffffffff;
      FUN_00649950();
      *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x14) + iVar11 * 4) + 0x58) = local_d8;
      iVar4 = *(int *)(param_1 + 0x14);
      uVar6 = FUN_0055e1c0(*(undefined4 *)(*(int *)(iVar4 + iVar11 * 4) + 0x58),iVar11);
      *(undefined4 *)(*(int *)(iVar4 + iVar11 * 4) + 0x5c) = uVar6;
      FUN_00649920(&local_d0,s_TriggerName_d_0073f098,iVar11);
      puVar13 = local_8c;
      local_4 = 4;
      uVar6 = FUN_00649940(puVar13);
      FUN_00640480(uVar6,puVar13);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_0064a2e0(local_8c);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + iVar11 * 4) + 0x5c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x30))(param_2);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_c0);
  }
  iVar11 = 0;
  if (0 < local_bc) {
    do {
      FUN_0063ff20();
      FUN_0063ffc0();
      puVar5 = (undefined4 *)operator_new(100);
      local_4 = 5;
      local_b4 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        local_c8 = (undefined4 *)0x0;
      }
      else {
        FUN_006499d0();
        local_4._0_1_ = 6;
        FUN_006499d0();
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_0064a2e0(s_Enter_Action_s_Name_00727068);
        *puVar5 = 0;
        puVar5[0x17] = 0;
        puVar5[0x18] = puVar5[0x18] & 0xfffffff8;
        local_c8 = puVar5;
      }
      iVar4 = *(int *)(param_1 + 0x2c);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x34) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x3c) == 0) {
          local_d4 = *(int *)(param_1 + 0x34) / 2;
          iVar8 = 1;
          if (0 < local_d4) {
            iVar8 = local_d4;
          }
          if (iVar8 + iVar4 < 1) {
            local_d4 = 1;
          }
          else {
            if (local_d4 < 1) {
              local_d4 = 1;
            }
            local_d4 = local_d4 + iVar4;
          }
        }
        else {
          local_d4 = *(int *)(param_1 + 0x3c) + iVar4;
        }
        pvVar3 = operator_new(local_d4 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x2c)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x2c));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
        *(void **)(param_1 + 0x30) = pvVar3;
        *(int *)(param_1 + 0x34) = local_d4;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4) = local_c8;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      FUN_00649920(&local_cc,s_ActionType_d_0073f088,iVar11);
      ppuVar12 = &local_d8;
      local_4 = 8;
      uVar6 = FUN_00649940(ppuVar12);
      FUN_00640450(uVar6,ppuVar12);
      local_4 = 0xffffffff;
      FUN_00649950();
      **(undefined4 **)(*(int *)(param_1 + 0x30) + iVar11 * 4) = local_d8;
      iVar4 = *(int *)(param_1 + 0x30);
      uVar6 = FUN_0055d520(**(undefined4 **)(iVar4 + iVar11 * 4),iVar11);
      *(undefined4 *)(*(int *)(iVar4 + iVar11 * 4) + 0x5c) = uVar6;
      FUN_00649920(&local_d0,s_ActionName_d_0073f078,iVar11);
      puVar13 = local_8c;
      local_4 = 9;
      uVar6 = FUN_00649940(puVar13);
      FUN_00640480(uVar6,puVar13);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_0064a2e0(local_8c);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + iVar11 * 4) + 0x5c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))(param_2);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_bc);
  }
  local_d4 = 0;
  if (0 < local_c4) {
    iVar11 = 0;
    do {
      FUN_0063ff20();
      FUN_0063ffc0();
      local_b8 = (undefined4 *)0x0;
      local_c8 = (undefined4 *)0x0;
      puVar5 = (undefined4 *)operator_new(0xa0);
      local_4 = 10;
      local_cc = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        local_d8 = (undefined4 *)0x0;
      }
      else {
        FUN_006499d0();
        local_4._0_1_ = 0xb;
        FUN_006499d0();
        puVar5[0x1d] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x20] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x1b] = 0;
        local_4 = CONCAT31(local_4._1_3_,0xd);
        FUN_006a1cb0();
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = puVar5[1] & 0xfffffff0;
        local_d8 = puVar5;
      }
      iVar4 = *(int *)(param_1 + 0x48);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x50) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x58) == 0) {
          local_d0 = *(int *)(param_1 + 0x50) / 2;
          iVar8 = 1;
          if (0 < local_d0) {
            iVar8 = local_d0;
          }
          if (iVar8 + iVar4 < 1) {
            local_d0 = 1;
          }
          else {
            if (local_d0 < 1) {
              local_d0 = 1;
            }
            local_d0 = local_d0 + iVar4;
          }
        }
        else {
          local_d0 = *(int *)(param_1 + 0x58) + iVar4;
        }
        pvVar3 = operator_new(local_d0 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x48)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x48));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
        *(void **)(param_1 + 0x4c) = pvVar3;
        *(int *)(param_1 + 0x50) = local_d0;
      }
      iVar8 = local_d4;
      *(undefined4 **)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48) * 4) = local_d8;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      local_b0 = (*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar11) + 4) << 0x1f) >> 0x1f;
      FUN_00649920(local_94,s_LinkRepeats_d_0073f068,local_d4);
      puVar14 = &local_b0;
      local_4 = 0xe;
      uVar6 = FUN_00649940(puVar14);
      FUN_006405b0(uVar6,puVar14);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar11);
      uVar2 = *(uint *)(iVar4 + 4);
      *(uint *)(iVar4 + 4) = (uVar2 ^ local_b0) & 1 ^ uVar2;
      FUN_00649920(local_ac,s_LinkState_d_0073f05c,iVar8);
      iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar11) + 8;
      local_4 = 0xf;
      uVar6 = FUN_00649940(iVar4);
      FUN_00640450(uVar6,iVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar11);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 8);
      FUN_00649920(local_98,s_LogicType_d_0073f050,iVar8);
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar11);
      local_4 = 0x10;
      uVar7 = FUN_00649940(uVar6);
      FUN_00640450(uVar7,uVar6);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_a0,s_LinkTriggerCount_d_0073f03c,iVar8);
      ppuVar12 = &local_b8;
      local_4 = 0x11;
      uVar6 = FUN_00649940(ppuVar12);
      FUN_00640450(uVar6,ppuVar12);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (local_b8 != (undefined4 *)0x0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar11);
        local_cc = local_b8;
        if (local_b8 != *(undefined4 **)(iVar4 + 0x78)) {
          local_d8 = (undefined4 *)operator_new((int)local_b8 << 2);
          iVar8 = 0;
          if (0 < *(int *)(iVar4 + 0x70)) {
            do {
              local_d8[iVar8] = *(undefined4 *)(*(int *)(iVar4 + 0x74) + iVar8 * 4);
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(iVar4 + 0x70));
          }
          FUN_006bf840(*(undefined4 *)(iVar4 + 0x74));
          *(undefined4 **)(iVar4 + 0x74) = local_d8;
          *(undefined4 **)(iVar4 + 0x78) = local_cc;
        }
      }
      local_d0 = 0;
      if (0 < (int)local_b8) {
        do {
          FUN_00649920(local_90,s_LinkTriggerIndex_d__d_0073f024,local_d4,local_d0);
          puVar5 = &local_a8;
          local_4 = 0x12;
          uVar6 = FUN_00649940(puVar5);
          FUN_00640450(uVar6,puVar5);
          local_4 = 0xffffffff;
          FUN_00649950();
          iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar11);
          iVar8 = *(int *)(iVar4 + 0x70);
          if (*(int *)(iVar4 + 0x78) < iVar8 + 1) {
            if (*(int *)(iVar4 + 0x80) == 0) {
              iVar9 = *(int *)(iVar4 + 0x78) / 2;
              iVar10 = 1;
              if (0 < iVar9) {
                iVar10 = iVar9;
              }
              if (iVar10 + iVar8 < 1) {
                local_d8 = (undefined4 *)0x1;
              }
              else {
                if (iVar9 < 1) {
                  iVar9 = 1;
                }
                local_d8 = (undefined4 *)(iVar9 + iVar8);
              }
            }
            else {
              local_d8 = (undefined4 *)(*(int *)(iVar4 + 0x80) + iVar8);
            }
            local_cc = (undefined4 *)operator_new((int)local_d8 * 4);
            iVar8 = 0;
            if (0 < *(int *)(iVar4 + 0x70)) {
              do {
                local_cc[iVar8] = *(undefined4 *)(*(int *)(iVar4 + 0x74) + iVar8 * 4);
                iVar8 = iVar8 + 1;
              } while (iVar8 < *(int *)(iVar4 + 0x70));
            }
            FUN_006bf840(*(undefined4 *)(iVar4 + 0x74));
            *(undefined4 **)(iVar4 + 0x74) = local_cc;
            *(undefined4 **)(iVar4 + 0x78) = local_d8;
          }
          *(undefined4 *)(*(int *)(iVar4 + 0x74) + *(int *)(iVar4 + 0x70) * 4) = local_a8;
          *(int *)(iVar4 + 0x70) = *(int *)(iVar4 + 0x70) + 1;
          local_d0 = local_d0 + 1;
        } while (local_d0 < (int)local_b8);
      }
      FUN_00649920(local_a4,s_LinkActionCount_d_0073f010,local_d4);
      ppuVar12 = &local_c8;
      local_4 = 0x13;
      uVar6 = FUN_00649940(ppuVar12);
      FUN_00640450(uVar6,ppuVar12);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (local_c8 != (undefined4 *)0x0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar11);
        local_d8 = local_c8;
        if (local_c8 != *(undefined4 **)(iVar4 + 0x94)) {
          local_cc = (undefined4 *)operator_new((int)local_c8 << 2);
          iVar8 = 0;
          if (0 < *(int *)(iVar4 + 0x8c)) {
            do {
              local_cc[iVar8] = *(undefined4 *)(*(int *)(iVar4 + 0x90) + iVar8 * 4);
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(iVar4 + 0x8c));
          }
          FUN_006bf840(*(undefined4 *)(iVar4 + 0x90));
          *(undefined4 **)(iVar4 + 0x90) = local_cc;
          *(undefined4 **)(iVar4 + 0x94) = local_d8;
        }
      }
      local_d0 = 0;
      if (0 < (int)local_c8) {
        do {
          FUN_00649920(local_9c,s_LinkActionIndex_d__d_0073eff8,local_d4,local_d0);
          ppuVar12 = &local_b4;
          local_4 = 0x14;
          uVar6 = FUN_00649940(ppuVar12);
          FUN_00640450(uVar6,ppuVar12);
          local_4 = 0xffffffff;
          FUN_00649950();
          iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar11);
          iVar8 = *(int *)(iVar4 + 0x8c);
          if (*(int *)(iVar4 + 0x94) < iVar8 + 1) {
            if (*(int *)(iVar4 + 0x9c) == 0) {
              iVar9 = *(int *)(iVar4 + 0x94) / 2;
              iVar10 = 1;
              if (0 < iVar9) {
                iVar10 = iVar9;
              }
              if (iVar10 + iVar8 < 1) {
                local_d8 = (undefined4 *)0x1;
              }
              else {
                if (iVar9 < 1) {
                  iVar9 = 1;
                }
                local_d8 = (undefined4 *)(iVar9 + iVar8);
              }
            }
            else {
              local_d8 = (undefined4 *)(*(int *)(iVar4 + 0x9c) + iVar8);
            }
            local_cc = (undefined4 *)operator_new((int)local_d8 * 4);
            iVar8 = 0;
            if (0 < *(int *)(iVar4 + 0x8c)) {
              do {
                local_cc[iVar8] = *(undefined4 *)(*(int *)(iVar4 + 0x90) + iVar8 * 4);
                iVar8 = iVar8 + 1;
              } while (iVar8 < *(int *)(iVar4 + 0x8c));
            }
            FUN_006bf840(*(undefined4 *)(iVar4 + 0x90));
            *(undefined4 **)(iVar4 + 0x90) = local_cc;
            *(undefined4 **)(iVar4 + 0x94) = local_d8;
          }
          *(undefined4 **)(*(int *)(iVar4 + 0x90) + *(int *)(iVar4 + 0x8c) * 4) = local_b4;
          *(int *)(iVar4 + 0x8c) = *(int *)(iVar4 + 0x8c) + 1;
          local_d0 = local_d0 + 1;
        } while (local_d0 < (int)local_c8);
      }
      local_d4 = local_d4 + 1;
      iVar11 = iVar11 + 4;
    } while (local_d4 < local_c4);
  }
  ExceptionList = local_c;
  return;
}

