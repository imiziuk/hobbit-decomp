
void __fastcall FUN_00572970(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db7e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_event_mgr__OnAdvanceLogic_0073fd3c);
  iVar9 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    local_24 = 0;
    do {
      iVar3 = local_24 + *(int *)(param_1 + 0xc);
      if (*(int *)(iVar3 + 0x10) == 0) {
        uVar4 = *(undefined4 *)(iVar3 + 8);
        uVar1 = *(undefined4 *)(iVar3 + 0xc);
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 1;
        iVar3 = FUN_00406ce0(uVar4,uVar1);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar3 == -1) {
          FUN_00649720();
        }
        else {
          uVar2 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
          piVar7 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
          FUN_00649720();
          if ((piVar7 != (int *)0x0) && ((char)piVar7[0x1f] == '-')) {
            uVar4 = (**(code **)(*piVar7 + 0xd4))(s_FireBreath_0073fd30);
            iVar3 = FUN_00647ed0(uVar4);
            if (iVar3 != 0) {
              uVar4 = (**(code **)(*piVar7 + 0xd4))(s_GandalfStaff_0072c340);
              iVar3 = FUN_00647ed0(uVar4);
              if (iVar3 != 0) {
                uVar4 = (**(code **)(*piVar7 + 0xd4))(s_GandalfStaffExplode_0073fd1c);
                iVar3 = FUN_00647ed0(uVar4);
                if (iVar3 != 0) {
                  (**(code **)(*piVar7 + 0x114))();
                }
              }
            }
          }
        }
        iVar3 = local_24 + -0x18;
        iVar6 = *(int *)(param_1 + 8) - iVar9;
        iVar9 = iVar9 + -1;
        iVar6 = iVar6 + -1;
        if (0 < iVar6) {
          do {
            iVar5 = local_24 + 0x18;
            puVar11 = (undefined4 *)(local_24 + *(int *)(param_1 + 0xc));
            local_24 = local_24 + 0x18;
            iVar6 = iVar6 + -1;
            puVar10 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0xc));
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          } while (iVar6 != 0);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        local_24 = iVar3;
      }
      else {
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      iVar9 = iVar9 + 1;
      local_24 = local_24 + 0x18;
    } while (iVar9 < *(int *)(param_1 + 8));
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    local_24 = 0;
    do {
      iVar3 = local_24 + *(int *)(param_1 + 0x28);
      if (*(int *)(iVar3 + 0x10) == 0) {
        if (*(int *)(iVar3 + 0xc) == 0) {
          FUN_00659c80(*(undefined4 *)(iVar3 + 8),0);
          iVar6 = (*(int *)(param_1 + 0x24) - iVar9) + -1;
          iVar3 = local_24;
          if (0 < iVar6) {
            do {
              iVar6 = iVar6 + -1;
              puVar11 = (undefined4 *)(iVar3 + 0x18 + *(int *)(param_1 + 0x28));
              puVar10 = (undefined4 *)(iVar3 + *(int *)(param_1 + 0x28));
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar10 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar10 = puVar10 + 1;
              }
              iVar3 = iVar3 + 0x18;
            } while (iVar6 != 0);
          }
          iVar9 = iVar9 + -1;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          local_24 = local_24 + -0x18;
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      iVar9 = iVar9 + 1;
      local_24 = local_24 + 0x18;
    } while (iVar9 < *(int *)(param_1 + 0x24));
  }
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    local_20 = 0;
    do {
      if (*(int *)(local_20 + 0x30 + *(int *)(param_1 + 0x44)) == 0) {
        iVar3 = (*(int *)(param_1 + 0x40) - local_24) + -1;
        iVar9 = local_20;
        if (0 < iVar3) {
          do {
            iVar6 = *(int *)(param_1 + 0x44);
            *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)(iVar9 + 0x38 + iVar6);
            *(undefined4 *)(iVar9 + 4 + iVar6) = *(undefined4 *)(iVar9 + 0x3c + iVar6);
            *(undefined4 *)(iVar9 + 8 + iVar6) = *(undefined4 *)(iVar9 + 0x40 + iVar6);
            *(undefined4 *)(iVar9 + 0xc + iVar6) = *(undefined4 *)(iVar9 + 0x44 + iVar6);
            *(undefined4 *)(iVar9 + 0x10 + iVar6) = *(undefined4 *)(iVar9 + 0x48 + iVar6);
            *(undefined4 *)(iVar9 + 0x14 + iVar6) = *(undefined4 *)(iVar9 + 0x4c + iVar6);
            FUN_004357e0(iVar9 + 0x50 + iVar6);
            FUN_004357e0(iVar9 + 0x5c + iVar6);
            *(undefined4 *)(iVar9 + 0x30 + iVar6) = *(undefined4 *)(iVar9 + 0x68 + iVar6);
            iVar3 = iVar3 + -1;
            iVar9 = iVar9 + 0x38;
          } while (iVar3 != 0);
        }
        local_24 = local_24 + -1;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        local_20 = local_20 + -0x38;
      }
      else {
        *(undefined4 *)(local_20 + 0x30 + *(int *)(param_1 + 0x44)) = 0;
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 0x38;
    } while (local_24 < *(int *)(param_1 + 0x40));
  }
  iVar9 = *(int *)(param_1 + 0x88);
  iVar3 = 0;
  if (0 < iVar9) {
    do {
      iVar6 = iVar3 * 4;
      iVar5 = FUN_00659f30(*(undefined4 *)(iVar6 + *(int *)(param_1 + 0x8c)));
      if (iVar5 == 0) {
        iVar5 = (*(int *)(param_1 + 0x88) - iVar3) + -1;
        if (0 < iVar5) {
          do {
            *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x8c)) =
                 *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x8c));
            iVar6 = iVar6 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
        iVar3 = iVar3 + -1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x88));
  }
  if ((iVar9 != 0) && (*(int *)(param_1 + 0x88) == 0)) {
    FUN_0054ec40();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

