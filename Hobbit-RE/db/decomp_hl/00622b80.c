
undefined4 __thiscall FUN_00622b80(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4bb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s__s_Attack_Delay_00749e1c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar4 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    if (*param_3 == 2) {
      *(int *)(param_1 + 0x80) = param_3[0x94];
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Attack_Idle_Radius_0074a080,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(uVar4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if (*param_3 == 2) {
        *(int *)(param_1 + 0x78) = param_3[0x94];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Attack_Radius_00749e2c,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(uVar4,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x7c) = param_3[0x94];
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar4,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x88) = param_3[0x94];
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_Max_Minion_Count_0074a06c,*(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647ed0(uVar4,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            if (*param_3 == 1) {
              iVar3 = param_3[0x93];
              if (iVar3 < 0) {
                iVar3 = 0;
              }
              iVar8 = *(int *)(param_1 + 0x50);
              if (iVar8 < iVar3) {
                if (iVar8 < iVar3) {
                  param_3 = (int *)(iVar3 - iVar8);
                  do {
                    puVar5 = (undefined4 *)operator_new(0x18);
                    if (puVar5 == (undefined4 *)0x0) {
                      puVar5 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar5 = 0;
                      puVar5[1] = 0;
                      puVar5[2] = 0;
                      puVar5[3] = 0;
                      puVar5[4] = 0;
                      puVar5[5] = 0;
                    }
                    iVar3 = *(int *)(param_1 + 0x50);
                    if (*(int *)(param_1 + 0x58) < iVar3 + 1) {
                      if (*(int *)(param_1 + 0x60) == 0) {
                        iVar6 = *(int *)(param_1 + 0x58) / 2;
                        iVar8 = 1;
                        if (0 < iVar6) {
                          iVar8 = iVar6;
                        }
                        if (iVar3 + iVar8 < 1) {
                          iVar3 = 1;
                        }
                        else {
                          if (iVar6 < 1) {
                            iVar6 = 1;
                          }
                          iVar3 = iVar3 + iVar6;
                        }
                      }
                      else {
                        iVar3 = iVar3 + *(int *)(param_1 + 0x60);
                      }
                      pvVar7 = operator_new(iVar3 * 4);
                      iVar8 = 0;
                      if (0 < *(int *)(param_1 + 0x50)) {
                        do {
                          *(undefined4 *)((int)pvVar7 + iVar8 * 4) =
                               *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar8 * 4);
                          iVar8 = iVar8 + 1;
                        } while (iVar8 < *(int *)(param_1 + 0x50));
                      }
                      FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
                      *(void **)(param_1 + 0x54) = pvVar7;
                      *(int *)(param_1 + 0x58) = iVar3;
                    }
                    *(undefined4 **)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50) * 4) =
                         puVar5;
                    param_3 = (int *)((int)param_3 + -1);
                    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
                  } while (param_3 != (int *)0x0);
                  ExceptionList = local_c;
                  return 1;
                }
              }
              else if (iVar3 < iVar8) {
                iVar8 = *(int *)(param_1 + 0x58);
                iVar6 = iVar3;
                if (iVar3 <= iVar8) {
                  iVar6 = iVar8;
                }
                if (iVar6 != iVar8) {
                  pvVar7 = operator_new(iVar6 * 4);
                  iVar8 = 0;
                  if (0 < *(int *)(param_1 + 0x50)) {
                    do {
                      *(undefined4 *)((int)pvVar7 + iVar8 * 4) =
                           *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar8 * 4);
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < *(int *)(param_1 + 0x50));
                  }
                  FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
                  *(void **)(param_1 + 0x54) = pvVar7;
                  *(int *)(param_1 + 0x58) = iVar6;
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
                FUN_00649920(&param_2,s__s_Minion__d_00748dd4,*(undefined4 *)(param_1 + 0x10),iVar3)
                ;
                local_4 = 5;
                uVar2 = FUN_00649940();
                iVar8 = FUN_00647e40(uVar4,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar8 == 0) {
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
                FUN_00649920(local_14,s__s_Spawn_Volume__d_00748dc0,*(undefined4 *)(param_1 + 0x10),
                             iVar3);
                local_4 = 6;
                uVar2 = FUN_00649940();
                iVar8 = FUN_00647e40(uVar4,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar8 == 0) {
                  if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                    ExceptionList = local_c;
                    return 0;
                  }
                  iVar3 = *(int *)(*(int *)(param_1 + 0x54) + iVar3 * 4);
                  *(int *)(iVar3 + 8) = param_3[0x90];
                  *(int *)(iVar3 + 0xc) = param_3[0x91];
                  ExceptionList = local_c;
                  return 1;
                }
                FUN_00649920(local_10,s__s_Facing_Volume__d_00748dac,*(undefined4 *)(param_1 + 0x10)
                             ,iVar3);
                local_4 = 7;
                uVar2 = FUN_00649940();
                iVar8 = FUN_00647e40(uVar4,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar8 == 0) {
                  if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                    ExceptionList = local_c;
                    return 0;
                  }
                  iVar3 = *(int *)(*(int *)(param_1 + 0x54) + iVar3 * 4);
                  *(int *)(iVar3 + 0x10) = param_3[0x90];
                  *(int *)(iVar3 + 0x14) = param_3[0x91];
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
  }
  ExceptionList = local_c;
  return uVar4;
}

