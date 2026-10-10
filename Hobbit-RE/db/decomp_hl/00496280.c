
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_00496bd0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  iVar1 = FUN_00647cf0(&DAT_00729c04);
  iVar2 = FUN_00647e80(param_2,&DAT_00729c04,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        param_1[0x2a] = param_3[0x89];
        param_1[0x2b] = param_3[0x8a];
        iVar1 = param_3[0x8b];
LAB_00496cd2:
        param_1[0x2c] = iVar1;
        FUN_004963e0();
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          param_1[0x2a] = param_3[0x94];
          FUN_004963e0();
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            param_1[0x2b] = param_3[0x94];
            FUN_004963e0();
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            iVar1 = param_3[0x94];
            goto LAB_00496cd2;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647cf0(&DAT_00729bfc);
  iVar2 = FUN_00647e80(param_2,&DAT_00729bfc,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        FUN_004357e0(param_3 + 0x89);
        FUN_004963e0();
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          param_1[0x2d] = param_3[0x94];
          FUN_004963e0();
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            param_1[0x2e] = param_3[0x94];
            FUN_004963e0();
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            param_1[0x2f] = param_3[0x94];
            FUN_004963e0();
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647e40(param_2,s_Moveable_End_00729c3c);
  if (iVar1 == 0) {
    if ((*param_3 != 0xc) && (*param_3 != 1)) {
      return 0;
    }
    param_1[0x30] = param_3[0x93];
    return 1;
  }
  pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_24 = *pfVar3;
  fStack_20 = pfVar3[1];
  fStack_1c = pfVar3[2];
  iVar1 = FUN_00647cf0(s_Position_00724d1c);
  iVar2 = FUN_00647e80(param_2,s_Position_00724d1c,iVar1);
  if (iVar2 != 0) {
LAB_00497062:
    uVar4 = FUN_004ab750(param_2,param_3);
    iVar1 = FUN_00647e80(param_2,s_Position_00724d1c,8);
    if ((iVar1 == 0) || (iVar1 = FUN_00647e80(param_2,s_Rotation_007207f0,8), iVar1 == 0)) {
      FUN_004963e0();
    }
    return uVar4;
  }
  iVar2 = FUN_00647cf0(param_2);
  if (iVar1 == iVar2) {
    if (*param_3 != 8) goto LAB_00497062;
    FUN_004357e0(param_3 + 0x89);
  }
  else {
    iVar1 = iVar1 + param_2;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      if (*param_3 != 2) goto LAB_00497062;
      fStack_24 = (float)param_3[0x94];
    }
    else {
      iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
      if (iVar2 == 0) {
        if (*param_3 != 2) goto LAB_00497062;
        fStack_20 = (float)param_3[0x94];
      }
      else {
        iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
        if ((iVar1 != 0) || (*param_3 != 2)) goto LAB_00497062;
        fStack_1c = (float)param_3[0x94];
      }
    }
  }
  if (fStack_24 < _DAT_006e9980 == (NAN(fStack_24) || NAN(_DAT_006e9980))) {
    if (_DAT_006e997c < fStack_24) {
      fStack_24 = 100000.0;
    }
  }
  else {
    fStack_24 = -100000.0;
  }
  if (fStack_20 < _DAT_006e9980 == (NAN(fStack_20) || NAN(_DAT_006e9980))) {
    if (_DAT_006e997c < fStack_20) {
      fStack_20 = 100000.0;
    }
  }
  else {
    fStack_20 = -100000.0;
  }
  if (fStack_1c < _DAT_006e9980 == (NAN(fStack_1c) || NAN(_DAT_006e9980))) {
    if (_DAT_006e997c < fStack_1c) {
      fStack_1c = 100000.0;
    }
  }
  else {
    fStack_1c = -100000.0;
  }
  FUN_00401f00(fStack_24 - (float)param_1[0x31],fStack_20 - (float)param_1[0x32],
               fStack_1c - (float)param_1[0x33]);
  FUN_004357e0(auStack_c);
  iVar1 = param_1[0x30];
  if (iVar1 == 0) {
    FUN_0042faf0(auStack_18);
  }
  else if ((iVar1 != 1) && (iVar1 != 2)) goto LAB_0049704c;
  FUN_0042faf0(auStack_18);
LAB_0049704c:
  FUN_004963e0();
  return 1;
}

