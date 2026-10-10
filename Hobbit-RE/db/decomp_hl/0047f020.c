
void __fastcall FUN_0047f020(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *local_7c;
  int *local_78;
  int local_74;
  undefined1 local_64 [44];
  undefined1 auStack_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d261e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x88) == 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x80) != 0) {
      ExceptionList = &local_c;
      FUN_00407f70(3);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  uVar3 = FUN_0047f440();
  iVar4 = FUN_00647cf0(uVar3);
  if (iVar4 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4 = 2;
    iVar4 = FUN_00406ce0(uVar3,uVar1);
    local_4 = 0xffffffff;
    if (iVar4 == -1) {
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar6 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
    FUN_00649720();
    if (piVar6 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar6 + 0x134))();
      local_74 = 0;
      if (0 < *(int *)(iVar4 + 8)) {
        local_7c = (int *)0x0;
        do {
          iVar8 = 0;
          FUN_00649b80(*(int *)(iVar4 + 0xc) + (int)local_7c);
          iVar7 = *(int *)(param_1 + 0x7c);
          local_4 = 3;
          if (*(int *)(param_1 + 0x84) < iVar7 + 1) {
            if (*(int *)(param_1 + 0x8c) == 0) {
              iVar5 = *(int *)(param_1 + 0x84) / 2;
              iVar9 = 1;
              if (0 < iVar5) {
                iVar9 = iVar5;
              }
              if (iVar9 + iVar7 < 1) {
                iVar7 = 1;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                iVar7 = iVar7 + iVar5;
              }
            }
            else {
              iVar7 = *(int *)(param_1 + 0x8c) + iVar7;
            }
            piVar6 = (int *)operator_new(iVar7 * 0x2c + 4);
            local_4._0_1_ = 4;
            if (piVar6 == (int *)0x0) {
              local_78 = (int *)0x0;
            }
            else {
              local_78 = piVar6 + 1;
              *piVar6 = iVar7;
              FUN_006c043b(local_78,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
            }
            local_4 = CONCAT31(local_4._1_3_,3);
            if (0 < *(int *)(param_1 + 0x7c)) {
              iVar9 = 0;
              do {
                FUN_0064a320(*(int *)(param_1 + 0x80) + iVar9);
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 0x2c;
              } while (iVar8 < *(int *)(param_1 + 0x7c));
            }
            if (*(int *)(param_1 + 0x80) != 0) {
              FUN_00407f70(3);
            }
            *(int *)(param_1 + 0x84) = iVar7;
            *(int **)(param_1 + 0x80) = local_78;
          }
          FUN_0064a320(auStack_38);
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          local_74 = local_74 + 1;
          local_7c = (int *)((int)local_7c + 0x4c);
        } while (local_74 < *(int *)(iVar4 + 8));
      }
    }
  }
  else {
    iVar4 = FUN_00549470(param_1 + 0x54);
    if (iVar4 != 0) {
      local_74 = *(int *)(iVar4 + 0x54);
      if (0 < local_74) {
        local_78 = (int *)0x0;
        do {
          iVar8 = 0;
          FUN_00649b20(*(int *)(iVar4 + 0x58) + (int)local_78);
          iVar7 = *(int *)(param_1 + 0x7c);
          local_4 = 0;
          if (*(int *)(param_1 + 0x84) < iVar7 + 1) {
            if (*(int *)(param_1 + 0x8c) == 0) {
              iVar5 = *(int *)(param_1 + 0x84) / 2;
              iVar9 = 1;
              if (0 < iVar5) {
                iVar9 = iVar5;
              }
              if (iVar9 + iVar7 < 1) {
                iVar7 = 1;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                iVar7 = iVar7 + iVar5;
              }
            }
            else {
              iVar7 = *(int *)(param_1 + 0x8c) + iVar7;
            }
            piVar6 = (int *)operator_new(iVar7 * 0x2c + 4);
            local_4._0_1_ = 1;
            if (piVar6 == (int *)0x0) {
              local_7c = (int *)0x0;
            }
            else {
              local_7c = piVar6 + 1;
              *piVar6 = iVar7;
              FUN_006c043b(local_7c,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            if (0 < *(int *)(param_1 + 0x7c)) {
              iVar9 = 0;
              do {
                FUN_0064a320(*(int *)(param_1 + 0x80) + iVar9);
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 0x2c;
              } while (iVar8 < *(int *)(param_1 + 0x7c));
            }
            if (*(int *)(param_1 + 0x80) != 0) {
              FUN_00407f70(3);
            }
            *(int **)(param_1 + 0x80) = local_7c;
            *(int *)(param_1 + 0x84) = iVar7;
          }
          FUN_0064a320(local_64);
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          local_78 = (int *)((int)local_78 + 0x50);
          local_74 = local_74 + -1;
        } while (local_74 != 0);
      }
      FUN_00549580(param_1 + 0x54);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

