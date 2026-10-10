
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00458bc0(int param_1,byte *param_2,int *param_3)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  bool bVar8;
  float10 fVar9;
  undefined1 auStack_1c [4];
  float fStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d0378;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_00647e40(param_2,s_IsEnabled_007259d4);
  if ((iVar3 == 0) && (*param_3 == 3)) {
    FUN_00459cf0(param_3[0x95]);
    ExceptionList = pvStack_c;
    return 1;
  }
  fVar9 = (float10)FUN_004585b0();
  fStack_18 = (float)fVar9;
  iVar3 = FUN_00647cf0(s_Scale_00725a04);
  iVar4 = FUN_00647e80(param_2,s_Scale_00725a04,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar3 == iVar4) {
      if (*param_3 == 8) {
        fVar1 = (float)param_3[0x89];
        goto LAB_00458cbb;
      }
      goto LAB_00458d5a;
    }
    pbVar7 = param_2 + iVar3;
    iVar3 = FUN_00647e40(&DAT_00724e78,pbVar7);
    if (iVar3 == 0) {
      if (*param_3 != 2) goto LAB_00458d5a;
      fVar1 = (float)param_3[0x94];
    }
    else {
      iVar3 = FUN_00647e40(&DAT_00724e74,pbVar7);
      if (((iVar3 != 0) && (iVar3 = FUN_00647e40(&DAT_00724e70,pbVar7), iVar3 != 0)) ||
         (fVar1 = fStack_18, *param_3 != 2)) goto LAB_00458d5a;
    }
LAB_00458cbb:
    param_2 = (byte *)fVar1;
    if ((float)param_2 < _DAT_006e9350) {
      param_2 = (byte *)0x3a83126f;
    }
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 0:
      FUN_00458510(param_2);
      uVar5 = 1;
      break;
    case 1:
      FUN_00458330(param_2);
      uVar5 = 1;
      break;
    case 2:
      FUN_00458440(param_2);
      uVar5 = 1;
      break;
    case 3:
      FUN_004583d0(param_2);
      uVar5 = 1;
      break;
    case 4:
      if (*(int *)(param_1 + 200) == 1) goto switchD_00458ce9_default;
LAB_00458e7a:
      FUN_004584d0(param_2);
    default:
