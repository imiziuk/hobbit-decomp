
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00432940(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  undefined8 local_4b4;
  int iStack_4ac;
  int iStack_4a8;
  float afStack_4a4 [2];
  float fStack_49c;
  float afStack_498 [2];
  float fStack_490;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006cf69b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar7 = FUN_0052d730();
  if (iVar7 != 0) {
    ExceptionList = local_c;
    return;
  }
  if ((NAN(_DAT_0075eba0) || NAN(DAT_006e92e4)) == (_DAT_0075eba0 == DAT_006e92e4)) {
    ExceptionList = local_c;
    return;
  }
  local_4b4 = FUN_0065c210();
  fVar6 = (float)local_4b4;
  if (DAT_007600e8 != 0) {
    iVar7 = FUN_00670ef0(0xb5,0);
    if ((iVar7 != 0) && ((NAN(_DAT_0075bbd8) || NAN(fVar6)) == (_DAT_0075bbd8 == fVar6))) {
      DAT_00720f84 = (uint)(DAT_00720f84 == 0);
      _DAT_0075bbd8 = fVar6;
      param_1[0xd9] = DAT_00720f84;
    }
  }
  fVar11 = (float10)(**(code **)(*param_1 + 0x10c))();
  param_1[0x185] = (int)(float)fVar11;
  pfVar1 = (float *)(param_1 + 0x186);
  param_1[0x187] = 0;
  *pfVar1 = 0.0;
  FUN_004323e0();
  pfVar2 = (float *)(param_1 + 0x180);
  if (((NAN((float)param_1[0x180]) || NAN((float)_DAT_006e92f8)) ==
       ((float)param_1[0x180] == (float)_DAT_006e92f8)) ||
     ((NAN((float)param_1[0x181]) || NAN(DAT_006e92e4)) == ((float)param_1[0x181] == DAT_006e92e4)))
  {
    fVar11 = (float10)(**(code **)(*param_1 + 0x10c))();
    local_4b4._0_4_ = (float)fVar11;
    if (param_1[0x1c1] == 0) {
      if (param_1[0x1c2] == 0) {
        if (param_1[0x1c3] != 0) {
          local_4b4._0_4_ = (float)local_4b4 - _DAT_006e9578;
        }
      }
      else {
        local_4b4._0_4_ = (float)local_4b4 + _DAT_006e9578;
      }
    }
    else {
      local_4b4._0_4_ = (float)local_4b4 + _DAT_006e9368;
    }
    pfVar3 = (float *)(param_1 + 0x18c);
    FUN_0064c8e0((float)local_4b4,pfVar3,param_1 + 0x18e);
    param_1[0x18d] = 0;
    local_4b4._0_4_ =
         DAT_006e92e8 /
         SQRT((float)param_1[0x18e] * (float)param_1[0x18e] +
              (float)param_1[0x18d] * (float)param_1[0x18d] + *pfVar3 * *pfVar3);
    iVar7 = FUN_0064cf30((float)local_4b4);
    if (iVar7 == 0) {
      *pfVar3 = 0.0;
      param_1[0x18d] = 0;
      param_1[0x18e] = 0;
    }
    else {
      *pfVar3 = (float)local_4b4 * *pfVar3;
      param_1[0x18d] = (int)((float)local_4b4 * (float)param_1[0x18d]);
      param_1[0x18e] = (int)((float)local_4b4 * (float)param_1[0x18e]);
    }
    param_1[0x1be] = 1;
    param_1[0x1bf] = 0;
  }
  else {
    fVar11 = (float10)FUN_0042aa30(0x28);
    *pfVar2 = (float)fVar11;
    fVar11 = (float10)FUN_0042aa30(0x29);
    param_1[0x181] = (int)(float)fVar11;
    if (((NAN(*pfVar2) || NAN(DAT_006e92e4)) == (*pfVar2 == DAT_006e92e4)) ||
       ((NAN(fVar11) || NAN((float10)DAT_006e92e4)) == (fVar11 == (float10)DAT_006e92e4))) {
      FUN_006714b0(&DAT_007723d8);
      uStack_4 = 0;
      FUN_00672330(afStack_498);
      FUN_006722f0(afStack_4a4);
      param_1[0x18d] = 0;
      param_1[0x18c] = (int)((float)param_1[0x181] * afStack_498[0] + -(*pfVar2 * afStack_4a4[0]));
      param_1[0x18e] = (int)(fStack_490 * (float)param_1[0x181] + -(fStack_49c * *pfVar2));
      local_4b4._0_4_ =
           DAT_006e92e8 /
           SQRT((float)param_1[0x18e] * (float)param_1[0x18e] +
                (float)param_1[0x18d] * (float)param_1[0x18d] +
                (float)param_1[0x18c] * (float)param_1[0x18c]);
      iVar7 = FUN_0064cf30((float)local_4b4);
      if (iVar7 == 0) {
        param_1[0x18c] = 0;
        param_1[0x18d] = 0;
        param_1[0x18e] = 0;
      }
      else {
        param_1[0x18c] = (int)((float)local_4b4 * (float)param_1[0x18c]);
        param_1[0x18d] = (int)((float)local_4b4 * (float)param_1[0x18d]);
        param_1[0x18e] = (int)((float)local_4b4 * (float)param_1[0x18e]);
      }
      fVar11 = (float10)FUN_0064ca10(param_1[0x181],*pfVar2);
      param_1[0x185] = (int)(float)fVar11;
      param_1[0x1be] = 0;
      param_1[0x1bf] = 1;
      uStack_4 = 0xffffffff;
      FUN_00671570();
    }
  }
  if (param_1[0x1c0] != 0) {
    iVar7 = FUN_0042a6a0(0x3c);
    fVar4 = DAT_006e92e8;
    if (iVar7 != 0) {
      fVar4 = _DAT_006e999c;
    }
    param_1[0x181] = (int)((float)param_1[0x181] / fVar4);
  }
  FUN_00432390(pfVar2);
  fVar4 = (float)param_1[0x185];
  if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
    do {
      fVar4 = fVar4 + _DAT_006e9598;
    } while (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4)));
    param_1[0x185] = (int)fVar4;
  }
  fVar4 = (float)param_1[0x185];
  if (_DAT_006e9598 < fVar4) {
    do {
      fVar4 = fVar4 - _DAT_006e9598;
    } while (_DAT_006e9598 < fVar4);
    param_1[0x185] = (int)fVar4;
  }
  param_1[0x184] = (int)SQRT((float)param_1[0x181] * (float)param_1[0x181] + *pfVar2 * *pfVar2);
  if (param_1[0x1be] == 0) {
LAB_00432dce:
    if ((float)param_1[0x184] < *(float *)(param_1[0x114] + 8) !=
        (NAN((float)param_1[0x184]) || NAN(*(float *)(param_1[0x114] + 8)))) {
      param_1[0x181] = 0;
      *pfVar2 = 0.0;
      param_1[0x184] = 0;
    }
  }
  else {
    if (param_1[0x1b9] != 0) {
      if (((float)param_1[0x181] < (float)_DAT_006ec048 ==
           (NAN((float)param_1[0x181]) || NAN((float)_DAT_006ec048))) ||
         ((float)_DAT_006ec040 <= (float)param_1[0x181])) {
        if ((float)param_1[0x181] < (float)_DAT_006ec048 ==
            (NAN((float)param_1[0x181]) || NAN((float)_DAT_006ec048))) {
          fVar4 = (float)_DAT_006ec048;
        }
        else {
          fVar4 = (float)param_1[0x181];
        }
      }
      else {
        fVar4 = (float)_DAT_006ec040;
      }
      param_1[0x184] = (int)fVar4;
    }
    if (param_1[0x1be] == 0) goto LAB_00432dce;
  }
  param_1[0x183] = 0;
  param_1[0x182] = 0;
  if (*(float *)(param_1[0x114] + 8) <= (float)param_1[0x184]) {
    fVar4 = *pfVar2;
    if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
      fVar4 = -fVar4;
    }
    fVar5 = (float)param_1[0x181];
    if (fVar5 < DAT_006e92e4 != (NAN(fVar5) || NAN(DAT_006e92e4))) {
      fVar5 = -fVar5;
    }
    if (fVar4 < fVar5) {
      fVar4 = _DAT_006e9370;
      if (DAT_006e92e4 < (float)param_1[0x181]) {
        fVar4 = DAT_006e92e8;
      }
      param_1[0x183] = (int)fVar4;
    }
    else if (*pfVar2 <= DAT_006e92e4) {
      param_1[0x182] = (int)_DAT_006e9370;
    }
    else {
      param_1[0x182] = (int)DAT_006e92e8;
    }
  }
  if (((NAN(*pfVar1) || NAN(DAT_006e92e4)) != (*pfVar1 == DAT_006e92e4)) &&
     ((NAN((float)param_1[0x187]) || NAN(DAT_006e92e4)) != ((float)param_1[0x187] == DAT_006e92e4)))
  {
    fVar11 = (float10)FUN_0042aa30(0x2a);
    *pfVar1 = (float)fVar11;
    fVar11 = (float10)FUN_0042aa30(0x2b);
    param_1[0x187] = (int)(float)fVar11;
    if ((NAN(fVar11) || NAN((float10)DAT_006e92e4)) != (fVar11 == (float10)DAT_006e92e4)) {
      iVar7 = FUN_0042a6a0(0x2c);
      if (iVar7 == 0) {
        iVar7 = FUN_0042a6a0(0x2d);
        fVar4 = DAT_006e92e4;
        if (iVar7 != 0) {
          fVar4 = _DAT_006e9370;
        }
      }
      else {
        fVar4 = (float)_DAT_006ec030;
      }
      param_1[0x187] = (int)fVar4;
    }
  }
  FUN_00432390(pfVar1);
  param_1[0x18a] = (int)SQRT((float)param_1[0x187] * (float)param_1[0x187] + *pfVar1 * *pfVar1);
  fVar11 = (float10)FUN_0064ca10(param_1[0x187],*pfVar1);
  param_1[0x18b] = (int)(float)fVar11;
  if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
    param_1[0x18b] = (int)(float)(fVar11 + (float10)_DAT_006e9598);
  }
  if ((param_1[0x1be] == 0) &&
     ((float)param_1[0x18a] < *(float *)(param_1[0x114] + 8) !=
      (NAN((float)param_1[0x18a]) || NAN(*(float *)(param_1[0x114] + 8))))) {
    param_1[0x187] = 0;
    *pfVar1 = 0.0;
    param_1[0x18a] = 0;
    param_1[0x18b] = 0;
  }
  param_1[0x189] = 0;
  param_1[0x188] = 0;
  if (*(float *)(param_1[0x114] + 8) <= (float)param_1[0x18a]) {
    fVar4 = *pfVar1;
    if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
      fVar4 = -fVar4;
    }
    fVar5 = (float)param_1[0x187];
    if (fVar5 < DAT_006e92e4 != (NAN(fVar5) || NAN(DAT_006e92e4))) {
      fVar5 = -fVar5;
    }
    if (fVar4 < fVar5) {
      fVar4 = _DAT_006e9370;
      if (DAT_006e92e4 < (float)param_1[0x187]) {
        fVar4 = DAT_006e92e8;
      }
      param_1[0x189] = (int)fVar4;
    }
    else if (*pfVar1 <= DAT_006e92e4) {
      param_1[0x188] = (int)_DAT_006e9370;
    }
    else {
      param_1[0x188] = (int)DAT_006e92e8;
    }
  }
  iVar7 = FUN_0042a6a0(6);
  if ((iVar7 == 0) || (param_1[0x193] != 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1[0x194] = iVar7;
  iVar7 = FUN_0042a6a0(3);
  if ((iVar7 == 0) || (param_1[0x195] != 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1[0x196] = iVar7;
  iVar7 = FUN_0042a6a0(0);
  if ((iVar7 == 0) || (param_1[399] != 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1[400] = iVar7;
  iVar7 = FUN_0042a6a0(0x12);
  if ((iVar7 == 0) || (param_1[0x1a7] != 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1[0x1a8] = iVar7;
  iVar7 = FUN_0042a6a0(0x3e);
  if ((iVar7 == 0) || (param_1[0x1a4] != 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1[0x1a3] = iVar7;
  iVar7 = FUN_0042a6a0(0x40);
  if ((iVar7 == 0) || (param_1[0x1a6] != 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  param_1[0x1a5] = iVar7;
  iVar7 = FUN_0042a7d0(0x15);
  if (iVar7 != 0) {
    if (param_1[0x235] == 0x15) {
      param_1[0x1ac] = 1;
    }
    else {
      FUN_0056b710();
      FUN_0064cc00();
    }
  }
  iVar7 = FUN_0042a6a0(0x15);
  if ((iVar7 != 0) && (param_1[0x235] != 0x15)) {
    fVar11 = (float10)FUN_0064cd90();
    if ((float10)*(float *)(param_1[0x114] + 100) <= fVar11) {
      param_1[0x1ac] = 1;
      FUN_0064cc50();
      FUN_0064cc30();
    }
  }
  iVar7 = FUN_0042a900(0x15);
  if (iVar7 != 0) {
    FUN_0064cc50();
    FUN_0064cc30();
    param_1[0x1ac] = 0;
  }
  iVar7 = FUN_0042a6a0(0xc);
  if (iVar7 == 0) {
    fVar11 = (float10)FUN_0042aa30(0xc);
    if ((float10)DAT_006e92e4 < fVar11) goto LAB_0043321d;
LAB_0043322c:
    iVar7 = 0;
  }
  else {
LAB_0043321d:
    if (param_1[0x191] != 0) goto LAB_0043322c;
    iVar7 = 1;
  }
  param_1[0x192] = iVar7;
  FUN_0042aa30(0xf);
  fVar11 = (float10)FUN_0042aa30(0xf);
  if ((float10)DAT_006e92e4 < fVar11) {
LAB_0043326b:
    if (param_1[0x197] != 0) goto LAB_0043327a;
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_0042a7d0(0xf);
    if (iVar7 != 0) goto LAB_0043326b;
LAB_0043327a:
    iVar7 = 0;
  }
  param_1[0x198] = iVar7;
  FUN_0042aa30(9);
  fVar11 = (float10)FUN_0042aa30(9);
  if ((float10)DAT_006e92e4 < fVar11) {
LAB_004332b9:
    if (param_1[0x199] != 0) goto LAB_004332c8;
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_0042a7d0(9);
    if (iVar7 != 0) goto LAB_004332b9;
LAB_004332c8:
    iVar7 = 0;
  }
  param_1[0x19a] = iVar7;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  fVar11 = (float10)FUN_00434ca0(0x35);
  if ((NAN(fVar11) || NAN((float10)DAT_006e92e4)) == (fVar11 == (float10)DAT_006e92e4)) {
LAB_00433320:
    iVar7 = 1;
  }
  else {
    fVar11 = (float10)FUN_00434ca0(0x74);
    if ((NAN(fVar11) || NAN((float10)DAT_006e92e4)) == (fVar11 == (float10)DAT_006e92e4))
    goto LAB_00433320;
    iVar7 = 0;
  }
  local_4b4._0_4_ = (float)iVar7;
  FUN_00434ca0(2);
  iVar8 = __ftol();
  local_4b4._4_4_ = iVar8;
  FUN_00434ca0(0x33);
  iVar9 = __ftol();
  iStack_4ac = iVar9;
  FUN_00434ca0(0x30);
  iStack_4a8 = __ftol();
  if (((iVar7 == 0) && (iVar8 == 0)) && (iVar9 == 0)) goto LAB_00433538;
  iVar7 = FUN_0042a7d0(0x1a);
  if (iVar7 == 0) {
    iVar7 = FUN_0042a7d0(0x1d);
    if (iVar7 == 0) {
      iVar7 = FUN_0042a7d0(0x20);
      iVar7 = (-(uint)(iVar7 != 0) & 3) - 1;
      if (iVar7 < 0) {
        FUN_0042aa30(0x3e);
        iVar7 = __ftol();
        if (iVar7 < 0) {
          if ((NAN(fVar6) || NAN(_DAT_0075bbd4)) == (fVar6 == _DAT_0075bbd4)) {
            uVar10 = param_1[0x1d1];
            do {
              uVar10 = uVar10 + 1 & 3;
              if (uVar10 == 3) {
                uVar10 = 0;
              }
            } while (*(int *)((int)&local_4b4 + uVar10 * 4) == 0);
            param_1[0x1d1] = uVar10;
            iVar7 = FUN_00432340(uVar10);
            param_1[iVar7 + 0x19f] = 1;
            _DAT_0075bbd4 = fVar6;
          }
          goto LAB_00433538;
        }
        if (0 < iVar7) {
          if ((NAN(fVar6) || NAN(_DAT_0075bbd4)) == (fVar6 == _DAT_0075bbd4)) {
            uVar10 = param_1[0x1d1];
            do {
              uVar10 = uVar10 - 1 & 3;
              if (uVar10 == 3) {
                uVar10 = 2;
              }
            } while (*(int *)((int)&local_4b4 + uVar10 * 4) == 0);
            param_1[0x1d1] = uVar10;
            iVar7 = FUN_00432340(uVar10);
            param_1[iVar7 + 0x19f] = 1;
            _DAT_0075bbd4 = fVar6;
          }
          goto LAB_00433538;
        }
        if (param_1[0x1a3] == 0) {
          if ((param_1[0x1a5] == 0) ||
             ((NAN(fVar6) || NAN(_DAT_0075bbd4)) != (fVar6 == _DAT_0075bbd4))) goto LAB_00433538;
          uVar10 = param_1[0x1d1] - 1U & 3;
          param_1[0x1d1] = uVar10;
          if (uVar10 == 3) {
            param_1[0x1d1] = 2;
          }
          iVar7 = param_1[0x1d1];
        }
        else {
          if ((NAN(fVar6) || NAN(_DAT_0075bbd4)) != (fVar6 == _DAT_0075bbd4)) goto LAB_00433538;
          uVar10 = param_1[0x1d1] + 1U & 3;
          param_1[0x1d1] = uVar10;
          if (uVar10 == 3) {
            param_1[0x1d1] = 0;
          }
          iVar7 = param_1[0x1d1];
        }
      }
      else {
        param_1[0x1d1] = iVar7;
      }
    }
    else {
      param_1[0x1d1] = 1;
      iVar7 = 1;
    }
  }
  else {
    param_1[0x1d1] = 0;
    iVar7 = 0;
  }
  iVar7 = FUN_00432340(iVar7);
  param_1[iVar7 + 0x19f] = 1;
LAB_00433538:
  if (iStack_4a8 != 0) {
    iVar7 = FUN_0042a7d0(0x26);
    param_1[0x1a1] = iVar7;
  }
  iVar7 = FUN_0042a6a0(0);
  param_1[399] = iVar7;
  iVar7 = FUN_0042a6a0(6);
  param_1[0x193] = iVar7;
  iVar7 = FUN_0042a6a0(3);
  param_1[0x195] = iVar7;
  iVar7 = FUN_0042a6a0(0x12);
  param_1[0x1a7] = iVar7;
  iVar7 = FUN_0042a6a0(0x15);
  param_1[0x1ab] = iVar7;
  fVar11 = (float10)FUN_0042aa30(0xc);
  if (((float10)DAT_006e92e4 < fVar11) || (iVar7 = FUN_0042a6a0(0xd), iVar7 != 0)) {
    iVar7 = 1;
  }
  param_1[0x191] = iVar7;
  fVar11 = (float10)FUN_0042aa30(0xf);
  if (((float10)DAT_006e92e4 < fVar11) || (iVar7 = FUN_0042a6a0(0xf), iVar7 != 0)) {
    iVar7 = 1;
  }
  param_1[0x197] = iVar7;
  fVar11 = (float10)FUN_0042aa30(0xf);
  if (((float10)DAT_006e92e4 < fVar11) || (iVar7 = FUN_0042a6a0(0xf), iVar7 != 0)) {
    iVar7 = 1;
  }
  param_1[0x199] = iVar7;
  iVar7 = FUN_0042a6a0(0x1a);
  param_1[0x19b] = iVar7;
  iVar7 = FUN_0042a6a0(0x1d);
  param_1[0x19c] = iVar7;
  iVar7 = FUN_0042a6a0(0x20);
  param_1[0x19d] = iVar7;
  iVar7 = FUN_0042a6a0(0x40);
  param_1[0x1a6] = iVar7;
  iVar7 = FUN_0042a6a0(0x3e);
  param_1[0x1a4] = iVar7;
  if ((DAT_007600e8 != 0) || (DAT_007600f0 != 0)) {
    FUN_00433740();
  }
  ExceptionList = local_c;
  return;
}

