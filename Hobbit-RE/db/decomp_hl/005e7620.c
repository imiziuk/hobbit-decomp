
undefined4 __thiscall FUN_005e7620(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int local_24;
  int local_20;
  void *local_1c [2];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e19f0;
  local_14 = ExceptionList;
  iVar4 = 0;
  local_20 = 0;
  ExceptionList = &local_14;
  FUN_00649920(local_1c,s_AIManager_Actions_Action__d_Inst_007479b0,*(undefined4 *)(param_1 + 4));
  local_c = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  if ((iVar2 == 0) && (*param_3 == 1)) {
    iVar4 = param_3[0x93];
    local_24 = 1;
    local_20 = iVar4;
  }
  else {
    local_24 = 0;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  iVar2 = *(int *)(param_1 + 0x20);
  if (local_24 != 0) {
    if (iVar2 < iVar4) {
      if (iVar2 < iVar4) {
        local_20 = iVar4 - iVar2;
        do {
          local_24 = *(int *)(param_1 + 0x20);
          if (*(int *)(param_1 + 0x28) < local_24 + 1) {
            if (*(int *)(param_1 + 0x30) == 0) {
              iVar2 = *(int *)(param_1 + 0x28) / 2;
              iVar4 = 1;
              if (0 < iVar2) {
                iVar4 = iVar2;
              }
              if (local_24 + iVar4 < 1) {
                local_24 = 1;
              }
              else {
                if (iVar2 < 1) {
                  iVar2 = 1;
                }
                local_24 = local_24 + iVar2;
              }
            }
            else {
              local_24 = *(int *)(param_1 + 0x30) + local_24;
            }
            pvVar3 = operator_new(local_24 * 8);
            iVar4 = 0;
            if (0 < *(int *)(param_1 + 0x20)) {
              do {
                iVar2 = *(int *)(param_1 + 0x24);
                *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
                *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) =
                     *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(param_1 + 0x20));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
            *(void **)(param_1 + 0x24) = pvVar3;
            *(int *)(param_1 + 0x28) = local_24;
          }
          iVar4 = *(int *)(param_1 + 0x20);
          iVar2 = *(int *)(param_1 + 0x24);
          *(undefined4 *)(iVar2 + iVar4 * 8) = 0;
          *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
          local_20 = local_20 + -1;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        } while (local_20 != 0);
        ExceptionList = local_14;
        return 1;
      }
    }
    else if (iVar4 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x28);
      local_24 = iVar2;
      if (iVar2 < iVar4) {
        local_24 = iVar4;
      }
      if (local_24 != iVar2) {
        local_1c[0] = operator_new(local_24 * 8);
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          do {
            iVar4 = *(int *)(param_1 + 0x24);
            *(undefined4 *)((int)local_1c[0] + iVar2 * 8) = *(undefined4 *)(iVar4 + iVar2 * 8);
            *(undefined4 *)((int)local_1c[0] + iVar2 * 8 + 4) =
                 *(undefined4 *)(iVar4 + 4 + iVar2 * 8);
            iVar2 = iVar2 + 1;
            iVar4 = local_20;
          } while (iVar2 < *(int *)(param_1 + 0x20));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
        *(void **)(param_1 + 0x24) = local_1c[0];
        *(int *)(param_1 + 0x28) = local_24;
      }
      *(int *)(param_1 + 0x20) = iVar4;
    }
    ExceptionList = local_14;
    return 1;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      FUN_00649920(local_1c,s_AIManager_Actions_Action__d_Rigi_00747980,*(undefined4 *)(param_1 + 4)
                   ,iVar4);
      local_c = 1;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_2,uVar1);
      local_c = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
          ExceptionList = local_14;
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x24);
        *(int *)(iVar2 + iVar4 * 8) = param_3[0x90];
        *(int *)(iVar2 + 4 + iVar4 * 8) = param_3[0x91];
        ExceptionList = local_14;
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  FUN_00649920(local_1c,s_AIManager_Actions_Action__d_Anim_00747958,*(undefined4 *)(param_1 + 4));
  local_c = 2;
  uVar1 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar1);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar4 == 0) {
    if (*param_3 == 1) {
      *(int *)(param_1 + 0x34) = param_3[0x93];
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  FUN_00649920(&local_24,s_AIManager_Actions_Action__d_Loop_00747934,*(undefined4 *)(param_1 + 4));
  local_c = 3;
  uVar1 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar1);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar4 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 0x38) = param_3[0x95];
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  uVar1 = FUN_005ccb60(param_2,param_3);
  ExceptionList = local_14;
  return uVar1;
}

