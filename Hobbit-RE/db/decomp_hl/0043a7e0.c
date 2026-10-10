
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043a7e0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_3c [4];
  undefined1 local_38 [8];
  undefined1 auStack_30 [4];
  float fStack_2c;
  undefined1 local_10 [16];
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e5] = 0x3f800000;
  param_1[0x1ec] = *(int *)param_1[0x114];
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_38,local_10);
  if ((((param_1[0x2a] != 0 || param_1[0x2b] != 0) &&
       (iVar2 = FUN_004021c0(param_1[0x2a],param_1[0x2b]), iVar2 != 0)) &&
      (*(char *)(iVar2 + 0x7c) == '.')) && (*(char *)(iVar2 + 0x154) < '\0')) {
    FUN_0043a3f0(0x1b,s_C__projects_meridian_Support_Obj_00724060,0x14b);
    return;
  }
  FUN_00446de0();
  fVar1 = (float)param_1[0x29c];
  param_1[0x29c] = (int)((float)param_1[0x248] + fVar1);
  if (_DAT_006e9804 <= (float)param_1[0x248] + fVar1) {
    param_1[0x29d] = (int)((float)param_1[0x248] + (float)param_1[0x29d]);
  }
  iVar2 = FUN_00472e70();
  if (iVar2 == 0) {
    FUN_0043b5f0();
  }
  if (param_1[0x1d8] == 0) {
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0x169);
    return;
  }
  if (param_1[0x100] != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724060,0x170);
    return;
  }
  if (param_1[0x1ac] != 0) {
    FUN_0043a3f0(0x15,s_C__projects_meridian_Support_Obj_00724060,0x177);
    return;
  }
  if (param_1[0x11b4] != 0) {
    FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00724060,0x17e);
    return;
  }
  if (param_1[0x196] != 0) {
    if ((param_1[0xf4] != 0) || (param_1[0xf0] != 0)) {
      FUN_0043a3f0(0x10,s_C__projects_meridian_Support_Obj_00724060,0x187);
      return;
    }
    if (param_1[0xec] == 0) {
      return;
    }
    fVar5 = (float10)FUN_00434ca0(2);
    if ((NAN(fVar5) || NAN((float10)DAT_006e92e4)) != (fVar5 == (float10)DAT_006e92e4)) {
      return;
    }
    FUN_0043a3f0(0x14,s_C__projects_meridian_Support_Obj_00724060,0x18b);
    return;
  }
  if ((param_1[0xf4] == 0) || (param_1[0x191] == 0)) {
LAB_0043aa05:
    if ((param_1[400] != 0) && (iVar2 = FUN_00422510(), iVar2 != 0)) {
      FUN_00422590();
      return;
    }
  }
  else {
    param_1[0x26f] = 1;
    if (param_1[400] != 0) {
      if (param_1[0x1da] == 0) {
        FUN_0043a3f0(0xf,s_C__projects_meridian_Support_Obj_00724060,0x199);
        FUN_00425c80();
        return;
      }
      goto LAB_0043aa05;
    }
  }
  iVar2 = FUN_00467eb0();
  if (iVar2 != 0) {
    FUN_0043a3f0(0x26,s_C__projects_meridian_Support_Obj_00724060,0x1b1);
    return;
  }
  if (param_1[0x1d8] == 0) {
    param_1[0x270] = (int)((float)param_1[0x248] + (float)param_1[0x270]);
    if (_DAT_006e95a8 < (float)param_1[0x270]) {
      FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0x1cd);
      return;
    }
  }
  else {
    param_1[0x270] = 0;
  }
  if ((((param_1[0x1658] != 0) &&
       ((**(code **)(*param_1 + 0x140))(param_1 + 5,0,auStack_3c,auStack_30),
       param_1[0x2a] == param_1[0x165a])) && (param_1[0x2b] == param_1[0x165b])) &&
     (fStack_2c < *(float *)(param_1[0x114] + 0x1b8) !=
      (NAN(fStack_2c) || NAN(*(float *)(param_1[0x114] + 0x1b8))))) goto LAB_0043afa4;
  iVar2 = FUN_00472e70();
  if (((iVar2 == 0) && (iVar2 = param_1[0x237], iVar2 != 0x20)) && (iVar2 != 0x21)) {
    if (param_1[0x191] != 0) {
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar9 = 0x3e000000;
      pcVar6 = s_idle_sneak_00724054;
      goto LAB_0043af89;
    }
    if ((param_1[0x231] != 0) && (*(float *)(param_1[0x114] + 0x1cc) < (float)param_1[0x232])) {
      if ((param_1[0xf0] == 0) && ((param_1[0xf4] == 0 && (param_1[0xec] == 0)))) goto LAB_0043aeec;
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar9 = 0x3e800000;
      pcVar6 = s_idle_water_weapon_00724040;
      goto LAB_0043af89;
    }
    if (((param_1[0xf0] != 0) || (param_1[0xf4] != 0)) || (param_1[0xec] != 0)) {
      if ((float)param_1[0x29c] < _DAT_006e97f4 == ((float)param_1[0x29c] == _DAT_006e97f4)) {
        if (((param_1[0xec] == 0) || (iVar2 != 0x14)) ||
           ((fVar5 = (float10)FUN_00434ca0(2),
            (NAN(fVar5) || NAN((float10)DAT_006e92e4)) != (fVar5 == (float10)DAT_006e92e4) ||
            ((float)param_1[0x29c] < _DAT_006e97f4 == ((float)param_1[0x29c] == _DAT_006e97f4)))))
        goto LAB_0043ac88;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar9 = 0x3e000000;
        pcVar6 = s_combat_ready_stone_idle_00724028;
      }
      else {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar9 = 0x3e800000;
        pcVar6 = s_combat_ready_idle_00720c50;
      }
      goto LAB_0043af89;
    }
LAB_0043ac88:
    if ((param_1[0x237] == 3) &&
       ((float)param_1[0x29c] < _DAT_006e97f4 != ((float)param_1[0x29c] == _DAT_006e97f4))) {
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar9 = 0x3e000000;
      pcVar6 = s_idle_cool_down_00724018;
      goto LAB_0043af89;
    }
    iVar2 = param_1[0x158];
    if (*(int *)(iVar2 + 8) != -1) {
      FUN_00549470(iVar2 + 4);
      FUN_00549580(iVar2 + 4);
      iVar3 = FUN_0053cc70(s_combat_ready_idle_00720c50);
      if (*(int *)(iVar2 + 8) == iVar3) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar9 = 0x3e000000;
        pcVar6 = s_combat_ready_trans_idle_00724000;
        goto LAB_0043af89;
      }
    }
    iVar2 = param_1[0x158];
    if (*(int *)(iVar2 + 8) != -1) {
      FUN_00549470(iVar2 + 4);
      FUN_00549580(iVar2 + 4);
      iVar3 = FUN_0053cc70(s_idle_cool_down_00724018);
      if (*(int *)(iVar2 + 8) == iVar3) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar9 = 0x3e000000;
        pcVar6 = s_idle_cool_down_trans_idle_00723fe4;
        goto LAB_0043af89;
      }
    }
    if ((0 < param_1[0x14d]) ||
       ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
        ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
      if ((param_1[0xf0] == 0) && ((param_1[0xf4] == 0 && (param_1[0xec] == 0)))) {
        uVar9 = 0;
        if (DAT_00798548 == 0) {
          uVar9 = 0x3e000000;
        }
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        goto LAB_0043af84;
      }
      uVar9 = 0;
      if (DAT_00798548 == 0) {
        uVar9 = 0x3e000000;
      }
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar6 = s_IDLE_WEAPON_00720114;
      goto LAB_0043af89;
    }
  }
  else {
    if ((param_1[0x231] == 0) || ((float)param_1[0x232] <= *(float *)(param_1[0x114] + 0x1cc))) {
      if ((param_1[0xf0] == 0) && ((param_1[0xf4] == 0 && (param_1[0xec] == 0)))) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar9 = 0x3e000000;
LAB_0043af84:
        pcVar6 = s_IDLE_NO_WEAPON_007207fc;
      }
      else {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar9 = 0x3e000000;
        pcVar6 = s_IDLE_WEAPON_00720114;
      }
    }
    else if (((param_1[0xf0] == 0) && (param_1[0xf4] == 0)) && (param_1[0xec] == 0)) {
LAB_0043aeec:
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar9 = 0x3e800000;
      pcVar6 = s_idle_water_no_weapon_00723fcc;
    }
    else {
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar9 = 0x3e800000;
      pcVar6 = s_idle_water_weapon_00724040;
    }
