
/* WARNING: Removing unreachable block (ram,0x0059ccca) */

void __fastcall FUN_0059cb70(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void **ppvVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_cc [20];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  void *local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd78b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar7 = 0;
    ExceptionList = &local_c;
    ppvVar3 = &local_c;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar7 * 8);
        uStack_b4 = 0x59cbc8;
        FUN_00649600();
        local_4 = 0;
        uStack_b8 = 0x59cbdf;
        uStack_b4 = uVar1;
        iVar4 = FUN_00406ce0();
        local_4 = 0xffffffff;
        if (iVar4 == -1) {
          FUN_00649720();
        }
        else {
          uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
          piVar6 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
          FUN_00649720();
          if (piVar6 != (int *)0x0) {
            uStack_b4 = 0x59cc26;
            (**(code **)(*piVar6 + 0xf8))();
          }
        }
        iVar7 = iVar7 + 1;
        ppvVar3 = (void **)ExceptionList;
      } while (iVar7 < *(int *)(param_1 + 8));
    }
    ExceptionList = ppvVar3;
    local_90 = (void *)0x0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    local_88 = 0;
    local_9c = 0;
    local_98 = 0;
    local_4 = 1;
    uStack_b4 = 0x59cc5f;
    pvVar5 = operator_new(4);
    iVar7 = 0;
    if (0 < local_94) {
      do {
        *(undefined4 *)((int)pvVar5 + iVar7 * 4) = *(undefined4 *)((int)local_90 + iVar7 * 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_94);
    }
    uStack_b4 = 0x59cc8d;
    FUN_006bf840();
    local_8c = 1;
    *(undefined4 *)((int)pvVar5 + local_94 * 4) = 0x30;
    iVar7 = local_94 + 1;
    local_90 = pvVar5;
    if (1 < local_94 + 2) {
      if (local_84 == 0) {
        if (local_94 + 2 < 1) {
          iVar4 = 1;
        }
        else {
          iVar4 = local_94 + 2;
        }
      }
      else {
        iVar4 = iVar7 + local_84;
      }
      uStack_b4 = 0x59ccf1;
      local_94 = iVar7;
      pvVar5 = operator_new(iVar4 * 4);
      iVar7 = 0;
      if (0 < local_94) {
        do {
          *(undefined4 *)((int)pvVar5 + iVar7 * 4) = *(undefined4 *)((int)local_90 + iVar7 * 4);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_94);
      }
      uStack_b4 = 0x59cd1d;
      FUN_006bf840();
      iVar7 = local_94;
      local_90 = pvVar5;
      local_8c = iVar4;
    }
    local_94 = iVar7;
    *(undefined4 *)((int)local_90 + local_94 * 4) = 0x12;
    local_94 = local_94 + 1;
    uStack_b4 = 0x59cd55;
    FUN_00649b60();
    local_4._0_1_ = 2;
    local_70 = 0;
    local_6c = 0;
    local_78 = 5;
    FUN_006499d0();
    local_4._0_1_ = 3;
    uStack_b4 = 0x59cd8c;
    FUN_0064a320();
    local_4._0_1_ = 1;
    FUN_00649ba0();
    local_80 = auStack_cc;
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_0042a610(&local_9c);
    FUN_0054e3f0();
    if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) == 1)) {
      uStack_b4 = 0x59cde1;
      thunk_FUN_0056b6b0();
      FUN_004fb120();
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649ba0();
    if (local_88 != 2) {
      uStack_b4 = 0x59ce0b;
      FUN_006bf840();
    }
  }
  ExceptionList = local_c;
  return;
}

