
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004bcaa0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar2 = FUN_00647e40(param_2,s_Can_Flip_0072c59c);
  if (iVar2 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[0x98] = (param_3[0x95] << 6 ^ param_1[0x98]) & 0x40U ^ param_1[0x98];
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_Disabled_0072c590);
  if (iVar2 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[0x98] = (param_3[0x95] << 1 ^ param_1[0x98]) & 2U ^ param_1[0x98];
    return 1;
  }
  iStack_28 = 0;
  iStack_24 = 0;
  iStack_20 = 0;
  iVar2 = FUN_00647cf0(s_RenderOrient_0072c580);
  iVar3 = FUN_00647e80(param_2,s_RenderOrient_0072c580,iVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar2 == iVar3) {
      if (*param_3 == 0xb) {
        iStack_28 = param_3[0x8c];
        iStack_24 = param_3[0x8d];
        iStack_20 = param_3[0x8e];
        goto LAB_004bcc25;
      }
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar3 = FUN_00647e40(iVar2,s__Pitch_007207e8);
      if ((iVar3 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
        iStack_28 = param_3[0x94];
LAB_004bcc25:
        iStack_10 = 0;
        iStack_c = 0;
        iStack_8 = 0;
        iStack_4 = 0x3f800000;
        FUN_004934f0(iStack_20);
        FUN_00493330(iStack_28);
        FUN_00493410(iStack_24);
        param_1[0x88] = iStack_10;
        param_1[0x89] = iStack_c;
        param_1[0x8a] = iStack_8;
        param_1[0x8b] = iStack_4;
        FUN_004baec0();
        return 1;
      }
      iVar3 = FUN_004af4a0(iVar2,param_3,&DAT_007207e0,&iStack_24);
      if (iVar3 != 0) goto LAB_004bcc25;
      iVar2 = FUN_004af4a0(iVar2,param_3,s__Roll_007207d8,&iStack_20);
      if (iVar2 != 0) goto LAB_004bcc25;
    }
  }
  iVar2 = FUN_00647cf0(s_InitialPos_0072b844);
  iVar3 = FUN_00647e80(param_2,s_InitialPos_0072b844,iVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar2 == iVar3) {
      if (*param_3 == 8) {
        param_1[8] = param_3[0x89];
        param_1[9] = param_3[0x8a];
        param_1[10] = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
      if (iVar3 == 0) {
        if (*param_3 == 2) {
          param_1[8] = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
        if (iVar3 == 0) {
          if (*param_3 == 2) {
            param_1[9] = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
          if ((iVar2 == 0) && (*param_3 == 2)) {
            param_1[10] = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar2 = FUN_00647e40(param_2,s_Sync_Volume_0072c5a8);
  if (iVar2 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      return 0;
    }
    param_1[0xa4] = param_3[0x90];
    param_1[0xa5] = param_3[0x91];
    return 1;
  }
  piVar1 = param_1 + 0x1a;
  iVar2 = FUN_00647cf0(s_Rotation_007207f0);
  iVar3 = FUN_00647e80(param_2,s_Rotation_007207f0,iVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar2 == iVar3) {
      if (*param_3 != 0xb) goto LAB_004bcf31;
      *piVar1 = param_3[0x8c];
      param_1[0x1b] = param_3[0x8d];
      param_1[0x1c] = param_3[0x8e];
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar3 = FUN_004af4a0(iVar2,param_3,s__Pitch_007207e8,piVar1);
      if (iVar3 == 0) {
        iVar3 = FUN_004af4a0(iVar2,param_3,&DAT_007207e0,param_1 + 0x1b);
        if (iVar3 == 0) {
          iVar2 = FUN_004af4a0(iVar2,param_3,s__Roll_007207d8,param_1 + 0x1c);
          if (iVar2 == 0) goto LAB_004bcf31;
        }
      }
    }
    (**(code **)(*param_1 + 0xf0))(piVar1);
    (**(code **)(*param_1 + 0x100))();
    (**(code **)(*param_1 + 0x124))();
    FUN_004bd6f0();
    FUN_004934f0(param_1[0x1c]);
    FUN_00493330(*piVar1);
    FUN_00493410(param_1[0x1b]);
    param_1[0x88] = iStack_14;
    param_1[0x89] = iStack_10;
    param_1[0x8a] = iStack_c;
    param_1[0x8b] = iStack_8;
    FUN_004baec0();
    return 1;
  }
LAB_004bcf31:
  iVar2 = FUN_00647e40(param_2,s_Box_Type_0072c5c0);
  if (iVar2 == 0) {
    if ((*param_3 != 1) && (*param_3 != 0xc)) {
      return 0;
    }
    FUN_004bb360(param_3[0x93]);
    return 1;
  }
  iStack_1c = param_1[5];
  iStack_18 = param_1[6];
  iStack_14 = param_1[7];
  iVar2 = FUN_004bfed0(param_2,param_3,s_Position_00724d1c,&iStack_1c);
  if (iVar2 != 0) {
    FUN_004bea00();
    param_1[0x61] = iStack_18;
    param_1[0x60] = iStack_1c;
    param_1[0x62] = iStack_14;
    (**(code **)(*param_1 + 300))(&iStack_1c);
    if ((float)param_1[5] < _DAT_006e9980 != (NAN((float)param_1[5]) || NAN(_DAT_006e9980))) {
      param_1[5] = -0x383cb000;
    }
    if (_DAT_006e997c < (float)param_1[5]) {
      param_1[5] = 0x47c35000;
    }
    if ((float)param_1[6] < _DAT_006e9980 != (NAN((float)param_1[6]) || NAN(_DAT_006e9980))) {
      param_1[6] = -0x383cb000;
    }
    if (_DAT_006e997c < (float)param_1[6]) {
      param_1[6] = 0x47c35000;
    }
    if ((float)param_1[7] < _DAT_006e9980 != (NAN((float)param_1[7]) || NAN(_DAT_006e9980))) {
      param_1[7] = -0x383cb000;
    }
    if (_DAT_006e997c < (float)param_1[7]) {
      param_1[7] = 0x47c35000;
    }
    (**(code **)(*param_1 + 0x100))();
    (**(code **)(*param_1 + 0x124))();
    return 1;
  }
  iVar2 = FUN_00647e40(param_2,s_MaxSlope_0072c5b4);
  if (iVar2 == 0) {
    DAT_0072c444 = param_3[0x94];
  }
  iVar2 = FUN_00647e40(param_2,s_Radius_0072a57c);
  if (iVar2 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[0x99] = param_3[0x94];
    return 1;
  }
  uVar4 = FUN_004c49a0(param_2,param_3);
  return uVar4;
}

