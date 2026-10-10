
undefined4 __thiscall FUN_00639f50(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s__s_Idle_Leash_Radius_0074a780,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar4 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if (*param_3 == 2) {
      *(int *)(param_1 + 100) = param_3[0x94];
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Idle_Animation_Delay_0074a2d8,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(uVar4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if (*param_3 == 2) {
        *(int *)(param_1 + 0x68) = param_3[0x94];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Wander_Delay_007490cc,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(uVar4,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x6c) = param_3[0x94];
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Patrol_Point_Count_0074a768,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar4,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          if (*param_3 == 1) {
            iVar3 = param_3[0x93];
            iVar7 = *(int *)(param_1 + 0x50);
            if (iVar7 < iVar3) {
              if (iVar7 < iVar3) {
                param_2 = iVar3 - iVar7;
                do {
                  param_3 = (int *)operator_new(0x10);
                  if (param_3 == (int *)0x0) {
                    param_3 = (int *)0x0;
                  }
                  else {
                    *param_3 = 0;
                    param_3[1] = 0;
                    param_3[2] = 0x3f800000;
                    param_3[3] = 0;
                  }
                  iVar3 = *(int *)(param_1 + 0x50);
                  if (*(int *)(param_1 + 0x58) < iVar3 + 1) {
                    if (*(int *)(param_1 + 0x60) == 0) {
                      iVar5 = *(int *)(param_1 + 0x58) / 2;
                      iVar7 = 1;
                      if (0 < iVar5) {
                        iVar7 = iVar5;
                      }
                      if (iVar3 + iVar7 < 1) {
                        iVar3 = 1;
                      }
                      else {
                        if (iVar5 < 1) {
                          iVar5 = 1;
                        }
                        iVar3 = iVar3 + iVar5;
                      }
                    }
                    else {
                      iVar3 = *(int *)(param_1 + 0x60) + iVar3;
                    }
                    pvVar6 = operator_new(iVar3 * 4);
                    iVar7 = 0;
                    if (0 < *(int *)(param_1 + 0x50)) {
                      do {
                        *(undefined4 *)((int)pvVar6 + iVar7 * 4) =
                             *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar7 * 4);
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < *(int *)(param_1 + 0x50));
                    }
                    FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
                    *(void **)(param_1 + 0x54) = pvVar6;
                    *(int *)(param_1 + 0x58) = iVar3;
                  }
                  *(int **)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50) * 4) = param_3;
                  param_2 = param_2 + -1;
                  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
                } while (param_2 != 0);
                ExceptionList = local_c;
                return 1;
              }
            }
            else if (iVar3 < iVar7) {
              iVar7 = *(int *)(param_1 + 0x58);
              iVar5 = iVar3;
              if (iVar3 <= iVar7) {
                iVar5 = iVar7;
              }
              if (iVar5 != iVar7) {
                pvVar6 = operator_new(iVar5 * 4);
                iVar7 = 0;
                if (0 < *(int *)(param_1 + 0x50)) {
                  do {
                    *(undefined4 *)((int)pvVar6 + iVar7 * 4) =
                         *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar7 * 4);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < *(int *)(param_1 + 0x50));
                }
                FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
                *(void **)(param_1 + 0x54) = pvVar6;
                *(int *)(param_1 + 0x58) = iVar5;
              }
              *(int *)(param_1 + 0x50) = iVar3;
            }
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x50)) {
            do {
              FUN_00649920(&param_2,s__s_Patrol_Point__d_Patrol_Point_0074a748,
                           *(undefined4 *)(param_1 + 0x10),iVar3);
              local_4 = 4;
              uVar2 = FUN_00649940();
              iVar7 = FUN_00647e40(uVar4,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar7 == 0) {
                if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                  ExceptionList = local_c;
                  return 0;
                }
                piVar1 = *(int **)(*(int *)(param_1 + 0x54) + iVar3 * 4);
                *piVar1 = param_3[0x90];
                piVar1[1] = param_3[0x91];
                ExceptionList = local_c;
                return 1;
              }
              FUN_00649920(local_14,s__s_Patrol_Point__d_Patrol_Pause_0074a728,
                           *(undefined4 *)(param_1 + 0x10),iVar3);
              local_4 = 5;
              uVar2 = FUN_00649940();
              iVar7 = FUN_00647e40(uVar4,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar7 == 0) {
                if (*param_3 != 2) {
                  ExceptionList = local_c;
                  return 0;
                }
                *(int *)(*(int *)(*(int *)(param_1 + 0x54) + iVar3 * 4) + 8) = param_3[0x94];
                ExceptionList = local_c;
                return 1;
              }
              FUN_00649920(local_10,s__s_Patrol_Point__d_Animation_0074a708,
                           *(undefined4 *)(param_1 + 0x10),iVar3);
              local_4 = 6;
              uVar2 = FUN_00649940();
              iVar7 = FUN_00647e40(uVar4,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar7 == 0) {
                if ((*param_3 != 1) && (*param_3 != 0xc)) {
                  ExceptionList = local_c;
                  return 0;
                }
                *(int *)(*(int *)(*(int *)(param_1 + 0x54) + iVar3 * 4) + 0xc) = param_3[0x93];
                ExceptionList = local_c;
                return 1;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x50));
          }
          uVar4 = FUN_005bf900(uVar4,param_3);
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

