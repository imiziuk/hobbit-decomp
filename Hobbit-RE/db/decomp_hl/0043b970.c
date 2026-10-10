
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043b970(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  char *pcVar13;
  float fVar14;
  undefined4 uVar15;
  float fStack_70;
  int iStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int aiStack_54 [6];
  undefined1 auStack_3c [4];
  undefined1 local_38 [24];
  undefined1 local_20 [32];
  
  param_1[0x1e6] = 0x3f800000;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e5] = 0x3f800000;
  param_1[0x1ec] = *(int *)(param_1[0x114] + 4);
  piVar1 = param_1 + 5;
  (**(code **)(*param_1 + 0x140))(piVar1,0,local_38,local_20);
  if ((((param_1[0x2a] != 0 || param_1[0x2b] != 0) &&
       (iVar3 = FUN_004021c0(param_1[0x2a],param_1[0x2b]), iVar3 != 0)) &&
      (*(char *)(iVar3 + 0x7c) == '.')) && (*(char *)(iVar3 + 0x154) < '\0')) {
    FUN_0043a3f0(0x1b,s_C__projects_meridian_Support_Obj_00724060,0x43d);
    return;
  }
  FUN_00446de0();
  FUN_0042c8b0(piVar1,param_1[0x11d],1);
  if (param_1[0x100] != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724060,0x454);
    return;
  }
  if (param_1[0x11b4] != 0) {
    FUN_0043a3f0(0x12,s_C__projects_meridian_Support_Obj_00724060,0x45d);
    return;
  }
  iVar3 = FUN_004383b0();
  if (iVar3 != 0) {
    FUN_0043a3f0(0x1c,s_C__projects_meridian_Support_Obj_00724060,0x468);
    return;
  }
  fStack_60 = (float)param_1[0x11d];
  iVar3 = FUN_00442a80(piVar1,fStack_60,*(undefined4 *)(param_1[0x114] + 0x90),
                       *(undefined4 *)(param_1[0x114] + 0x94),1,2,local_20,auStack_3c);
  if (iVar3 != 0) {
    FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00724060,0x47d);
    return;
  }
  fStack_60 = (float)param_1[0x11d];
  iVar3 = FUN_00442790(piVar1,fStack_60,aiStack_54,&fStack_60,1);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x14))(aiStack_54,0);
    param_1[0x11d] = iStack_68;
    param_1[0x160] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x164] = 1;
    param_1[0x167] = param_1[0x167] + 1;
    FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00724060,0x48a);
    return;
  }
  iVar3 = FUN_00467eb0();
  if (iVar3 != 0) {
    fVar2 = (float)param_1[0x17a7];
    param_1[0x17a7] = (int)((float)param_1[0x248] + fVar2);
    if ((float)param_1[0x248] + fVar2 <= _DAT_00723d98) {
      return;
    }
    FUN_0043a3f0(0x26,s_C__projects_meridian_Support_Obj_00724060,0x499);
    return;
  }
  param_1[0x17a7] = 0;
  if (param_1[0x196] != 0) {
    if (((param_1[0xf0] != 0) || (param_1[0xf4] != 0)) ||
       ((param_1[0xec] != 0 &&
        (fVar11 = (float10)FUN_00434ca0(2),
        (NAN(fVar11) || NAN((float10)DAT_006e92e4)) == (fVar11 == (float10)DAT_006e92e4))))) {
      aiStack_54[0] = param_1[0x1d5];
      aiStack_54[2] = param_1[0x1d7];
      aiStack_54[1] = 0;
      FUN_00442560(aiStack_54,0x3f000000);
    }
    if ((param_1[0xf0] != 0) || (param_1[0xf4] != 0)) {
      FUN_0043a3f0(0x10,s_C__projects_meridian_Support_Obj_00724060,0x4af);
      return;
    }
    if ((param_1[0xec] != 0) &&
       (fVar11 = (float10)FUN_00434ca0(2),
       (NAN(fVar11) || NAN((float10)DAT_006e92e4)) == (fVar11 == (float10)DAT_006e92e4))) {
      FUN_0043a3f0(0x14,s_C__projects_meridian_Support_Obj_00724060,0x4b4);
      return;
    }
  }
  fVar2 = *(float *)(param_1[0x114] + 0xc);
  if ((float)param_1[0x184] < fVar2 != (NAN((float)param_1[0x184]) || NAN(fVar2))) {
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0x4be);
    return;
  }
  if (((param_1[0x191] != 0) ||
      (fVar2 = *(float *)(param_1[0x114] + 0x18),
      (float)param_1[0x184] < fVar2 != (NAN((float)param_1[0x184]) || NAN(fVar2)))) &&
     (param_1[0x26f] == 0)) {
    fStack_60 = (float)param_1[0x11d];
    iVar3 = FUN_00442790(piVar1,fStack_60,aiStack_54,&fStack_60,0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x14))(aiStack_54,0);
      param_1[0x11d] = iStack_68;
      param_1[0x160] = 1;
      param_1[0x163] = param_1[0x163] + 1;
      param_1[0x164] = 1;
      param_1[0x167] = param_1[0x167] + 1;
      FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0x4ce);
      return;
    }
  }
  if (param_1[0x1d8] == 0) {
    param_1[0x270] = (int)((float)param_1[0x248] + (float)param_1[0x270]);
    if (DAT_006e92e4 < (float)param_1[0x270]) {
      FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0x4f2);
      return;
    }
  }
  else {
    param_1[0x270] = 0;
  }
  if (param_1[0x191] == 0) {
    param_1[0x26f] = 0;
  }
  else {
    iVar3 = param_1[0x114];
    if ((((float)param_1[0x184] < *(float *)(iVar3 + 0x18) !=
          (NAN((float)param_1[0x184]) || NAN(*(float *)(iVar3 + 0x18)))) || (param_1[0x1658] != 0))
       || ((param_1[0x231] != 0 && (*(float *)(iVar3 + 0x1cc) <= (float)param_1[0x232])))) {
      uVar15 = 0x503;
      goto LAB_0043cd4c;
    }
    if ((param_1[0x192] != 0) && (*(float *)(iVar3 + 0x18) < (float)param_1[0x184])) {
      param_1[0x26f] = 1;
      param_1[0x26e] = 0;
    }
  }
  if (param_1[0x26f] == 0) {
LAB_0043be97:
    if ((param_1[400] != 0) && (iVar3 = FUN_00422510(), iVar3 != 0)) {
      FUN_00422590();
      return;
    }
  }
  else {
    fVar2 = (float)param_1[0x26e];
    param_1[0x26e] = (int)((float)param_1[0x248] + fVar2);
    if ((*(float *)(param_1[0x114] + 300) < (float)param_1[0x248] + fVar2) || (param_1[0xf4] == 0))
    {
      uVar15 = 0x516;
LAB_0043cd4c:
      param_1[0x26f] = 0;
      FUN_0043a3f0(4,s_C__projects_meridian_Support_Obj_00724060,uVar15);
      return;
    }
    if (param_1[400] != 0) {
      if (param_1[0x1da] == 0) {
        FUN_0043a3f0(0xf,s_C__projects_meridian_Support_Obj_00724060,0x51e);
        FUN_00425c80();
        return;
      }
      goto LAB_0043be97;
    }
  }
  piVar1 = param_1 + 0x115;
  FUN_00549470(piVar1);
  FUN_00549580(piVar1);
  fVar4 = (float)FUN_0053cc70(s_POLE_READY_007241a8);
  fVar2 = (float)param_1[0x14a];
  fStack_58 = fVar2;
  FUN_00549470(piVar1);
  FUN_00549580(piVar1);
  fVar5 = (float)FUN_0053cc70(s_sting_targ_back_00724198);
  FUN_00549470(piVar1);
  FUN_00549580(piVar1);
  fVar6 = (float)FUN_0053cc70(s_sting_targ_left_00724188);
  FUN_00549470(piVar1);
  FUN_00549580(piVar1);
  fStack_60 = (float)FUN_0053cc70(s_sting_targ_right_00724174);
  if (((param_1[0xf0] == 0) && (param_1[0xf4] == 0)) && (param_1[0xec] == 0)) {
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    fStack_70 = (float)FUN_0053cc70(s_SNEAK_NO_WEAPON_00724140);
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    fVar7 = (float)FUN_0053cc70(s_WALK_NO_WEAPON_00720500);
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    fVar8 = (float)FUN_0053cc70(s_RUN_NO_WEAPON_007204c8);
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    pcVar13 = s_trudge_water_no_weapon_00724128;
  }
  else {
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    fStack_70 = (float)FUN_0053cc70(s_SNEAK_WEAPON_00724164);
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    fVar7 = (float)FUN_0053cc70(s_WALK_WEAPON_007204f4);
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    fVar8 = (float)FUN_0053cc70(s_RUN_WEAPON_007204d8);
    FUN_00549470(piVar1);
    FUN_00549580(piVar1);
    pcVar13 = s_trudge_water_weapon_00724150;
  }
  fVar9 = (float)FUN_0053cc70(pcVar13);
  uVar15 = 0x3e800000;
  if ((param_1[0x237] == 9) || (param_1[0x237] == 0x1d)) {
    uVar15 = 0;
  }
  fVar14 = (float)param_1[0x14c] / (float)param_1[0x14b];
  if ((param_1[0x231] != 0) && (*(float *)(param_1[0x114] + 0x1cc) < (float)param_1[0x232])) {
    fVar11 = (float10)(**(code **)(*param_1 + 0x10c))();
    fVar11 = ((float10)(float)param_1[0x1c6] - fVar11) + (float10)_DAT_006e9368;
    fStack_5c = (float)fVar11;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0(fStack_5c,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
    }
    fVar11 = ((fVar11 - (float10)_DAT_006e9368) - (float10)_DAT_006e9368) + (float10)_DAT_006e9368;
    fStack_5c = (float)fVar11;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0(fStack_5c,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
    }
    fVar11 = fVar11 - (float10)_DAT_006e9368;
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      fVar11 = -fVar11;
    }
    if (fVar11 < (float10)_DAT_006ec070 == (NAN(fVar11) || NAN((float10)_DAT_006ec070))) {
      if ((param_1[0x1c2] == 0) && (fVar6 = fStack_60, param_1[0x1c3] == 0)) {
        if (fVar2 != fVar9) {
          if ((((fVar2 != fVar7) && (fVar2 != fStack_70)) && (fVar2 != fVar8)) && (fVar2 != fVar4))
          {
            fVar14 = 0.0;
          }
          FUN_00540840(fVar9,0,1,0x3f000000);
          fStack_5c = (float)param_1[0x14b];
          param_1[0x160] = 1;
          param_1[0x163] = param_1[0x163] + 1;
          param_1[0x164] = 1;
          param_1[0x167] = param_1[0x167] + 1;
          fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                         (float)param_1[0x14b] - DAT_006e92e8);
          param_1[0x14c] = (int)(float)fVar11;
        }
      }
      else {
        if (fVar2 != fVar6) {
          FUN_00540840(fVar6,0,1,uVar15);
          fStack_5c = (float)param_1[0x14b];
          param_1[0x160] = 1;
          param_1[0x163] = param_1[0x163] + 1;
          param_1[0x164] = 1;
          param_1[0x167] = param_1[0x167] + 1;
          fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                         (float)param_1[0x14b] - DAT_006e92e8);
          param_1[0x14c] = (int)(float)fVar11;
        }
        param_1[0x184] = 0x3f266666;
      }
    }
    else {
      if (fVar2 != fVar5) {
        FUN_00540840(fVar5,0,1,uVar15);
        fStack_5c = (float)param_1[0x14b];
        param_1[0x160] = 1;
        param_1[0x163] = param_1[0x163] + 1;
        param_1[0x164] = 1;
        param_1[0x167] = param_1[0x167] + 1;
        fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                       (float)param_1[0x14b] - DAT_006e92e8);
        param_1[0x14c] = (int)(float)fVar11;
      }
      param_1[0x184] = 0x3f19999a;
    }
    iVar3 = param_1[0x114];
    fStack_70 = (*(float *)(iVar3 + 0x28) - *(float *)(iVar3 + 0x24)) *
                (((float)param_1[0x184] - *(float *)(iVar3 + 0x14)) /
                (DAT_006e92e8 - *(float *)(iVar3 + 0x14))) + *(float *)(iVar3 + 0x24);
    param_1[0x17b0] = 1;
    goto LAB_0043c9ba;
  }
  if (param_1[0x26f] == 0) {
LAB_0043c55d:
    if (*(float *)(param_1[0x114] + 0x18) < (float)param_1[0x184]) {
      fVar11 = (float10)(**(code **)(*param_1 + 0x10c))();
      fVar11 = ((float10)(float)param_1[0x1c6] - fVar11) + (float10)_DAT_006e9368;
      fStack_5c = (float)fVar11;
      if (((float10)_DAT_006e95a0 < fVar11) ||
         (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
        fVar11 = (float10)FUN_0064c6b0(fStack_5c,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar11) {
        do {
          fVar11 = fVar11 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar11);
      }
      if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar11 = fVar11 + (float10)_DAT_006e9598;
        } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
      }
      fVar11 = ((fVar11 - (float10)_DAT_006e9368) - (float10)_DAT_006e9368) + (float10)_DAT_006e9368
      ;
      fStack_5c = (float)fVar11;
      if (((float10)_DAT_006e95a0 < fVar11) ||
         (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
        fVar11 = (float10)FUN_0064c6b0(fStack_5c,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar11) {
        do {
          fVar11 = fVar11 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar11);
      }
      if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar11 = fVar11 + (float10)_DAT_006e9598;
        } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
      }
      fVar11 = fVar11 - (float10)_DAT_006e9368;
      if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
        fVar11 = -fVar11;
      }
      if (fVar11 < (float10)_DAT_006ec070 == (NAN(fVar11) || NAN((float10)_DAT_006ec070))) {
        if ((param_1[0x1c2] == 0) && (fVar6 = fStack_60, param_1[0x1c3] == 0)) {
          if (fVar2 != fVar8) {
            if (((fVar2 == fVar7) || (fVar2 == fStack_70)) || (fVar2 == fVar4)) {
LAB_0043c801:
              if (fVar2 == fVar9) goto LAB_0043c805;
            }
            else {
              if (fVar2 != fVar9) {
                fVar14 = 0.0;
                goto LAB_0043c801;
              }
LAB_0043c805:
              uVar15 = 0x3f000000;
            }
            FUN_00540840(fVar8,0,1,uVar15);
            fStack_5c = (float)param_1[0x14b];
            param_1[0x160] = 1;
            param_1[0x163] = param_1[0x163] + 1;
            param_1[0x164] = 1;
            param_1[0x167] = param_1[0x167] + 1;
            fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                           (float)param_1[0x14b] - DAT_006e92e8);
            param_1[0x14c] = (int)(float)fVar11;
          }
        }
        else {
          if (fVar2 != fVar6) {
            FUN_00540840(fVar6,0,1,uVar15);
            fStack_5c = (float)param_1[0x14b];
            param_1[0x160] = 1;
            param_1[0x163] = param_1[0x163] + 1;
            param_1[0x164] = 1;
            param_1[0x167] = param_1[0x167] + 1;
            fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                           (float)param_1[0x14b] - DAT_006e92e8);
            param_1[0x14c] = (int)(float)fVar11;
          }
          param_1[0x184] = 0x3f4ccccd;
        }
      }
      else {
        if (fVar2 != fVar5) {
          FUN_00540840(fVar5,0,1,uVar15);
          fStack_5c = (float)param_1[0x14b];
          param_1[0x160] = 1;
          param_1[0x163] = param_1[0x163] + 1;
          param_1[0x164] = 1;
          param_1[0x167] = param_1[0x167] + 1;
          fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                         (float)param_1[0x14b] - DAT_006e92e8);
          param_1[0x14c] = (int)(float)fVar11;
        }
        param_1[0x184] = 0x3f19999a;
      }
      iVar3 = param_1[0x114];
      fStack_70 = (*(float *)(iVar3 + 0x30) - *(float *)(iVar3 + 0x2c)) *
                  (((float)param_1[0x184] - *(float *)(iVar3 + 0x18)) /
                  (DAT_006e92e8 - *(float *)(iVar3 + 0x18))) + *(float *)(iVar3 + 0x2c);
      param_1[0x17b0] = 1;
      goto LAB_0043c9ba;
    }
