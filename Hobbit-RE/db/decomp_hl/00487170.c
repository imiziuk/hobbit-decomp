
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00487170(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00647e40(param_2,s_Scale_X_00728c1c);
  if (iVar2 != 0) {
    iVar2 = FUN_00647e40(param_2,s_Scale_Z_00728c0c);
    if (iVar2 != 0) {
      iVar2 = FUN_00647e40(param_2,s_Rotation_X_00728c5c);
      if (iVar2 != 0) {
        iVar2 = FUN_00647e40(param_2,s_Rotation_Z_00728c50);
        if (iVar2 != 0) {
          iVar2 = FUN_00647e40(param_2,s_WorldBBox_00724d10);
          if (iVar2 != 0) {
            iVar2 = FUN_00647e40(param_2,s_Cells_Cell_Size__cm__00729008);
            if (iVar2 == 0) {
              if (*param_3 == 2) {
                *(int *)(param_1 + 0x100) = param_3[0x94];
                FUN_00485840();
                return 1;
              }
            }
            else {
              iVar2 = FUN_00647e40(param_2,s_Cells___X_Cells_00728ff8);
              if (iVar2 == 0) {
                if (*param_3 == 1) {
                  *(int *)(param_1 + 0x104) = param_3[0x93];
                  FUN_00485840();
                  return 1;
                }
              }
              else {
                iVar2 = FUN_00647e40(param_2,s_Cells___Z_Cells_00728fe8);
                if (iVar2 == 0) {
                  if (*param_3 == 1) {
                    *(int *)(param_1 + 0x108) = param_3[0x93];
                    FUN_00485840();
                    return 1;
                  }
                }
                else {
                  iVar2 = FUN_00647e40(param_2,s_Cells_Nearby_Particle_Threshold_00728fc8);
                  if (iVar2 == 0) {
                    if (*param_3 == 1) {
                      *(int *)(param_1 + 0x14c) = param_3[0x93];
                      FUN_00485840();
                      return 1;
                    }
                  }
                  else {
                    iVar2 = FUN_00647e40(param_2,s_Particles___Particles_00728fa4);
                    if (iVar2 == 0) {
                      if (*param_3 == 1) {
                        iVar2 = param_3[0x93];
                        if (*(int *)(param_1 + 0x10c) != iVar2) {
                          if (iVar2 == 0) {
                            iVar2 = 1;
                          }
                          *(int *)(param_1 + 0x10c) = iVar2;
                          FUN_00485fa0();
                        }
                        return 1;
                      }
                    }
                    else {
                      iVar2 = FUN_00647e40(param_2,s_Particles_Particle_Size_00728f70);
                      if (iVar2 == 0) {
                        if (*param_3 == 2) {
                          *(int *)(param_1 + 0x114) = param_3[0x94];
                          FUN_00485fa0();
                          return 1;
                        }
                      }
                      else {
                        iVar2 = FUN_00647e40(param_2,s_Particles_Min_Particle_Alpha_00728f50);
                        if (iVar2 == 0) {
                          if (*param_3 == 1) {
                            iVar2 = param_3[0x93];
                            if ((iVar2 < 0) || (iVar2 < 0x100)) {
                              bVar1 = (iVar2 < 0) - 1U & (byte)iVar2;
                            }
                            else {
                              bVar1 = 0xff;
                            }
                            *(byte *)(param_1 + 0x118) = bVar1;
                            FUN_00485fa0();
                            return 1;
                          }
                        }
                        else {
                          iVar2 = FUN_00647e40(param_2,s_Particles_Max_Particle_Alpha_00728f30);
                          if (iVar2 == 0) {
                            if (*param_3 == 1) {
                              iVar2 = param_3[0x93];
                              if ((iVar2 < 0) || (iVar2 < 0x100)) {
                                bVar1 = (iVar2 < 0) - 1U & (byte)iVar2;
                              }
                              else {
                                bVar1 = 0xff;
                              }
                              *(byte *)(param_1 + 0x119) = bVar1;
                              FUN_00485fa0();
                              return 1;
                            }
                          }
                          else {
                            iVar2 = FUN_00647e40(param_2,s_General_Movement_Mode_0072910c);
                            if (iVar2 == 0) {
                              if ((*param_3 == 0xc) || (*param_3 == 1)) {
                                *(int *)(param_1 + 0x130) = param_3[0x93];
                                FUN_00485840();
                                return 1;
                              }
                            }
                            else {
                              iVar2 = FUN_00647e40(param_2,s_General_Movement_Scale_007290f4);
                              if (iVar2 == 0) {
                                if (*param_3 == 2) {
                                  *(int *)(param_1 + 0x144) = param_3[0x94];
                                  FUN_00485840();
                                  return 1;
                                }
                              }
                              else {
                                iVar2 = FUN_00647cf0(s_General_Movement_Vector_007290dc);
                                iVar3 = FUN_00647e80(param_2,s_General_Movement_Vector_007290dc,
                                                     iVar2);
                                if (iVar3 == 0) {
                                  iVar3 = FUN_00647cf0(param_2);
                                  if (iVar2 == iVar3) {
                                    if (*param_3 == 8) {
                                      *(int *)(param_1 + 0x138) = param_3[0x89];
                                      *(int *)(param_1 + 0x13c) = param_3[0x8a];
                                      iVar2 = param_3[0x8b];
LAB_00487596:
                                      *(int *)(param_1 + 0x140) = iVar2;
                                      FUN_00485840();
                                      return 1;
                                    }
                                  }
                                  else {
                                    iVar2 = iVar2 + param_2;
                                    iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
                                    if (iVar3 == 0) {
                                      if (*param_3 == 2) {
                                        *(int *)(param_1 + 0x138) = param_3[0x94];
                                        FUN_00485840();
                                        return 1;
                                      }
                                    }
                                    else {
                                      iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
                                      if (iVar3 == 0) {
                                        if (*param_3 == 2) {
                                          *(int *)(param_1 + 0x13c) = param_3[0x94];
                                          FUN_00485840();
                                          return 1;
                                        }
                                      }
                                      else {
                                        iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
                                        if ((iVar2 == 0) && (*param_3 == 2)) {
                                          iVar2 = param_3[0x94];
                                          goto LAB_00487596;
                                        }
                                      }
                                    }
                                  }
                                }
                                iVar2 = FUN_00647e40(param_2,s_General_Sleep_Distance_0072909c);
                                if (iVar2 == 0) {
                                  if (*param_3 == 2) {
                                    *(int *)(param_1 + 300) = param_3[0x94];
                                    return 1;
                                  }
                                }
                                else {
                                  iVar2 = FUN_00647e40(param_2,s_General_Boundary_Mode_007290c4);
                                  if (iVar2 == 0) {
                                    if ((*param_3 == 0xc) || (*param_3 == 1)) {
                                      *(int *)(param_1 + 0x134) = param_3[0x93];
                                      return 1;
                                    }
                                  }
                                  else {
                                    iVar2 = FUN_00647e40(param_2,s_General_Pain_Mode_00729088);
                                    if (iVar2 == 0) {
                                      if ((*param_3 == 0xc) || (*param_3 == 1)) {
                                        *(int *)(param_1 + 0x154) = param_3[0x93];
                                        return 1;
                                      }
                                    }
                                    else {
                                      iVar2 = FUN_00647e40(param_2,
                                                  s_General_Pain_Freq__sec__00729070);
                                      if (iVar2 == 0) {
                                        if (*param_3 == 2) {
                                          if ((float)param_3[0x94] < _DAT_006e9360 !=
                                              (NAN((float)param_3[0x94]) || NAN(_DAT_006e9360))) {
                                            *(float *)(param_1 + 0x158) = _DAT_006e9360;
                                            return 1;
                                          }
                                          *(int *)(param_1 + 0x158) = param_3[0x94];
                                          return 1;
                                        }
                                      }
                                      else {
                                        iVar2 = FUN_00647e40(param_2,
                                                  s_General_Poison_Duration__secs___h_0072903c);
                                        if (iVar2 == 0) {
                                          if (*param_3 == 2) {
                                            if ((float)param_3[0x94] < _DAT_006e9360 !=
                                                (NAN((float)param_3[0x94]) || NAN(_DAT_006e9360))) {
                                              *(float *)(param_1 + 0x15c) = _DAT_006e9360;
                                              return 1;
                                            }
                                            *(int *)(param_1 + 0x15c) = param_3[0x94];
                                            return 1;
                                          }
                                        }
                                        else {
                                          iVar2 = FUN_00647e40(param_2,
                                                  s_General_Pain_Amount_00729028);
                                          if (iVar2 == 0) {
                                            if (*param_3 == 2) {
                                              if ((float)param_3[0x94] < DAT_006e92e4 !=
                                                  (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4)))
                                              {
                                                *(float *)(param_1 + 0x160) = DAT_006e92e4;
                                                return 1;
                                              }
                                              *(int *)(param_1 + 0x160) = param_3[0x94];
                                              return 1;
                                            }
                                          }
                                          else {
                                            iVar2 = FUN_00647cf0(s_General_Tint_007290b4);
                                            iVar3 = FUN_00647e80(param_2,s_General_Tint_007290b4,
                                                                 iVar2);
                                            if (iVar3 == 0) {
                                              iVar3 = FUN_00647cf0(param_2);
                                              if (iVar2 == iVar3) {
                                                if (*param_3 == 0x11) {
                                                  *(undefined1 *)(param_1 + 0x153) =
                                                       *(undefined1 *)((int)param_3 + 0x223);
                                                  *(undefined1 *)(param_1 + 0x152) =
                                                       *(undefined1 *)((int)param_3 + 0x222);
                                                  *(undefined1 *)(param_1 + 0x151) =
                                                       *(undefined1 *)((int)param_3 + 0x221);
                                                  *(char *)(param_1 + 0x150) = (char)param_3[0x88];
                                                  return 1;
                                                }
                                              }
                                              else {
                                                iVar2 = iVar2 + param_2;
                                                iVar3 = FUN_00647e40(&DAT_00728244,iVar2);
                                                if (iVar3 == 0) {
                                                  if (*param_3 == 1) {
                                                    *(char *)(param_1 + 0x152) = (char)param_3[0x93]
                                                    ;
                                                    return 1;
                                                  }
                                                }
                                                else {
                                                  iVar3 = FUN_00647e40(&DAT_00728240,iVar2);
                                                  if (iVar3 == 0) {
                                                    if (*param_3 == 1) {
                                                      *(char *)(param_1 + 0x151) =
                                                           (char)param_3[0x93];
                                                      return 1;
                                                    }
                                                  }
                                                  else {
                                                    iVar3 = FUN_00647e40(&DAT_0072823c,iVar2);
                                                    if (iVar3 == 0) {
                                                      if (*param_3 == 1) {
                                                        *(char *)(param_1 + 0x150) =
                                                             (char)param_3[0x93];
                                                        return 1;
                                                      }
                                                    }
                                                    else {
                                                      iVar2 = FUN_00647e40(&DAT_00728238,iVar2);
                                                      if ((iVar2 == 0) && (*param_3 == 1)) {
                                                        *(char *)(param_1 + 0x153) =
                                                             (char)param_3[0x93];
                                                        return 1;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            iVar2 = FUN_00647e40(param_2,
                                                  s_Forces_Push_Scalar_00728f14);
                                            if (iVar2 == 0) {
                                              if (*param_3 == 2) {
                                                *(int *)(param_1 + 0x11c) = param_3[0x94];
                                                return 1;
                                              }
                                            }
                                            else {
                                              iVar2 = FUN_00647e40(param_2,
                                                  s_Forces_Pull_Scalar_00728f00);
                                              if (iVar2 == 0) {
                                                if (*param_3 == 2) {
                                                  *(int *)(param_1 + 0x120) = param_3[0x94];
                                                  return 1;
                                                }
                                              }
                                              else {
                                                iVar2 = FUN_00647e40(param_2,
                                                  s_Forces_Total_Force_Scalar_00728ee4);
                                                if (iVar2 == 0) {
                                                  if (*param_3 == 2) {
                                                    *(int *)(param_1 + 0x124) = param_3[0x94];
                                                    return 1;
                                                  }
                                                }
                                                else {
                                                  iVar2 = FUN_00647e40(param_2,
                                                  s_Forces_Viscosity_00728ed0);
                                                  if (iVar2 != 0) {
                                                    uVar4 = FUN_004e3380(param_2,param_3);
                                                    iVar2 = FUN_00647e80(param_2,s_Position_00724d1c
                                                                         ,8);
                                                    if (iVar2 == 0) {
                                                      FUN_00485840();
                                                    }
                                                    return uVar4;
                                                  }
                                                  if (*param_3 == 2) {
                                                    *(int *)(param_1 + 0x128) = param_3[0x94];
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
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

