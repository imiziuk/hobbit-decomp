
undefined4 __thiscall FUN_005bc1d0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_18,s__s_Awareness_00745ab8,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar4 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
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
    FUN_00649920(&param_2,s__s_Activation_Activate_Volume_00745884,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(uVar4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0x98) = param_3[0x90];
        *(int *)(param_1 + 0x9c) = param_3[0x91];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Activation_Deactivate_Volume_00745864,
                   *(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(uVar4,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
          *(int *)(param_1 + 0xa0) = param_3[0x90];
          *(int *)(param_1 + 0xa4) = param_3[0x91];
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Activation_Is_Active_0074584c,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar4,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          if (*param_3 == 3) {
            *(int *)(param_1 + 0xa8) = param_3[0x95];
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_Tail_Twitch_Tweaks_Tail_Volum_00745810,
                       *(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(uVar4,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
              *(int *)(param_1 + 0xb8) = param_3[0x90];
              *(int *)(param_1 + 0xbc) = param_3[0x91];
              uVar4 = 1;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            FUN_00649920(&param_2,s__s_Tail_Twitch_Tweaks_Tail_Heigh_00745a94,
                         *(undefined4 *)(param_1 + 0x10));
            local_4 = 5;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(uVar4,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              if (*param_3 == 2) {
                *(int *)(param_1 + 0xc0) = param_3[0x94];
                uVar4 = 1;
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              FUN_00649920(&param_2,s__s_Tail_Twitch_Tweaks_Tail_Up_Ti_00745a70,
                           *(undefined4 *)(param_1 + 0x10));
              local_4 = 6;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(uVar4,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                if (*param_3 == 2) {
                  *(int *)(param_1 + 0xc4) = param_3[0x94];
                  uVar4 = 1;
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                FUN_00649920(&param_2,s__s_Tail_Twitch_Tweaks_Tail_Down_T_00745a48,
                             *(undefined4 *)(param_1 + 0x10));
                local_4 = 7;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(uVar4,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  if (*param_3 == 2) {
                    *(int *)(param_1 + 200) = param_3[0x94];
                    uVar4 = 1;
                  }
                  else {
                    uVar4 = 0;
                  }
                }
                else {
                  FUN_00649920(&param_2,s__s_Tail_Active_007457d4,*(undefined4 *)(param_1 + 0x10));
                  local_4 = 8;
                  uVar2 = FUN_00649940();
                  iVar3 = FUN_00647e40(uVar4,uVar2);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar3 == 0) {
                    if (*param_3 == 3) {
                      *(int *)(param_1 + 0xd8) = param_3[0x95];
                      uVar4 = 1;
                    }
                    else {
                      uVar4 = 0;
                    }
                  }
                  else {
                    FUN_00649920(&param_2,s__s_Cinematics_Death_Cinema_007457a8,
                                 *(undefined4 *)(param_1 + 0x10));
                    local_4 = 9;
                    uVar2 = FUN_00649940();
                    iVar3 = FUN_00647e40(uVar4,uVar2);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar3 == 0) {
                      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
                        *(int *)(param_1 + 0x150) = param_3[0x90];
                        *(int *)(param_1 + 0x154) = param_3[0x91];
                        uVar4 = 1;
                      }
                      else {
                        uVar4 = 0;
                      }
                    }
                    else {
                      FUN_00649920(&param_2,s__s_Fidget_Count_00745a38,
                                   *(undefined4 *)(param_1 + 0x10));
                      local_4 = 10;
                      uVar2 = FUN_00649940();
                      iVar3 = FUN_00647ed0(uVar4,uVar2);
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar3 == 0) {
                        if (*param_3 == 1) {
                          FUN_005bde70(param_3[0x93]);
                          uVar4 = 1;
                        }
                        else {
                          uVar4 = 0;
                        }
                      }
                      else {
                        iVar3 = 0;
                        if (0 < *(int *)(param_1 + 0x134)) {
                          do {
                            FUN_00649920(&param_2,s__s_Fidget__d_Volume_00745a14,
                                         *(undefined4 *)(param_1 + 0x10),iVar3);
                            local_4 = 0xb;
                            uVar2 = FUN_00649940();
                            iVar5 = FUN_00647e40(uVar4,uVar2);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar5 == 0) {
                              if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                                ExceptionList = local_c;
                                return 0;
                              }
                              piVar1 = *(int **)(*(int *)(param_1 + 0x138) + iVar3 * 4);
                              *piVar1 = param_3[0x90];
                              piVar1[1] = param_3[0x91];
                              ExceptionList = local_c;
                              return 1;
                            }
                            FUN_00649920(local_18,s__s_Fidget__d_Treasure_007459fc,
                                         *(undefined4 *)(param_1 + 0x10),iVar3);
                            local_4 = 0xc;
                            uVar2 = FUN_00649940();
                            iVar5 = FUN_00647e40(uVar4,uVar2);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar5 == 0) {
                              if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                                ExceptionList = local_c;
                                return 0;
                              }
                              iVar3 = *(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4);
                              *(int *)(iVar3 + 8) = param_3[0x90];
                              *(int *)(iVar3 + 0xc) = param_3[0x91];
                              ExceptionList = local_c;
                              return 1;
                            }
                            FUN_00649920(local_14,s__s_Fidget__d_Sound_Level_007459e0,
                                         *(undefined4 *)(param_1 + 0x10),iVar3);
                            local_4 = 0xd;
                            uVar2 = FUN_00649940();
                            iVar5 = FUN_00647e40(uVar4,uVar2);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar5 == 0) {
                              if (*param_3 != 1) {
                                ExceptionList = local_c;
                                return 0;
                              }
                              *(int *)(*(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4) + 0x14) =
                                   param_3[0x93];
                              ExceptionList = local_c;
                              return 1;
                            }
                            FUN_00649920(local_10,s__s_Fidget__d_Flags_007459cc,
                                         *(undefined4 *)(param_1 + 0x10),iVar3);
                            local_4 = 0xe;
                            uVar2 = FUN_00649940();
                            iVar5 = FUN_00647e40(uVar4,uVar2);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar5 == 0) {
                              if (*param_3 != 1) {
                                ExceptionList = local_c;
                                return 0;
                              }
                              *(int *)(*(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4) + 0x10) =
                                   param_3[0x93];
                              ExceptionList = local_c;
                              return 1;
                            }
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < *(int *)(param_1 + 0x134));
                        }
                        uVar4 = FUN_005bf900(uVar4,param_3);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

