
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00492050(int *param_1,int param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  int iStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 auStack_84 [12];
  int iStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d30f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00647e40(param_2,s_CurrState_007299f8);
  if ((iVar2 == 0) && (*param_3 == 1)) {
    if (param_3[0x93] == 4) {
      (**(code **)(*param_1 + 0x110))(param_1 + 0x5e);
      FUN_00491450(4);
      ExceptionList = pvStack_c;
      return 1;
    }
    if (param_3[0x93] == 1) {
      fStack_b0 = (float)param_1[0x61] + (float)param_1[0x5e];
      fStack_ac = (float)param_1[0x5f] + (float)param_1[0x62];
      fStack_a8 = (float)param_1[0x60] + (float)param_1[99];
      (**(code **)(*param_1 + 0x110))(&fStack_b0);
      FUN_00491450(1);
    }
    ExceptionList = pvStack_c;
    return 1;
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0x38))();
  iStack_90 = *piVar3;
  iStack_8c = piVar3[1];
  iStack_88 = piVar3[2];
  FUN_004357e0(piVar3 + 3);
  iVar2 = FUN_00647cf0(s_LocalBBox_00724d04);
  iVar4 = FUN_00647e80(param_2,s_LocalBBox_00724d04,iVar2);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar2 == iVar4) {
      if (*param_3 == 9) {
        FUN_004357e0(param_3 + 0x82);
        FUN_004357e0(param_3 + 0x85);
LAB_004921d8:
        if (((param_1[0x50] != 0x3f800000) || (param_1[0x51] != 0x3f800000)) ||
           (param_1[0x52] != 0x3f800000)) {
          iStack_78 = param_1[0x50];
          fStack_74 = (float)param_1[0x51] * DAT_006e92e4;
          iStack_64 = param_1[0x51];
          iStack_50 = param_1[0x52];
          uStack_4c = 0;
          fStack_70 = (float)param_1[0x52] * DAT_006e92e4;
          uStack_5c = 0;
          uStack_6c = 0;
          uStack_3c = 0x3f800000;
          fStack_68 = (float)param_1[0x50] * DAT_006e92e4;
          fStack_60 = fStack_70;
          fStack_58 = fStack_68;
          fStack_54 = fStack_74;
          fStack_48 = fStack_68;
          fStack_44 = fStack_74;
          fStack_40 = fStack_70;
          FUN_0064d480();
        }
        param_1[0xb] = iStack_90;
        param_1[0xc] = iStack_8c;
        param_1[0xd] = iStack_88;
        FUN_004357e0(auStack_84);
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    else {
      iVar4 = FUN_004bfed0(iVar2 + param_2,param_3,&DAT_007278f4,&iStack_90);
      if ((iVar4 != 0) ||
         (iVar2 = FUN_004bfed0(iVar2 + param_2,param_3,&DAT_007278ec,auStack_84), iVar2 != 0))
      goto LAB_004921d8;
    }
  }
  pfVar5 = (float *)(param_1 + 0x1a);
  iStack_b4 = FUN_00647cf0(s_Rotation_007207f0);
  iVar2 = FUN_00647e80(param_2,s_Rotation_007207f0,iStack_b4);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iStack_b4 == iVar2) {
      if (*param_3 == 0xb) {
        *pfVar5 = (float)param_3[0x8c];
        param_1[0x1b] = param_3[0x8d];
        param_1[0x1c] = param_3[0x8e];
LAB_00492386:
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        fStack_94 = 1.0;
        FUN_004934f0(param_1[0x1c]);
        FUN_00493330(*pfVar5);
        FUN_00493410(param_1[0x1b]);
        fStack_94 = fStack_94 * _DAT_006e9370;
        FUN_004064d0();
        FUN_004069b0(&uStack_a0);
        FUN_004065c0(&fStack_b0);
        fVar1 = fStack_a8;
        *pfVar5 = fStack_b0;
        param_1[0x1b] = (int)fStack_ac;
        param_1[0x1c] = (int)fStack_a8;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        fStack_a8 = 0.0;
        uStack_a4 = 0x3f800000;
        FUN_004934f0(fVar1);
        FUN_00493330(*pfVar5);
        FUN_00493410(param_1[0x1b]);
        (**(code **)(*param_1 + 0x10c))(&fStack_b0);
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    else {
      iStack_b4 = iStack_b4 + param_2;
      iVar2 = FUN_004af4a0(iStack_b4,param_3,s__Pitch_007207e8,pfVar5);
      if (((iVar2 != 0) ||
          (iVar2 = FUN_004af4a0(iStack_b4,param_3,&DAT_007207e0,param_1 + 0x1b), iVar2 != 0)) ||
         (iVar2 = FUN_004af4a0(iStack_b4,param_3,s__Roll_007207d8,param_1 + 0x1c), iVar2 != 0))
      goto LAB_00492386;
    }
  }
  iVar2 = FUN_00647cf0(s_Scale_00725a04);
  iVar4 = FUN_00647e80(param_2,s_Scale_00725a04,iVar2);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar2 == iVar4) {
      if (*param_3 == 8) {
        fStack_b0 = (float)param_3[0x89];
        goto LAB_00492503;
      }
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar4 = FUN_00647e40(&DAT_00724e78,iVar2);
      if (iVar4 == 0) {
        if (*param_3 == 2) {
          fStack_b0 = (float)param_3[0x94];
LAB_00492503:
          if (fStack_b0 < _DAT_006e9350) {
            fStack_b0 = _DAT_006e9350;
          }
          param_1[0x50] = (int)fStack_b0;
          param_1[0x51] = (int)fStack_b0;
          param_1[0x52] = (int)fStack_b0;
          (**(code **)(*param_1 + 0x10c))(param_1 + 0x4c);
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00724e74,iVar2);
        if (((iVar4 == 0) || (iVar2 = FUN_00647e40(&DAT_00724e70,iVar2), iVar2 == 0)) &&
           (*param_3 == 2)) goto LAB_00492503;
      }
    }
  }
  pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_c0 = *pfVar5;
  fStack_bc = pfVar5[1];
  fStack_b8 = pfVar5[2];
  iVar2 = FUN_00647cf0(s_Position_00724d1c);
  iVar4 = FUN_00647e80(param_2,s_Position_00724d1c,iVar2);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar2 == iVar4) {
      if (*param_3 == 8) {
        fStack_c0 = (float)param_3[0x89];
        fStack_bc = (float)param_3[0x8a];
        fStack_b8 = (float)param_3[0x8b];
        goto LAB_00492634;
      }
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar4 = FUN_00647e40(&DAT_00724e78,iVar2);
      if (iVar4 == 0) {
        if (*param_3 == 2) {
          fStack_c0 = (float)param_3[0x94];
          goto LAB_00492634;
        }
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00724e74,iVar2);
        if (iVar4 == 0) {
          if (*param_3 == 2) {
            fStack_bc = (float)param_3[0x94];
LAB_00492634:
            if (fStack_c0 < _DAT_006e9980 == (NAN(fStack_c0) || NAN(_DAT_006e9980))) {
              if (_DAT_006e997c < fStack_c0) {
                fStack_c0 = 100000.0;
              }
            }
            else {
              fStack_c0 = -100000.0;
            }
            if (fStack_bc < _DAT_006e9980 == (NAN(fStack_bc) || NAN(_DAT_006e9980))) {
              if (_DAT_006e997c < fStack_bc) {
                fStack_bc = 100000.0;
              }
            }
            else {
              fStack_bc = -100000.0;
            }
            if (fStack_b8 < _DAT_006e9980 == (NAN(fStack_b8) || NAN(_DAT_006e9980))) {
              if (_DAT_006e997c < fStack_b8) {
                fStack_b8 = 100000.0;
              }
            }
            else {
              fStack_b8 = -100000.0;
            }
            (**(code **)(*param_1 + 0x110))(&fStack_c0);
            ExceptionList = pvStack_c;
            return 1;
          }
        }
        else {
          iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
          if ((iVar2 == 0) && (*param_3 == 2)) {
            fStack_b8 = (float)param_3[0x94];
            goto LAB_00492634;
          }
        }
      }
    }
  }
  iVar2 = FUN_00647e40(param_2,s_Geometry_Resource_007299e4);
  if (iVar2 == 0) {
    if ((*param_3 != 7) && (*param_3 != 4)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    FUN_00649b20(param_3 + 2);
    uStack_4 = 0;
    (**(code **)(*param_1 + 0xd0))(uStack_38);
    FUN_0048fd50();
    uStack_4 = 0xffffffff;
    FUN_00649ba0();
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,&DAT_00725c88);
  if (iVar2 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x58] = param_3[0x90];
    param_1[0x59] = param_3[0x91];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Path_Offset_007299d8);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x5b] = param_3[0x94];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,&DAT_00729908);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x5c] = param_3[0x94];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_IsMoving_00729910);
  if (iVar2 == 0) {
    if (*param_3 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x6e] = param_3[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Sinks_007298d8);
  if (iVar2 == 0) {
    if (*param_3 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x5d] = param_3[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar2 = FUN_00647cf0(s_Top_Pos_007299a8);
  iVar4 = FUN_00647e80(param_2,s_Top_Pos_007299a8,iVar2);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar2 == iVar4) {
      if (*param_3 != 8) goto LAB_0049293d;
      FUN_004357e0(param_3 + 0x89);
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar4 = FUN_00647e40(&DAT_00724e78,iVar2);
      if (iVar4 == 0) {
        if (*param_3 != 2) goto LAB_0049293d;
        param_1[0x5e] = param_3[0x94];
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00724e74,iVar2);
        if (iVar4 == 0) {
          if (*param_3 != 2) goto LAB_0049293d;
          param_1[0x5f] = param_3[0x94];
        }
        else {
          iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
          if ((iVar2 != 0) || (*param_3 != 2)) goto LAB_0049293d;
          param_1[0x60] = param_3[0x94];
        }
      }
    }
    (**(code **)(*param_1 + 0xc))();
  }
