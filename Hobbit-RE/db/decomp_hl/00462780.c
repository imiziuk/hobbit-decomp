
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00462780(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_18;
  int iStack_14;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_c = param_1[0x49];
  iStack_8 = param_1[0x4a];
  iStack_4 = param_1[0x4b];
  iVar1 = FUN_00647cf0(s_Rotation_007207f0);
  iVar2 = FUN_00647e80(param_2,s_Rotation_007207f0,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 0xb) {
        iStack_c = param_3[0x8c];
        iStack_8 = param_3[0x8d];
        iStack_4 = param_3[0x8e];
        goto LAB_00462864;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(iVar1,s__Pitch_007207e8);
      if ((iVar2 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
        iStack_c = param_3[0x94];
LAB_00462864:
        (**(code **)(*param_1 + 0xf0))(&iStack_c);
        return 1;
      }
      iVar2 = FUN_004af4a0(iVar1,param_3,&DAT_007207e0,&iStack_8);
      if (iVar2 != 0) goto LAB_00462864;
      iVar1 = FUN_004af4a0(iVar1,param_3,s__Roll_007207d8,&iStack_4);
      if (iVar1 != 0) goto LAB_00462864;
    }
  }
  iStack_18 = param_1[0x46];
  iStack_14 = param_1[0x47];
  iVar1 = param_1[0x48];
  iVar2 = FUN_00647cf0(s_Position_00724d1c);
  iVar3 = FUN_00647e80(param_2,s_Position_00724d1c,iVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar2 == iVar3) {
      if (*param_3 != 8) goto LAB_00462a07;
      iStack_18 = param_3[0x89];
      iVar1 = param_3[0x8b];
      iStack_14 = param_3[0x8a];
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
      if (iVar3 == 0) {
        if (*param_3 != 2) goto LAB_00462a07;
        iStack_18 = param_3[0x94];
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
        if (iVar3 == 0) {
          if (*param_3 != 2) goto LAB_00462a07;
          iStack_14 = param_3[0x94];
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar2);
          if ((iVar1 != 0) || (*param_3 != 2)) goto LAB_00462a07;
          iVar1 = param_3[0x94];
        }
      }
    }
    param_1[0x48] = iVar1;
    param_1[0x46] = iStack_18;
    param_1[0x47] = iStack_14;
    param_1[0x11] = param_1[0xb];
    param_1[0x12] = param_1[0xc];
    param_1[0x13] = param_1[0xd];
    param_1[0x14] = param_1[0xe];
    param_1[0x15] = param_1[0xf];
    param_1[0x16] = param_1[0x10];
    param_1[0x11] = (int)((float)param_1[0x46] + (float)param_1[0x11]);
    param_1[0x12] = (int)((float)param_1[0x12] + (float)param_1[0x47]);
    param_1[0x13] = (int)((float)param_1[0x13] + (float)param_1[0x48]);
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x46]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x47]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x48]);
    return 1;
  }
LAB_00462a07:
  iVar1 = FUN_00647e40(param_2,s_Click_here_to_refresh_from_file__00726204);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Number_of_Frames_00726228);
  if (iVar1 == 0) {
    if (*param_3 != 1) {
      return 0;
    }
    param_1[0x2a] = param_3[0x93];
    if (param_1[0x2c] != 0) {
      FUN_00674810(param_1[0x2c]);
    }
    param_1[0x2c] = 0;
    iVar1 = FUN_006747f0(param_1[0x2a] * 0xe);
    param_1[0x2c] = iVar1;
    iVar1 = 0;
    if (0 < param_1[0x2a]) {
      iVar2 = 0;
      do {
        *(undefined2 *)(param_1[0x2c] + 4 + iVar2) = 0;
        *(undefined2 *)(param_1[0x2c] + 2 + iVar2) = 0;
        *(undefined2 *)(iVar2 + param_1[0x2c]) = 0;
        *(undefined2 *)(param_1[0x2c] + 0xc + iVar2) = 0;
        *(undefined2 *)(param_1[0x2c] + 10 + iVar2) = 0;
        *(undefined2 *)(param_1[0x2c] + 8 + iVar2) = 0;
        *(undefined2 *)(param_1[0x2c] + 6 + iVar2) = 0;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0xe;
      } while (iVar1 < param_1[0x2a]);
    }
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Loops_007259f0);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[0x2b] = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647cf0(&PTR_Unwind_00725c6c);
  iVar2 = FUN_00647e80(param_2,&PTR_Unwind_00725c6c,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        param_1[0x35] = param_3[0x89];
        param_1[0x36] = param_3[0x8a];
        param_1[0x37] = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          param_1[0x35] = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            param_1[0x36] = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            param_1[0x37] = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647cf0(s_Range_00726110);
  iVar2 = FUN_00647e80(param_2,s_Range_00726110,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        param_1[0x32] = param_3[0x89];
        param_1[0x33] = param_3[0x8a];
        param_1[0x34] = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          param_1[0x32] = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            param_1[0x33] = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            param_1[0x34] = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647cf0(s_Camera_Pos_Offset_007261e8);
  iVar2 = FUN_00647e80(param_2,s_Camera_Pos_Offset_007261e8,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        FUN_004357e0(param_3 + 0x89);
        FUN_00461a70();
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          param_1[0x46] = param_3[0x94];
          FUN_00461a70();
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            param_1[0x47] = param_3[0x94];
            FUN_00461a70();
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            param_1[0x48] = param_3[0x94];
            FUN_00461a70();
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_0048b7d0(param_2,param_3,s_Camera_Rot_Offset_007261d4,param_1 + 0x49);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xf0))(param_1 + 0x49);
    return 1;
  }
  iVar1 = FUN_004bfed0(param_2,param_3,s_Scale_00725a04,param_1 + 0x2d);
  if (iVar1 != 0) {
    FUN_00461a70();
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Playback_Speed_007261c4);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    if (((float)param_3[0x94] < _DAT_006e99c0 != (NAN((float)param_3[0x94]) || NAN(_DAT_006e99c0)))
       && ((float)param_3[0x94] < _DAT_006ebfe4)) {
      param_1[0x30] = (int)_DAT_006ebfe4;
      return 1;
    }
    if ((float)param_3[0x94] < _DAT_006e99c0 != (NAN((float)param_3[0x94]) || NAN(_DAT_006e99c0))) {
      param_1[0x30] = param_3[0x94];
      return 1;
    }
    param_1[0x30] = (int)_DAT_006e99c0;
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Override_Lookat_Type_007261ac);
  if (iVar1 == 0) {
    if ((*param_3 != 1) && (*param_3 != 0xc)) {
      return 0;
    }
    if (param_1[0x45] != param_3[0x93]) {
      param_1[0x45] = param_3[0x93];
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
    }
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Interpolate_007260b0);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[0x31] = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Override_Lookat_Guid_00726194);
  if (iVar1 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      return 0;
    }
    param_1[0x4c] = param_3[0x90];
    param_1[0x4d] = param_3[0x91];
    return 1;
  }
  iVar1 = FUN_004bfed0(param_2,param_3,s_Override_Lookat_Offset_0072617c,param_1 + 0x4e);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Override_Lookat_FromBBoxCenter_0072615c);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[0x52] = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Override_Lookat_Lookspring_00726140);
  if (iVar1 != 0) {
    uVar4 = FUN_004ab750(param_2,param_3);
    return uVar4;
  }
  if (*param_3 != 3) {
    return 0;
  }
  param_1[0x51] = param_3[0x95];
  return 1;
}

