
undefined4 __thiscall FUN_00478570(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_18 [2];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1d30;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x1c);
  ExceptionList = &local_c;
  FUN_00649920(local_18,s__s_Camera_Type_00727fc4,param_2);
  local_4 = 0;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00647e40(param_3,uVar4);
  piVar3 = param_4;
  if ((iVar5 == 0) && ((*param_4 == 1 || (*param_4 == 0xc)))) {
    iVar6 = param_4[0x93];
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    *(int *)(param_1 + 0x1c) = iVar6;
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_Camera_Path_00727fb4,param_2);
  local_4 = 1;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647e40(param_3,uVar4);
  if ((iVar6 == 0) && ((*piVar3 == 0xf || (*piVar3 == 0x10)))) {
    *(int *)(param_1 + 0x20) = piVar3[0x90];
    *(int *)(param_1 + 0x24) = piVar3[0x91];
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4 = 2;
    FUN_00406ce0(uVar4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_Target_00727fa8,param_2);
  local_4 = 3;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647e40(param_3,uVar4);
  if ((iVar6 == 0) && ((*piVar3 == 0xf || (*piVar3 == 0x10)))) {
    *(int *)(param_1 + 0x20) = piVar3[0x90];
    *(int *)(param_1 + 0x24) = piVar3[0x91];
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_FOV_Start_00727f00,param_2);
  local_4 = 4;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647e40(param_3,uVar4);
  if ((iVar6 == 0) && ((*piVar3 == 2 || (*piVar3 == 10)))) {
    *(int *)(param_1 + 0x58) = piVar3[0x94];
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_FOV_End_00727ef4,param_2);
  local_4 = 5;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647e40(param_3,uVar4);
  if ((iVar6 == 0) && ((*piVar3 == 2 || (*piVar3 == 10)))) {
    *(int *)(param_1 + 0x5c) = piVar3[0x94];
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_Transition_00727ee4,param_2);
  local_4 = 6;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647e40(param_3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar6 == 0) {
    if (*piVar3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 0x68) = piVar3[0x95];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_Looping_00727ed8,param_2);
  local_4 = 7;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647e40(param_3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar6 == 0) {
    if (*piVar3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)(param_1 + 100) = piVar3[0x95];
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_Static_Camera_00727f94,param_2);
  local_4 = 8;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647e40(param_3,uVar4);
  if ((iVar6 == 0) && (*piVar3 == 3)) {
    *(int *)(param_1 + 0x6c) = piVar3[0x95];
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = *(int *)(param_1 + 0x60);
  FUN_00649920(&param_4,s__s_Relative_To_Target_00727f7c,param_2);
  local_4 = 9;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00647e40(param_3,uVar4);
  if ((iVar5 == 0) && (*piVar3 == 3)) {
    iVar6 = piVar3[0x95];
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    *(int *)(param_1 + 0x60) = iVar6;
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(&param_4,s__s_Target_Offset_00727f68,param_2);
  local_4 = 10;
  uVar4 = FUN_00649940();
  iVar6 = FUN_00647cf0(uVar4);
  iVar5 = FUN_00647e80(param_3,uVar4,iVar6);
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_3);
    if (iVar6 == iVar5) {
      if (*piVar3 != 8) goto LAB_00478acb;
      *(int *)(param_1 + 0x70) = piVar3[0x89];
      *(int *)(param_1 + 0x74) = piVar3[0x8a];
      *(int *)(param_1 + 0x78) = piVar3[0x8b];
      bVar7 = true;
    }
    else {
      iVar6 = iVar6 + param_3;
      iVar5 = FUN_00647e40(&DAT_00724e78,iVar6);
      if (iVar5 == 0) {
        if (*piVar3 != 2) goto LAB_00478acb;
        *(int *)(param_1 + 0x70) = piVar3[0x94];
        bVar7 = true;
      }
      else {
        iVar5 = FUN_00647e40(&DAT_00724e74,iVar6);
        if (iVar5 == 0) {
          if (*piVar3 != 2) goto LAB_00478acb;
          *(int *)(param_1 + 0x74) = piVar3[0x94];
          bVar7 = true;
        }
        else {
          iVar6 = FUN_00647e40(&DAT_00724e70,iVar6);
          if ((iVar6 != 0) || (*piVar3 != 2)) goto LAB_00478acb;
          *(int *)(param_1 + 0x78) = piVar3[0x94];
          bVar7 = true;
        }
      }
    }
  }
  else {
LAB_00478acb:
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(local_18,s__s_Start_Orient_00727f40,param_2);
  local_4 = 0xb;
  uVar4 = FUN_00649940();
  param_4 = (int *)FUN_00647cf0(uVar4);
  iVar6 = FUN_00647e80(param_3,uVar4,param_4);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_3);
    if (param_4 == (int *)iVar6) {
      if (*piVar3 == 0xb) {
        *(int *)(param_1 + 0x28) = piVar3[0x8c];
        *(int *)(param_1 + 0x2c) = piVar3[0x8d];
        *(int *)(param_1 + 0x30) = piVar3[0x8e];
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
    }
    else {
      iVar5 = param_3 + (int)param_4;
      iVar6 = FUN_004af4a0(iVar5,piVar3,s__Pitch_007207e8,(int *)(param_1 + 0x28));
      if (iVar6 == 0) {
        iVar6 = FUN_004af4a0(iVar5,piVar3,&DAT_007207e0,param_1 + 0x2c);
        if (iVar6 == 0) {
          iVar6 = FUN_004af4a0(iVar5,piVar3,s__Roll_007207d8,param_1 + 0x30);
          bVar7 = iVar6 != 0;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
      }
    }
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(local_18,s__s_End_Orient_00727f20,param_2);
  local_4 = 0xc;
  param_4 = (int *)FUN_00649940();
  iVar6 = FUN_00647cf0(param_4);
  iVar5 = FUN_00647e80(param_3,param_4,iVar6);
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_3);
    if (iVar6 == iVar5) {
      if (*piVar3 == 0xb) {
        *(int *)(param_1 + 0x34) = piVar3[0x8c];
        *(int *)(param_1 + 0x38) = piVar3[0x8d];
        *(int *)(param_1 + 0x3c) = piVar3[0x8e];
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
    }
    else {
      iVar6 = iVar6 + param_3;
      iVar5 = FUN_004af4a0(iVar6,piVar3,s__Pitch_007207e8,(int *)(param_1 + 0x34));
      if (iVar5 == 0) {
        iVar5 = FUN_004af4a0(iVar6,piVar3,&DAT_007207e0,param_1 + 0x38);
        if (iVar5 == 0) {
          iVar6 = FUN_004af4a0(iVar6,piVar3,s__Roll_007207d8,param_1 + 0x3c);
          bVar7 = iVar6 != 0;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
      }
    }
  }
  else {
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  piVar1 = (int *)(param_1 + 0x40);
  FUN_00649920(local_18,s__s_Start_Offset_00727f30,param_2);
  local_4 = 0xd;
  uVar4 = FUN_00649940();
  param_4 = (int *)FUN_00647cf0(uVar4);
  iVar6 = FUN_00647e80(param_3,uVar4,param_4);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_3);
    if (param_4 == (int *)iVar6) {
      if (*piVar3 != 8) goto LAB_00478df2;
      *piVar1 = piVar3[0x89];
      *(int *)(param_1 + 0x44) = piVar3[0x8a];
      *(int *)(param_1 + 0x48) = piVar3[0x8b];
      bVar7 = true;
    }
    else {
      iVar5 = param_3 + (int)param_4;
      iVar6 = FUN_00647e40(&DAT_00724e78,iVar5);
      if (iVar6 == 0) {
        if (*piVar3 != 2) goto LAB_00478df2;
        *piVar1 = piVar3[0x94];
        bVar7 = true;
      }
      else {
        iVar6 = FUN_00647e40(&DAT_00724e74,iVar5);
        if (iVar6 == 0) {
          if (*piVar3 != 2) goto LAB_00478df2;
          *(int *)(param_1 + 0x44) = piVar3[0x94];
          bVar7 = true;
        }
        else {
          iVar6 = FUN_00647e40(&DAT_00724e70,iVar5);
          if ((iVar6 != 0) || (*piVar3 != 2)) goto LAB_00478df2;
          *(int *)(param_1 + 0x48) = piVar3[0x94];
          bVar7 = true;
        }
      }
    }
  }
  else {
LAB_00478df2:
    bVar7 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    ExceptionList = local_c;
    return 1;
  }
  FUN_00649920(local_18,s__s_End_Offset_00727f10,param_2);
  local_4 = 0xe;
  uVar4 = FUN_00649940();
  param_4 = (int *)FUN_00647cf0(uVar4);
  iVar6 = FUN_00647e80(param_3,uVar4,param_4);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_3);
    if (param_4 == (int *)iVar6) {
      if (*piVar3 == 8) {
        FUN_004357e0(piVar3 + 0x89);
        bVar7 = true;
        goto LAB_00478f05;
      }
    }
    else {
      iVar5 = param_3 + (int)param_4;
      iVar6 = FUN_00647e40(&DAT_00724e78,iVar5);
      if (iVar6 == 0) {
        if (*piVar3 == 2) {
          *(int *)(param_1 + 0x4c) = piVar3[0x94];
          bVar7 = true;
          goto LAB_00478f05;
        }
      }
      else {
        iVar6 = FUN_00647e40(&DAT_00724e74,iVar5);
        if (iVar6 == 0) {
          if (*piVar3 == 2) {
            *(int *)(param_1 + 0x50) = piVar3[0x94];
            bVar7 = true;
            goto LAB_00478f05;
          }
        }
        else {
          iVar6 = FUN_00647e40(&DAT_00724e70,iVar5);
          if ((iVar6 == 0) && (*piVar3 == 2)) {
            *(int *)(param_1 + 0x54) = piVar3[0x94];
            bVar7 = true;
            goto LAB_00478f05;
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_00478f05:
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar7) {
    uVar4 = 1;
  }
  else {
    local_18[0] = 0;
    FUN_00649920(local_10,s__s_Predefined_Setup_0072802c,param_2);
    local_4 = 0xf;
    uVar4 = FUN_00649940();
    iVar6 = FUN_00647e40(param_3,uVar4);
    if ((iVar6 == 0) && ((*piVar3 == 1 || (*piVar3 == 0xc)))) {
      local_18[0] = piVar3[0x93];
      param_4 = (int *)0x1;
    }
    else {
      param_4 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    if (param_4 != (int *)0x0) {
      switch(local_18[0]) {
      case 1:
        *(undefined4 *)(param_1 + 0x6c) = 1;
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x70) = 0x40200000;
        *(undefined4 *)(param_1 + 0x78) = 0x41a00000;
        *(undefined4 *)(param_1 + 0x74) = 0x42800000;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *piVar1 = 0;
        *(undefined4 *)(param_1 + 0x44) = 0x42800000;
        *(undefined4 *)(param_1 + 0x48) = 0x42c80000;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x6c) = 1;
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x70) = 0x40200000;
        *(undefined4 *)(param_1 + 0x78) = 0x41a00000;
        *(undefined4 *)(param_1 + 0x74) = 0x42920000;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *piVar1 = 0x40200000;
        *(undefined4 *)(param_1 + 0x44) = 0x42920000;
        *(undefined4 *)(param_1 + 0x48) = 0x42820000;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x6c) = 1;
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0x42c80000;
        *(undefined4 *)(param_1 + 0x74) = 0x42920000;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *piVar1 = 0x42480000;
        *(undefined4 *)(param_1 + 0x44) = 0x42920000;
        *(undefined4 *)(param_1 + 0x48) = 0xc1f00000;
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x6c) = 1;
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0x42920000;
        *(undefined4 *)(param_1 + 0x78) = 0x42c80000;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        FUN_00404870(0xc2480000,0x42920000,0xc1f00000);
      }
    }
    uVar4 = FUN_00474b30(param_2,param_3,piVar3);
  }
  ExceptionList = local_c;
  return uVar4;
}

