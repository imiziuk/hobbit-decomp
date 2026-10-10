
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006153f0(int param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e45a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_20,s__s_Head_Volume_007458b4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar3 = FUN_00649940();
  uVar5 = param_2;
  iVar4 = FUN_00647e40(param_2,uVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar4 == 0) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      *(int *)(param_1 + 0x90) = param_3[0x90];
      *(int *)(param_1 + 0x94) = param_3[0x91];
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    FUN_00649920(&param_2,s__s_Ceiling_Volume_0074978c,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar3 = FUN_00649940();
    iVar4 = FUN_00647e40(uVar5,uVar3);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar4 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0x98) = param_3[0x90];
        *(int *)(param_1 + 0x9c) = param_3[0x91];
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_Start_Velocit_00749758,
                   *(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar3 = FUN_00649940();
      iVar4 = FUN_00647e40(uVar5,uVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar4 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x530) = param_3[0x94];
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        FUN_00649920(&param_2,s__s_Fire_Tweaks_Max_Start_Velocit_00749734,
                     *(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar3 = FUN_00649940();
        iVar4 = FUN_00647e40(uVar5,uVar3);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar4 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x534) = param_3[0x94];
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_End_Velocity_00749714,
                       *(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar3 = FUN_00649940();
          iVar4 = FUN_00647e40(uVar5,uVar3);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if (*param_3 == 2) {
              *(int *)(param_1 + 0x538) = param_3[0x94];
              uVar5 = 1;
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            FUN_00649920(&param_2,s__s_Fire_Tweaks_Max_End_Velocity_007496f4,
                         *(undefined4 *)(param_1 + 0x10));
            local_4 = 5;
            uVar3 = FUN_00649940();
            iVar4 = FUN_00647e40(uVar5,uVar3);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_3 == 2) {
                *(int *)(param_1 + 0x53c) = param_3[0x94];
                uVar5 = 1;
              }
              else {
                uVar5 = 0;
              }
            }
            else {
              FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_Lifetime_007496d8,
                           *(undefined4 *)(param_1 + 0x10));
              local_4 = 6;
              uVar3 = FUN_00649940();
              iVar4 = FUN_00647e40(uVar5,uVar3);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar4 == 0) {
                if (*param_3 == 2) {
                  *(int *)(param_1 + 0x540) = param_3[0x94];
                  uVar5 = 1;
                }
                else {
                  uVar5 = 0;
                }
              }
              else {
                FUN_00649920(&param_2,s__s_Fire_Tweaks_Max_Lifetime_007496bc,
                             *(undefined4 *)(param_1 + 0x10));
                local_4 = 7;
                uVar3 = FUN_00649940();
                iVar4 = FUN_00647e40(uVar5,uVar3);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar4 == 0) {
                  if (*param_3 == 2) {
                    *(int *)(param_1 + 0x544) = param_3[0x94];
                    uVar5 = 1;
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_Breath_In_Tim_00749698,
                               *(undefined4 *)(param_1 + 0x10));
                  local_4 = 8;
                  uVar3 = FUN_00649940();
                  iVar4 = FUN_00647e40(uVar5,uVar3);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar4 == 0) {
                    if (*param_3 == 2) {
                      *(int *)(param_1 + 0x548) = param_3[0x94];
                      uVar5 = 1;
                    }
                    else {
                      uVar5 = 0;
                    }
                  }
                  else {
                    FUN_00649920(&param_2,s__s_Fire_Tweaks_Max_Breath_In_Tim_00749674,
                                 *(undefined4 *)(param_1 + 0x10));
                    local_4 = 9;
                    uVar3 = FUN_00649940();
                    iVar4 = FUN_00647e40(uVar5,uVar3);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar4 == 0) {
                      if (*param_3 == 2) {
                        *(int *)(param_1 + 0x54c) = param_3[0x94];
                        uVar5 = 1;
                      }
                      else {
                        uVar5 = 0;
                      }
                    }
                    else {
                      FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_Breath_Out_Ti_00749650,
                                   *(undefined4 *)(param_1 + 0x10));
                      local_4 = 10;
                      uVar3 = FUN_00649940();
                      iVar4 = FUN_00647e40(uVar5,uVar3);
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar4 == 0) {
                        if (*param_3 == 2) {
                          *(int *)(param_1 + 0x550) = param_3[0x94];
                          uVar5 = 1;
                        }
                        else {
                          uVar5 = 0;
                        }
                      }
                      else {
                        FUN_00649920(&param_2,s__s_Fire_Tweaks_Max_Breath_Out_Ti_0074962c,
                                     *(undefined4 *)(param_1 + 0x10));
                        local_4 = 0xb;
                        uVar3 = FUN_00649940();
                        iVar4 = FUN_00647e40(uVar5,uVar3);
                        local_4 = 0xffffffff;
                        FUN_00649950();
                        if (iVar4 == 0) {
                          if (*param_3 == 2) {
                            *(int *)(param_1 + 0x554) = param_3[0x94];
                            uVar5 = 1;
                          }
                          else {
                            uVar5 = 0;
                          }
                        }
                        else {
                          FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_Segment_Start_00749608,
                                       *(undefined4 *)(param_1 + 0x10));
                          local_4 = 0xc;
                          uVar3 = FUN_00649940();
                          iVar4 = FUN_00647e40(uVar5,uVar3);
                          local_4 = 0xffffffff;
                          FUN_00649950();
                          if (iVar4 == 0) {
                            if (*param_3 == 2) {
                              *(int *)(param_1 + 0x558) = param_3[0x94];
                              uVar5 = 1;
                            }
                            else {
                              uVar5 = 0;
                            }
                          }
                          else {
                            FUN_00649920(&param_2,s__s_Fire_Tweaks_Max_Segment_Start_007495e4,
                                         *(undefined4 *)(param_1 + 0x10));
                            local_4 = 0xd;
                            uVar3 = FUN_00649940();
                            iVar4 = FUN_00647e40(uVar5,uVar3);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar4 == 0) {
                              if (*param_3 == 2) {
                                *(int *)(param_1 + 0x55c) = param_3[0x94];
                                uVar5 = 1;
                              }
                              else {
                                uVar5 = 0;
                              }
                            }
                            else {
                              FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_Segment_End_007495c4,
                                           *(undefined4 *)(param_1 + 0x10));
                              local_4 = 0xe;
                              uVar3 = FUN_00649940();
                              iVar4 = FUN_00647e40(uVar5,uVar3);
                              local_4 = 0xffffffff;
                              FUN_00649950();
                              if (iVar4 == 0) {
                                if (*param_3 == 2) {
                                  *(int *)(param_1 + 0x560) = param_3[0x94];
                                  uVar5 = 1;
                                }
                                else {
                                  uVar5 = 0;
                                }
                              }
                              else {
                                FUN_00649920(&param_2,s__s_Fire_Tweaks_Max_Segment_End_007495a4,
                                             *(undefined4 *)(param_1 + 0x10));
                                local_4 = 0xf;
                                uVar3 = FUN_00649940();
                                iVar4 = FUN_00647e40(uVar5,uVar3);
                                local_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar4 == 0) {
                                  if (*param_3 == 2) {
                                    *(int *)(param_1 + 0x564) = param_3[0x94];
                                    uVar5 = 1;
                                  }
                                  else {
                                    uVar5 = 0;
                                  }
                                }
                                else {
                                  FUN_00649920(&param_2,s__s_Fire_Tweaks_Min_Angle_Devianc_00749580,
                                               *(undefined4 *)(param_1 + 0x10));
                                  local_4 = 0x10;
                                  uVar3 = FUN_00649940();
                                  iVar4 = FUN_00647ed0(uVar5,uVar3);
                                  local_4 = 0xffffffff;
                                  FUN_00649950();
                                  if (iVar4 == 0) {
                                    if (*param_3 == 2) {
                                      uVar5 = 1;
                                      *(float *)(param_1 + 0x568) =
                                           (float)param_3[0x94] * _DAT_006e9368 * _DAT_006e957c;
                                    }
                                    else {
                                      uVar5 = 0;
                                    }
                                  }
                                  else {
                                    FUN_00649920(&param_2,
                                                 s__s_Fire_Tweaks_Max_Angle_Devianc_0074955c,
                                                 *(undefined4 *)(param_1 + 0x10));
                                    local_4 = 0x11;
                                    uVar3 = FUN_00649940();
                                    iVar4 = FUN_00647ed0(uVar5,uVar3);
                                    local_4 = 0xffffffff;
                                    FUN_00649950();
                                    if (iVar4 == 0) {
                                      if (*param_3 == 2) {
                                        uVar5 = 1;
                                        *(float *)(param_1 + 0x56c) =
                                             (float)param_3[0x94] * _DAT_006e9368 * _DAT_006e957c;
                                      }
                                      else {
                                        uVar5 = 0;
                                      }
                                    }
                                    else {
                                      FUN_00649920(&param_2,s__s_Safety_Zone_Count_00749544,
                                                   *(undefined4 *)(param_1 + 0x10));
                                      local_4 = 0x12;
                                      uVar3 = FUN_00649940();
                                      iVar4 = FUN_00647ed0(uVar5,uVar3);
                                      local_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar4 == 0) {
                                        if (*param_3 == 1) {
                                          FUN_00619240(param_3[0x93]);
                                          uVar5 = 1;
                                        }
                                        else {
                                          uVar5 = 0;
                                        }
                                      }
                                      else {
                                        iVar4 = 0;
                                        if (0 < *(int *)(param_1 + 0x578)) {
                                          do {
                                            FUN_00649920(&param_2,
                                                  s__s_Safety_Zone__d_Blocker_00749514,
                                                  *(undefined4 *)(param_1 + 0x10),iVar4);
                                            local_4 = 0x13;
                                            uVar3 = FUN_00649940();
                                            iVar6 = FUN_00647ed0(uVar5,uVar3);
                                            local_4 = 0xffffffff;
                                            FUN_00649950();
                                            if (iVar6 == 0) {
                                              if (*param_3 != 0xf) {
                                                ExceptionList = local_c;
                                                return 0;
                                              }
                                              piVar2 = *(int **)(*(int *)(param_1 + 0x57c) +
                                                                iVar4 * 4);
                                              *piVar2 = param_3[0x90];
                                              piVar2[1] = param_3[0x91];
                                              ExceptionList = local_c;
                                              return 1;
                                            }
                                            FUN_00649920(local_20,s__s_Safety_Zone__d_Glow_007494fc,
                                                         *(undefined4 *)(param_1 + 0x10),iVar4);
                                            local_4 = 0x14;
                                            uVar3 = FUN_00649940();
                                            iVar6 = FUN_00647ed0(uVar5,uVar3);
                                            local_4 = 0xffffffff;
                                            FUN_00649950();
                                            if (iVar6 == 0) {
                                              if (*param_3 != 0xf) {
                                                ExceptionList = local_c;
                                                return 0;
                                              }
                                              iVar4 = *(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4
                                                              );
                                              *(int *)(iVar4 + 8) = param_3[0x90];
                                              *(int *)(iVar4 + 0xc) = param_3[0x91];
                                              ExceptionList = local_c;
                                              return 1;
                                            }
                                            FUN_00649920(local_1c,
                                                  s__s_Safety_Zone__d_Volume_007494e0,
                                                  *(undefined4 *)(param_1 + 0x10),iVar4);
                                            local_4 = 0x15;
                                            uVar3 = FUN_00649940();
                                            iVar6 = FUN_00647ed0(uVar5,uVar3);
                                            local_4 = 0xffffffff;
                                            FUN_00649950();
                                            if (iVar6 == 0) {
                                              if (*param_3 != 0xf) {
                                                ExceptionList = local_c;
                                                return 0;
                                              }
                                              iVar4 = *(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4
                                                              );
                                              *(int *)(iVar4 + 0x10) = param_3[0x90];
                                              *(int *)(iVar4 + 0x14) = param_3[0x91];
                                              ExceptionList = local_c;
                                              return 1;
                                            }
                                            FUN_00649920(local_18,s__s_Safety_Zone__d_Flags_007494c8
                                                         ,*(undefined4 *)(param_1 + 0x10),iVar4);
                                            local_4 = 0x16;
                                            uVar3 = FUN_00649940();
                                            iVar6 = FUN_00647ed0(uVar5,uVar3);
                                            local_4 = 0xffffffff;
                                            FUN_00649950();
                                            if (iVar6 == 0) {
                                              if (*param_3 != 1) {
                                                ExceptionList = local_c;
                                                return 0;
                                              }
                                              *(int *)(*(int *)(*(int *)(param_1 + 0x57c) +
                                                               iVar4 * 4) + 0x18) = param_3[0x93];
                                              ExceptionList = local_c;
                                              return 1;
                                            }
                                            FUN_00649920(local_14,
                                                  s__s_Safety_Zone__d_Hit_Count_007494ac,
                                                  *(undefined4 *)(param_1 + 0x10),iVar4);
                                            local_4 = 0x17;
                                            uVar3 = FUN_00649940();
                                            iVar6 = FUN_00647ed0(uVar5,uVar3);
                                            local_4 = 0xffffffff;
                                            FUN_00649950();
                                            if (iVar6 == 0) {
                                              if (*param_3 != 1) {
                                                ExceptionList = local_c;
                                                return 0;
                                              }
                                              *(int *)(*(int *)(*(int *)(param_1 + 0x57c) +
                                                               iVar4 * 4) + 0x1c) = param_3[0x93];
                                              iVar6 = *(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4
                                                              );
                                              if (*(int *)(iVar6 + 0x1c) == 0) {
                                                *(undefined4 *)(iVar6 + 0x1c) = 1;
                                              }
                                              iVar4 = *(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4
                                                              );
                                              *(undefined4 *)(iVar4 + 0x20) =
                                                   *(undefined4 *)(iVar4 + 0x1c);
                                              ExceptionList = local_c;
                                              return 1;
                                            }
                                            FUN_00649920(local_10,s__s_Safety_Zone__d_Alpha_00749494
                                                         ,*(undefined4 *)(param_1 + 0x10),iVar4);
                                            local_4 = 0x18;
                                            uVar3 = FUN_00649940();
                                            iVar6 = FUN_00647ed0(uVar5,uVar3);
                                            local_4 = 0xffffffff;
                                            FUN_00649950();
                                            if (iVar6 == 0) {
                                              if (*param_3 != 2) {
                                                ExceptionList = local_c;
                                                return 0;
                                              }
                                              *(int *)(*(int *)(*(int *)(param_1 + 0x57c) +
                                                               iVar4 * 4) + 0x24) = param_3[0x94];
                                              iVar6 = *(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4
                                                              );
                                              fVar1 = *(float *)(iVar6 + 0x24);
                                              if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
                                                *(undefined4 *)(iVar6 + 0x24) = 0;
                                              }
                                              iVar4 = *(int *)(*(int *)(param_1 + 0x57c) + iVar4 * 4
                                                              );
                                              if (DAT_006e92e8 <= *(float *)(iVar4 + 0x24)) {
                                                *(undefined4 *)(iVar4 + 0x24) = 0x3f800000;
                                              }
                                              ExceptionList = local_c;
                                              return 1;
                                            }
                                            iVar4 = iVar4 + 1;
                                          } while (iVar4 < *(int *)(param_1 + 0x578));
                                        }
                                        uVar5 = FUN_005bf900(uVar5,param_3);
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
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar5;
}

