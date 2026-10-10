
uint __thiscall FUN_00536e10(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  int *piStack_168;
  int iStack_164;
  int **ppiStack_160;
  code *pcStack_15c;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  undefined1 uStack_10c;
  undefined4 auStack_10b [63];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d8e62;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  pcStack_15c = (code *)param_2;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 300);
  ppiStack_160 = (int **)0x536e53;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x260) = param_3[0x94];
    uVar2 = 1;
  }
  else {
    pcStack_15c = (code *)param_2;
    ppiStack_160 = (int **)0x536e82;
    iVar1 = FUN_00647e40();
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x254) = param_3[0x94];
      uVar2 = 1;
    }
    else {
      pcStack_15c = (code *)param_2;
      ppiStack_160 = (int **)0x536eb1;
      iVar1 = FUN_00647e40();
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x25c) = param_3[0x94];
        uVar2 = 1;
      }
      else {
        pcStack_15c = (code *)param_2;
        ppiStack_160 = (int **)0x536ee0;
        iVar1 = FUN_00647e40();
        if (iVar1 == 0) {
          *(int *)(param_1 + 600) = param_3[0x94];
          uVar2 = 1;
        }
        else {
          pcStack_15c = (code *)param_2;
          ppiStack_160 = (int **)0x536f0f;
          iVar1 = FUN_00647e40();
          if (iVar1 == 0) {
            *(int *)(param_1 + 0x288) = param_3[0x94];
            uVar2 = 1;
          }
          else {
            pcStack_15c = (code *)param_2;
            ppiStack_160 = (int **)0x536f3e;
            iVar1 = FUN_00647e40();
            if (iVar1 == 0) {
              *(int *)(param_1 + 0x278) = param_3[0x94];
              uVar2 = 1;
            }
            else {
              pcStack_15c = (code *)param_2;
              ppiStack_160 = (int **)0x536f6d;
              iVar1 = FUN_00647e40();
              if (iVar1 == 0) {
                *(int *)(param_1 + 0x27c) = param_3[0x94];
                uVar2 = 1;
              }
              else {
                pcStack_15c = (code *)param_2;
                ppiStack_160 = (int **)0x536f9c;
                iVar1 = FUN_00647e40();
                if (iVar1 == 0) {
                  iVar1 = param_3[0x94];
                  uVar2 = 1;
                  *(int *)(param_1 + 0x280) = iVar1;
                  *(int *)(param_1 + 0x284) = iVar1;
                }
                else {
                  pcStack_15c = (code *)param_2;
                  ppiStack_160 = (int **)0x536fd1;
                  iVar1 = FUN_00647e40();
                  if (iVar1 == 0) {
                    *(int *)(param_1 + 0x2fc) = param_3[0x94];
                    uVar2 = 1;
                  }
                  else {
                    pcStack_15c = (code *)param_2;
                    ppiStack_160 = (int **)0x537000;
                    iVar1 = FUN_00647e40();
                    if (iVar1 == 0) {
                      pcStack_15c = (code *)0x53701d;
                      FUN_0064a2e0();
                      uVar2 = 1;
                    }
                    else {
                      pcStack_15c = (code *)param_2;
                      ppiStack_160 = (int **)0x537032;
                      iVar1 = FUN_00647e40();
                      if (iVar1 == 0) {
                        pcStack_15c = (code *)0x53704f;
                        FUN_0064a2e0();
                        uVar2 = 1;
                      }
                      else {
                        pcStack_15c = (code *)param_2;
                        ppiStack_160 = (int **)0x537064;
                        iVar1 = FUN_00647e40();
                        if (iVar1 == 0) {
                          pcStack_15c = (code *)0x537083;
                          FUN_0064a2e0();
                          pcStack_15c = (code *)0x53708d;
                          uVar3 = FUN_00534270();
                          *(undefined4 *)(param_1 + 0x298) = uVar3;
                          uVar2 = 1;
                        }
                        else {
                          pcStack_15c = (code *)param_2;
                          ppiStack_160 = (int **)0x5370a8;
                          iVar1 = FUN_00647e40();
                          if (iVar1 == 0) {
                            if (*param_3 == 1) {
                              piStack_140 = (int *)param_3[0x93];
                              iVar1 = *(int *)(param_1 + 300);
                              if (iVar1 < (int)piStack_140) {
                                if (iVar1 < (int)piStack_140) {
                                  piStack_144 = (int *)((int)piStack_140 - iVar1);
                                  do {
                                    pcStack_15c = (code *)0x5370fe;
                                    FUN_00649b20();
                                    iVar1 = *(int *)(param_1 + 300);
                                    piVar7 = (int *)0x0;
                                    iStack_4 = 0;
                                    if (*(int *)(param_1 + 0x134) < iVar1 + 1) {
                                      if (*(int *)(param_1 + 0x13c) == 0) {
                                        iVar4 = *(int *)(param_1 + 0x134) / 2;
                                        iVar5 = 1;
                                        if (0 < iVar4) {
                                          iVar5 = iVar4;
                                        }
                                        if (iVar5 + iVar1 < 1) {
                                          piVar6 = (int *)0x1;
                                        }
                                        else {
                                          if (iVar4 < 1) {
                                            iVar4 = 1;
                                          }
                                          piVar6 = (int *)(iVar1 + iVar4);
                                        }
                                      }
                                      else {
                                        piVar6 = (int *)(*(int *)(param_1 + 0x13c) + iVar1);
                                      }
                                      pcStack_15c = (code *)0x537166;
                                      piStack_140 = (int *)operator_new((int)piVar6 * 0x2c + 4);
                                      iStack_4._0_1_ = 1;
                                      if (piStack_140 != (undefined4 *)0x0) {
                                        pcStack_15c = FUN_006499d0;
                                        piVar7 = piStack_140 + 1;
                                        iStack_164 = 0x2c;
                                        *piStack_140 = (int)piVar6;
                                        uStack_16c = 0x537191;
                                        piStack_168 = piVar7;
                                        ppiStack_160 = (int **)piVar6;
                                        FUN_006c043b();
                                      }
                                      iVar1 = 0;
                                      iStack_4 = (uint)iStack_4._1_3_ << 8;
                                      piStack_140 = piVar7;
                                      if (0 < *(int *)(param_1 + 300)) {
                                        do {
                                          pcStack_15c = (code *)0x5371c5;
                                          FUN_0064a320();
                                          iVar1 = iVar1 + 1;
                                        } while (iVar1 < *(int *)(param_1 + 300));
                                      }
                                      iVar1 = *(int *)(param_1 + 0x130);
                                      if (iVar1 != 0) {
                                        pcStack_15c = *(code **)(iVar1 + -4);
                                        ppiStack_160 = (int **)0x2c;
                                        piStack_168 = (int *)0x5371f1;
                                        iStack_164 = iVar1;
                                        FUN_006c026a();
                                        pcStack_15c = (code *)0x5371f7;
                                        FUN_006bf840();
                                      }
                                      *(int **)(param_1 + 0x130) = piStack_140;
                                      *(int **)(param_1 + 0x134) = piVar6;
                                    }
                                    pcStack_15c = (code *)0x537225;
                                    FUN_0064a320();
                                    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
                                    iStack_4 = 0xffffffff;
                                    FUN_00649ba0();
                                    piStack_144 = (int *)((int)piStack_144 + -1);
                                  } while (piStack_144 != (int *)0x0);
                                  ExceptionList = pvStack_c;
                                  return 1;
                                }
                              }
                              else if ((int)piStack_140 < iVar1) {
                                piVar7 = *(int **)(param_1 + 0x134);
                                piVar6 = piStack_140;
                                if ((int)piStack_140 <= (int)piVar7) {
                                  piVar6 = piVar7;
                                }
                                if (piVar6 != piVar7) {
                                  pcStack_15c = (code *)0x537281;
                                  piStack_144 = piVar6;
                                  piStack_13c = (int *)operator_new((int)piVar6 * 0x2c + 4);
                                  iStack_4 = 2;
                                  if (piStack_13c == (int *)0x0) {
                                    piVar7 = (int *)0x0;
                                  }
                                  else {
                                    pcStack_15c = FUN_006499d0;
                                    piVar7 = piStack_13c + 1;
                                    iStack_164 = 0x2c;
                                    *piStack_13c = (int)piVar6;
                                    uStack_16c = 0x5372af;
                                    piStack_168 = piVar7;
                                    ppiStack_160 = (int **)piVar6;
                                    FUN_006c043b();
                                  }
                                  iVar1 = 0;
                                  iStack_4 = 0xffffffff;
                                  if (0 < *(int *)(param_1 + 300)) {
                                    do {
                                      pcStack_15c = (code *)0x5372e1;
                                      FUN_0064a320();
                                      iVar1 = iVar1 + 1;
                                    } while (iVar1 < *(int *)(param_1 + 300));
                                  }
                                  iStack_164 = *(int *)(param_1 + 0x130);
                                  if (iStack_164 != 0) {
                                    pcStack_15c = *(code **)(iStack_164 + -4);
                                    ppiStack_160 = (int **)0x2c;
                                    piStack_168 = (int *)0x53730d;
                                    FUN_006c026a();
                                    pcStack_15c = (code *)0x537313;
                                    FUN_006bf840();
                                  }
                                  *(int **)(param_1 + 0x130) = piVar7;
                                  *(int **)(param_1 + 0x134) = piStack_144;
                                }
                                *(int **)(param_1 + 300) = piStack_140;
                              }
                              uVar2 = 1;
                            }
                            else {
                              uVar2 = 0;
                            }
                          }
                          else {
                            iVar1 = 0;
                            if (0 < *(int *)(param_1 + 0x120)) {
                              do {
                                ppiStack_160 = &piStack_144;
                                pcStack_15c = (code *)s_Audio_Packages_AudioPackage_02d_00737624;
                                iStack_164 = 0x537356;
                                FUN_00649920();
                                iStack_4 = 3;
                                FUN_00649940();
                                pcStack_15c = (code *)param_2;
                                ppiStack_160 = (int **)0x537372;
                                iVar5 = FUN_00647e40();
                                iStack_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar5 == 0) {
                                  if (*param_3 != 0xe) {
                                    ExceptionList = pvStack_c;
                                    return 0;
                                  }
                                  pcStack_15c = (code *)0x5373ef;
                                  FUN_0064a2e0();
                                  iVar5 = *(int *)(param_1 + 0x130);
                                  uStack_10c = 0;
                                  puVar8 = auStack_10b;
                                  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
                                    *puVar8 = 0;
                                    puVar8 = puVar8 + 1;
                                  }
                                  *(undefined2 *)puVar8 = 0;
                                  pcStack_15c = *(code **)(iVar5 + iVar1 * 0x2c);
                                  ppiStack_160 = (int **)0x537417;
                                  FUN_00648a10();
                                  piStack_13c = (int *)auStack_180;
                                  FUN_00649b20(&uStack_10c);
                                  FUN_00531910();
                                  ExceptionList = pvStack_c;
                                  return 1;
                                }
                                iVar1 = iVar1 + 1;
                              } while (iVar1 < *(int *)(param_1 + 0x120));
                            }
                            pcStack_15c = (code *)param_2;
                            ppiStack_160 = (int **)0x5373ab;
                            iVar1 = FUN_00647e40();
                            if (iVar1 == 0) {
                              uVar2 = (uint)(*param_3 == 0xe);
                            }
                            else {
                              pcStack_15c = (code *)param_2;
                              ppiStack_160 = (int **)0x537449;
                              iVar1 = FUN_00647e40();
                              if (iVar1 == 0) {
                                *(int *)(param_1 + 0x2f4) = param_3[0x94];
                                uVar2 = 1;
                              }
                              else {
                                pcStack_15c = (code *)param_2;
                                ppiStack_160 = (int **)0x537478;
                                iVar1 = FUN_00647e40();
                                if (iVar1 == 0) {
                                  *(int *)(param_1 + 0x2f8) = param_3[0x94];
                                  uVar2 = 1;
                                }
                                else {
                                  pcStack_15c = (code *)param_2;
                                  ppiStack_160 = (int **)0x5374a7;
                                  iVar1 = FUN_00647e40();
                                  if (iVar1 == 0) {
                                    *(int *)(param_1 + 0x250) = param_3[0x93];
                                    uVar2 = 1;
                                  }
                                  else {
                                    pcStack_15c = (code *)param_2;
                                    ppiStack_160 = (int **)0x5374d6;
                                    iVar1 = FUN_00647e40();
                                    if (iVar1 == 0) {
                                      *(int *)(param_1 + 0x294) = param_3[0x93];
                                      uVar2 = 1;
                                    }
                                    else {
                                      pcStack_15c = (code *)param_2;
                                      ppiStack_160 = (int **)0x537505;
                                      iVar1 = FUN_00647e40();
                                      if (iVar1 == 0) {
                                        *(int *)(param_1 + 0x24c) = param_3[0x93];
                                        uVar2 = 1;
                                      }
                                      else {
                                        pcStack_15c = (code *)param_2;
                                        ppiStack_160 = (int **)0x537534;
                                        iVar1 = FUN_00647e40();
                                        if (iVar1 == 0) {
                                          *(int *)(param_1 + 0x264) = param_3[0x93];
                                          uVar2 = 1;
                                        }
                                        else {
                                          pcStack_15c = (code *)param_2;
                                          ppiStack_160 = (int **)0x537563;
                                          iVar1 = FUN_00647e40();
                                          if (iVar1 == 0) {
                                            *(int *)(param_1 + 0x248) = param_3[0x93];
                                            uVar2 = 1;
                                          }
                                          else {
                                            pcStack_15c = (code *)param_2;
                                            ppiStack_160 = (int **)0x537592;
                                            iVar1 = FUN_00647e40();
                                            if (iVar1 == 0) {
                                              *(int *)(param_1 + 0x284) = param_3[0x94];
                                              uVar2 = 1;
                                            }
                                            else {
                                              pcStack_15c = (code *)param_2;
                                              ppiStack_160 = (int **)0x5375c1;
                                              iVar1 = FUN_00647e40();
                                              if (iVar1 == 0) {
                                                pcStack_15c = (code *)0x5375de;
                                                FUN_0064a2e0();
                                                uVar2 = 1;
                                              }
                                              else {
                                                pcStack_15c = (code *)param_2;
                                                ppiStack_160 = (int **)0x5375f3;
                                                iVar1 = FUN_00647e40();
                                                if (iVar1 == 0) {
                                                  pcStack_15c = (code *)0x537610;
                                                  FUN_0064a2e0();
                                                  uVar2 = 1;
                                                }
                                                else {
                                                  pcStack_15c = (code *)param_2;
                                                  ppiStack_160 = (int **)0x537622;
                                                  iVar1 = FUN_00647e40();
                                                  if (iVar1 == 0) {
                                                    *(undefined4 *)(param_1 + 0x15c) = 1;
                                                    *(undefined4 *)(param_1 + 0x248) =
                                                         *(undefined4 *)(param_1 + 0x264);
                                                    FUN_00532030();
                                                    pcStack_15c = (code *)0x3;
                                                    ppiStack_160 = (int **)0x1;
                                                    iStack_164 = param_1 + 400;
                                                    piStack_168 = (int *)0x53765d;
                                                    FUN_00535740();
                                                    uVar2 = 1;
                                                  }
                                                  else {
                                                    pcStack_15c = (code *)param_2;
                                                    ppiStack_160 = (int **)0x537674;
                                                    uVar2 = FUN_004ab750();
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
            }
          }
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar2;
}

