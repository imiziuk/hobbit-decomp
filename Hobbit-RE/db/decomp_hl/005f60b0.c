
undefined4 __thiscall FUN_005f60b0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int local_28;
  int local_24;
  void *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e28d8;
  local_14 = ExceptionList;
  local_20 = (void *)0x0;
  local_1c = 0;
  ExceptionList = &local_14;
  FUN_00649920(&local_24,s_AIManager_Triggers_Trigger__d_NP_007483cc,*(undefined4 *)(param_1 + 4));
  local_c = 0;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  if ((iVar4 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_20 = (void *)param_3[0x90];
    local_1c = param_3[0x91];
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  if (bVar2) {
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 < 1) {
      if (*(int *)(param_1 + 0x1c) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x24) == 0) {
          local_28 = *(int *)(param_1 + 0x1c) / 2;
          iVar6 = 1;
          if (0 < local_28) {
            iVar6 = local_28;
          }
          if (iVar6 + iVar4 < 1) {
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
          local_28 = *(int *)(param_1 + 0x24) + iVar4;
        }
        pvVar5 = operator_new(local_28 * 8);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            iVar6 = *(int *)(param_1 + 0x18);
            *(undefined4 *)((int)pvVar5 + iVar4 * 8) = *(undefined4 *)(iVar6 + iVar4 * 8);
            *(undefined4 *)((int)pvVar5 + iVar4 * 8 + 4) = *(undefined4 *)(iVar6 + 4 + iVar4 * 8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x14));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
        *(void **)(param_1 + 0x18) = pvVar5;
        *(int *)(param_1 + 0x1c) = local_28;
      }
      iVar4 = *(int *)(param_1 + 0x14);
      iVar6 = *(int *)(param_1 + 0x18);
      *(void **)(iVar6 + iVar4 * 8) = local_20;
      *(int *)(iVar6 + 4 + iVar4 * 8) = local_1c;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    else {
      piVar1 = *(int **)(param_1 + 0x18);
      *piVar1 = (int)local_20;
      piVar1[1] = local_1c;
    }
  }
  FUN_00649920(&local_24,s_AIManager_Triggers_Trigger__d_NP_007484a8,*(undefined4 *)(param_1 + 4));
  local_c = 1;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar4 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    local_24 = param_3[0x93];
    if (local_24 < 0) {
      local_24 = 0;
    }
    iVar6 = local_24;
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 < local_24) {
      if (iVar4 < local_24) {
        local_24 = local_24 - iVar4;
        do {
          local_28 = *(int *)(param_1 + 0x14);
          if (*(int *)(param_1 + 0x1c) < local_28 + 1) {
            if (*(int *)(param_1 + 0x24) == 0) {
              iVar6 = *(int *)(param_1 + 0x1c) / 2;
              iVar4 = 1;
              if (0 < iVar6) {
                iVar4 = iVar6;
              }
              if (local_28 + iVar4 < 1) {
                local_28 = 1;
              }
              else {
                if (iVar6 < 1) {
                  iVar6 = 1;
                }
                local_28 = local_28 + iVar6;
              }
            }
            else {
              local_28 = *(int *)(param_1 + 0x24) + local_28;
            }
            pvVar5 = operator_new(local_28 * 8);
            iVar4 = 0;
            if (0 < *(int *)(param_1 + 0x14)) {
              do {
                iVar6 = *(int *)(param_1 + 0x18);
                *(undefined4 *)((int)pvVar5 + iVar4 * 8) = *(undefined4 *)(iVar6 + iVar4 * 8);
                *(undefined4 *)((int)pvVar5 + iVar4 * 8 + 4) =
                     *(undefined4 *)(iVar6 + 4 + iVar4 * 8);
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(param_1 + 0x14));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
            *(void **)(param_1 + 0x18) = pvVar5;
            *(int *)(param_1 + 0x1c) = local_28;
          }
          iVar4 = *(int *)(param_1 + 0x14);
          iVar6 = *(int *)(param_1 + 0x18);
          *(undefined4 *)(iVar6 + iVar4 * 8) = 0;
          *(undefined4 *)(iVar6 + 4 + iVar4 * 8) = 0;
          local_24 = local_24 + -1;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        } while (local_24 != 0);
        ExceptionList = local_14;
        return 1;
      }
    }
    else if (local_24 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x1c);
      local_28 = iVar4;
      if (iVar4 < local_24) {
        local_28 = local_24;
      }
      if (local_28 != iVar4) {
        local_20 = operator_new(local_28 * 8);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            iVar6 = *(int *)(param_1 + 0x18);
            *(undefined4 *)((int)local_20 + iVar4 * 8) = *(undefined4 *)(iVar6 + iVar4 * 8);
            *(undefined4 *)((int)local_20 + iVar4 * 8 + 4) = *(undefined4 *)(iVar6 + 4 + iVar4 * 8);
            iVar4 = iVar4 + 1;
            iVar6 = local_24;
          } while (iVar4 < *(int *)(param_1 + 0x14));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
        *(void **)(param_1 + 0x18) = local_20;
        *(int *)(param_1 + 0x1c) = local_28;
      }
      *(int *)(param_1 + 0x14) = iVar6;
    }
    ExceptionList = local_14;
    return 1;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_00649920(&local_20,s_AIManager_Triggers_Trigger__d_NP_00748480,
                   *(undefined4 *)(param_1 + 4),iVar4);
      local_c = 2;
      uVar3 = FUN_00649940();
      iVar6 = FUN_00647e40(param_2,uVar3);
      local_c = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
          ExceptionList = local_14;
          return 0;
        }
        iVar6 = *(int *)(param_1 + 0x18);
        *(int *)(iVar6 + iVar4 * 8) = param_3[0x90];
        *(int *)(iVar6 + 4 + iVar4 * 8) = param_3[0x91];
        ExceptionList = local_14;
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  FUN_00649920(&local_20,s_AIManager_Triggers_Trigger__d_Ex_00748454,*(undefined4 *)(param_1 + 4));
  local_c = 3;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar4 != 0) {
    FUN_00649920(&local_28,s_AIManager_Triggers_Trigger__d_En_00748428,*(undefined4 *)(param_1 + 4))
    ;
    local_c = 4;
    uVar3 = FUN_00649940();
    iVar4 = FUN_00647e40(param_2,uVar3);
    local_c = 0xffffffff;
    FUN_00649950();
    if (iVar4 != 0) {
      uVar3 = FUN_005f17e0(param_2,param_3);
      ExceptionList = local_14;
      return uVar3;
    }
    if ((*param_3 != 1) && (*param_3 != 0xc)) {
      ExceptionList = local_14;
      return 0;
    }
    *(int *)(param_1 + 0x2c) = param_3[0x93];
    ExceptionList = local_14;
    return 1;
  }
  if ((*param_3 != 1) && (*param_3 != 0xc)) {
    ExceptionList = local_14;
    return 0;
  }
  *(int *)(param_1 + 0x28) = param_3[0x93];
  ExceptionList = local_14;
  return 1;
}