LAB_0043c8b9:
    if ((float)param_1[0x184] <= *(float *)(param_1[0x114] + 0x14)) {
      fStack_70 = 1.0;
      goto LAB_0043c9ba;
    }
    if (fVar2 != fVar7) {
      if (((fVar2 == fVar8) || (fVar2 == fStack_70)) || (fVar2 == fVar4)) {
LAB_0043c8fd:
        if (fVar2 == fVar9) goto LAB_0043c901;
      }
      else {
        if (fVar2 != fVar9) {
          fVar14 = 0.0;
          goto LAB_0043c8fd;
        }
LAB_0043c901:
        uVar15 = 0x3f000000;
      }
      FUN_00540840(fVar7,0,1,uVar15);
      fStack_5c = (float)param_1[0x14b];
      param_1[0x160] = 1;
      param_1[0x163] = param_1[0x163] + 1;
      param_1[0x164] = 1;
      param_1[0x167] = param_1[0x167] + 1;
      fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                     (float)param_1[0x14b] - DAT_006e92e8);
      param_1[0x14c] = (int)(float)fVar11;
    }
    iVar3 = param_1[0x114];
    fStack_70 = (*(float *)(iVar3 + 0x28) - *(float *)(iVar3 + 0x24)) *
                (((float)param_1[0x184] - *(float *)(iVar3 + 0x14)) /
                (DAT_006e92e8 - *(float *)(iVar3 + 0x14))) + *(float *)(iVar3 + 0x24);
    param_1[0x17b0] = 1;
    goto LAB_0043c9ba;
  }
  if ((float)param_1[0x184] <= *(float *)(param_1[0x114] + 0x18)) {
    if (param_1[0x26f] == 0) goto LAB_0043c55d;
    goto LAB_0043c8b9;
  }
  if (fVar2 != fVar4) {
    if (((fVar2 == fVar7) || (fVar2 == fStack_70)) || (fVar2 == fVar8)) {
LAB_0043c4a0:
      if (fVar2 == fVar9) goto LAB_0043c4a4;
    }
    else {
      if (fVar2 != fVar9) {
        fVar14 = 0.0;
        goto LAB_0043c4a0;
      }
LAB_0043c4a4:
      uVar15 = 0x3f000000;
    }
    FUN_00540840(fVar4,0,1,uVar15);
    fStack_5c = (float)param_1[0x14b];
    param_1[0x160] = 1;
    param_1[0x164] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x167] = param_1[0x167] + 1;
    fVar11 = (float10)FUN_0064c6b0((float)(int)fStack_5c * fVar14,
                                   (float)param_1[0x14b] - DAT_006e92e8);
    param_1[0x14c] = (int)(float)fVar11;
  }
  iVar3 = param_1[0x114];
  fStack_70 = (*(float *)(iVar3 + 0x30) - *(float *)(iVar3 + 0x2c)) *
              (((float)param_1[0x184] - *(float *)(iVar3 + 0x18)) /
              (DAT_006e92e8 - *(float *)(iVar3 + 0x18))) + *(float *)(iVar3 + 0x2c);
  param_1[0x17b0] = 0;
