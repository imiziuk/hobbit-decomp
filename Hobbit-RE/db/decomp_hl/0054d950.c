
void FUN_0054d950(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *local_ac;
  uint local_a8;
  undefined1 local_a4 [76];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d98f1;
  local_c = ExceptionList;
  local_a8 = 0;
  ExceptionList = &local_c;
  do {
    if ((&DAT_0076f908)[local_a8] == 0) {
      FUN_0064b130(s_Invalid_Type_0073d090);
      local_4 = 2;
      FUN_00425270(local_58);
      local_4 = 0xffffffff;
      FUN_0064b190();
      iVar4 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < iVar4 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          iVar1 = *(int *)(param_2 + 0x10) / 2;
          iVar5 = 1;
          if (0 < iVar1) {
            iVar5 = iVar1;
          }
          if (iVar5 + iVar4 < 1) {
            iVar4 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar4 = iVar4 + iVar1;
          }
        }
        else {
          iVar4 = *(int *)(param_2 + 0x18) + iVar4;
        }
        pvVar3 = operator_new(iVar4 * 4);
        iVar5 = 0;
        if (0 < *(int *)(param_2 + 8)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar5 * 4) =
                 *(undefined4 *)(*(int *)(param_2 + 0xc) + iVar5 * 4);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_2 + 8));
        }
        goto LAB_0054dc15;
      }
    }
    else {
      FUN_0064b130(*(undefined4 *)((&DAT_0076f908)[local_a8] + 4));
      iVar4 = *(int *)(param_1 + 8);
      local_4 = 0;
      if (*(int *)(param_1 + 0x10) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar1 = *(int *)(param_1 + 0x10) / 2;
          iVar5 = 1;
          if (0 < iVar1) {
            iVar5 = iVar1;
          }
          if (iVar5 + iVar4 < 1) {
            iVar4 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar4 = iVar4 + iVar1;
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x18) + iVar4;
        }
        piVar2 = (int *)operator_new(iVar4 * 0x4c + 4);
        iVar5 = 0;
        local_4._0_1_ = 1;
        if (piVar2 == (int *)0x0) {
          local_ac = (int *)0x0;
        }
        else {
          local_ac = piVar2 + 1;
          *piVar2 = iVar4;
          FUN_006c043b(local_ac,0x4c,iVar4,FUN_0064afa0,FUN_0064b190);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < *(int *)(param_1 + 8)) {
          iVar1 = 0;
          do {
            FUN_0064b7f0(*(int *)(param_1 + 0xc) + iVar1);
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + 0x4c;
          } while (iVar5 < *(int *)(param_1 + 8));
        }
        iVar5 = *(int *)(param_1 + 0xc);
        if (iVar5 != 0) {
          FUN_006c026a(iVar5,0x4c,*(undefined4 *)(iVar5 + -4),FUN_0064b190);
          FUN_006bf840(iVar5 + -4);
        }
        *(int **)(param_1 + 0xc) = local_ac;
        *(int *)(param_1 + 0x10) = iVar4;
      }
      FUN_0064b7f0(local_a4);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      local_4 = 0xffffffff;
      FUN_0064b190();
      iVar4 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < iVar4 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          iVar1 = *(int *)(param_2 + 0x10) / 2;
          iVar5 = 1;
          if (0 < iVar1) {
            iVar5 = iVar1;
          }
          if (iVar5 + iVar4 < 1) {
            iVar4 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar4 = iVar4 + iVar1;
          }
        }
        else {
          iVar4 = *(int *)(param_2 + 0x18) + iVar4;
        }
        pvVar3 = operator_new(iVar4 * 4);
        iVar5 = 0;
        if (0 < *(int *)(param_2 + 8)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar5 * 4) =
                 *(undefined4 *)(*(int *)(param_2 + 0xc) + iVar5 * 4);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_2 + 8));
        }
LAB_0054dc15:
        FUN_006bf840(*(undefined4 *)(param_2 + 0xc));
        *(int *)(param_2 + 0x10) = iVar4;
        *(void **)(param_2 + 0xc) = pvVar3;
      }
    }
    *(uint *)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 8) * 4) = local_a8;
    local_a8 = local_a8 + 1;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    if (0x45 < local_a8) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

