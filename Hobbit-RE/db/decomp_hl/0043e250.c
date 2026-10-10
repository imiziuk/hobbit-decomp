
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043e250(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fStack_48;
  float fStack_44;
  float fStack_34;
  undefined1 auStack_2c [4];
  undefined1 local_28 [24];
  undefined1 local_10 [16];
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e5] = 0x3f800000;
  param_1[0x1ec] = 0;
  if ((float)param_1[6] < (float)param_1[0x272] ==
      (NAN((float)param_1[6]) || NAN((float)param_1[0x272]))) {
    iVar7 = param_1[6];
  }
  else {
    iVar7 = param_1[0x272];
  }
  param_1[0x272] = iVar7;
  if ((float)param_1[6] <= (float)param_1[0x273]) {
    iVar7 = param_1[6];
  }
  else {
    iVar7 = param_1[0x273];
  }
  param_1[0x273] = iVar7;
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_28,local_10);
  fStack_44 = (float)param_1[0x248] * (float)param_1[0x1d6];
  fVar15 = 0.0;
  if ((param_1[0x2a] != 0 || param_1[0x2b] != 0) &&
     (iVar7 = FUN_004021c0(param_1[0x2a],param_1[0x2b]), iVar7 != 0)) {
    if (*(char *)(iVar7 + 0x7c) == '\x0e') {
      iVar8 = FUN_00491ad0(auStack_2c);
      fVar15 = *(float *)(iVar8 + 4);
    }
    if ((*(char *)(iVar7 + 0x7c) == '.') && (*(char *)(iVar7 + 0x154) < '\0')) {
      FUN_0043a3f0(0x1b,s_C__projects_meridian_Support_Obj_00724060,0x994);
      return;
    }
  }
  fVar2 = (float)param_1[6] - fStack_34;
  if (fStack_44 < DAT_006e92e4 == (fStack_44 == DAT_006e92e4)) {
    fVar3 = _DAT_006e9364;
    if (DAT_006e92e4 <= fVar15) {
      fVar3 = (fVar2 + fStack_44) - fVar15;
    }
  }
  else if (fVar15 <= DAT_006e92e4) {
    fVar3 = fVar2 + fVar15;
  }
  else {
    fVar3 = fVar2;
    if (fVar2 < fVar15 - fStack_44 != (NAN(fVar2) || NAN(fVar15 - fStack_44))) {
      fVar3 = DAT_006e92e4;
    }
  }
  fStack_48 = (float)param_1[0x121] * _DAT_006e99a8;
  piVar1 = param_1 + 0x115;
  fVar15 = (float)param_1[0x122] * _DAT_006e99a8;
  param_1[0x167] = param_1[0x167] + 1;
  fVar2 = (float)param_1[0x123] * _DAT_006e99a8;
  param_1[0x160] = 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x164] = 1;
  param_1[0x122] = (int)fVar15;
  param_1[0x121] = (int)fStack_48;
  param_1[0x123] = (int)fVar2;
  fVar15 = fStack_48 * fStack_48 + fVar15 * fVar15 + fVar2 * fVar2;
  if (fVar15 < DAT_006e92e8 != (NAN(fVar15) || NAN(DAT_006e92e8))) {
    param_1[0x160] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x164] = 1;
    param_1[0x167] = param_1[0x167] + 1;
    param_1[0x121] = 0;
    param_1[0x122] = 0;
    param_1[0x123] = 0;
  }
  fVar15 = *(float *)(param_1[0x114] + 0x4c);
  if (fVar3 < fVar15 != (fVar3 == fVar15)) {
    FUN_0043a3f0(7,s_C__projects_meridian_Support_Obj_00724060,0x9d5);
    return;
  }
  if ((((param_1[0x196] != 0) && (param_1[0x237] != 0xc)) &&
      ((param_1[0xf0] != 0 || (param_1[0xf4] != 0)))) &&
     ((fVar15 = *(float *)(param_1[0x114] + 0x4c), fVar15 + fVar15 <= fVar3 &&
      (fVar10 = (float10)FUN_004272d0(), (float10)DAT_006e92e4 < fVar10)))) {
    if (_DAT_006e9554 <= (float)param_1[0x281]) {
      FUN_0043a3f0(0x17,s_C__projects_meridian_Support_Obj_00724060,0x9e6);
      param_1[0x281] = 0;
      return;
    }
    iVar7 = FUN_00647b10(0,1);
    if (iVar7 == 0) {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      pcVar11 = s_L2R_swing_start_00720b8c;
    }
    else {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      pcVar11 = s_R2L_swing_start_00720b9c;
    }
    uVar14 = 0;
    uVar13 = 1;
    uVar12 = 0;
    uVar9 = FUN_0053cc70(pcVar11);
    FUN_00540840(uVar9,uVar12,uVar13,uVar14);
  }
  iVar7 = FUN_004383b0();
  if (iVar7 != 0) {
    FUN_0043a3f0(0x1c,s_C__projects_meridian_Support_Obj_00724060,0xa03);
    return;
  }
  if (((_DAT_006ec08c <= (float)param_1[6] - fStack_34) && (_DAT_006e9550 < (float)param_1[0x247]))
     && (iVar7 = FUN_00449e80(), iVar7 != 0)) {
    FUN_0043a3f0(0x23,s_C__projects_meridian_Support_Obj_00724060,0xa11);
    return;
  }
  if (((float)param_1[0x1d6] < DAT_006e92e8 != ((float)param_1[0x1d6] == DAT_006e92e8)) &&
     (iVar7 = FUN_0042fb20(), iVar7 != 0)) {
    FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0xa21);
    return;
  }
  if (_DAT_006e998c < (float)param_1[6] - fStack_34) {
    unaff_ESI = (float)param_1[0x11d];
    iVar7 = FUN_00442a80(param_1 + 5,unaff_ESI,*(undefined4 *)(param_1[0x114] + 0x90),
                         *(undefined4 *)(param_1[0x114] + 0x94),1,2,&fStack_48,auStack_2c);
    if (iVar7 != 0) {
      FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00724060,0xa35);
      return;
    }
  }
  fVar10 = (float10)FUN_0056b610(param_1[0x185]);
  fStack_44 = (float)fVar10;
  FUN_0064c8e0(0,&stack0xffffffa4,&stack0xffffffa8);
  fVar3 = unaff_ESI * DAT_006e92e4;
  fVar5 = unaff_EDI * DAT_006e92e4;
  fVar4 = fVar5 + fVar3;
  FUN_0064c8e0(0,&stack0xffffffa4,&stack0xffffffa8);
  FUN_00428740(fStack_44);
  fVar15 = (float)param_1[0x184];
  fVar2 = (float)param_1[0x248];
  fVar6 = *(float *)(param_1[0x114] + 0x44) * _DAT_006e95a8;
  param_1[0x1ed] = (int)((fVar3 - fVar5) * fVar15 * fVar6 * fVar2 + (float)param_1[0x1ed]);
  param_1[0x1ee] =
       (int)((fVar4 * unaff_ESI - unaff_EDI) * fVar15 * fVar6 * fVar2 + (float)param_1[0x1ee]);
  param_1[0x1ef] =
       (int)((fVar4 * unaff_EDI + unaff_ESI) * fVar15 * fVar6 * fVar2 + (float)param_1[0x1ef]);
  fVar15 = SQRT((float)param_1[0x1ef] * (float)param_1[0x1ef] +
                (float)param_1[0x1ed] * (float)param_1[0x1ed]);
  if (fVar15 <= DAT_006e92e4) {
    return;
  }
  fVar2 = DAT_006e92e8 / fVar15;
  param_1[0x1ed] = (int)(fVar2 * (float)param_1[0x1ed]);
  param_1[0x1ef] = (int)(fVar2 * (float)param_1[0x1ef]);
  fVar2 = *(float *)(param_1[0x114] + 0x48);
  if (fVar15 < fVar2 == (NAN(fVar15) || NAN(fVar2))) {
    fVar15 = *(float *)(param_1[0x114] + 0x48);
  }
  param_1[0x1ee] = 0;
  param_1[0x1ed] = (int)(fVar15 * (float)param_1[0x1ed]);
  param_1[0x1ef] = (int)(fVar15 * (float)param_1[0x1ef]);
  return;
}