LAB_0043c9ba:
  iVar3 = param_1[0x14a];
  iVar10 = FUN_00549470(piVar1);
  FUN_00549580(piVar1);
  fVar2 = *(float *)(iVar3 * 0x50 + 0x40 + *(int *)(iVar10 + 0x58));
  iVar3 = iVar3 * 0x50 + *(int *)(iVar10 + 0x58);
  fStack_5c = (float)(uint)*(byte *)(iVar3 + 0x2f);
  param_1[0x1e5] =
       (int)(fStack_70 /
            (SQRT(fVar2 * fVar2 +
                  *(float *)(iVar3 + 0x3c) * *(float *)(iVar3 + 0x3c) +
                  *(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38)) /
            ((float)(int)*(short *)(iVar3 + 0x24) / (float)(int)fStack_5c)));
  fVar12 = (float10)FUN_0056b610(param_1[0x185]);
  fVar11 = (float10)_DAT_006e9598;
  param_1[0x1eb] = (int)(float)fVar12;
  if (fVar11 < fVar12) {
    do {
      fVar12 = fVar12 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 < fVar12);
    param_1[0x1eb] = (int)(float)fVar12;
  }
  fVar2 = (float)param_1[0x1eb];
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    do {
      fVar2 = fVar2 + _DAT_006e9598;
    } while (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4)));
    param_1[0x1eb] = (int)fVar2;
  }
  if ((((param_1[0x1be] != 0) && (param_1[0x1c2] == 0)) && (param_1[0x1c3] == 0)) &&
     ((param_1[400] == 0 &&
      ((NAN((float)param_1[0x181]) || NAN(DAT_006e92e4)) != ((float)param_1[0x181] == DAT_006e92e4))
      ))) {
    param_1[0x184] = 0;
  }
  fVar11 = ((float10)(float)param_1[0x1eb] - (float10)(float)param_1[0x11d]) +
           (float10)_DAT_006e9368;
  fStack_5c = (float)fVar11;
  if (((float10)_DAT_006e95a0 < fVar11) ||
     (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
    fVar11 = (float10)FUN_0064c6b0(fStack_5c,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar11) {
    do {
      fVar11 = fVar11 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar11);
  }
  if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar11 = fVar11 + (float10)_DAT_006e9598;
    } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
  }
  fStack_60 = 1.0;
  fVar2 = (float)(fVar11 - (float10)_DAT_006e9368);
  fVar6 = fVar2;
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar6 = -fVar2;
  }
  if (fVar6 < _DAT_006ebfc4 == (NAN(fVar6) || NAN(_DAT_006ebfc4))) {
    fVar6 = DAT_006e92e8;
    if (fVar2 <= _DAT_006ec080) {
      fVar6 = fVar2 * _DAT_006ec07c;
    }
  }
  else {
    fStack_60 = 7.5;
    fVar6 = DAT_006e92e4;
  }
  fVar6 = fVar6 * _DAT_006ec078;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x11e] =
       (int)(fStack_60 * (float)param_1[0x248] * (fVar6 - (float)param_1[0x11e]) +
            (float)param_1[0x11e]);
  fVar11 = ((float10)(float)param_1[0x1eb] - (float10)(float)param_1[0x11d]) +
           (float10)_DAT_006e9368;
  fStack_5c = (float)fVar11;
  if (((float10)_DAT_006e95a0 < fVar11) ||
     (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
    fVar11 = (float10)FUN_0064c6b0(fStack_5c,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar11) {
    do {
      fVar11 = fVar11 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar11);
  }
  if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar11 = fVar11 + (float10)_DAT_006e9598;
    } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
  }
  fVar11 = fVar11 - (float10)_DAT_006e9368;
  if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
    fVar11 = -fVar11;
  }
  if (fStack_58 != fVar7) {
    if (fVar11 <= (float10)_DAT_006e99e0) {
      _DAT_00723d9c = 0x40800000;
      _DAT_00723da0 = 0x41000000;
      param_1[0x1ec] =
           (int)(float)((fVar11 * (float10)_DAT_006ec074 + (float10)DAT_006e92e8) *
                       (float10)_DAT_006e99bc);
      return;
    }
    param_1[0x1ec] = 0x47c35000;
    return;
  }
  _DAT_00723d9c = 0x40000000;
  _DAT_00723da0 = 0x40800000;
  fVar11 = fVar11 * (float10)_DAT_006ec074 + (float10)DAT_006e92e8;
  param_1[0x1ec] = (int)(float)(fVar11 + fVar11);
  return;
}

