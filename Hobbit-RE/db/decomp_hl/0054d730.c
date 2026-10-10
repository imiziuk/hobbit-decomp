
void FUN_0054d730(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_5c;
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d98c3;
  local_c = ExceptionList;
  local_5c = 0;
  ExceptionList = &local_c;
  do {
    piVar5 = (int *)0x0;
    if ((&DAT_0076f908)[local_5c] != 0) {
      FUN_0064b130(*(undefined4 *)((&DAT_0076f908)[local_5c] + 4));
      iVar4 = *(int *)(param_1 + 8);
      local_4 = 0;
      if (*(int *)(param_1 + 0x10) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar1 = *(int *)(param_1 + 0x10) / 2;
          iVar6 = 1;
          if (0 < iVar1) {
            iVar6 = iVar1;
          }
          if (iVar6 + iVar4 < 1) {
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
        local_4._0_1_ = 1;
        if (piVar2 != (int *)0x0) {
          piVar5 = piVar2 + 1;
          *piVar2 = iVar4;
          FUN_006c043b(piVar5,0x4c,iVar4,FUN_0064afa0,FUN_0064b190);
        }
        iVar6 = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < *(int *)(param_1 + 8)) {
          iVar1 = 0;
          do {
            FUN_0064b7f0(*(int *)(param_1 + 0xc) + iVar1);
            iVar6 = iVar6 + 1;
            iVar1 = iVar1 + 0x4c;
          } while (iVar6 < *(int *)(param_1 + 8));
        }
        iVar6 = *(int *)(param_1 + 0xc);
        if (iVar6 != 0) {
          FUN_006c026a(iVar6,0x4c,*(undefined4 *)(iVar6 + -4),FUN_0064b190);
          FUN_006bf840(iVar6 + -4);
        }
        *(int **)(param_1 + 0xc) = piVar5;
        *(int *)(param_1 + 0x10) = iVar4;
      }
      FUN_0064b7f0(local_58);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      local_4 = 0xffffffff;
      FUN_0064b190();
      iVar4 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < iVar4 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          iVar1 = *(int *)(param_2 + 0x10) / 2;
          iVar6 = 1;
          if (0 < iVar1) {
            iVar6 = iVar1;
          }
          if (iVar6 + iVar4 < 1) {
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
        iVar6 = 0;
        if (0 < *(int *)(param_2 + 8)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar6 * 4) =
                 *(undefined4 *)(*(int *)(param_2 + 0xc) + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_2 + 8));
        }
        FUN_006bf840(*(undefined4 *)(param_2 + 0xc));
        *(int *)(param_2 + 0x10) = iVar4;
        *(void **)(param_2 + 0xc) = pvVar3;
      }
      *(uint *)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 8) * 4) = local_5c;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    }
    local_5c = local_5c + 1;
  } while (local_5c < 0x46);
  ExceptionList = local_c;
  return;
}

