
undefined4 __thiscall FUN_005dd460(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e0ed0;
  local_14 = ExceptionList;
  local_20 = 0;
  local_1c = 0;
  ExceptionList = &local_14;
  FUN_00649920(&local_24,s_AIManager_Actions_Action__d_Cine_007474f0,*(undefined4 *)(param_1 + 4));
  local_c = 0;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  if ((iVar3 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_20 = param_3[0x90];
    local_1c = param_3[0x91];
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    iVar3 = *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x4c) < iVar3 + 1) {
      if (*(int *)(param_1 + 0x54) == 0) {
        local_28 = *(int *)(param_1 + 0x4c) / 2;
        iVar5 = 1;
        if (0 < local_28) {
          iVar5 = local_28;
        }
        if (iVar5 + iVar3 < 1) {
          local_28 = 1;
        }
        else {
          if (local_28 < 1) {
            local_28 = 1;
          }
          local_28 = iVar3 + local_28;
        }
      }
      else {
        local_28 = *(int *)(param_1 + 0x54) + iVar3;
      }
      pvVar4 = operator_new(local_28 * 8);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x44)) {
        do {
          iVar5 = *(int *)(param_1 + 0x48);
          *(undefined4 *)((int)pvVar4 + iVar3 * 8) = *(undefined4 *)(iVar5 + iVar3 * 8);
          *(undefined4 *)((int)pvVar4 + iVar3 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar3 * 8);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x44));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x48));
      *(void **)(param_1 + 0x48) = pvVar4;
      *(int *)(param_1 + 0x4c) = local_28;
    }
    iVar3 = *(int *)(param_1 + 0x44);
    iVar5 = *(int *)(param_1 + 0x48);
    *(int *)(iVar5 + iVar3 * 8) = local_20;
    *(int *)(iVar5 + 4 + iVar3 * 8) = local_1c;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  FUN_00649920(&local_24,s_AIManager_Actions_Action__d_Cine_007474bc,*(undefined4 *)(param_1 + 4));
  bVar1 = true;
  local_c = 1;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  if ((iVar3 == 0) && ((*param_3 == 1 || (*param_3 == 0xc)))) {
    local_28 = param_3[0x93];
  }
  else {
    bVar1 = false;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    *(int *)(param_1 + 0x34) = local_28;
  }
  FUN_00649920(&local_24,s_AIManager_Actions_Action__d_Cine_00747490,*(undefined4 *)(param_1 + 4));
  local_c = 2;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      do {
        FUN_00649920(&local_28,s_AIManager_Actions_Action__d_Cine_00747468,
                     *(undefined4 *)(param_1 + 4),iVar3);
        local_c = 3;
        uVar2 = FUN_00649940();
        iVar5 = FUN_00647e40(param_2,uVar2);
        local_c = 0xffffffff;
        FUN_00649950();
        if (iVar5 == 0) {
          if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
            ExceptionList = local_14;
            return 0;
          }
          iVar5 = *(int *)(param_1 + 0x48);
          *(int *)(iVar5 + iVar3 * 8) = param_3[0x90];
          *(int *)(iVar5 + 4 + iVar3 * 8) = param_3[0x91];
          ExceptionList = local_14;
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x44));
    }
    uVar2 = FUN_005ccb60(param_2,param_3);
    ExceptionList = local_14;
    return uVar2;
  }
  if (*param_3 != 1) {
    ExceptionList = local_14;
    return 0;
  }
  iVar3 = param_3[0x93];
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  local_24 = *(int *)(param_1 + 0x44);
  if (local_24 < iVar3) {
    if (local_24 < iVar3) {
      local_24 = iVar3 - local_24;
      do {
        local_28 = *(int *)(param_1 + 0x44);
        if (*(int *)(param_1 + 0x4c) < local_28 + 1) {
          if (*(int *)(param_1 + 0x54) == 0) {
            iVar5 = *(int *)(param_1 + 0x4c) / 2;
            iVar3 = 1;
            if (0 < iVar5) {
              iVar3 = iVar5;
            }
            if (iVar3 + local_28 < 1) {
              local_28 = 1;
            }
            else {
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              local_28 = local_28 + iVar5;
            }
          }
          else {
            local_28 = *(int *)(param_1 + 0x54) + local_28;
          }
          pvVar4 = operator_new(local_28 * 8);
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x44)) {
            do {
              iVar5 = *(int *)(param_1 + 0x48);
              *(undefined4 *)((int)pvVar4 + iVar3 * 8) = *(undefined4 *)(iVar5 + iVar3 * 8);
              *(undefined4 *)((int)pvVar4 + iVar3 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar3 * 8);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x44));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x48));
          *(void **)(param_1 + 0x48) = pvVar4;
          *(int *)(param_1 + 0x4c) = local_28;
        }
        iVar3 = *(int *)(param_1 + 0x44);
        iVar5 = *(int *)(param_1 + 0x48);
        *(undefined4 *)(iVar5 + iVar3 * 8) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar3 * 8) = 0;
        local_24 = local_24 + -1;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      } while (local_24 != 0);
      ExceptionList = local_14;
      return 1;
    }
  }
  else if (iVar3 < local_24) {
    iVar5 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      iVar5 = iVar3;
    }
    FUN_005f10c0(iVar5);
    *(int *)(param_1 + 0x44) = iVar3;
  }
  ExceptionList = local_14;
  return 1;
}

