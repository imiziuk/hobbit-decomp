
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004cfe40(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = FUN_00647e40(param_2,&DAT_0072d63c);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    param_1[0x5b] = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_0072d634);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    param_1[0x60] = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Pitch0_0072d61c);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    param_1[0x5c] = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Pitch1_0072d614);
  if ((iVar1 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
    param_1[0x61] = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,&DAT_00729908);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    param_1[100] = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Yaw_Increasing_0072d684);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[0x62] = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Pitch_Increasing_0072d670);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[99] = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647cf0(s_Position0_0072d650);
  iVar2 = FUN_00647e80(param_2,s_Position0_0072d650,iVar1);
  if (iVar2 != 0) goto LAB_004d00d7;
  iVar2 = FUN_00647cf0(param_2);
  if (iVar1 == iVar2) {
    if (*param_3 != 8) goto LAB_004d00d7;
    param_1[0x58] = param_3[0x89];
    param_1[0x59] = param_3[0x8a];
    iVar1 = param_3[0x8b];
  }
  else {
    iVar1 = iVar1 + param_2;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      if (*param_3 != 2) goto LAB_004d00d7;
      param_1[0x58] = param_3[0x94];
      goto LAB_004d00b7;
    }
    iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
    if (iVar2 == 0) {
      if (*param_3 == 2) {
        param_1[0x59] = param_3[0x94];
        goto LAB_004d00b7;
      }
LAB_004d00d7:
      iVar1 = FUN_00647cf0(s_Position1_0072d644);
      iVar2 = FUN_00647e80(param_2,s_Position1_0072d644,iVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_00647cf0(param_2);
        if (iVar1 == iVar2) {
          if (*param_3 == 8) {
            FUN_004357e0(param_3 + 0x89);
            return 1;
          }
        }
        else {
          iVar1 = iVar1 + param_2;
          iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
          if (iVar2 == 0) {
            if (*param_3 == 2) {
              param_1[0x5d] = param_3[0x94];
              return 1;
            }
          }
          else {
            iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
            if (iVar2 == 0) {
              if (*param_3 == 2) {
                param_1[0x5e] = param_3[0x94];
                return 1;
              }
            }
            else {
              iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
              if ((iVar1 == 0) && (*param_3 == 2)) {
                param_1[0x5f] = param_3[0x94];
                return 1;
              }
            }
          }
        }
      }
      pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_c = *pfVar3;
      fStack_8 = pfVar3[1];
      fStack_4 = pfVar3[2];
      iVar1 = FUN_004bfed0(param_2,param_3,s_Position_00724d1c,&fStack_c);
      if (iVar1 != 0) {
        if (fStack_c < _DAT_006e9980 == (NAN(fStack_c) || NAN(_DAT_006e9980))) {
          if (_DAT_006e997c < fStack_c) {
            fStack_c = 100000.0;
          }
        }
        else {
          fStack_c = -100000.0;
        }
        if (fStack_8 < _DAT_006e9980 == (NAN(fStack_8) || NAN(_DAT_006e9980))) {
          if (_DAT_006e997c < fStack_8) {
            fStack_8 = 100000.0;
          }
        }
        else {
          fStack_8 = -100000.0;
        }
        if (fStack_4 < _DAT_006e9980 == (NAN(fStack_4) || NAN(_DAT_006e9980))) {
          if (_DAT_006e997c < fStack_4) {
            fStack_4 = 100000.0;
          }
        }
        else {
          fStack_4 = -100000.0;
        }
        param_1[0x59] = (int)fStack_8;
        param_1[0x5a] = (int)fStack_4;
        param_1[0x58] = (int)fStack_c;
        (**(code **)(*param_1 + 0x14))(&fStack_c,0);
        return 1;
      }
      uVar4 = FUN_004c49a0(param_2,param_3);
      return uVar4;
    }
    iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
    if ((iVar1 != 0) || (*param_3 != 2)) goto LAB_004d00d7;
    iVar1 = param_3[0x94];
  }
  param_1[0x5a] = iVar1;
LAB_004d00b7:
  (**(code **)(*param_1 + 0x14))(param_1 + 0x58,0);
  return 1;
}

