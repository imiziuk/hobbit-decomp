
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043f290(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_10 [16];
  
  if (param_1[0x193] != 0) {
    param_1[0x196] = 0;
    param_1[0x1fe] = 0x41200000;
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0xc02);
    return;
  }
  if (_DAT_006e95a8 < (float)param_1[0x181]) {
    iVar3 = FUN_0042fb20();
    if (iVar3 != 0) {
      FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0xc0e);
      return;
    }
  }
  if ((_DAT_006e936c < (float)param_1[0x247]) && (DAT_006e92e4 < (float)param_1[0x181])) {
    iVar3 = FUN_00442640();
    if (iVar3 != 0) {
      FUN_0043a3f0(10,s_C__projects_meridian_Support_Obj_00724060,0xc1a);
      return;
    }
  }
  if ((_DAT_006e936c < (float)param_1[0x247]) &&
     ((float)param_1[0x181] < DAT_006e92e4 != ((float)param_1[0x181] == DAT_006e92e4))) {
    (**(code **)(*param_1 + 0x140))(param_1 + 5,1,&local_1c,local_10);
    if ((float)param_1[6] - fStack_18 < _DAT_006e99bc !=
        (NAN((float)param_1[6] - fStack_18) || NAN(_DAT_006e99bc))) {
      FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0xc29);
      return;
    }
  }
  if (param_1[0x1d9] == 0) {
    fVar1 = *(float *)(param_1[0x114] + 0xa4);
    fStack_14 = fVar1 * (float)param_1[0x1f6];
    param_1[0x1d5] = (int)(fVar1 * (float)param_1[500]);
    param_1[0x1d7] = (int)fStack_14;
    param_1[0x1d6] = (int)(fVar1 * (float)param_1[0x1f5]);
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0xc33);
    return;
  }
  if ((param_1[400] != 0) && (_DAT_006e936c < (float)param_1[0x247])) {
    fVar1 = *(float *)(param_1[0x114] + 0xa0);
    fStack_14 = fVar1 * (float)param_1[0x1f6];
    param_1[0x1d5] = (int)(fVar1 * (float)param_1[500]);
    param_1[0x1d7] = (int)fStack_14;
    param_1[0x1d6] = (int)(fVar1 * (float)param_1[0x1f5]);
    fVar6 = (float10)FUN_0064ca10(param_1[500],param_1[0x1f6]);
    param_1[0x11d] = (int)(float)fVar6;
    param_1[0x160] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x164] = 1;
    param_1[0x167] = param_1[0x167] + 1;
    FUN_0043a3f0(5,s_C__projects_meridian_Support_Obj_00724060,0xc3c);
    return;
  }
  fStack_18 = (float)param_1[0x122];
  local_1c = param_1[0x121];
  fStack_14 = (float)param_1[0x123];
  param_1[0x1e5] = 0x3f800000;
  if ((param_1[0x1be] != 0) && ((param_1[0x1c2] == 0 && (param_1[0x1c3] == 0)))) {
    param_1[0x180] = 0;
  }
  if ((float)param_1[0x184] <= *(float *)(param_1[0x114] + 0x98)) {
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    uVar10 = 0x3d4ccccd;
    uVar9 = 1;
    uVar8 = 1;
    uVar4 = FUN_0053cc70(s_CLIMB_IDLE_CLIFF_00724244);
    FUN_00540840(uVar4,uVar8,uVar9,uVar10);
    goto LAB_0043f8bc;
  }
  fVar1 = (float)param_1[0x180];
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  fVar2 = (float)param_1[0x181];
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar2 = -fVar2;
  }
  if (fVar1 <= fVar2) {
    fVar1 = (float)param_1[0x181];
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      fVar1 = -fVar1;
    }
    param_1[0x1e5] = (int)fVar1;
    if ((float)param_1[0x181] <= DAT_006e92e4) {
      if (param_1[0x1ff] != 0) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        iVar3 = FUN_0053cc70(s_CLIMB_DOWN_CLIFF_00724258);
        if (iVar3 == param_1[0x200]) goto LAB_0043f759;
      }
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar7 = s_CLIMB_DOWN_CLIFF_00724258;
    }
    else {
      if (param_1[0x1ff] != 0) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        iVar3 = FUN_0053cc70(s_CLIMB_CLIFF_00724238);
        if (iVar3 == param_1[0x200]) goto LAB_0043f759;
      }
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar7 = s_CLIMB_CLIFF_00724238;
    }
  }
  else {
    fVar1 = (float)param_1[0x180];
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      fVar1 = -fVar1;
    }
    param_1[0x1e5] = (int)fVar1;
    if ((float)param_1[0x180] <= DAT_006e92e4) {
      if (param_1[0x1ff] != 0) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        iVar3 = FUN_0053cc70(s_CLIMB_LEFT_CLIFF_0072426c);
        if (iVar3 == param_1[0x200]) goto LAB_0043f759;
      }
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar7 = s_CLIMB_LEFT_CLIFF_0072426c;
    }
    else {
      if (param_1[0x1ff] != 0) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        iVar3 = FUN_0053cc70(s_CLIMB_RIGHT_CLIFF_00724280);
        if (iVar3 == param_1[0x200]) {
LAB_0043f759:
          FUN_00549470(param_1 + 0x115);
          FUN_00549580(param_1 + 0x115);
          pcVar7 = s_CLIMB_IDLE_CLIFF_00724244;
          goto LAB_0043f7ad;
        }
      }
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar7 = s_CLIMB_RIGHT_CLIFF_00724280;
    }
  }
LAB_0043f7ad:
  uVar10 = 0x3d4ccccd;
  uVar9 = 1;
  uVar8 = 1;
  uVar4 = FUN_0053cc70(pcVar7);
  FUN_00540840(uVar4,uVar8,uVar9,uVar10);
  iVar3 = param_1[0x158];
  if (*(int *)(iVar3 + 8) != -1) {
    FUN_00549470(iVar3 + 4);
    FUN_00549580(iVar3 + 4);
    iVar5 = FUN_0053cc70(s_CLIMB_IDLE_CLIFF_00724244);
    if (*(int *)(iVar3 + 8) == iVar5) goto LAB_0043f8bc;
  }
  iVar3 = param_1[0x14a];
  iVar5 = FUN_00549470(param_1 + 0x115);
  FUN_00549580(param_1 + 0x115);
  fVar1 = *(float *)(iVar3 * 0x50 + 0x40 + *(int *)(iVar5 + 0x58));
  iVar3 = iVar3 * 0x50 + *(int *)(iVar5 + 0x58);
  param_1[0x1e5] =
       (int)((*(float *)(param_1[0x114] + 0x9c) * (float)param_1[0x1e5]) /
            (SQRT(fVar1 * fVar1 +
                  *(float *)(iVar3 + 0x3c) * *(float *)(iVar3 + 0x3c) +
                  *(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38)) /
            ((float)(int)*(short *)(iVar3 + 0x24) / (float)*(byte *)(iVar3 + 0x2f))));
LAB_0043f8bc:
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x121] = local_1c;
  param_1[0x122] = (int)fStack_18;
  param_1[0x123] = (int)fStack_14;
  return;
}

