
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ec000(int *param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d5de0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = FUN_00647e40(param_2,s_Render_0072ef5c);
  if (iVar5 == 0) {
    if (*param_3 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(byte *)((int)param_1 + 0x1d2) =
         ((char)param_3[0x95] << 1 ^ *(byte *)((int)param_1 + 0x1d2)) & 2 ^
         *(byte *)((int)param_1 + 0x1d2);
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Splash_0072ef54);
  if (iVar5 == 0) {
    if (*param_3 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(byte *)((int)param_1 + 0x1d3) =
         (*(byte *)(param_3 + 0x95) ^ *(byte *)((int)param_1 + 0x1d3)) & 1 ^
         *(byte *)((int)param_1 + 0x1d3);
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Normal_Exaggeration_0072ee78);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0xa3] = param_3[0x94];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Freeze_Distance_0072ef44);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x71] = param_3[0x94];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Interactive_0072ecb4);
  if (iVar5 == 0) {
    *(byte *)((int)param_1 + 0x1d2) =
         (*(byte *)(param_3 + 0x95) ^ *(byte *)((int)param_1 + 0x1d2)) & 1 ^
         *(byte *)((int)param_1 + 0x1d2);
    FUN_004e93f0();
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Max_Interactive_Amp_0072eed4);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x72] = param_3[0x94];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Scale_Y_00728c14);
  if (iVar5 == 0) {
    fVar3 = (float)param_3[0x94];
    iVar5 = FUN_005c0150();
    fVar4 = *(float *)(iVar5 + 4);
    fVar1 = (float)param_1[(char)param_1[0xc5] + 100];
    fVar3 = fVar3 * (float)param_1[(char)param_1[0xc5] + 100];
    if (fVar3 < DAT_006e92e8) {
      fVar3 = DAT_006e92e8;
    }
    param_1[(char)param_1[0xc5] + 100] = (int)fVar3;
    pfVar9 = (float *)(param_1 + 100);
    param_1[0x6e] = (int)fVar3;
    iVar5 = 10;
    fVar2 = _DAT_006e9370;
    do {
      if (fVar2 < *pfVar9 != (NAN(fVar2) || NAN(*pfVar9))) {
        fVar2 = *pfVar9;
      }
      pfVar9 = pfVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_1[0x2c] = (int)(fVar2 * _DAT_006e936c);
    param_1[6] = (int)((fVar3 - fVar1) * _DAT_006e936c + (float)param_1[6]);
    (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
    FUN_004e2630();
    FUN_004e93f0();
    FUN_005c2770(param_1[2],param_1[3],fVar4 + (float)param_1[0x6e]);
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Rotation_X_00728c5c);
  if (iVar5 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar5 = FUN_00647e40(param_2,s_Rotation_Z_00728c50);
  if (iVar5 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar5 = FUN_00647e40(param_2,s_Texture_Resource_0072ee64);
  if (iVar5 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    if ((char)param_3[2] != '\0') {
      FUN_00549430(param_1 + 0x78,param_3 + 2);
      *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) & 0xfb;
      ExceptionList = pvStack_c;
      return 1;
    }
    uVar6 = FUN_005496c0(s_water_xbmp_0072effc,&DAT_0071ef4c);
    FUN_00549430(param_1 + 0x78,uVar6);
    *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) | 4;
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Reflection_Map_0072ee54);
  if (iVar5 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    if ((char)param_3[2] != '\0') {
      FUN_00549430(param_1 + 0x79,param_3 + 2);
      *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) & 0xf7;
      ExceptionList = pvStack_c;
      return 1;
    }
    uVar6 = FUN_005496c0(s_WaterReflection_xbmp_0072eb44,&DAT_0071ef4c);
    FUN_00549430(param_1 + 0x79,uVar6);
    *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) | 8;
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Gloss_Map_0072ee48);
  if (iVar5 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    if ((char)param_3[2] != '\0') {
      FUN_00549430(param_1 + 0x7a,param_3 + 2);
      *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) & 0xef;
      ExceptionList = pvStack_c;
      return 1;
    }
    uVar6 = FUN_005496c0(s__WaterGloss_xbmp_0072eb33 + 1,&DAT_0071ef4c);
    FUN_00549430(param_1 + 0x7a,uVar6);
    *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) | 0x10;
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e80(param_2,s_Rotat_0072eff4,5);
  bVar10 = iVar5 == 0;
  iVar5 = FUN_00647e40(param_2,s_Scale_X_00728c1c);
  if ((((iVar5 == 0) || (iVar5 = FUN_00647e40(param_2,s_Scale_Z_00728c0c), iVar5 == 0)) ||
      (iVar5 = FUN_00647e40(param_2,s_Scale_00725a04), iVar5 == 0)) ||
     (iVar5 = FUN_00647e80(param_2,s_Position_00724d1c,8), iVar5 == 0)) {
    bVar10 = true;
  }
  iVar5 = FUN_00647e40(param_2,s_Quad_Size__cm__0072eec4);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x58] = param_3[0x94];
    FUN_004e93f0();
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_UV_Density__cm_tile__0072eeac);
  if (iVar5 == 0) {
    if (*param_3 != 2) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1[0x5f] = param_3[0x94];
    FUN_004e93f0();
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar5 = FUN_00647e40(param_2,s_Alpha_Minimum_0072ee9c);
  if (iVar5 != 0) {
    iVar5 = FUN_00647e40(param_2,s_Alpha_Maximum_0072ee8c);
    if (iVar5 != 0) {
      iVar5 = FUN_00647cf0(&DAT_00728df0);
      iVar8 = FUN_00647e80(param_2,&DAT_00728df0,iVar5);
      if (iVar8 == 0) {
        iVar8 = FUN_00647cf0(param_2);
        if (iVar5 == iVar8) {
          if (*param_3 == 0x11) {
            *(undefined1 *)((int)param_1 + 0x177) = *(undefined1 *)((int)param_3 + 0x223);
            *(undefined1 *)((int)param_1 + 0x176) = *(undefined1 *)((int)param_3 + 0x222);
            *(undefined1 *)((int)param_1 + 0x175) = *(undefined1 *)((int)param_3 + 0x221);
            *(char *)(param_1 + 0x5d) = (char)param_3[0x88];
            (**(code **)(*param_1 + 0x10))(0);
            ExceptionList = pvStack_c;
            return 1;
          }
        }
        else {
          iVar5 = iVar5 + param_2;
          iVar8 = FUN_00647e40(&DAT_00728244,iVar5);
          if (iVar8 == 0) {
            if (*param_3 == 1) {
              *(char *)((int)param_1 + 0x176) = (char)param_3[0x93];
              (**(code **)(*param_1 + 0x10))(0);
              ExceptionList = pvStack_c;
              return 1;
            }
          }
          else {
            iVar8 = FUN_00647e40(&DAT_00728240,iVar5);
            if (iVar8 == 0) {
              if (*param_3 == 1) {
                *(char *)((int)param_1 + 0x175) = (char)param_3[0x93];
                (**(code **)(*param_1 + 0x10))(0);
                ExceptionList = pvStack_c;
                return 1;
              }
            }
            else {
              iVar8 = FUN_00647e40(&DAT_0072823c,iVar5);
              if (iVar8 == 0) {
                if (*param_3 == 1) {
                  *(char *)(param_1 + 0x5d) = (char)param_3[0x93];
                  (**(code **)(*param_1 + 0x10))(0);
                  ExceptionList = pvStack_c;
                  return 1;
                }
              }
              else {
                iVar5 = FUN_00647e40(&DAT_00728238,iVar5);
                if ((iVar5 == 0) && (*param_3 == 1)) {
                  *(char *)((int)param_1 + 0x177) = (char)param_3[0x93];
                  (**(code **)(*param_1 + 0x10))(0);
                  ExceptionList = pvStack_c;
                  return 1;
                }
              }
            }
          }
        }
      }
      iVar5 = FUN_00647e40(param_2,s_Water_Level_0072ef98);
      if (iVar5 == 0) {
        if ((*param_3 != 0xc) && (*param_3 != 1)) {
          ExceptionList = pvStack_c;
          return 0;
        }
        uVar7 = 9;
        if ((uint)param_3[0x93] < 10) {
          uVar7 = param_3[0x93];
        }
        *(char *)(param_1 + 0xc5) = (char)uVar7;
        (**(code **)(*param_1 + 0x10))(0);
        ExceptionList = pvStack_c;
        return 1;
      }
      iVar5 = FUN_00647e40(param_2,s_Pain_Mode_0072ee3c);
      if (iVar5 == 0) {
        if ((*param_3 != 0xc) && (*param_3 != 1)) {
          ExceptionList = pvStack_c;
          return 0;
        }
        param_1[0x60] = param_3[0x93];
        ExceptionList = pvStack_c;
        return 1;
      }
      iVar5 = FUN_00647e40(param_2,s_Pain_Freq__sec__0072ee2c);
      if (iVar5 == 0) {
        if (*param_3 != 2) {
          ExceptionList = pvStack_c;
          return 0;
        }
        if ((float)param_3[0x94] < _DAT_006e9360 ==
            (NAN((float)param_3[0x94]) || NAN(_DAT_006e9360))) {
          param_1[0x61] = param_3[0x94];
          ExceptionList = pvStack_c;
          return 1;
        }
        param_1[0x61] = (int)_DAT_006e9360;
        ExceptionList = pvStack_c;
        return 1;
      }
      iVar5 = FUN_00647e40(param_2,s_Poison_Duration__secs___hits_evr_0072ee00);
      if (iVar5 == 0) {
        if (*param_3 != 2) {
          ExceptionList = pvStack_c;
          return 0;
        }
        if ((float)param_3[0x94] < _DAT_006e9360 ==
            (NAN((float)param_3[0x94]) || NAN(_DAT_006e9360))) {
          param_1[0x62] = param_3[0x94];
          ExceptionList = pvStack_c;
          return 1;
        }
        param_1[0x62] = (int)_DAT_006e9360;
        ExceptionList = pvStack_c;
        return 1;
      }
      iVar5 = FUN_00647e40(param_2,s_Pain_Amount_0072edf4);
      if (iVar5 == 0) {
        if (*param_3 != 2) {
          ExceptionList = pvStack_c;
          return 0;
        }
        if ((float)param_3[0x94] < DAT_006e92e4 == (NAN((float)param_3[0x94]) || NAN(DAT_006e92e4)))
        {
          param_1[99] = param_3[0x94];
          ExceptionList = pvStack_c;
          return 1;
        }
        param_1[99] = (int)DAT_006e92e4;
        ExceptionList = pvStack_c;
        return 1;
      }
      iVar5 = 0;
      while( true ) {
        FUN_00649920(auStack_1c,s_Wave__d_Rotation_0072edd8,iVar5);
        uStack_4 = 0;
        uVar6 = FUN_00649940();
        iVar8 = FUN_00647e40(param_2,uVar6);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar8 == 0) {
          param_1[iVar5 + 0xb8] = param_3[0x94];
          FUN_004e8a30();
          ExceptionList = pvStack_c;
          return 1;
        }
        FUN_00649920(auStack_18,s_Wave__d_Amplitude_0072edc4,iVar5);
        uStack_4 = 1;
        uVar6 = FUN_00649940();
        iVar8 = FUN_00647e40(param_2,uVar6);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar8 == 0) {
          param_1[iVar5 + 0xb0] = param_3[0x94];
          FUN_004e8a30();
          ExceptionList = pvStack_c;
          return 1;
        }
        FUN_00649920(auStack_14,s_Wave__d_Wavelength_0072edb0,iVar5);
        uStack_4 = 2;
        uVar6 = FUN_00649940();
        iVar8 = FUN_00647e40(param_2,uVar6);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar8 == 0) {
          param_1[iVar5 + 0xb4] = param_3[0x94];
          FUN_004e8a30();
          ExceptionList = pvStack_c;
          return 1;
        }
        FUN_00649920(auStack_10,s_Wave__d_TimeScale_0072ed9c,iVar5);
        uStack_4 = 3;
        uVar6 = FUN_00649940();
        iVar8 = FUN_00647e40(param_2,uVar6);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar8 == 0) break;
        iVar5 = iVar5 + 1;
        if (3 < iVar5) {
          uVar6 = FUN_004e3380(param_2,param_3);
          iVar5 = FUN_00647e40(param_2,s_DontRebuild_0072efc0);
          if (iVar5 == 0) {
            bVar10 = false;
          }
          iVar5 = FUN_00647e40(param_2,s_DesiredHeight_0072efa4);
          if (iVar5 == 0) {
            if (*param_3 != 2) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x6f] = param_3[0x94];
            ExceptionList = pvStack_c;
            return 1;
          }
          iVar5 = FUN_00647e40(param_2,s_CurHeight_0072efb4);
          if (iVar5 == 0) {
            if (*param_3 != 2) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x6e] = param_3[0x94];
            ExceptionList = pvStack_c;
            return 1;
          }
          iVar5 = FUN_00647e40(param_2,s_TransSpeed_007298cc);
          if (iVar5 == 0) {
            if (*param_3 != 2) {
              ExceptionList = pvStack_c;
              return 0;
            }
            param_1[0x70] = param_3[0x94];
            ExceptionList = pvStack_c;
            return 1;
          }
          if (!bVar10) {
            ExceptionList = pvStack_c;
            return uVar6;
          }
          if ((*(byte *)((int)param_1 + 0x1d2) & 0x40) == 0) {
            FUN_004e93f0();
            ExceptionList = pvStack_c;
            return uVar6;
          }
          ExceptionList = pvStack_c;
          return uVar6;
        }
      }
      param_1[iVar5 + 0xbc] = param_3[0x94];
      FUN_004e8a30();
      ExceptionList = pvStack_c;
      return 1;
    }
    if (*param_3 != 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    uVar7 = param_3[0x93];
    if ((int)uVar7 < 0x100) {
      if ((int)uVar7 < 0) {
        uVar7 = 0;
        goto LAB_004ec5c6;
      }
      if ((int)uVar7 < 0x100) goto LAB_004ec5c6;
    }
    uVar7 = 0xff;
LAB_004ec5c6:
    if (uVar7 < *(byte *)(param_1 + 0x74)) {
      uVar7 = (uint)*(byte *)(param_1 + 0x74);
    }
    *(char *)((int)param_1 + 0x1d1) = (char)uVar7;
    (**(code **)(*param_1 + 0x10))(0);
    ExceptionList = pvStack_c;
    return 1;
  }
  if (*param_3 != 1) {
    ExceptionList = pvStack_c;
    return 0;
  }
  uVar7 = param_3[0x93];
  if ((int)uVar7 < 0x100) {
    if ((int)uVar7 < 0) {
      uVar7 = 0;
      goto LAB_004ec560;
    }
    if ((int)uVar7 < 0x100) goto LAB_004ec560;
  }
  uVar7 = 0xff;
LAB_004ec560:
  if (*(byte *)((int)param_1 + 0x1d1) < uVar7) {
    uVar7 = (uint)*(byte *)((int)param_1 + 0x1d1);
  }
  *(char *)(param_1 + 0x74) = (char)uVar7;
  (**(code **)(*param_1 + 0x10))(0);
  ExceptionList = pvStack_c;
  return 1;
}

