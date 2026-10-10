
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004323e0(int *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  float local_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = 0.0;
  iVar6 = FUN_0042a6a0(0x18);
  param_1[0x1c4] = iVar6;
  if ((param_1[0x235] == 0x15) || (iVar6 != 0)) {
    fVar8 = (float10)FUN_00671130(0x9a,0);
    fVar9 = (float10)FUN_00671130(0x9b,0);
    fVar9 = -fVar9;
    local_4 = (float)fVar9;
    fVar1 = local_4;
    if (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4))) {
      fVar1 = -local_4;
    }
    if (DAT_006e92e4 < fVar1) {
      fVar1 = _DAT_006e936c;
      if (DAT_006e92e4 < local_4) {
        fVar1 = _DAT_006e99ec;
      }
      local_4 = fVar1 + local_4;
    }
    fVar9 = (float10)FUN_00660500();
    local_8 = (float)((float10)(float)fVar8 * fVar9 * (float10)_DAT_006e95a8);
    local_4 = (float)(fVar9 * (float10)local_4) * _DAT_006e95a8;
    if ((NAN(local_8) || NAN(DAT_006e92e4)) != (local_8 == DAT_006e92e4)) {
      iVar6 = FUN_0042a6a0(0x34);
      if ((iVar6 == 0) && (iVar6 = FUN_0042a6a0(0x36), iVar6 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      iVar6 = FUN_0042a6a0(0x35);
      if ((iVar6 != 0) || (iVar6 = FUN_0042a6a0(0x37), iVar6 != 0)) {
        iVar6 = 1;
      }
      if (bVar2) {
        local_8 = (float)_DAT_006ec038;
      }
      else if (iVar6 == 0) {
        local_8 = (float)_DAT_006e92f8;
      }
      else {
        local_8 = (float)_DAT_006ec030;
      }
    }
    if ((NAN(local_4) || NAN(DAT_006e92e4)) != (local_4 == DAT_006e92e4)) goto LAB_00432544;
  }
  else {
LAB_00432544:
    if (param_1[0x235] == 0x15) {
      iVar6 = FUN_0042a6a0(0x32);
      uVar10 = 0x33;
    }
    else {
      iVar6 = FUN_0042a6a0(0x2c);
      uVar10 = 0x2d;
    }
    iVar7 = FUN_0042a6a0(uVar10);
    if (iVar6 == 0) {
      if (iVar7 == 0) {
        local_4 = 0.0;
        goto LAB_00432587;
      }
      local_4 = -1.0;
    }
    else {
      local_4 = 1.0;
    }
    param_1[0x1c4] = 1;
  }
LAB_00432587:
  iVar6 = FUN_0042a6a0(0x32);
  if (iVar6 == 0) {
    iVar6 = FUN_0042a6a0(0x33);
    local_c = DAT_006e92e4;
    if (iVar6 != 0) {
      local_c = _DAT_006e9370;
    }
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
    local_c = DAT_006e92e8;
  }
  bVar2 = NAN(DAT_006e92e4);
  bVar3 = local_c < DAT_006e92e4;
  param_1[0x1c0] = iVar6;
  if ((bVar3 == (NAN(local_c) || bVar2)) || (iVar6 != 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  bVar2 = NAN(DAT_006e92e4);
  bVar3 = local_c < DAT_006e92e4;
  param_1[0x1c1] = iVar6;
  local_14 = 3.1415927;
  if (bVar3 == (NAN(local_c) || bVar2)) {
    local_14 = 0.0;
  }
  fVar9 = (float10)(**(code **)(*param_1 + 0x10c))();
  fVar9 = fVar9 + (float10)local_14;
  fVar8 = (float10)_DAT_006e9598;
  param_1[0x1c6] = (int)(float)fVar9;
  if (fVar9 < fVar8 != (NAN(fVar9) || NAN(fVar8))) {
    do {
      fVar9 = fVar9 + (float10)_DAT_006e9598;
    } while (fVar9 < (float10)_DAT_006e9598 != (NAN(fVar9) || NAN((float10)_DAT_006e9598)));
    param_1[0x1c6] = (int)(float)fVar9;
  }
  fVar1 = (float)param_1[0x1c6];
  if (_DAT_006e9598 < fVar1) {
    do {
      fVar1 = fVar1 - _DAT_006e9598;
    } while (_DAT_006e9598 < fVar1);
    param_1[0x1c6] = (int)fVar1;
  }
  bVar2 = false;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  fVar8 = (float10)FUN_00671130(0x9a,0);
  fVar9 = (float10)FUN_00660500();
  fVar9 = fVar9 * (float10)(float)fVar8;
  fStack_10 = (float)fVar9;
  if ((NAN(fVar9) || NAN((float10)DAT_006e92e4)) != (fVar9 == (float10)DAT_006e92e4)) {
    iVar6 = FUN_0042a6a0(0x31);
    if (iVar6 == 0) {
      iVar6 = FUN_0042a6a0(0x30);
      if (iVar6 == 0) {
        fStack_10 = 0.0;
        goto LAB_004326f6;
      }
      fStack_10 = -10.0;
    }
    else {
      fStack_10 = 10.0;
    }
  }
  bVar2 = true;
LAB_004326f6:
  if ((param_1[0x235] == 9) || (param_1[0x235] == 0xc)) {
    fStack_10 = 0.0;
  }
  iVar6 = FUN_0042a6a0(0x35);
  if (iVar6 == 0) {
    iVar6 = FUN_0042a6a0(0x34);
    if ((iVar6 != 0) &&
       (param_1[0x1c2] = 1, (NAN(fStack_10) || NAN(DAT_006e92e4)) != (fStack_10 == DAT_006e92e4))) {
      fStack_10 = -10.0;
    }
  }
  else {
    param_1[0x1c3] = 1;
    if ((NAN(fStack_10) || NAN(DAT_006e92e4)) != (fStack_10 == DAT_006e92e4)) {
      fStack_10 = 10.0;
    }
  }
  fVar1 = fStack_10 * _DAT_006e95a8;
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  if (fStack_10 <= DAT_006e92e4) {
    if (fStack_10 < DAT_006e92e4 != (NAN(fStack_10) || NAN(DAT_006e92e4))) {
      fStack_10 = -1.0;
      if (param_1[0x1c5] == 0) {
        if (bVar2) {
          param_1[0x185] = (int)(fVar1 * _DAT_006ebfc4 + (float)param_1[0x185]);
        }
        else {
          param_1[0x185] = (int)(DAT_006e92e4 + (float)param_1[0x185]);
        }
      }
      else {
        param_1[0x1c5] = 0;
      }
    }
  }
  else {
    fStack_10 = 1.0;
    if (param_1[0x1c5] == 1) {
      fVar4 = DAT_006e92e4;
      if (bVar2) {
        fVar4 = fVar1 * _DAT_006ebfc4;
      }
      param_1[0x185] = (int)((float)param_1[0x185] - fVar4);
    }
    else {
      param_1[0x1c5] = 1;
    }
  }
  fVar1 = (float)param_1[0x185];
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    do {
      fVar1 = fVar1 + _DAT_006e9598;
    } while (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4)));
    param_1[0x185] = (int)fVar1;
  }
  fVar1 = (float)param_1[0x185];
  if (_DAT_006e9598 < fVar1) {
    do {
      fVar1 = fVar1 - _DAT_006e9598;
    } while (_DAT_006e9598 < fVar1);
    param_1[0x185] = (int)fVar1;
  }
  fVar1 = DAT_006e92e8 / SQRT(local_c * local_c + fStack_10 * fStack_10);
  iVar6 = FUN_0064cf30(fVar1);
  fVar4 = DAT_006e92e4;
  fVar5 = DAT_006e92e4;
  if (iVar6 != 0) {
    fVar4 = fVar1 * fStack_10;
    fVar5 = fVar1 * local_c;
  }
  param_1[0x180] = (int)fVar4;
  param_1[0x181] = (int)fVar5;
  param_1[0x186] = (int)local_8;
  param_1[0x187] = (int)local_4;
  return;
}

