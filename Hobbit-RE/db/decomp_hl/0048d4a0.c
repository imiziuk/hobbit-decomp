
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_0048d4a0(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  float10 fVar8;
  int local_980;
  int *local_97c;
  undefined1 local_978 [4];
  undefined1 local_974 [4];
  undefined1 local_970 [4];
  int local_96c [2];
  undefined1 local_964 [511];
  undefined1 local_765;
  int local_748;
  int local_744;
  int local_740;
  int local_72c;
  int local_728;
  uint local_720;
  float local_71c;
  int local_718;
  int local_714 [2];
  undefined1 local_70c [568];
  int local_4d4;
  int local_4d0;
  uint local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4bc [150];
  undefined1 local_264 [600];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3037;
  local_c = ExceptionList;
  local_97c = param_1;
  if (DAT_00798540 != 0) {
    ExceptionList = &local_c;
    iVar3 = FUN_00647e40(param_3,s_Opening_Cinema_007294ec);
    if (iVar3 == 0) {
      FUN_00425440();
      local_4d0 = param_1[0x33];
      local_4d4 = param_1[0x32];
      local_714[0] = 0xf;
      *param_2 = 0xf;
      FUN_00424770(local_70c);
      ExceptionList = local_c;
      return param_2;
    }
    iVar3 = FUN_00647e40(param_3,s_View_Fog_Start_00729558);
    if (iVar3 == 0) {
      FUN_00425440();
      local_4c4 = param_1[0x2f];
      local_714[0] = 2;
      *param_2 = 2;
      FUN_00424770(local_70c);
      ExceptionList = local_c;
      return param_2;
    }
    iVar3 = FUN_00647e40(param_3,s_View_Fog_End_00729548);
    if (iVar3 == 0) {
      FUN_00425440();
      local_4c4 = param_1[0x30];
      local_714[0] = 2;
      *param_2 = 2;
      FUN_00424770(local_70c);
      ExceptionList = local_c;
      return param_2;
    }
    FUN_00425440();
    iVar3 = FUN_00647cf0(s_View_Fog_Color_00729568);
    iVar4 = FUN_00647e80(param_3,s_View_Fog_Color_00729568,iVar3);
    if (iVar4 != 0) {
LAB_0048d70a:
      iVar3 = FUN_00647e40(param_3,s_View_Fog_Enabled_00729534);
      if (iVar3 == 0) {
        FUN_00425440();
        local_4c0 = param_1[0x31];
        local_714[0] = 3;
        *param_2 = 3;
        FUN_00424770(local_70c);
        ExceptionList = local_c;
        return param_2;
      }
      FUN_00425440();
      piVar5 = (int *)FUN_004abdf0(local_714,param_3);
      local_96c[0] = *piVar5;
      FUN_00424890(piVar5 + 2);
      if (local_96c[0] == 0) {
        piVar5 = (int *)FUN_005657a0(local_714,param_3);
        local_96c[0] = *piVar5;
        FUN_00424890(piVar5 + 2);
        if (local_96c[0] == 0) {
          piVar5 = (int *)FUN_00571590(local_714,param_3);
          local_96c[0] = *piVar5;
          FUN_00424890(piVar5 + 2);
        }
      }
      *param_2 = local_96c[0];
      FUN_00424770(local_964);
      ExceptionList = local_c;
      return param_2;
    }
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_714[0] = 0x11;
      FUN_00425250(param_1 + 0x2e);
      *param_2 = local_714[0];
      FUN_00424770(local_70c);
      ExceptionList = local_c;
      return param_2;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
    if (iVar4 == 0) {
      bVar1 = *(byte *)((int)param_1 + 0xba);
    }
    else {
      iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
      if (iVar4 == 0) {
        local_4c8 = (uint)*(byte *)((int)param_1 + 0xb9);
        goto LAB_0048d6da;
      }
      iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
      if (iVar4 == 0) {
        local_4c8 = (uint)*(byte *)(param_1 + 0x2e);
        goto LAB_0048d6da;
      }
      iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
      if (iVar3 != 0) goto LAB_0048d70a;
      bVar1 = *(byte *)((int)param_1 + 0xbb);
    }
    local_4c8 = (uint)bVar1;
LAB_0048d6da:
    local_714[0] = 1;
    *param_2 = 1;
    FUN_00424770(local_70c);
    ExceptionList = local_c;
    return param_2;
  }
  ExceptionList = &local_c;
  iVar3 = FUN_00647e40(param_3,s_Initial_Load_Layers_Layer_List_C_00729720);
  if (iVar3 == 0) {
    FUN_00425440();
    local_720 = param_1[0x3e];
    local_96c[0] = 1;
    *param_2 = 1;
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = 0;
  if (0 < param_1[0x3e]) {
    do {
      FUN_00649920(&local_980,s_Initial_Load_Layers_Layer__d_00729700,iVar3);
      local_4 = 0;
      uVar6 = FUN_00649940();
      iVar4 = FUN_00647e40(param_3,uVar6);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar4 == 0) {
        FUN_00425440();
        local_96c[0] = 6;
        FUN_00647d70(local_964,*(undefined4 *)(iVar3 * 0x2c + param_1[0x3f]),0x200);
        *param_2 = local_96c[0];
        local_765 = 0;
        FUN_00424770(local_964);
        ExceptionList = local_c;
        return param_2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x3e]);
  }
  iVar3 = FUN_00647e40(param_3,s_Initial_Resource_Layers_Layer_Li_007296d4);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_720 = param_1[0x45];
    goto LAB_0048e404;
  }
  iVar3 = 0;
  if (0 < param_1[0x45]) {
    do {
      FUN_00649920(&local_980,s_Initial_Resource_Layers_Layer__d_007296b0,iVar3);
      local_4 = 1;
      uVar6 = FUN_00649940();
      iVar4 = FUN_00647e40(param_3,uVar6);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar4 == 0) {
        FUN_00406a80();
        local_96c[0] = 6;
        piVar5 = *(int **)(iVar3 * 0x2c + param_1[0x46]);
        goto LAB_0048e3a5;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x45]);
  }
  iVar3 = FUN_00647e40(param_3,s_Get_Data_From_Current_Bilbo___>_00729788);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_96c[0] = 0xc;
    local_720 = 0;
    *param_2 = 0xc;
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  iVar3 = FUN_00647cf0(s_Bilbo_Start_Position_00729770);
  iVar4 = FUN_00647e80(param_3,s_Bilbo_Start_Position_00729770,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_748 = param_1[0x2a];
      local_744 = param_1[0x2b];
      local_740 = param_1[0x2c];
      local_96c[0] = 8;
      *param_2 = 8;
      FUN_00424770(local_964);
      ExceptionList = local_c;
      return param_2;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
    if (iVar4 == 0) {
      local_71c = (float)param_1[0x2a];
LAB_0048dafb:
      local_96c[0] = 2;
      *param_2 = 2;
      FUN_00424770(local_964);
      ExceptionList = local_c;
      return param_2;
    }
    iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
    if (iVar4 == 0) {
      local_71c = (float)param_1[0x2b];
      goto LAB_0048dafb;
    }
    iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
    if (iVar3 == 0) {
      local_71c = (float)param_1[0x2c];
      goto LAB_0048dafb;
    }
  }
  FUN_00406a80();
  iVar3 = FUN_00647e40(param_3,s_Bilbo_Start_Yaw_00729760);
  if (iVar3 == 0) {
    local_71c = (float)param_1[0x2d];
    local_96c[0] = 10;
    *param_2 = 10;
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,&DAT_00725c94);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_96c[0] = 4;
    uVar6 = (**(code **)(*param_1 + 0x4c))(0x200);
    FUN_00647d70(local_964,uVar6);
    local_765 = 0;
