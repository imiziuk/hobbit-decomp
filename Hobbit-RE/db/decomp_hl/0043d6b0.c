
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043d6b0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  undefined1 auStack_2c [4];
  undefined1 local_28 [12];
  float fStack_1c;
  undefined1 local_10 [16];
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e5] = 0x3f800000;
  param_1[0x1ec] = 0;
  if ((float)param_1[6] < (float)param_1[0x272] ==
      (NAN((float)param_1[6]) || NAN((float)param_1[0x272]))) {
    iVar4 = param_1[6];
  }
  else {
    iVar4 = param_1[0x272];
  }
  param_1[0x272] = iVar4;
  if ((float)param_1[6] <= (float)param_1[0x273]) {
    iVar4 = param_1[6];
  }
  else {
    iVar4 = param_1[0x273];
  }
  param_1[0x273] = iVar4;
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_28,local_10);
  fStack_44 = (float)param_1[0x248] * (float)param_1[0x1d6];
  fStack_50 = 0.0;
  if ((param_1[0x2a] != 0 || param_1[0x2b] != 0) &&
     (iVar4 = FUN_004021c0(param_1[0x2a],param_1[0x2b]), iVar4 != 0)) {
    if (*(char *)(iVar4 + 0x7c) == '\x0e') {
      iVar5 = FUN_00491ad0(auStack_2c);
      fStack_50 = *(float *)(iVar5 + 4);
    }
    if ((*(char *)(iVar4 + 0x7c) == '.') && (*(char *)(iVar4 + 0x154) < '\0')) {
      FUN_0043a3f0(0x1b,s_C__projects_meridian_Support_Obj_00724060,0x7fa);
      return;
    }
  }
  fVar12 = (float)param_1[6] - fStack_34;
  if (fStack_44 < DAT_006e92e4 == (fStack_44 == DAT_006e92e4)) {
    fVar14 = _DAT_006e9364;
    if (DAT_006e92e4 <= fStack_50) {
      fVar14 = (fVar12 + fStack_44) - fStack_50;
    }
  }
  else if (fStack_50 <= DAT_006e92e4) {
    fVar14 = fVar12 + fStack_50;
  }
  else {
    fVar14 = fVar12;
    if (fVar12 < fStack_50 - fStack_44 != (NAN(fVar12) || NAN(fStack_50 - fStack_44))) {
      fVar14 = DAT_006e92e4;
    }
  }
  fVar12 = *(float *)(param_1[0x114] + 0x4c);
  if ((fVar14 < fVar12 != (fVar14 == fVar12)) && (_DAT_00723da8 < fStack_1c)) {
    FUN_0043a3f0(7,s_C__projects_meridian_Support_Obj_00724060,0x84d);
    return;
  }
  if (((((param_1[0x196] != 0) && (param_1[0x237] != 0xc)) && (param_1[0x231] == 0)) &&
      ((param_1[0xf0] != 0 || (param_1[0xf4] != 0)))) &&
     ((fVar12 = *(float *)(param_1[0x114] + 0x4c), fVar12 + fVar12 <= fVar14 &&
      (fVar7 = (float10)FUN_004272d0(), (float10)DAT_006e92e4 < fVar7)))) {
    if (_DAT_006e9554 <= (float)param_1[0x281]) {
      FUN_0043a3f0(0x17,s_C__projects_meridian_Support_Obj_00724060,0x85f);
      param_1[0x281] = 0;
      return;
    }
    iVar4 = FUN_00647b10(0,1);
    piVar1 = param_1 + 0x115;
    if (iVar4 == 0) {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      pcVar8 = s_L2R_swing_start_00720b8c;
    }
    else {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      pcVar8 = s_R2L_swing_start_00720b9c;
    }
    uVar11 = 0;
    uVar10 = 1;
    uVar9 = 0;
    uVar6 = FUN_0053cc70(pcVar8);
    FUN_00540840(uVar6,uVar9,uVar10,uVar11);
  }
  iVar4 = FUN_004383b0();
  if (iVar4 != 0) {
    FUN_0043a3f0(0x1c,s_C__projects_meridian_Support_Obj_00724060,0x87a);
    return;
  }
  if (((_DAT_006ec08c <= (float)param_1[6] - fStack_34) && (_DAT_006e9550 < (float)param_1[0x247]))
     && (iVar4 = FUN_00449e80(), iVar4 != 0)) {
    FUN_0043a3f0(0x23,s_C__projects_meridian_Support_Obj_00724060,0x886);
    return;
  }
  if (((float)param_1[0x1d6] < DAT_006e92e8 != ((float)param_1[0x1d6] == DAT_006e92e8)) &&
     (iVar4 = FUN_0042fb20(), iVar4 != 0)) {
    FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0x897);
    return;
  }
  if ((_DAT_006e998c < (float)param_1[6] - fStack_34) &&
     (iVar4 = FUN_00442a80(param_1 + 5,param_1[0x11d],*(undefined4 *)(param_1[0x114] + 0x90),
                           *(undefined4 *)(param_1[0x114] + 0x94),1,2,&fStack_48,auStack_2c),
     iVar4 != 0)) {
    FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00724060,0x8ab);
    return;
  }
  fVar12 = _DAT_006e99ac;
  if (((float)param_1[0x180] <= DAT_006e92e4) &&
     (fVar12 = DAT_006e92e4,
     (float)param_1[0x180] < DAT_006e92e4 != (NAN((float)param_1[0x180]) || NAN(DAT_006e92e4)))) {
    fVar12 = _DAT_006ec088;
  }
  param_1[0x17ae] = 0;
  param_1[0x17ad] =
       (int)((float)param_1[0x248] * _DAT_006e92f4 * (fVar12 - (float)param_1[0x17ad]) +
            (float)param_1[0x17ad]);
  fVar12 = DAT_006e92e8;
  if ((float)param_1[0x17ad] <= DAT_006e92e8) {
    fVar12 = (float)param_1[0x17ad];
  }
  param_1[0x17ad] = (int)fVar12;
  if (fVar12 < _DAT_006e9370 != (NAN(fVar12) || NAN(_DAT_006e9370))) {
    fVar12 = _DAT_006e9370;
  }
  param_1[0x17ad] = (int)fVar12;
  param_1[0x17ae] = 0;
  if (param_1[0x1be] == 0) {
    fVar7 = (float10)FUN_0056b610(param_1[0x185]);
    fVar12 = (float)fVar7;
  }
  else {
    iVar4 = param_1[0x1c2];
    if (param_1[0x1c1] == 0) {
      fVar12 = _DAT_006e9578;
      if (iVar4 == 0) {
        iVar5 = param_1[0x1c3];
        fVar12 = _DAT_006e9570;
        goto joined_r0x0043db70;
      }
    }
    else {
      fVar12 = _DAT_006e9570;
      if (iVar4 == 0) {
        iVar5 = param_1[0x1c3];
        fVar12 = _DAT_006e9578;
joined_r0x0043db70:
        if (iVar5 == 0) {
          fVar12 = DAT_006e92e4;
        }
      }
    }
    fVar12 = fVar12 + (float)param_1[0x1c6];
    if ((((param_1[0x1c0] == 0) && (param_1[0x1c1] == 0)) && (iVar4 == 0)) && (param_1[0x1c3] == 0))
    {
      param_1[0x184] = 0;
    }
  }
  fVar14 = 1.0;
  FUN_00428790(0);
  FUN_004286f0(0);
  FUN_00428740(fVar12);
  if ((NAN(fVar12) || NAN(DAT_006e92e4)) != (fVar12 == DAT_006e92e4)) {
    fVar14 = 0.0;
  }
  if ((param_1[0x1658] == 0) && (param_1[0x231] == 0)) {
    if ((param_1[0x237] != 0x23) || (param_1[0x119f] == 0)) {
      fVar12 = (float)param_1[0x184];
      fStack_40 = *(float *)(param_1[0x114] + 0x44);
      fVar13 = (float)param_1[0x248];
      fStack_44 = fVar12 * 0.0;
      fVar2 = fVar12 * 0.0 * fStack_40;
      fVar3 = fStack_44 * fStack_40;
      fStack_40 = fVar14 * fVar12 * fStack_40;
      goto LAB_0043de46;
    }
    fVar7 = (float10)FUN_00422fb0();
    fStack_44 = (float)fVar7;
    FUN_00428790(0);
    FUN_004286f0(0);
    FUN_00428740(fStack_44);
    fStack_40 = _DAT_006ec084 * 1.0;
    fVar14 = *(float *)(param_1[0x114] + 0x44);
    fVar12 = (float)param_1[0x248];
    fStack_48 = _DAT_006ec084 * 0.0 * fVar14 * fVar12;
    fStack_44 = _DAT_006ec084 * 0.0 * fVar14 * fVar12;
    param_1[0x1ed] = (int)(fStack_48 + (float)param_1[0x1ed]);
    param_1[0x1ee] = (int)(fStack_44 + (float)param_1[0x1ee]);
    param_1[0x1ef] = (int)(fStack_40 * fVar14 * fVar12 + (float)param_1[0x1ef]);
    if ((DAT_006e92e4 < (float)param_1[0x184]) &&
       ((float)param_1[0x183] < DAT_006e92e4 != (NAN((float)param_1[0x183]) || NAN(DAT_006e92e4))))
    {
      param_1[0x1ed] = (int)((float)param_1[0x1ed] * _DAT_006e936c);
      param_1[0x1ee] = (int)((float)param_1[0x1ee] * _DAT_006e936c);
      fVar12 = (float)param_1[0x1ef] * _DAT_006e936c;
      goto LAB_0043de84;
    }
  }
  else {
    fVar12 = (float)param_1[0x184];
    fVar13 = (float)param_1[0x248];
    fStack_44 = fVar12 * 0.0;
    fStack_40 = *(float *)(param_1[0x114] + 0x44) * _DAT_006e95a8;
    fVar2 = fVar12 * 0.0 * fStack_40;
    fVar3 = fStack_44 * fStack_40;
    fStack_40 = fVar14 * fVar12 * fStack_40;
LAB_0043de46:
    param_1[0x1ed] = (int)(fVar2 * fVar13 + (float)param_1[0x1ed]);
    param_1[0x1ee] = (int)(fVar3 * fVar13 + (float)param_1[0x1ee]);
    fVar12 = fStack_40 * fVar13 + (float)param_1[0x1ef];
LAB_0043de84:
    param_1[0x1ef] = (int)fVar12;
  }
  if ((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) != ((float)param_1[0x184] == DAT_006e92e4))
  {
    param_1[0x1ed] = (int)((float)param_1[0x1ed] * _DAT_006e99f4);
    param_1[0x1ee] = (int)((float)param_1[0x1ee] * _DAT_006e99f4);
    param_1[0x1ef] = (int)((float)param_1[0x1ef] * _DAT_006e99f4);
  }
  fVar12 = SQRT((float)param_1[0x1ef] * (float)param_1[0x1ef] +
                (float)param_1[0x1ed] * (float)param_1[0x1ed]);
  if (DAT_006e92e4 < fVar12) {
    fVar14 = DAT_006e92e8 / fVar12;
    param_1[0x1ed] = (int)(fVar14 * (float)param_1[0x1ed]);
    param_1[0x1ef] = (int)(fVar14 * (float)param_1[0x1ef]);
    fVar14 = *(float *)(param_1[0x114] + 0x48);
    if (fVar12 < fVar14 == (NAN(fVar12) || NAN(fVar14))) {
      fVar12 = *(float *)(param_1[0x114] + 0x48);
    }
    param_1[0x1ee] = 0;
    param_1[0x1ed] = (int)(fVar12 * (float)param_1[0x1ed]);
    param_1[0x1ef] = (int)(fVar12 * (float)param_1[0x1ef]);
  }
  iVar4 = param_1[0x158];
  if (*(int *)(iVar4 + 8) != -1) {
    FUN_00549470(iVar4 + 4);
    FUN_00549580(iVar4 + 4);
    iVar5 = FUN_0053cc70(s_JUMP_BEGIN_WEAPON_007241cc);
    if (*(int *)(iVar4 + 8) == iVar5) {
      if ((param_1[0x14d] < 1) &&
         ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
          ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
        return;
      }
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar8 = s_JUMP_END_WEAPON_007241f4;
      goto LAB_0043e084;
    }
  }
  iVar4 = param_1[0x158];
  if (*(int *)(iVar4 + 8) == -1) {
    return;
  }
  FUN_00549470(iVar4 + 4);
  FUN_00549580(iVar4 + 4);
  iVar5 = FUN_0053cc70(s_JUMP_BEGIN_NO_WEAPON_007241b4);
  if (*(int *)(iVar4 + 8) != iVar5) {
    return;
  }
  if ((param_1[0x14d] < 1) &&
     ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
      ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
    return;
  }
  FUN_00549470(param_1 + 0x115);
  FUN_00549580(param_1 + 0x115);
  pcVar8 = s_JUMP_END_NO_WEAPON_007241e0;
LAB_0043e084:
  uVar11 = 0x3e000000;
  uVar10 = 1;
  uVar9 = 0;
  uVar6 = FUN_0053cc70(pcVar8);
  FUN_00540840(uVar6,uVar9,uVar10,uVar11);
  return;
}