LAB_0043af89:
    uVar8 = 1;
    uVar7 = 0;
    uVar4 = FUN_0053cc70(pcVar6);
    FUN_00540840(uVar4,uVar7,uVar8,uVar9);
  }
  FUN_004430e0(2);
LAB_0043afa4:
  if (DAT_006e92e4 < (float)param_1[0x184]) {
    if (param_1[0x1c2] == 0) {
      fVar5 = (float10)(float)param_1[0x185];
    }
    else {
      fVar5 = (float10)(**(code **)(*param_1 + 0x10c))();
    }
    param_1[0x1eb] = (int)(float)fVar5;
  }
  fVar5 = ((float10)(float)param_1[0x1eb] - (float10)(float)param_1[0x11d]) + (float10)_DAT_006e9368
  ;
  if (((float10)_DAT_006e95a0 < fVar5) ||
     (fVar5 < (float10)_DAT_006e959c != (NAN(fVar5) || NAN((float10)_DAT_006e959c)))) {
    fVar5 = (float10)FUN_0064c6b0((float)fVar5,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar5) {
    do {
      fVar5 = fVar5 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar5);
  }
  if (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar5 = fVar5 + (float10)_DAT_006e9598;
    } while (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4)));
  }
  fVar5 = fVar5 - (float10)_DAT_006e9368;
  if (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4))) {
    fVar5 = -fVar5;
  }
  if (((fVar5 < (float10)_DAT_006ec070 != (NAN(fVar5) || NAN((float10)_DAT_006ec070))) ||
      (param_1[0x1658] != 0)) && (*(float *)(param_1[0x114] + 0xc) < (float)param_1[0x184])) {
    if (param_1[0x191] != 0) {
      FUN_0043a3f0(4,s_C__projects_meridian_Support_Obj_00724060,0x269);
      return;
    }
    FUN_0043a3f0(3,s_C__projects_meridian_Support_Obj_00724060,0x26e);
    return;
  }
  _DAT_00723d9c = 0x41400000;
  _DAT_00723da0 = 0x41c80000;
  param_1[0x1ec] =
       (int)(float)(fVar5 * (float10)_DAT_006e955c * (float10)_DAT_006ec054 + (float10)_DAT_006e99d8
                   );
  return;
}

