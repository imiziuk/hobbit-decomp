
undefined4 __thiscall FUN_00628830(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int local_24;
  int local_20;
  void *local_1c [2];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e4ec0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00649920(&local_20,s__s_FollowThisGUID_0074a2c4,*(undefined4 *)(param_1 + 0x10));
  local_c = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if (*param_3 != 0xf) {
      ExceptionList = local_14;
      return 0;
    }
    *(int *)(param_1 + 0x60) = param_3[0x90];
    *(int *)(param_1 + 100) = param_3[0x91];
  }
  FUN_00649920(&local_20,s__s_Minion_Count_00748de4,*(undefined4 *)(param_1 + 0x10));
  local_c = 1;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    iVar2 = param_3[0x93];
    local_20 = *(int *)(param_1 + 0x70);
    if (local_20 < iVar2) {
      if (local_20 < iVar2) {
        local_20 = iVar2 - local_20;
        do {
          local_24 = *(int *)(param_1 + 0x70);
          if (*(int *)(param_1 + 0x78) < local_24 + 1) {
            if (*(int *)(param_1 + 0x80) == 0) {
              iVar3 = *(int *)(param_1 + 0x78) / 2;
              iVar2 = 1;
              if (0 < iVar3) {
                iVar2 = iVar3;
              }
              if (local_24 + iVar2 < 1) {
                local_24 = 1;
              }
              else {
                if (iVar3 < 1) {
                  iVar3 = 1;
                }
                local_24 = local_24 + iVar3;
              }
            }
            else {
              local_24 = *(int *)(param_1 + 0x80) + local_24;
            }
            pvVar4 = operator_new(local_24 * 8);
            iVar2 = 0;
            if (0 < *(int *)(param_1 + 0x70)) {
              do {
                iVar3 = *(int *)(param_1 + 0x74);
                *(undefined4 *)((int)pvVar4 + iVar2 * 8) = *(undefined4 *)(iVar3 + iVar2 * 8);
                *(undefined4 *)((int)pvVar4 + iVar2 * 8 + 4) =
                     *(undefined4 *)(iVar3 + 4 + iVar2 * 8);
                iVar2 = iVar2 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x70));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x74));
            *(void **)(param_1 + 0x74) = pvVar4;
            *(int *)(param_1 + 0x78) = local_24;
          }
          iVar2 = *(int *)(param_1 + 0x70);
          iVar3 = *(int *)(param_1 + 0x74);
          *(undefined4 *)(iVar3 + iVar2 * 8) = 0;
          *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = 0;
          local_20 = local_20 + -1;
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        } while (local_20 != 0);
        ExceptionList = local_14;
        return 1;
      }
    }
    else if (iVar2 < local_20) {
      iVar3 = *(int *)(param_1 + 0x78);
      local_24 = iVar3;
      if (iVar3 < iVar2) {
        local_24 = iVar2;
      }
      if (local_24 != iVar3) {
        local_20 = iVar2;
        local_1c[0] = operator_new(local_24 * 8);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x70)) {
          do {
            iVar2 = *(int *)(param_1 + 0x74);
            *(undefined4 *)((int)local_1c[0] + iVar3 * 8) = *(undefined4 *)(iVar2 + iVar3 * 8);
            *(undefined4 *)((int)local_1c[0] + iVar3 * 8 + 4) =
                 *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
            iVar3 = iVar3 + 1;
            iVar2 = local_20;
          } while (iVar3 < *(int *)(param_1 + 0x70));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x74));
        *(void **)(param_1 + 0x74) = local_1c[0];
        *(int *)(param_1 + 0x78) = local_24;
      }
      *(int *)(param_1 + 0x70) = iVar2;
    }
    ExceptionList = local_14;
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      FUN_00649920(local_1c,s__s_Minion__d_00748dd4,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_c = 2;
      uVar1 = FUN_00649940();
      iVar3 = FUN_00647e40(param_2,uVar1);
      local_c = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
          ExceptionList = local_14;
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x74);
        *(int *)(iVar3 + iVar2 * 8) = param_3[0x90];
        *(int *)(iVar3 + 4 + iVar2 * 8) = param_3[0x91];
        ExceptionList = local_14;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x70));
  }
  FUN_00649920(&local_24,s__s_Idle_Animation_Delay_0074a2d8,*(undefined4 *)(param_1 + 0x10));
  local_c = 3;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_c = 0xffffffff;
  FUN_00649950();
  if (iVar2 != 0) {
    uVar1 = FUN_005bf900(param_2,param_3);
    ExceptionList = local_14;
    return uVar1;
  }
  if (*param_3 == 2) {
    *(int *)(param_1 + 0x54) = param_3[0x94];
    ExceptionList = local_14;
    return 1;
  }
  ExceptionList = local_14;
  return 0;
}