LAB_0048dbba:
    *param_2 = local_96c[0];
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_View_Fog_Start_00729558);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_71c = (float)param_1[0x2f];
    local_96c[0] = 2;
    *param_2 = 2;
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_View_Fog_End_00729548);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_71c = (float)param_1[0x30];
    local_96c[0] = 2;
    *param_2 = 2;
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  iVar3 = FUN_00647cf0(s_View_Fog_Color_00729568);
  iVar4 = FUN_00647e80(param_3,s_View_Fog_Color_00729568,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_714[0] = 0x11;
      FUN_00425250(param_1 + 0x2e);
      *param_2 = local_714[0];
      FUN_00424770(local_70c);
      ExceptionList = local_c;
      return param_2;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
    if (iVar4 == 0) {
      bVar1 = *(byte *)((int)param_1 + 0xba);
    }
    else {
      iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
      if (iVar4 == 0) {
        local_4c8 = (uint)*(byte *)((int)param_1 + 0xb9);
        goto LAB_0048dd70;
      }
      iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
      if (iVar4 == 0) {
        local_4c8 = (uint)*(byte *)(param_1 + 0x2e);
        goto LAB_0048dd70;
      }
      iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
      if (iVar3 != 0) goto LAB_0048dda0;
      bVar1 = *(byte *)((int)param_1 + 0xbb);
    }
    local_4c8 = (uint)bVar1;
LAB_0048dd70:
    local_714[0] = 1;
LAB_0048dd7b:
    *param_2 = local_714[0];
    FUN_00424770(local_70c);
    ExceptionList = local_c;
    return param_2;
  }
