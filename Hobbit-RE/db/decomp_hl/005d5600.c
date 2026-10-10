
void __fastcall FUN_005d5600(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e05f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  iVar4 = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4) != 0) {
        FUN_00649600();
        local_4._0_1_ = 1;
        iVar2 = FUN_00406ce0();
        local_4._0_1_ = 0;
        if (iVar2 == -1) {
          FUN_00649720();
        }
        else {
          piVar1 = *(int **)(DAT_0076f648 + iVar2 * 0x14);
          FUN_00649720();
          if (piVar1 != (int *)0x0) {
            FUN_00649600();
            local_4._0_1_ = 2;
            iVar2 = FUN_00406ce0();
            local_4 = (uint)local_4._1_3_ << 8;
            if (iVar2 == -1) {
              FUN_00649720();
              local_30 = (int *)0x0;
            }
            else {
              local_30 = *(int **)(DAT_0076f648 + iVar2 * 0x14);
              FUN_00649720();
              if (local_30 != (int *)0x0) {
                (**(code **)(*local_30 + 0x28))();
                (**(code **)(*piVar1 + 300))();
                (**(code **)(*local_30 + 0x28))();
                FUN_004a34d0();
              }
            }
            FUN_00649600();
            local_4._0_1_ = 3;
            iVar2 = FUN_00406ce0();
            local_4._0_1_ = 0;
            if (iVar2 == -1) {
              FUN_00649720();
            }
            else {
              piVar1 = *(int **)(DAT_0076f648 + iVar2 * 0x14);
              FUN_00649720();
              if (piVar1 != (int *)0x0) {
                (**(code **)(*local_30 + 0x28))();
                uVar3 = (**(code **)(*piVar1 + 0x28))();
                FUN_004357e0(uVar3);
                FUN_004aa030();
                FUN_00599b10();
              }
            }
            FUN_004a57e0();
            FUN_00594390();
            FUN_005925e0();
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

