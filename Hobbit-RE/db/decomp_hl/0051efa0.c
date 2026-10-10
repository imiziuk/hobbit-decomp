
bool __fastcall FUN_0051efa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 0 && param_1[1] == 0) {
    return false;
  }
  FUN_004021c0(*param_1,param_1[1]);
  if (param_1[0x272] != 0) {
    param_1[0x272] = 0;
    return false;
  }
  iVar3 = FUN_00670ef0(0x7b,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00670ef0(0x165,0);
    if ((iVar3 != 0) && (param_1[0x274] == 0)) goto LAB_0051f008;
    iVar3 = 0;
  }
  else {
LAB_0051f008:
    iVar3 = 1;
  }
  param_1[0x273] = iVar3;
  iVar3 = FUN_00670ef0(0x7b,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00670ef0(0x165,0);
    if (iVar3 != 0) goto LAB_0051f034;
  }
  else {
LAB_0051f034:
    iVar3 = 1;
  }
  param_1[0x274] = iVar3;
  if ((param_1[0x273] != 0) && (param_1[3] != 0)) {
    piVar1 = param_1 + 0x24;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      iVar3 = param_1[0x23];
      param_1[0x24] = 0;
      param_1[0x23] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        param_1[0x23] = 0;
      }
    }
    piVar1 = param_1 + 4;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      param_1[4] = 0;
    }
    else {
      FUN_00659600(s_CursorMove_00731fe0,1);
    }
  }
  iVar3 = FUN_00670ef0(0x7d,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00670ef0(0x16d,0);
    if ((iVar3 != 0) && (param_1[0x276] == 0)) goto LAB_0051f0b7;
    iVar3 = 0;
  }
  else {
LAB_0051f0b7:
    iVar3 = 1;
  }
  param_1[0x275] = iVar3;
  iVar3 = FUN_00670ef0(0x7d,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00670ef0(0x16d,0);
    if (iVar3 != 0) goto LAB_0051f0e3;
  }
  else {
LAB_0051f0e3:
    iVar3 = 1;
  }
  param_1[0x276] = iVar3;
  if ((param_1[0x275] != 0) && (iVar3 = param_1[3], iVar3 != 0)) {
    iVar2 = param_1[0x24];
    param_1[0x24] = iVar2 + 1;
    if (DAT_00762690 + -1 < iVar2 + 1) {
      param_1[0x24] = DAT_00762690 + -1;
      iVar2 = param_1[0x23];
      param_1[0x23] = iVar2 + 1;
      if (iVar3 - DAT_00762690 < iVar2 + 1) {
        param_1[0x23] = iVar3 - DAT_00762690;
      }
    }
    iVar2 = param_1[4];
    param_1[4] = iVar2 + 1;
    if (iVar3 + -1 < iVar2 + 1) {
      param_1[4] = iVar3 + -1;
    }
    else {
      FUN_00659600(s_CursorMove_00731fe0,1);
    }
  }
  iVar3 = FUN_00670ef0(0x5e,0);
  if (iVar3 == 0) {
    iVar3 = FUN_0042a7d0(0x42);
    if (iVar3 != 0) goto LAB_0051f190;
    iVar3 = FUN_0042a7d0(0x43);
    if (iVar3 != 0) goto LAB_0051f190;
LAB_0051f19f:
    iVar3 = 0;
  }
  else {
LAB_0051f190:
    if (param_1[0x278] != 0) goto LAB_0051f19f;
    iVar3 = 1;
  }
  param_1[0x277] = iVar3;
  iVar3 = FUN_00670ef0(0x5e,0);
  if (iVar3 == 0) {
    iVar3 = FUN_0042a7d0(0x42);
    if (iVar3 != 0) goto LAB_0051f1d6;
    iVar3 = FUN_0042a7d0(0x43);
    if (iVar3 != 0) goto LAB_0051f1d6;
  }
  else {
LAB_0051f1d6:
    iVar3 = 1;
  }
  param_1[0x278] = iVar3;
  bVar4 = param_1[0x277] != 0;
  if (bVar4) {
    param_1[2] = 0;
    FUN_004dd1b0();
    FUN_0052d740(0,6);
    FUN_0052da20();
    FUN_006a16c0(DAT_00813038,1);
    FUN_00659600(s_OptionCancel_00723140,1);
  }
  iVar3 = FUN_00670ef0(0x5d,0);
  if (iVar3 == 0) {
    iVar3 = FUN_0042a7d0(7);
    if (iVar3 != 0) goto LAB_0051f265;
    iVar3 = FUN_0042a7d0(8);
    if (iVar3 != 0) goto LAB_0051f265;
LAB_0051f274:
    iVar3 = 0;
  }
  else {
LAB_0051f265:
    if (param_1[0x27a] != 0) goto LAB_0051f274;
    iVar3 = 1;
  }
  param_1[0x279] = iVar3;
  iVar3 = FUN_00670ef0(0x5d,0);
  if (iVar3 == 0) {
    iVar3 = FUN_0042a7d0(7);
    if (iVar3 == 0) {
      iVar3 = FUN_0042a7d0(8);
      if (iVar3 == 0) goto LAB_0051f2b0;
    }
  }
  iVar3 = 1;
LAB_0051f2b0:
  param_1[0x27a] = iVar3;
  if (param_1[0x279] != 0) {
    FUN_00659600(s_OptionSelect_00723150,1);
    param_1[2] = 0;
    FUN_004dcef0(param_1[param_1[4] + 5]);
    FUN_0052d740(0,6);
    FUN_0052da20();
    FUN_006a16c0(DAT_00813038,1);
    FUN_00659600(s_OptionSelect_00723150,1);
    *param_1 = 0;
    param_1[1] = 0;
    return true;
  }
  if (bVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return bVar4;
}