LAB_0048dda0:
  iVar3 = FUN_00647e40(param_3,s_View_Fog_Enabled_00729534);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_718 = param_1[0x31];
    local_96c[0] = 3;
    *param_2 = 3;
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  pbVar7 = (byte *)FUN_00583210(0);
  iVar3 = FUN_00647cf0(s_Lights_Ambient_Light_00729748);
  iVar4 = FUN_00647e80(param_3,s_Lights_Ambient_Light_00729748,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 != iVar4) {
      iVar3 = iVar3 + param_3;
      iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
      if (iVar4 == 0) {
        local_4c8 = (uint)pbVar7[2];
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
        if (iVar4 == 0) {
LAB_0048de93:
          local_714[0] = 1;
          local_4c8 = (uint)pbVar7[1];
          goto LAB_0048dfb7;
        }
        iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
        if (iVar4 == 0) {
LAB_0048dec0:
          local_714[0] = 1;
          local_4c8 = (uint)*pbVar7;
          goto LAB_0048dfb7;
        }
        iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
        if (iVar3 != 0) goto LAB_0048def0;
LAB_0048dfa1:
        local_4c8 = (uint)pbVar7[3];
      }
LAB_0048dfb0:
      local_714[0] = 1;
      goto LAB_0048dfb7;
    }
LAB_0048de3c:
    local_714[0] = 0x11;
    FUN_00425250(pbVar7);
LAB_0048dfb7:
    *param_2 = local_714[0];
    FUN_00424770(local_70c);
    ExceptionList = local_c;
    return param_2;
  }
