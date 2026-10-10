
undefined4 __thiscall FUN_005da840(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e0bd0;
  local_14 = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_14;
  FUN_00649920(&local_24,s_AIManager_Actions_Action__d_NPC_C_00747330,*(undefined4 *)(param_1 + 4));
  local_c = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  if ((iVar2 == 0) && (*param_3 == 1)) {
    iVar4 = param_3[0x93];
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  local_24 = *(int *)(param_1 + 0x20);
  if (local_28 != 0) {
    if (local_24 < iVar4) {
      if (local_24 < iVar4) {
        local_24 = iVar4 - local_24;
        do {
          local_28 = *(int *)(param_1 + 0x20);
          if (*(int *)(param_1 + 0x28) < local_28 + 1) {
            if (*(int *)(param_1 + 0x30) == 0) {
              iVar2 = *(int *)(param_1 + 0x28) / 2;
              iVar4 = 1;
              if (0 < iVar2) {
                iVar4 = iVar2;
              }
              if (local_28 + iVar4 < 1) {
                local_28 = 1;
              }
              else {
                if (iVar2 < 1) {
                  iVar2 = 1;
                }
                local_28 = local_28 + iVar2;
              }
            }
            else {
              local_28 = *(int *)(param_1 + 0x30) + local_28;
            }
            pvVar3 = operator_new(local_28 * 8);
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
            *(int *)(param_1 + 0x28) = local_28;
          }
          iVar4 = *(int *)(param_1 + 0x20);
          iVar2 = *(int *)(param_1 + 0x24);
          *(undefined4 *)(iVar2 + iVar4 * 8) = 0;
          *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
          local_24 = local_24 + -1;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        } while (local_24 != 0);
        ExceptionList = local_14;
        return 1;
      }
    }
    else if (iVar4 < local_24) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x28) < iVar4) {
        iVar2 = iVar4;
      }
      FUN_005f10c0(iVar2);
      *(int *)(param_1 + 0x20) = iVar4;
    }
    ExceptionList = local_14;
    return 1;
  }
  iVar4 = 0;
  if (0 < local_24) {
    do {
      FUN_00649920(&local_24,s_AIManager_Actions_Action__d_NPC___0074730c,
                   *(undefined4 *)(param_1 + 4),iVar4);
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
  local_20 = 0;
  local_1c = 0;
  FUN_00649920(&local_24,s_AIManager_Actions_Action__d_Targ_00746904,*(undefined4 *)(param_1 + 4));
  local_c = 2;
  uVar1 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar1);
  if ((iVar4 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_20 = param_3[0x90];
    local_1c = param_3[0x91];
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  if (local_28 != 0) {
    iVar4 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x28) < iVar4 + 1) {
      if (*(int *)(param_1 + 0x30) == 0) {
        local_28 = *(int *)(param_1 + 0x28) / 2;
        iVar2 = 1;
        if (0 < local_28) {
          iVar2 = local_28;
        }
        if (iVar2 + iVar4 < 1) {
          local_28 = 1;
        }
        else {
          if (local_28 < 1) {
            local_28 = 1;
          }
          local_28 = iVar4 + local_28;
        }
      }
      else {
        local_28 = *(int *)(param_1 + 0x30) + iVar4;
      }
      pvVar3 = operator_new(local_28 * 8);
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x20)) {
        do {
          iVar2 = *(int *)(param_1 + 0x24);
          *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
          *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x20));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
      *(void **)(param_1 + 0x24) = pvVar3;
      *(int *)(param_1 + 0x28) = local_28;
    }
    iVar4 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    *(int *)(iVar2 + iVar4 * 8) = local_20;
    *(int *)(iVar2 + 4 + iVar4 * 8) = local_1c;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  FUN_00649920(&local_28,s_AIManager_Actions_Action__d_Heal_007472e8,*(undefined4 *)(param_1 + 4));
  local_c = 3;
  uVar1 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar1);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar4 != 0) {
    uVar1 = FUN_005ccb60(param_2,param_3);
    ExceptionList = local_14;
    return uVar1;
  }
  if (*param_3 == 1) {
    *(int *)(param_1 + 0x34) = param_3[0x93];
    ExceptionList = local_14;
    return 1;
  }
  ExceptionList = local_14;
  return 0;
}

