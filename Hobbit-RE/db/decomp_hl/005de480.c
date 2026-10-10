
undefined4 __thiscall FUN_005de480(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int local_2c;
  int local_28;
  void *local_24;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e0fc8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00649920(&local_28,s_AIManager_Actions_Action__d_Targ_00747594,*(undefined4 *)(param_1 + 4));
  local_c = 0;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar4 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      ExceptionList = local_14;
      return 0;
    }
    *(int *)(param_1 + 0x38) = param_3[0x90];
    *(int *)(param_1 + 0x3c) = param_3[0x91];
    ExceptionList = local_14;
    return 1;
  }
  local_20 = 0;
  local_1c = 0;
  FUN_00649920(&local_28,s_AIManager_Actions_Action__d_Cine_007474f0,*(undefined4 *)(param_1 + 4));
  local_c = 1;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  if ((iVar4 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_20 = param_3[0x90];
    local_1c = param_3[0x91];
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  if (bVar2) {
    local_2c = *(int *)(param_1 + 0x48);
    if (local_2c < 1) {
      if (*(int *)(param_1 + 0x50) < local_2c + 1) {
        if (*(int *)(param_1 + 0x58) == 0) {
          iVar5 = *(int *)(param_1 + 0x50) / 2;
          iVar4 = 1;
          if (0 < iVar5) {
            iVar4 = iVar5;
          }
          if (iVar4 + local_2c < 1) {
            local_2c = 1;
          }
          else {
            if (iVar5 < 1) {
              iVar5 = 1;
            }
            local_2c = local_2c + iVar5;
          }
        }
        else {
          local_2c = *(int *)(param_1 + 0x58) + local_2c;
        }
        pvVar6 = operator_new(local_2c * 8);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x48)) {
          do {
            iVar5 = *(int *)(param_1 + 0x4c);
            *(undefined4 *)((int)pvVar6 + iVar4 * 8) = *(undefined4 *)(iVar5 + iVar4 * 8);
            *(undefined4 *)((int)pvVar6 + iVar4 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar4 * 8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x48));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
        *(void **)(param_1 + 0x4c) = pvVar6;
        *(int *)(param_1 + 0x50) = local_2c;
      }
      iVar4 = *(int *)(param_1 + 0x48);
      iVar5 = *(int *)(param_1 + 0x4c);
      *(int *)(iVar5 + iVar4 * 8) = local_20;
      *(int *)(iVar5 + 4 + iVar4 * 8) = local_1c;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    else {
      piVar1 = *(int **)(param_1 + 0x4c);
      *piVar1 = local_20;
      piVar1[1] = local_1c;
    }
  }
  local_2c = 0;
  FUN_00649920(&local_28,s_AIManager_Actions_Action__d_Sele_00747564,*(undefined4 *)(param_1 + 4));
  local_c = 2;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  if ((iVar4 == 0) && ((*param_3 == 1 || (*param_3 == 0xc)))) {
    local_2c = param_3[0x93];
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_c = 0xffffffff;
  FUN_00649950();
  if (bVar2) {
    *(int *)(param_1 + 0x34) = local_2c;
  }
  FUN_00649920(&local_28,s_AIManager_Actions_Action__d_Cine_00747490,*(undefined4 *)(param_1 + 4));
  local_c = 3;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar4 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        FUN_00649920(&local_24,s_AIManager_Actions_Action__d_Cine_00747468,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_c = 4;
        uVar3 = FUN_00649940();
        iVar5 = FUN_00647e40(param_2,uVar3);
        local_c = 0xffffffff;
        FUN_00649950();
        if (iVar5 == 0) {
          if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
            ExceptionList = local_14;
            return 0;
          }
          iVar5 = *(int *)(param_1 + 0x4c);
          *(int *)(iVar5 + iVar4 * 8) = param_3[0x90];
          *(int *)(iVar5 + 4 + iVar4 * 8) = param_3[0x91];
          ExceptionList = local_14;
          return 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x48));
    }
    uVar3 = FUN_005ccb60(param_2,param_3);
    ExceptionList = local_14;
    return uVar3;
  }
  if (*param_3 != 1) {
    ExceptionList = local_14;
    return 0;
  }
  local_28 = param_3[0x93];
  if (local_28 < 0) {
    local_28 = 0;
  }
  iVar5 = local_28;
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 < local_28) {
    if (iVar4 < local_28) {
      local_28 = local_28 - iVar4;
      do {
        local_2c = *(int *)(param_1 + 0x48);
        if (*(int *)(param_1 + 0x50) < local_2c + 1) {
          if (*(int *)(param_1 + 0x58) == 0) {
            iVar5 = *(int *)(param_1 + 0x50) / 2;
            iVar4 = 1;
            if (0 < iVar5) {
              iVar4 = iVar5;
            }
            if (iVar4 + local_2c < 1) {
              local_2c = 1;
            }
            else {
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              local_2c = local_2c + iVar5;
            }
          }
          else {
            local_2c = *(int *)(param_1 + 0x58) + local_2c;
          }
          pvVar6 = operator_new(local_2c * 8);
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x48)) {
            do {
              iVar5 = *(int *)(param_1 + 0x4c);
              *(undefined4 *)((int)pvVar6 + iVar4 * 8) = *(undefined4 *)(iVar5 + iVar4 * 8);
              *(undefined4 *)((int)pvVar6 + iVar4 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar4 * 8);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x48));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
          *(void **)(param_1 + 0x4c) = pvVar6;
          *(int *)(param_1 + 0x50) = local_2c;
        }
        iVar4 = *(int *)(param_1 + 0x48);
        iVar5 = *(int *)(param_1 + 0x4c);
        *(undefined4 *)(iVar5 + iVar4 * 8) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = 0;
        local_28 = local_28 + -1;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      } while (local_28 != 0);
      ExceptionList = local_14;
      return 1;
    }
  }
  else if (local_28 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x50);
    iVar7 = iVar4;
    if (iVar4 < local_28) {
      iVar7 = local_28;
    }
    if (iVar7 != iVar4) {
      local_24 = operator_new(iVar7 << 3);
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          iVar5 = *(int *)(param_1 + 0x4c);
          *(undefined4 *)((int)local_24 + iVar4 * 8) = *(undefined4 *)(iVar5 + iVar4 * 8);
          *(undefined4 *)((int)local_24 + iVar4 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar4 * 8);
          iVar4 = iVar4 + 1;
          iVar5 = local_28;
        } while (iVar4 < *(int *)(param_1 + 0x48));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
      *(void **)(param_1 + 0x4c) = local_24;
      *(int *)(param_1 + 0x50) = iVar7;
    }
    *(int *)(param_1 + 0x48) = iVar5;
  }
  ExceptionList = local_14;
  return 1;
}