LAB_0048def0:
  FUN_00425440();
  pbVar7 = (byte *)FUN_00583250(0);
  iVar3 = FUN_00647cf0(s_Lights_Shadow_Ambient_00729698);
  iVar4 = FUN_00647e80(param_3,s_Lights_Shadow_Ambient_00729698,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) goto LAB_0048de3c;
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
    if (iVar4 == 0) {
      local_4c8 = (uint)pbVar7[2];
      goto LAB_0048dfb0;
    }
    iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
    if (iVar4 == 0) goto LAB_0048de93;
    iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
    if (iVar4 == 0) goto LAB_0048dec0;
    iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
    if (iVar3 == 0) goto LAB_0048dfa1;
  }
  local_980 = 0;
  do {
    FUN_00425440();
    iVar3 = local_980;
    pbVar7 = (byte *)FUN_00583210(local_980);
    FUN_00649920(local_974,s_Lights_Channel__d_Ambient_Light_00729678,iVar3);
    local_4 = 2;
    uVar6 = FUN_00649940();
    iVar3 = FUN_00647cf0(uVar6);
    iVar4 = FUN_00647e80(param_3,uVar6,iVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_00647cf0(param_3);
      if (iVar3 == iVar4) {
        local_714[0] = 0x11;
        FUN_00425250(pbVar7);
        bVar2 = true;
      }
      else {
        iVar3 = iVar3 + param_3;
        iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
        if (iVar4 == 0) {
          bVar2 = true;
          local_714[0] = 1;
          local_4c8 = (uint)pbVar7[2];
        }
        else {
          iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
          if (iVar4 == 0) {
            bVar2 = true;
            local_714[0] = 1;
            local_4c8 = (uint)pbVar7[1];
          }
          else {
            iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
            if (iVar4 == 0) {
              bVar2 = true;
              local_714[0] = 1;
              local_4c8 = (uint)*pbVar7;
            }
            else {
              iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
              if (iVar3 != 0) goto LAB_0048e124;
              bVar2 = true;
              local_714[0] = 1;
              local_4c8 = (uint)pbVar7[3];
            }
          }
        }
      }
    }
    else {
LAB_0048e124:
      bVar2 = false;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    if (bVar2) goto LAB_0048dd7b;
    FUN_00425440();
    iVar3 = local_980;
    pbVar7 = (byte *)FUN_00583250(local_980);
    FUN_00649920(local_970,s_Lights_Channel__d_Shadow_Ambient_007295c4,iVar3);
    local_4 = 3;
    uVar6 = FUN_00649940();
    iVar3 = FUN_00647cf0(uVar6);
    iVar4 = FUN_00647e80(param_3,uVar6,iVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_00647cf0(param_3);
      if (iVar3 == iVar4) {
        local_96c[0] = 0x11;
        FUN_00425250(pbVar7);
        bVar2 = true;
      }
      else {
        iVar3 = iVar3 + param_3;
        iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
        if (iVar4 == 0) {
          bVar2 = true;
          local_96c[0] = 1;
          local_720 = (uint)pbVar7[2];
        }
        else {
          iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
          if (iVar4 == 0) {
            bVar2 = true;
            local_96c[0] = 1;
            local_720 = (uint)pbVar7[1];
          }
          else {
            iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
            if (iVar4 == 0) {
              bVar2 = true;
              local_96c[0] = 1;
              local_720 = (uint)*pbVar7;
            }
            else {
              iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
              if (iVar3 != 0) goto LAB_0048e26d;
              bVar2 = true;
              local_96c[0] = 1;
              local_720 = (uint)pbVar7[3];
            }
          }
        }
      }
    }
    else {
LAB_0048e26d:
      bVar2 = false;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar3 = local_980;
    if (bVar2) goto LAB_0048dbba;
    FUN_00649920(local_978,s_Lights_Channel__d_Shadow_Alpha_007295a4,local_980);
    local_4 = 4;
    uVar6 = FUN_00649940();
    iVar4 = FUN_00647e40(param_3,uVar6);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar4 == 0) {
      FUN_00425440();
      local_96c[0] = 2;
      fVar8 = (float10)FUN_00583270(iVar3);
      local_71c = (float)fVar8;
      *param_2 = local_96c[0];
      FUN_00424770(local_964);
      ExceptionList = local_c;
      return param_2;
    }
    local_980 = iVar3 + 1;
  } while (local_980 < 8);
  iVar3 = FUN_00647e40(param_3,s_Lights_Intensity_Offset_0072958c);
  if (iVar3 == 0) {
    FUN_00425440();
    local_71c = (float)_DAT_0077795c;
    local_96c[0] = 2;
    *param_2 = 2;
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Level_Name_00729580);
  if (iVar3 == 0) {
    FUN_00425440();
    local_96c[0] = 4;
    piVar5 = local_97c + 0x34;
LAB_0048e3a5:
    FUN_00647d70(local_964,piVar5,0x200);
    local_765 = 0;
    *param_2 = local_96c[0];
    FUN_00424770(local_964);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Number_of_Quests_0072945c);
  if (iVar3 != 0) {
    iVar3 = FUN_00647e40(param_3,s_Opening_Cinema_007294ec);
    if (iVar3 == 0) {
      FUN_00425440();
      local_72c = local_97c[0x32];
      local_728 = local_97c[0x33];
      local_96c[0] = 0xf;
      *param_2 = 0xf;
      FUN_00424770(local_964);
      ExceptionList = local_c;
      return param_2;
    }
    FUN_00425440();
    piVar5 = (int *)FUN_004abdf0(local_96c,param_3);
    local_4bc[0] = *piVar5;
    FUN_00424890(piVar5 + 2);
    if (local_4bc[0] == 0) {
      piVar5 = (int *)FUN_005657a0(local_96c,param_3);
      local_4bc[0] = *piVar5;
      FUN_00424890(piVar5 + 2);
      if (local_4bc[0] == 0) {
        piVar5 = (int *)FUN_005a0fa0(local_96c,param_3);
        local_4bc[0] = *piVar5;
        FUN_00424890(piVar5 + 2);
        if (local_4bc[0] == 0) {
          uVar6 = FUN_00571590(local_264,param_3);
          FUN_0048e590(uVar6);
        }
      }
    }
    FUN_00463a40(local_4bc);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00425440();
  local_720 = local_97c[0x4a];
LAB_0048e404:
  local_96c[0] = 1;
  *param_2 = 1;
  FUN_00424770(local_964);
  ExceptionList = local_c;
  return param_2;
}

