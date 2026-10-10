
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0048c690(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  int iVar12;
  int *piVar13;
  int *local_60;
  int *local_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  int *local_3c;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar12 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2feb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_5c = param_1;
  iVar4 = FUN_00647e40(param_2,s_Initial_Load_Layers_Layer_List_C_00729720);
  if (iVar4 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_c;
      return 0;
    }
    iVar12 = param_3[0x93];
    iVar4 = param_1[0x40];
    if (param_1[0x40] < iVar12) {
      iVar4 = iVar12;
    }
    FUN_00417750(iVar4);
    param_1[0x3e] = iVar12;
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = 0;
  if (0 < param_1[0x3e]) {
    do {
      FUN_00649920(&local_60,s_Initial_Load_Layers_Layer__d_00729700,iVar4);
      local_4 = 0;
      uVar5 = FUN_00649940();
      FUN_00649b20(uVar5);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00649950();
      iVar6 = FUN_00647e40(iVar12,local_38);
      if (iVar6 == 0) {
        if ((*param_3 != 6) && (*param_3 != 4)) {
          local_4 = 0xffffffff;
          FUN_00649ba0();
          ExceptionList = local_c;
          return 0;
        }
        FUN_0064a2e0(param_3 + 2);
        local_4 = 0xffffffff;
        FUN_00649ba0();
        ExceptionList = local_c;
        return 1;
      }
      local_4 = 0xffffffff;
      FUN_00649ba0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0x3e]);
  }
  iVar4 = FUN_00647e40(iVar12,s_Initial_Resource_Layers_Layer_Li_007296d4);
  if (iVar4 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_c;
      return 0;
    }
    local_5c = (int *)param_3[0x93];
    iVar12 = param_1[0x47];
    param_3 = local_5c;
    if ((int)local_5c <= iVar12) {
      param_3 = (int *)iVar12;
    }
    if (param_3 != (int *)iVar12) {
      local_3c = (int *)operator_new((int)param_3 * 0x2c + 4);
      local_4 = 3;
      if (local_3c == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = local_3c + 1;
        *local_3c = (int)param_3;
        FUN_006c043b(piVar13,0x2c,param_3,FUN_006499d0,FUN_00649ba0);
      }
      iVar12 = 0;
      local_4 = 0xffffffff;
      if (0 < param_1[0x45]) {
        iVar4 = 0;
        do {
          FUN_0064a320(param_1[0x46] + iVar4);
          iVar12 = iVar12 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar12 < param_1[0x45]);
      }
      if (param_1[0x46] != 0) {
        FUN_00407f70(3);
      }
      param_1[0x47] = (int)param_3;
      param_1[0x46] = (int)piVar13;
    }
    param_1[0x45] = (int)local_5c;
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = 0;
  if (0 < param_1[0x45]) {
    do {
      FUN_00649920(&local_60,s_Initial_Resource_Layers_Layer__d_007296b0,iVar4);
      local_4 = 4;
      uVar5 = FUN_00649940();
      FUN_00649b20(uVar5);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_00649950();
      iVar6 = FUN_00647e40(iVar12,local_38);
      if (iVar6 == 0) {
        if ((*param_3 != 6) && (*param_3 != 4)) {
          local_4 = 0xffffffff;
          FUN_00649ba0();
          ExceptionList = local_c;
          return 0;
        }
        FUN_0064a2e0(param_3 + 2);
        local_4 = 0xffffffff;
        FUN_00649ba0();
        ExceptionList = local_c;
        return 1;
      }
      local_4 = 0xffffffff;
      FUN_00649ba0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0x45]);
  }
  iVar4 = FUN_00647e40(iVar12,&DAT_00725c94);
  piVar13 = param_3;
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x48))(param_3 + 2);
  }
  iVar4 = FUN_00647e40(iVar12,s_View_Fog_Start_00729558);
  if (iVar4 == 0) {
    if (*piVar13 != 2) {
      ExceptionList = local_c;
      return 0;
    }
    param_1[0x2f] = piVar13[0x94];
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = FUN_00647e40(iVar12,s_View_Fog_End_00729548);
  if (iVar4 == 0) {
    if (*piVar13 != 2) {
      ExceptionList = local_c;
      return 0;
    }
    param_1[0x30] = piVar13[0x94];
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = FUN_00647cf0(s_View_Fog_Color_00729568);
  iVar6 = FUN_00647e80(iVar12,s_View_Fog_Color_00729568,iVar4);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(iVar12);
    if (iVar4 == iVar6) {
      if (*piVar13 == 0x11) {
        *(undefined1 *)((int)param_1 + 0xbb) = *(undefined1 *)((int)piVar13 + 0x223);
        *(undefined1 *)((int)param_1 + 0xba) = *(undefined1 *)((int)piVar13 + 0x222);
        *(undefined1 *)((int)param_1 + 0xb9) = *(undefined1 *)((int)piVar13 + 0x221);
        *(char *)(param_1 + 0x2e) = (char)piVar13[0x88];
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar4 = iVar4 + iVar12;
      iVar6 = FUN_00647e40(&DAT_00728244,iVar4);
      if (iVar6 == 0) {
        if (*piVar13 == 1) {
          *(char *)((int)param_1 + 0xba) = (char)piVar13[0x93];
          ExceptionList = local_c;
          return 1;
        }
      }
      else {
        iVar6 = FUN_00647e40(&DAT_00728240,iVar4);
        if (iVar6 == 0) {
          if (*piVar13 == 1) {
            *(char *)((int)param_1 + 0xb9) = (char)piVar13[0x93];
            ExceptionList = local_c;
            return 1;
          }
        }
        else {
          iVar6 = FUN_00647e40(&DAT_0072823c,iVar4);
          if (iVar6 == 0) {
            if (*piVar13 == 1) {
              *(char *)(param_1 + 0x2e) = (char)piVar13[0x93];
              ExceptionList = local_c;
              return 1;
            }
          }
          else {
            iVar4 = FUN_00647e40(&DAT_00728238,iVar4);
            if ((iVar4 == 0) && (*piVar13 == 1)) {
              *(char *)((int)param_1 + 0xbb) = (char)piVar13[0x93];
              ExceptionList = local_c;
              return 1;
            }
          }
        }
      }
    }
  }
  iVar4 = FUN_00647e40(iVar12,s_View_Fog_Enabled_00729534);
  if (iVar4 == 0) {
    if (*piVar13 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    param_1[0x31] = piVar13[0x95];
    ExceptionList = local_c;
    return 1;
  }
  piVar1 = piVar13 + 0x88;
  param_2 = *piVar1;
  local_60 = piVar1;
  piVar7 = (int *)FUN_00583250(0);
  param_2 = *piVar7;
  iVar4 = FUN_00647cf0(s_Lights_Shadow_Ambient_00729698);
  iVar6 = FUN_00647e80(iVar12,s_Lights_Shadow_Ambient_00729698,iVar4);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(iVar12);
    if (iVar4 == iVar6) {
      if (*piVar13 != 0x11) goto LAB_0048ccdf;
      param_2 = *piVar1;
    }
    else {
      iVar4 = iVar4 + iVar12;
      iVar6 = FUN_00647e40(&DAT_00728244,iVar4);
      if (iVar6 == 0) {
        if (*piVar13 != 1) goto LAB_0048ccdf;
        param_2._0_3_ = CONCAT12((char)piVar13[0x93],(undefined2)param_2);
      }
      else {
        iVar6 = FUN_00647e40(&DAT_00728240,iVar4);
        if (iVar6 == 0) {
          if (*piVar13 != 1) goto LAB_0048ccdf;
          param_2._0_2_ = CONCAT11((char)piVar13[0x93],(undefined1)param_2);
        }
        else {
          iVar6 = FUN_00647e40(&DAT_0072823c,iVar4);
          if (iVar6 == 0) {
            if (*piVar13 != 1) goto LAB_0048ccdf;
            param_2 = CONCAT31(param_2._1_3_,(char)piVar13[0x93]);
          }
          else {
            iVar4 = FUN_00647e40(&DAT_00728238,iVar4);
            if ((iVar4 != 0) || (*piVar13 != 1)) goto LAB_0048ccdf;
            param_2 = CONCAT13((char)piVar13[0x93],(undefined3)param_2);
          }
        }
      }
    }
    iVar4 = 0;
LAB_0048ccc6:
    FUN_00583220(&param_2,iVar4);
    iVar4 = 1;
  }
  else {
LAB_0048ccdf:
    iVar4 = 0;
    do {
      piVar13 = (int *)FUN_00583210(iVar4);
      param_2 = *piVar13;
      FUN_00649920(local_58,s_Lights_Channel__d_Ambient_Light_00729678,iVar4);
      local_4 = 7;
      uVar5 = FUN_00649940();
      iVar6 = FUN_00647e40(iVar12,uVar5);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        FUN_00649920(local_54,s_Lights_Channel__d_Ambient_Light_00729678,iVar4);
        local_4 = 8;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647cf0(uVar5);
        iVar8 = FUN_00647e80(iVar12,uVar5,iVar6);
        if (iVar8 == 0) {
          iVar8 = FUN_00647cf0(iVar12);
          if (iVar6 == iVar8) {
            if (*param_3 != 0x11) goto LAB_0048ce92;
            param_2 = *local_60;
            bVar3 = true;
          }
          else {
            iVar6 = iVar12 + iVar6;
            iVar8 = FUN_00647e40(&DAT_00728244,iVar6);
            if (iVar8 == 0) {
              if (*param_3 != 1) goto LAB_0048ce92;
              param_2._0_3_ = CONCAT12((char)param_3[0x93],(undefined2)param_2);
              bVar3 = true;
            }
            else {
              iVar8 = FUN_00647e40(&DAT_00728240,iVar6);
              if (iVar8 == 0) {
                if (*param_3 != 1) goto LAB_0048ce92;
                param_2._0_2_ = CONCAT11((char)param_3[0x93],(undefined1)param_2);
                bVar3 = true;
              }
              else {
                iVar8 = FUN_00647e40(&DAT_0072823c,iVar6);
                if (iVar8 == 0) {
                  if (*param_3 != 1) goto LAB_0048ce92;
                  param_2 = CONCAT31(param_2._1_3_,(char)param_3[0x93]);
                  bVar3 = true;
                }
                else {
                  iVar6 = FUN_00647e40(&DAT_00728238,iVar6);
                  if ((iVar6 != 0) || (*param_3 != 1)) goto LAB_0048ce92;
                  param_2 = CONCAT13((char)param_3[0x93],(undefined3)param_2);
                  bVar3 = true;
                }
              }
            }
          }
        }
        else {
LAB_0048ce92:
          bVar3 = false;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        if (bVar3) {
          FUN_005831e0(local_60,iVar4);
          ExceptionList = local_c;
          return 1;
        }
      }
      else {
        FUN_00649920(local_50,s_Lights_Channel__d_Ambient_Light__00729654,iVar4);
        local_4 = 9;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647e40(iVar12,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          puVar9 = (undefined2 *)FUN_00583210(iVar4);
          param_2._0_3_ = CONCAT12((char)param_3[0x93],*puVar9);
          param_2 = CONCAT13(*(undefined1 *)((int)puVar9 + 3),(undefined3)param_2);
          FUN_005831e0(&param_2,iVar4);
          ExceptionList = local_c;
          return 1;
        }
        FUN_00649920(local_4c,s_Lights_Channel__d_Ambient_Light__00729630);
        local_4 = 10;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647e40(iVar12,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          puVar10 = (undefined1 *)FUN_00583210(iVar4);
          uVar11 = *puVar10;
          param_2._1_3_ = CONCAT21(*(undefined2 *)(puVar10 + 2),(char)param_3[0x93]);
LAB_0048d2e3:
          param_2 = CONCAT31(param_2._1_3_,uVar11);
          FUN_005831e0(&param_2,iVar4);
          ExceptionList = local_c;
          return 1;
        }
        FUN_00649920(local_48,s_Lights_Channel__d_Ambient_Light__0072960c);
        local_4 = 0xb;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647e40(iVar12,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          iVar12 = FUN_00583210(iVar4);
          param_2 = CONCAT31(*(undefined3 *)(iVar12 + 1),(char)param_3[0x93]);
          FUN_005831e0(&param_2,iVar4);
          ExceptionList = local_c;
          return 1;
        }
        FUN_00649920(local_44,s_Lights_Channel__d_Ambient_Light__007295e8);
        local_4 = 0xc;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647e40(iVar12,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          puVar10 = (undefined1 *)FUN_00583210(iVar4);
          uVar11 = *puVar10;
          param_2._1_3_ = CONCAT12((char)param_3[0x93],*(undefined2 *)(puVar10 + 1));
          goto LAB_0048d2e3;
        }
      }
      piVar13 = (int *)FUN_00583250(iVar4);
      param_2 = *piVar13;
      FUN_00649920(local_40,s_Lights_Channel__d_Shadow_Ambient_007295c4,iVar4);
      local_4 = 0xd;
      uVar5 = FUN_00649940();
      iVar6 = FUN_00647cf0(uVar5);
      iVar8 = FUN_00647e80(iVar12,uVar5,iVar6);
      if (iVar8 == 0) {
        iVar8 = FUN_00647cf0(iVar12);
        if (iVar6 == iVar8) {
          if (*param_3 != 0x11) goto LAB_0048d157;
          param_2 = *local_60;
          bVar3 = true;
        }
        else {
          iVar6 = iVar12 + iVar6;
          iVar8 = FUN_00647e40(&DAT_00728244,iVar6);
          if (iVar8 == 0) {
            if (*param_3 != 1) goto LAB_0048d157;
            param_2._0_3_ = CONCAT12((char)param_3[0x93],(undefined2)param_2);
            bVar3 = true;
          }
          else {
            iVar8 = FUN_00647e40(&DAT_00728240,iVar6);
            if (iVar8 == 0) {
              if (*param_3 != 1) goto LAB_0048d157;
              param_2._0_2_ = CONCAT11((char)param_3[0x93],(undefined1)param_2);
              bVar3 = true;
            }
            else {
              iVar8 = FUN_00647e40(&DAT_0072823c,iVar6);
              if (iVar8 == 0) {
                if (*param_3 != 1) goto LAB_0048d157;
                param_2 = CONCAT31(param_2._1_3_,(char)param_3[0x93]);
                bVar3 = true;
              }
              else {
                iVar6 = FUN_00647e40(&DAT_00728238,iVar6);
                if ((iVar6 != 0) || (*param_3 != 1)) goto LAB_0048d157;
                param_2 = CONCAT13((char)param_3[0x93],(undefined3)param_2);
                bVar3 = true;
              }
            }
          }
        }
      }
      else {
LAB_0048d157:
        bVar3 = false;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (bVar3) goto LAB_0048ccc6;
      FUN_00649920(&local_3c,s_Lights_Channel__d_Shadow_Alpha_007295a4,iVar4);
      local_4 = 0xe;
      uVar5 = FUN_00649940();
      iVar6 = FUN_00647e40(iVar12,uVar5);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        FUN_00583260(param_3[0x94],iVar4);
        ExceptionList = local_c;
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    iVar4 = FUN_00647e40(iVar12,s_Lights_Intensity_Offset_0072958c);
    if (iVar4 == 0) {
      if (*param_3 == 2) {
        fVar2 = (float)param_3[0x94];
        _DAT_0077795c = _DAT_006e958c;
        if ((fVar2 < _DAT_006e958c == (NAN(fVar2) || NAN(_DAT_006e958c))) ||
           (_DAT_0077795c = fVar2, _DAT_006e9588 <= fVar2)) {
          iVar4 = 1;
        }
        else {
          iVar4 = 1;
          _DAT_0077795c = _DAT_006e9588;
        }
      }
      else {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = FUN_00647e40(iVar12,s_Level_Name_00729580);
      piVar13 = local_5c;
      if (iVar4 == 0) {
        iVar12 = *param_3;
        if ((((iVar12 == 4) || (iVar12 == 7)) || (iVar12 == 6)) || (iVar12 == 0xd)) {
          FUN_00647d70(local_5c + 0x34,param_3 + 2,0x20);
          *(undefined1 *)((int)piVar13 + 0xef) = 0;
          iVar4 = 1;
        }
        else {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = FUN_00647e40(iVar12,s_Number_of_Quests_0072945c);
        piVar13 = param_3;
        if (iVar4 == 0) {
          if (*param_3 == 1) {
            local_5c[0x4a] = param_3[0x93];
            iVar4 = 1;
          }
          else {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = FUN_00564940(iVar12,param_3);
          if ((iVar4 == 0) && (iVar4 = FUN_0059ed80(iVar12,piVar13), iVar4 == 0)) {
            iVar4 = FUN_00571480(iVar12,piVar13);
          }
          iVar12 = FUN_00647e40(iVar12,s_Opening_Cinema_007294ec);
          if (iVar12 == 0) {
            if ((*piVar13 == 0xf) || (*piVar13 == 0x10)) {
              local_5c[0x32] = piVar13[0x90];
              local_5c[0x33] = piVar13[0x91];
              iVar4 = 1;
            }
            else {
              iVar4 = 0;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return iVar4;
}

