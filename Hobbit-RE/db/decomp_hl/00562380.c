
void __thiscall FUN_00562380(int param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dacfe;
  local_c = ExceptionList;
  local_10 = *(int *)(param_1 + 0x10);
  if (local_10 < (int)param_2) {
    if (local_10 < (int)param_2) {
      local_10 = (int)param_2 - local_10;
      ExceptionList = &local_c;
      do {
        param_2 = operator_new(100);
        local_4 = 0;
        if (param_2 == (void *)0x0) {
          param_2 = (void *)0x0;
        }
        else {
          FUN_006499d0();
          local_4._0_1_ = 1;
          FUN_006499d0();
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_0064a2e0(s_Enter_Trigger_s_Name_0073efe0);
          *(undefined4 *)((int)param_2 + 0x5c) = 0;
          *(undefined4 *)((int)param_2 + 0x58) = 0;
          *(uint *)((int)param_2 + 0x60) = *(uint *)((int)param_2 + 0x60) & 0xfffffff8;
        }
        iVar4 = *(int *)(param_1 + 0x10);
        local_4 = 0xffffffff;
        if (*(int *)(param_1 + 0x18) < iVar4 + 1) {
          if (*(int *)(param_1 + 0x20) == 0) {
            iVar1 = *(int *)(param_1 + 0x18) / 2;
            iVar3 = 1;
            if (0 < iVar1) {
              iVar3 = iVar1;
            }
            if (iVar4 + iVar3 < 1) {
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
            iVar4 = iVar4 + *(int *)(param_1 + 0x20);
          }
          pvVar2 = operator_new(iVar4 * 4);
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x10)) {
            do {
              *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x10));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
          *(void **)(param_1 + 0x14) = pvVar2;
          *(int *)(param_1 + 0x18) = iVar4;
        }
        *(void **)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 4) = param_2;
        local_10 = local_10 + -1;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      } while (local_10 != 0);
    }
  }
  else if ((int)param_2 < local_10) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar3 = (int)param_2;
    if ((int)param_2 <= iVar4) {
      iVar3 = iVar4;
    }
    ExceptionList = &local_c;
    if (iVar3 != iVar4) {
      ExceptionList = &local_c;
      pvVar2 = operator_new(iVar3 * 4);
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x10));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
      *(void **)(param_1 + 0x14) = pvVar2;
      *(int *)(param_1 + 0x18) = iVar3;
    }
    *(void **)(param_1 + 0x10) = param_2;
    FUN_0055d480();
  }
  ExceptionList = local_c;
  return;
}

