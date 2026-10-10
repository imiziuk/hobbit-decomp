
undefined4 __thiscall FUN_005fc800(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_20;
  int local_1c;
  undefined1 local_18 [8];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3020;
  local_c = ExceptionList;
  iVar9 = 0;
  local_10 = 0;
  local_1c = 0;
  ExceptionList = &local_c;
  FUN_00649920(&local_20,s_AIManager_Triggers_Trigger__d_NP_007483cc,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(param_2,uVar3);
  if ((iVar4 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    local_10 = param_3[0x91];
    iVar9 = param_3[0x90];
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar2) {
    if (*(int *)(param_1 + 0x14) < 1) {
      local_20 = (undefined4 *)operator_new(0x10);
      if (local_20 == (undefined4 *)0x0) {
        local_20 = (undefined4 *)0x0;
      }
      else {
        *local_20 = 0;
        local_20[1] = 0;
        local_20[2] = 0;
      }
      iVar4 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x1c) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x24) == 0) {
          iVar5 = *(int *)(param_1 + 0x1c) / 2;
          iVar7 = 1;
          if (0 < iVar5) {
            iVar7 = iVar5;
          }
          if (iVar4 + iVar7 < 1) {
            iVar4 = 1;
          }
          else {
            if (iVar5 < 1) {
              iVar5 = 1;
            }
            iVar4 = iVar4 + iVar5;
          }
        }
        else {
          iVar4 = iVar4 + *(int *)(param_1 + 0x24);
        }
        pvVar6 = operator_new(iVar4 * 4);
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            *(undefined4 *)((int)pvVar6 + iVar7 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0x14));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
        *(void **)(param_1 + 0x18) = pvVar6;
        *(int *)(param_1 + 0x1c) = iVar4;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 4) = local_20;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    piVar1 = (int *)**(undefined4 **)(param_1 + 0x18);
    *piVar1 = iVar9;
    piVar1[1] = local_10;
  }
  FUN_00649920(&local_20,s_AIManager_Triggers_Trigger__d_St_007487b0,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  uVar3 = FUN_00649940();
  iVar9 = FUN_00647e40(param_2,uVar3);
  if ((iVar9 == 0) && ((*param_3 == 1 || (*param_3 == 0xc)))) {
    local_1c = param_3[0x93];
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar2) {
    if (*(int *)(param_1 + 0x14) < 1) {
      puVar8 = (undefined4 *)operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      iVar9 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x1c) < iVar9 + 1) {
        if (*(int *)(param_1 + 0x24) == 0) {
          iVar7 = *(int *)(param_1 + 0x1c) / 2;
          iVar4 = 1;
          if (0 < iVar7) {
            iVar4 = iVar7;
          }
          if (iVar9 + iVar4 < 1) {
            iVar9 = 1;
          }
          else {
            if (iVar7 < 1) {
              iVar7 = 1;
            }
            iVar9 = iVar9 + iVar7;
          }
        }
        else {
          iVar9 = iVar9 + *(int *)(param_1 + 0x24);
        }
        pvVar6 = operator_new(iVar9 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            *(undefined4 *)((int)pvVar6 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x14));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
        *(void **)(param_1 + 0x18) = pvVar6;
        *(int *)(param_1 + 0x1c) = iVar9;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 4) = puVar8;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    *(int *)(**(int **)(param_1 + 0x18) + 8) = local_1c;
  }
  FUN_00649920(&local_1c,s_AIManager_Triggers_Trigger__d_An_0074877c,*(undefined4 *)(param_1 + 4));
  local_4 = 2;
  uVar3 = FUN_00649940();
  iVar9 = FUN_00647e40(param_2,uVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar9 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 0x28) = param_3[0x95];
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    FUN_00649920(&local_1c,s_AIManager_Triggers_Trigger__d_NP_0074874c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 3;
    uVar3 = FUN_00649940();
    iVar9 = FUN_00647e40(param_2,uVar3);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar9 == 0) {
      if (*param_3 == 1) {
        iVar9 = param_3[0x93];
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        iVar4 = *(int *)(param_1 + 0x14);
        if (iVar4 < iVar9) {
          if (iVar4 < iVar9) {
            param_3 = (int *)(iVar9 - iVar4);
            do {
              puVar8 = (undefined4 *)operator_new(0x10);
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = (undefined4 *)0x0;
              }
              else {
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8[2] = 0;
              }
              iVar9 = *(int *)(param_1 + 0x14);
              if (*(int *)(param_1 + 0x1c) < iVar9 + 1) {
                if (*(int *)(param_1 + 0x24) == 0) {
                  iVar7 = *(int *)(param_1 + 0x1c) / 2;
                  iVar4 = 1;
                  if (0 < iVar7) {
                    iVar4 = iVar7;
                  }
                  if (iVar9 + iVar4 < 1) {
                    iVar9 = 1;
                  }
                  else {
                    if (iVar7 < 1) {
                      iVar7 = 1;
                    }
                    iVar9 = iVar9 + iVar7;
                  }
                }
                else {
                  iVar9 = *(int *)(param_1 + 0x24) + iVar9;
                }
                pvVar6 = operator_new(iVar9 * 4);
                iVar4 = 0;
                if (0 < *(int *)(param_1 + 0x14)) {
                  do {
                    *(undefined4 *)((int)pvVar6 + iVar4 * 4) =
                         *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < *(int *)(param_1 + 0x14));
                }
                FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
                *(int *)(param_1 + 0x1c) = iVar9;
                *(void **)(param_1 + 0x18) = pvVar6;
              }
              *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 4) = puVar8;
              param_3 = (int *)((int)param_3 + -1);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            } while (param_3 != (int *)0x0);
            ExceptionList = local_c;
            return 1;
          }
        }
        else if (iVar9 < iVar4) {
          iVar4 = *(int *)(param_1 + 0x1c);
          iVar7 = iVar9;
          if (iVar9 <= iVar4) {
            iVar7 = iVar4;
          }
          if (iVar7 != iVar4) {
            pvVar6 = operator_new(iVar7 * 4);
            iVar4 = 0;
            if (0 < *(int *)(param_1 + 0x14)) {
              do {
                *(undefined4 *)((int)pvVar6 + iVar4 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(param_1 + 0x14));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
            *(void **)(param_1 + 0x18) = pvVar6;
            *(int *)(param_1 + 0x1c) = iVar7;
          }
          *(int *)(param_1 + 0x14) = iVar9;
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          FUN_00649920(&local_1c,s_AIManager_Triggers_Trigger__d_NP_007486f0,
                       *(undefined4 *)(param_1 + 4),iVar9);
          local_4 = 4;
          uVar3 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar3);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
              ExceptionList = local_c;
              return 0;
            }
            piVar1 = *(int **)(*(int *)(param_1 + 0x18) + iVar9 * 4);
            *piVar1 = param_3[0x90];
            piVar1[1] = param_3[0x91];
            ExceptionList = local_c;
            return 1;
          }
          FUN_00649920(local_18,s_AIManager_Triggers_Trigger__d_NP_007486c0,
                       *(undefined4 *)(param_1 + 4),iVar9);
          local_4 = 5;
          uVar3 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar3);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if ((*param_3 != 1) && (*param_3 != 0xc)) {
              ExceptionList = local_c;
              return 0;
            }
            *(int *)(*(int *)(*(int *)(param_1 + 0x18) + iVar9 * 4) + 8) = param_3[0x93];
            ExceptionList = local_c;
            return 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x14));
      }
      uVar3 = FUN_005f17e0(param_2,param_3);
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

