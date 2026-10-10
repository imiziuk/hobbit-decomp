
undefined4 __thiscall FUN_00489d80(int param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  iVar3 = FUN_00647e40(param_2,s_FX_Resource_00729380);
  if ((iVar3 == 0) && (((iVar3 = *param_3, iVar3 == 0xd || (iVar3 == 4)) || (iVar3 == 0xe)))) {
    FUN_0064a2e0(param_3 + 2);
    FUN_00488c30(local_64);
  }
  iVar3 = FUN_00647cf0(s_FX_Scale_00729374);
  iVar4 = FUN_00647e80(param_2,s_FX_Scale_00729374,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar3 == iVar4) {
      if (*param_3 == 8) {
        FUN_004357e0(param_3 + 0x89);
        goto LAB_00489ec5;
      }
    }
    else {
      iVar3 = iVar3 + param_2;
      iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
      if (iVar4 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x128) = param_3[0x94];
          goto LAB_00489ec5;
        }
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
        if (iVar4 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 300) = param_3[0x94];
LAB_00489ec5:
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
          }
        }
        else {
          iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
          if ((iVar3 == 0) && (*param_3 == 2)) {
            *(int *)(param_1 + 0x130) = param_3[0x94];
            goto LAB_00489ec5;
          }
        }
      }
    }
  }
  iVar3 = FUN_00647e40(param_2,s_FX_Playback_Rate_00729360);
  if ((iVar3 == 0) && (*param_3 == 2)) {
    *(int *)(param_1 + 0x150) = param_3[0x94];
  }
  iVar3 = FUN_00647e40(param_2,s_FX_Start_On_Init_0072934c);
  if ((iVar3 == 0) && (*param_3 == 3)) {
    *(byte *)(param_1 + 0x154) =
         (*(byte *)(param_1 + 0x154) ^ (byte)param_3[0x95]) & 1 ^ *(byte *)(param_1 + 0x154);
  }
  iVar3 = FUN_00647cf0(s_FX_Color_00729340);
  iVar4 = FUN_00647e80(param_2,s_FX_Color_00729340,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar3 == iVar4) {
      if (*param_3 == 0x11) {
        FUN_00425250(param_3 + 0x88);
        goto LAB_0048a016;
      }
    }
    else {
      iVar3 = iVar3 + param_2;
      iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
      if (iVar4 == 0) {
        if (*param_3 == 1) {
          *(char *)(param_1 + 0x136) = (char)param_3[0x93];
          goto LAB_0048a016;
        }
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
        if (iVar4 == 0) {
          if (*param_3 == 1) {
            *(char *)(param_1 + 0x135) = (char)param_3[0x93];
            goto LAB_0048a016;
          }
        }
        else {
          iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
          if (iVar4 == 0) {
            if (*param_3 == 1) {
              *(char *)(param_1 + 0x134) = (char)param_3[0x93];
LAB_0048a016:
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 8;
            }
          }
          else {
            iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
            if ((iVar3 == 0) && (*param_3 == 1)) {
              *(char *)(param_1 + 0x137) = (char)param_3[0x93];
              goto LAB_0048a016;
            }
          }
        }
      }
    }
  }
  iVar3 = FUN_00647e40(param_2,s_Host_Object_00729334);
  if ((iVar3 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
    *(int *)(param_1 + 0x158) = param_3[0x90];
    iVar3 = param_1 + 0x160;
    *(int *)(param_1 + 0x15c) = param_3[0x91];
    if (*(int *)(param_1 + 0x174) == 0) {
      if (*(int *)(param_1 + 0x16c) != 0) {
        FUN_00407f70(3);
      }
      *(undefined4 *)(param_1 + 0x16c) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
    uVar5 = *(undefined4 *)(param_1 + 0x15c);
    uVar2 = *(undefined4 *)(param_1 + 0x158);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar4 = FUN_00406ce0(uVar2,uVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar4 == -1) {
      FUN_00649720();
    }
    else {
      uVar6 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
      FUN_00649720();
      if (uVar6 != 0) {
        cVar1 = *(char *)(uVar6 + 0x7c);
        if ((cVar1 == '\x1c') || (cVar1 == '\x12')) {
          iVar4 = FUN_00469860();
        }
        else {
          if (cVar1 != '\x05') {
            *(undefined4 *)(param_1 + 0x158) = 0;
            *(undefined4 *)(param_1 + 0x15c) = 0;
            goto LAB_0048a1ef;
          }
          iVar4 = FUN_004c7460();
        }
        if (iVar4 != 0) {
          FUN_00649b20(s____Bones____007293ac);
          local_4._0_1_ = 2;
          FUN_00469980(local_38);
          local_4._0_1_ = 0;
          FUN_00649ba0();
          FUN_0053e430(iVar3);
          FUN_00649b20(s____Events____0072939c);
          local_4._0_1_ = 3;
          FUN_00469980(local_38);
          local_4._0_1_ = 0;
          FUN_00649ba0();
          FUN_0053e650(iVar3);
          FUN_00649b20(s____Props____00729390);
          local_4._0_1_ = 4;
          FUN_00469980(local_38);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649ba0();
          FUN_0053e880(iVar3);
        }
      }
    }
  }
LAB_0048a1ef:
  iVar3 = FUN_00647e40(param_2,s_Host_Part_Name_00729324);
  if ((iVar3 == 0) && (((iVar3 = *param_3, iVar3 == 0xd || (iVar3 == 4)) || (iVar3 == 0xe)))) {
    FUN_0064a2e0(param_3 + 2);
    iVar3 = FUN_0064a130(&DAT_0072938c,0);
    if (iVar3 == 0) {
      FUN_00649bd0();
    }
  }
  iVar3 = FUN_0048b7d0(param_2,param_3,s_Rotation_007207f0,local_70);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  }
  uVar5 = FUN_004ab750(param_2,param_3);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return uVar5;
}