switchD_00458ce9_default:
      uVar5 = 1;
    }
  }
  else {
LAB_00458d5a:
    iVar3 = 0xb;
    bVar8 = true;
    pbVar7 = param_2;
    pbVar6 = (byte *)s_Scale_Mode_007259f8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *pbVar7 == *pbVar6;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar8);
    if (bVar8) {
      if ((*param_3 == 1) || (*param_3 == 0xc)) {
        *(int *)(param_1 + 0xa8) = param_3[0x93];
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    else {
      iVar3 = 0xf;
      bVar8 = true;
      pbVar7 = param_2;
      pbVar6 = (byte *)s_Trigger_Radius_00725990;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *pbVar7 == *pbVar6;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        if (*param_3 == 2) {
          FUN_00458330(param_3[0x94]);
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      else {
        iVar3 = 0xc;
        bVar8 = true;
        pbVar7 = param_2;
        pbVar6 = (byte *)s_Near_Radius_00725984;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *pbVar7 == *pbVar6;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          if (*param_3 == 2) {
            FUN_004583d0(param_3[0x94]);
            ExceptionList = pvStack_c;
            return 1;
          }
        }
        else {
          iVar3 = 0xb;
          bVar8 = true;
          pbVar7 = param_2;
          pbVar6 = (byte *)s_Far_Radius_00725978;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar8 = *pbVar7 == *pbVar6;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          } while (bVar8);
          if (bVar8) {
            if (*param_3 == 2) {
              FUN_00458440(param_3[0x94]);
              ExceptionList = pvStack_c;
              return 1;
            }
          }
          else {
            iVar3 = 0xe;
            bVar8 = true;
            pbVar7 = param_2;
            pbVar6 = (byte *)s_Offset_Radius_00725968;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar8 = *pbVar7 == *pbVar6;
              pbVar7 = pbVar7 + 1;
              pbVar6 = pbVar6 + 1;
            } while (bVar8);
            if (bVar8) {
              if (*param_3 == 2) {
                if ((float)param_3[0x94] < DAT_006e92e4 ==
                    (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4))) {
                  param_2 = (byte *)param_3[0x94];
                }
                else {
                  param_2 = (byte *)0x0;
                }
                goto LAB_00458e7a;
              }
            }
            else {
              iVar3 = FUN_00647e40(param_2,s_Create_Sounds_Outside_Offset_00725948);
              if (iVar3 == 0) {
                if (*param_3 == 3) {
                  if (param_3[0x95] != 0) {
                    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 0x10;
                    ExceptionList = pvStack_c;
                    return 1;
                  }
                  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xffffffef;
                  ExceptionList = pvStack_c;
                  return 1;
                }
              }
              else {
                iVar3 = 0xf;
                bVar8 = true;
                pbVar7 = param_2;
                pbVar6 = (byte *)s_Min_Time_Delay_00725938;
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar8 = *pbVar7 == *pbVar6;
                  pbVar7 = pbVar7 + 1;
                  pbVar6 = pbVar6 + 1;
                } while (bVar8);
                if (bVar8) {
                  if (*param_3 == 2) {
                    fVar1 = DAT_006e92e4;
                    if ((float)param_3[0x94] < DAT_006e92e4 ==
                        (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4))) {
                      fVar1 = (float)param_3[0x94];
                    }
                    *(float *)(param_1 + 0xbc) = fVar1;
                    if (*(float *)(param_1 + 0xc0) < fVar1 ==
                        (NAN(*(float *)(param_1 + 0xc0)) || NAN(fVar1))) {
                      fVar1 = *(float *)(param_1 + 0xc0);
                    }
                    *(float *)(param_1 + 0xc0) = fVar1;
                    FUN_00457690();
                    ExceptionList = pvStack_c;
                    return 1;
                  }
                }
                else {
                  iVar3 = 0xf;
                  bVar8 = true;
                  pbVar7 = param_2;
                  pbVar6 = (byte *)s_Max_Time_Delay_00725928;
                  do {
                    if (iVar3 == 0) break;
                    iVar3 = iVar3 + -1;
                    bVar8 = *pbVar7 == *pbVar6;
                    pbVar7 = pbVar7 + 1;
                    pbVar6 = pbVar6 + 1;
                  } while (bVar8);
                  if (bVar8) {
                    if (*param_3 == 2) {
                      fVar1 = DAT_006e92e4;
                      if ((float)param_3[0x94] < DAT_006e92e4 ==
                          (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4))) {
                        fVar1 = (float)param_3[0x94];
                      }
                      *(float *)(param_1 + 0xc0) = fVar1;
                      if (*(float *)(param_1 + 0xbc) < fVar1) {
                        fVar1 = *(float *)(param_1 + 0xbc);
                      }
                      *(float *)(param_1 + 0xbc) = fVar1;
                      FUN_00457690();
                      ExceptionList = pvStack_c;
                      return 1;
                    }
                  }
                  else {
                    iVar3 = 6;
                    bVar8 = true;
                    pbVar7 = param_2;
                    pbVar6 = (byte *)s_Loops_007259f0;
                    do {
                      if (iVar3 == 0) break;
                      iVar3 = iVar3 + -1;
                      bVar8 = *pbVar7 == *pbVar6;
                      pbVar7 = pbVar7 + 1;
                      pbVar6 = pbVar6 + 1;
                    } while (bVar8);
                    if (bVar8) {
                      if (*param_3 == 3) {
                        if (param_3[0x95] != 0) {
                          *(undefined4 *)(param_1 + 200) = 1;
                        }
                        if (*(int *)(param_1 + 200) == 1) {
                          *(undefined4 *)(param_1 + 0xc0) = 0;
                          *(undefined4 *)(param_1 + 0xbc) = 0;
                          FUN_00458300(1);
                          *(undefined4 *)(param_1 + 0xb8) = extraout_EDX;
                          FUN_00457320(1);
                          *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffe;
                          FUN_00457690();
                          ExceptionList = pvStack_c;
                          return 1;
                        }
LAB_0045925f:
                        FUN_00458300(0);
                        ExceptionList = pvStack_c;
                        return 1;
                      }
                    }
                    else {
                      iVar3 = FUN_00647e40(param_2,s_Loop_Fade_Out_Time_00725914);
                      if (iVar3 == 0) {
                        if (*param_3 == 2) {
                          *(int *)(param_1 + 0xcc) = param_3[0x94];
                          ExceptionList = pvStack_c;
                          return 1;
                        }
                      }
                      else {
                        iVar3 = 0x15;
                        bVar8 = true;
                        pbVar7 = param_2;
                        pbVar6 = (byte *)s_Loop_Fade_Out_Volume_007258fc;
                        do {
                          if (iVar3 == 0) break;
                          iVar3 = iVar3 + -1;
                          bVar8 = *pbVar7 == *pbVar6;
                          pbVar7 = pbVar7 + 1;
                          pbVar6 = pbVar6 + 1;
                        } while (bVar8);
                        if (bVar8) {
                          if (*param_3 == 2) {
                            if ((((float)param_3[0x94] < DAT_006e92e8 ==
                                  (NAN((float)param_3[0x94]) || NAN(DAT_006e92e8))) ||
                                (fVar1 = DAT_006e92e4, DAT_006e92e4 <= (float)param_3[0x94])) &&
                               (fVar1 = DAT_006e92e8,
                               (float)param_3[0x94] < DAT_006e92e8 !=
                               (NAN((float)param_3[0x94]) || NAN(DAT_006e92e8)))) {
                              fVar1 = (float)param_3[0x94];
                            }
                            *(float *)(param_1 + 0xd0) = fVar1;
                            *(float *)(param_1 + 0x140) = fVar1;
                            ExceptionList = pvStack_c;
                            return 1;
                          }
                        }
                        else {
                          iVar3 = 0xf;
                          bVar8 = true;
                          pbVar7 = param_2;
                          pbVar6 = (byte *)s_Play_Only_Once_007258d4;
                          do {
                            if (iVar3 == 0) break;
                            iVar3 = iVar3 + -1;
                            bVar8 = *pbVar7 == *pbVar6;
                            pbVar7 = pbVar7 + 1;
                            pbVar6 = pbVar6 + 1;
                          } while (bVar8);
                          if (bVar8) {
                            if (*param_3 == 3) {
                              if (param_3[0x95] != 0) {
                                *(undefined4 *)(param_1 + 200) = 3;
                              }
                              ExceptionList = pvStack_c;
                              return 1;
                            }
                          }
                          else {
                            iVar3 = FUN_00647e40(param_2,s_Freeze_Timer_During_Playback_007258b4);
                            if (iVar3 == 0) {
                              if (*param_3 == 3) {
                                if (param_3[0x95] != 0) {
                                  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 8;
                                  ExceptionList = pvStack_c;
                                  return 1;
                                }
                                *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffff7;
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                            }
                            else {
                              iVar3 = FUN_00647e40(param_2,s_Height_stays_constant_007258e4);
                              if (iVar3 == 0) {
                                if (*param_3 == 3) {
                                  if (param_3[0x95] != 0) {
                                    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 4;
                                    ExceptionList = pvStack_c;
                                    return 1;
                                  }
                                  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffb
                                  ;
                                  ExceptionList = pvStack_c;
                                  return 1;
                                }
                              }
                              else {
                                iVar3 = 0xe;
                                bVar8 = true;
                                pbVar7 = param_2;
                                pbVar6 = (byte *)s_Playback_Mode_007259e0;
                                do {
                                  if (iVar3 == 0) break;
                                  iVar3 = iVar3 + -1;
                                  bVar8 = *pbVar7 == *pbVar6;
                                  pbVar7 = pbVar7 + 1;
                                  pbVar6 = pbVar6 + 1;
                                } while (bVar8);
                                if (bVar8) {
                                  if ((*param_3 == 0xc) || (*param_3 == 1)) {
                                    iVar3 = param_3[0x93];
                                    *(int *)(param_1 + 200) = iVar3;
                                    if (iVar3 == 1) {
                                      *(undefined4 *)(param_1 + 0xc0) = 0;
                                      *(undefined4 *)(param_1 + 0xbc) = 0;
                                      FUN_00458300(1);
                                      *(undefined4 *)(param_1 + 0xb8) = extraout_EDX_00;
                                      FUN_00457320(1);
                                      *(uint *)(param_1 + 0x10c) =
                                           *(uint *)(param_1 + 0x10c) & 0xfffffffe;
                                      FUN_00457690();
                                      ExceptionList = pvStack_c;
                                      return 1;
                                    }
                                    goto LAB_0045925f;
                                  }
                                }
                                else {
                                  iVar3 = 0x10;
                                  bVar8 = true;
                                  pbVar7 = param_2;
                                  pbVar6 = (byte *)s_Audio_List_Size_007259c4;
                                  do {
                                    if (iVar3 == 0) break;
                                    iVar3 = iVar3 + -1;
                                    bVar8 = *pbVar7 == *pbVar6;
                                    pbVar7 = pbVar7 + 1;
                                    pbVar6 = pbVar6 + 1;
                                  } while (bVar8);
                                  if (bVar8) {
                                    if (*param_3 == 1) {
                                      FUN_00457320((param_3[0x93] < 0) - 1 & param_3[0x93]);
                                      *(uint *)(param_1 + 0x10c) =
                                           *(uint *)(param_1 + 0x10c) & 0xfffffffe;
                                      FUN_00457690();
                                      ExceptionList = pvStack_c;
                                      return 1;
                                    }
                                  }
                                  else {
                                    iVar3 = 0;
                                    if (0 < *(int *)(param_1 + 0xf4)) {
                                      do {
                                        FUN_00649920(auStack_1c,s_Audio_List_SoundName__d_007259a0,
                                                     iVar3);
                                        uStack_4 = 0;
                                        pbVar6 = (byte *)FUN_00649940();
                                        pbVar7 = param_2;
                                        do {
                                          bVar2 = *pbVar7;
                                          bVar8 = bVar2 < *pbVar6;
                                          if (bVar2 != *pbVar6) {
LAB_00459324:
                                            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                                            goto LAB_00459329;
                                          }
                                          if (bVar2 == 0) break;
                                          bVar2 = pbVar7[1];
                                          bVar8 = bVar2 < pbVar6[1];
                                          if (bVar2 != pbVar6[1]) goto LAB_00459324;
                                          pbVar7 = pbVar7 + 2;
                                          pbVar6 = pbVar6 + 2;
                                        } while (bVar2 != 0);
                                        iVar4 = 0;
LAB_00459329:
                                        uStack_4 = 0xffffffff;
                                        FUN_00649950();
                                        if (iVar4 == 0) {
                                          if ((*param_3 == 0xd) || (*param_3 == 4)) {
                                            FUN_0064a2e0(param_3 + 2);
                                            ExceptionList = pvStack_c;
                                            return 1;
                                          }
                                          goto LAB_004594fa;
                                        }
                                        iVar3 = iVar3 + 1;
                                      } while (iVar3 < *(int *)(param_1 + 0xf4));
                                    }
                                    iVar3 = 0x11;
                                    bVar8 = true;
                                    pbVar7 = param_2;
                                    pbVar6 = (byte *)s_Attach_to_Object_007258a0;
                                    do {
                                      if (iVar3 == 0) break;
                                      iVar3 = iVar3 + -1;
                                      bVar8 = *pbVar7 == *pbVar6;
                                      pbVar7 = pbVar7 + 1;
                                      pbVar6 = pbVar6 + 1;
                                    } while (bVar8);
                                    if (bVar8) {
                                      if (*param_3 == 0xf) {
                                        *(int *)(param_1 + 0xd8) = param_3[0x90];
                                        *(int *)(param_1 + 0xdc) = param_3[0x91];
                                        ExceptionList = pvStack_c;
                                        return 1;
                                      }
                                    }
                                    else {
                                      iVar3 = FUN_00647cf0(s_Attach_Offset_00725890);
                                      iVar4 = FUN_00647e80(param_2,s_Attach_Offset_00725890,iVar3);
                                      if (iVar4 == 0) {
                                        iVar4 = FUN_00647cf0(param_2);
                                        if (iVar3 == iVar4) {
                                          if (*param_3 == 8) {
                                            *(int *)(param_1 + 0xe0) = param_3[0x89];
                                            *(int *)(param_1 + 0xe4) = param_3[0x8a];
                                            *(int *)(param_1 + 0xe8) = param_3[0x8b];
                                            ExceptionList = pvStack_c;
                                            return 1;
                                          }
                                        }
                                        else {
                                          pbVar7 = param_2 + iVar3;
                                          iVar3 = FUN_00647e40(&DAT_00724e78,pbVar7);
                                          if (iVar3 == 0) {
                                            if (*param_3 == 2) {
                                              *(int *)(param_1 + 0xe0) = param_3[0x94];
                                              ExceptionList = pvStack_c;
                                              return 1;
                                            }
                                          }
                                          else {
                                            iVar3 = FUN_00647e40(&DAT_00724e74,pbVar7);
                                            if (iVar3 == 0) {
                                              if (*param_3 == 2) {
                                                *(int *)(param_1 + 0xe4) = param_3[0x94];
                                                ExceptionList = pvStack_c;
                                                return 1;
                                              }
                                            }
                                            else {
                                              iVar3 = FUN_00647e40(&DAT_00724e70,pbVar7);
                                              if ((iVar3 == 0) && (*param_3 == 2)) {
                                                *(int *)(param_1 + 0xe8) = param_3[0x94];
                                                ExceptionList = pvStack_c;
                                                return 1;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      iVar3 = FUN_004ab750(param_2,param_3);
                                      if (iVar3 != 0) {
                                        iVar3 = 9;
                                        bVar8 = true;
                                        pbVar7 = (byte *)s_Position_00724d1c;
                                        do {
                                          if (iVar3 == 0) break;
                                          iVar3 = iVar3 + -1;
                                          bVar8 = *param_2 == *pbVar7;
                                          param_2 = param_2 + 1;
                                          pbVar7 = pbVar7 + 1;
                                        } while (bVar8);
                                        if (bVar8) {
                                          *(undefined4 *)(param_1 + 0x114) =
                                               *(undefined4 *)(param_1 + 0x14);
                                          *(undefined4 *)(param_1 + 0x118) =
                                               *(undefined4 *)(param_1 + 0x18);
                                          *(undefined4 *)(param_1 + 0x11c) =
                                               *(undefined4 *)(param_1 + 0x1c);
                                        }
                                        ExceptionList = pvStack_c;
                                        return 1;
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
LAB_004594fa:
    uVar5 = 0;
  }
  ExceptionList = pvStack_c;
  return uVar5;
}