LAB_0049293d:
  iVar2 = FUN_004bfed0(param_2,param_3,s_Sink_Vector_0072999c,param_1 + 0x61);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0xc))();
  }
  iVar2 = FUN_00647e40(param_2,s_Transition_Delay_00729988);
  if (iVar2 == 0) {
    if (*param_3 == 2) {
      param_1[0x68] = param_3[0x94];
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    iVar2 = FUN_00647e40(param_2,s_Transition_Speed_00729974);
    if (iVar2 == 0) {
      if (*param_3 == 2) {
        param_1[0x67] = param_3[0x94];
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      iVar2 = FUN_00647ed0(param_2,s_Starts_At_Top_00729964);
      if (iVar2 == 0) {
        if (*param_3 != 3) {
          ExceptionList = pvStack_c;
          return 0;
        }
        param_1[0x6c] = param_3[0x95];
        (**(code **)(*param_1 + 0xc))();
      }
      iVar2 = FUN_00647e40(param_2,s_Set_As_Top_007299cc);
      if (iVar2 == 0) {
        if (*param_3 == 3) {
          if (param_3[0x95] != 0) {
            param_1[0x5e] = param_1[5];
            param_1[0x5f] = param_1[6];
            param_1[0x60] = param_1[7];
          }
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        iVar2 = FUN_00647e40(param_2,s_Set_Sink_Vector_00729a04);
        if (iVar2 == 0) {
          if (*param_3 != 3) {
            ExceptionList = pvStack_c;
            return 0;
          }
          if (param_3[0x95] != 0) {
            param_1[0x61] = param_1[5];
            param_1[0x62] = param_1[6];
            param_1[99] = param_1[7];
          }
        }
        iVar2 = FUN_00647e40(param_2,s_Move_Top_Bottom_with_object_007299b0);
        if (iVar2 == 0) {
          if (*param_3 == 3) {
            param_1[0x57] = param_3[0x95];
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = FUN_004ab750(param_2,param_3);
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar6;
}

