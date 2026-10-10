
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ab750(int *param_1,char *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 auStack_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d3e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00647ed0(param_2,&DAT_0072b9ac);
  if (iVar1 == 0) {
    *(byte *)((int)param_1 + 0x7f) =
         (*(byte *)(param_3 + 0x95) ^ *(byte *)((int)param_1 + 0x7f)) & 1 ^
         *(byte *)((int)param_1 + 0x7f);
    ExceptionList = local_c;
    return 1;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x38))();
  iStack_50 = *piVar2;
  iStack_4c = piVar2[1];
  iStack_48 = piVar2[2];
  iStack_44 = piVar2[3];
  iStack_40 = piVar2[4];
  iStack_3c = piVar2[5];
  iVar1 = FUN_00647cf0(s_LocalBBox_00724d04);
  iVar3 = FUN_00647e80(param_2,s_LocalBBox_00724d04,iVar1);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar1 == iVar3) {
      if (*param_3 == 9) {
        iStack_4c = param_3[0x83];
        iStack_50 = param_3[0x82];
        iStack_48 = param_3[0x84];
        FUN_004357e0(param_3 + 0x85);
LAB_004ab878:
        param_1[0xc] = iStack_4c;
        param_1[0xd] = iStack_48;
        param_1[0xb] = iStack_50;
        param_1[0xf] = iStack_40;
        param_1[0x10] = iStack_3c;
        param_1[0xe] = iStack_44;
        (**(code **)(*param_1 + 0x14))(param_1 + 5,1);
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar3 = FUN_004bfed0(param_2 + iVar1,param_3,&DAT_007278f4,&iStack_50);
      if ((iVar3 != 0) ||
         (iVar1 = FUN_004bfed0(param_2 + iVar1,param_3,&DAT_007278ec,&iStack_44), iVar1 != 0))
      goto LAB_004ab878;
    }
  }
  pfVar4 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_5c = *pfVar4;
  fStack_58 = pfVar4[1];
  fStack_54 = pfVar4[2];
  iVar1 = FUN_00647cf0(s_Position_00724d1c);
  iVar3 = FUN_00647e80(param_2,s_Position_00724d1c,iVar1);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar1 == iVar3) {
      if (*param_3 == 8) {
        fStack_5c = (float)param_3[0x89];
        fStack_58 = (float)param_3[0x8a];
        fStack_54 = (float)param_3[0x8b];
        goto LAB_004ab9a6;
      }
    }
    else {
      pcVar6 = param_2 + iVar1;
      iVar1 = FUN_00647e40(&DAT_00724e78,pcVar6);
      if (iVar1 == 0) {
        if (*param_3 == 2) {
          fStack_5c = (float)param_3[0x94];
          goto LAB_004ab9a6;
        }
      }
      else {
        iVar1 = FUN_00647e40(&DAT_00724e74,pcVar6);
        if (iVar1 == 0) {
          if (*param_3 == 2) {
            fStack_58 = (float)param_3[0x94];
LAB_004ab9a6:
            if (fStack_5c < _DAT_006e9980 == (NAN(fStack_5c) || NAN(_DAT_006e9980))) {
              if (_DAT_006e997c < fStack_5c) {
                fStack_5c = 100000.0;
              }
            }
            else {
              fStack_5c = -100000.0;
            }
            if (fStack_58 < _DAT_006e9980 == (NAN(fStack_58) || NAN(_DAT_006e9980))) {
              if (_DAT_006e997c < fStack_58) {
                fStack_58 = 100000.0;
              }
            }
            else {
              fStack_58 = -100000.0;
            }
            if (fStack_54 < _DAT_006e9980 == (NAN(fStack_54) || NAN(_DAT_006e9980))) {
              if (_DAT_006e997c < fStack_54) {
                fStack_54 = 100000.0;
              }
            }
            else {
              fStack_54 = -100000.0;
            }
            (**(code **)(*param_1 + 0x14))(&fStack_5c,1);
            ExceptionList = local_c;
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,pcVar6);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            fStack_54 = (float)param_3[0x94];
            goto LAB_004ab9a6;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647cf0(s_Rotation_007207f0);
  iVar3 = FUN_00647e80(param_2,s_Rotation_007207f0,iVar1);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar1 == iVar3) {
      if (*param_3 != 0xb) goto LAB_004abb44;
      param_1[0x1a] = param_3[0x8c];
      param_1[0x1b] = param_3[0x8d];
      iVar1 = param_3[0x8e];
LAB_004abb29:
      param_1[0x1c] = iVar1;
    }
    else {
      pcVar6 = param_2 + iVar1;
      iVar1 = FUN_00647e40(pcVar6,s__Pitch_007207e8);
      if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
        param_1[0x1a] = param_3[0x94];
      }
      else {
        iVar1 = FUN_00647e40(pcVar6,&DAT_007207e0);
        if ((iVar1 != 0) || ((*param_3 != 2 && (*param_3 != 10)))) {
          iVar1 = FUN_00647e40(pcVar6,s__Roll_007207d8);
          if ((iVar1 != 0) || ((*param_3 != 2 && (*param_3 != 10)))) goto LAB_004abb44;
          iVar1 = param_3[0x94];
          goto LAB_004abb29;
        }
        param_1[0x1b] = param_3[0x94];
      }
    }
    (**(code **)(*param_1 + 0xf0))(param_1 + 0x1a);
    uVar5 = 1;
  }
  else {
LAB_004abb44:
    iVar1 = 5;
    bVar8 = true;
    pcVar6 = param_2;
    pcVar7 = &DAT_00725c94;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      if (*param_3 == 4) {
        if (('/' < (char)param_3[2]) && ((char)param_3[2] < ':')) {
          FUN_006499d0();
          uStack_4 = 0;
          uVar5 = FUN_004aaa70(param_3 + 2);
          FUN_00649ea0(auStack_38,&DAT_0071e9bc,uVar5);
          (**(code **)(*param_1 + 0x48))(auStack_38[0]);
          uStack_4 = 0xffffffff;
          FUN_00649ba0();
          ExceptionList = local_c;
          return 1;
        }
        (**(code **)(*param_1 + 0x48))(param_3 + 2);
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar1 = FUN_00647e40(param_2,s_Does_Not_Collide_0072b980);
      if (iVar1 == 0) {
        if (*param_3 == 3) {
          if (param_3[0x95] != 0) {
            *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) | 4;
            ExceptionList = local_c;
            return 1;
          }
          *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) & 0xfb;
          ExceptionList = local_c;
          return 1;
        }
      }
      else {
        iVar1 = FUN_00647e40(param_2,s_Bilbo_Does_Not_Collide_0072b968);
        if (iVar1 == 0) {
          if (*param_3 == 3) {
            if (param_3[0x95] != 0) {
              *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) | 2;
              ExceptionList = local_c;
              return 1;
            }
            *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) & 0xfd;
            ExceptionList = local_c;
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(param_2,s_NPC_Does_Not_Collide_0072b950);
          if (iVar1 == 0) {
            if (*param_3 == 3) {
              if (param_3[0x95] != 0) {
                *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) | 4;
                ExceptionList = local_c;
                return 1;
              }
              *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) & 0xfb;
              ExceptionList = local_c;
              return 1;
            }
          }
          else {
            iVar1 = FUN_00647e40(param_2,s_Does_Camera_Collision_0072b938);
            if (iVar1 == 0) {
              if (*param_3 == 3) {
                if (param_3[0x95] != 0) {
                  *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) | 0x10;
                  ExceptionList = local_c;
                  return 1;
                }
                *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) & 0xef;
                ExceptionList = local_c;
                return 1;
              }
            }
            else {
              iVar1 = FUN_00647e40(param_2,s_Does_Camera_Fade_0072b924);
              if (iVar1 == 0) {
                if (*param_3 == 3) {
                  if (param_3[0x95] != 0) {
                    *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) | 0x20;
                    ExceptionList = local_c;
                    return 1;
                  }
                  *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) & 0xdf;
                  ExceptionList = local_c;
                  return 1;
                }
              }
              else {
                iVar1 = FUN_00647e40(param_2,s_Does_Lighting_Use_Normals_0072b908);
                if (iVar1 == 0) {
                  if (*param_3 == 3) {
                    if (param_3[0x95] != 0) {
                      *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) | 0x80;
                      ExceptionList = local_c;
                      return 1;
                    }
                    *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) & 0x7f;
                    ExceptionList = local_c;
                    return 1;
                  }
                }
                else {
                  iVar1 = FUN_00647e40(param_2,s_Does_Lighting_Cast_Shadows_0072b8ec);
                  if (iVar1 == 0) {
                    if (*param_3 == 3) {
                      if (param_3[0x95] != 0) {
                        *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) | 1;
                        ExceptionList = local_c;
                        return 1;
                      }
                      *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) & 0xfe;
                      ExceptionList = local_c;
                      return 1;
                    }
                  }
                  else {
                    iVar1 = FUN_00647e40(param_2,s_Script_Resource_0072b994);
                    if ((iVar1 == 0) && ((*param_3 == 7 || (*param_3 == 4)))) {
                      FUN_00549430(param_1 + 0x1d,param_3 + 2);
                      ExceptionList = local_c;
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
    uVar5 = 0;
  }
  ExceptionList = local_c;
  return uVar5;
}

