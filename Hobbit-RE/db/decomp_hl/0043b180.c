
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043b180(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  param_1[0x29c] = (int)((float)param_1[0x248] + (float)param_1[0x29c]);
  iVar4 = param_1[0x158];
  if (*(int *)(iVar4 + 8) != -1) {
    FUN_00549470(iVar4 + 4);
    FUN_00549580(iVar4 + 4);
    iVar3 = FUN_0053cc70(s_fidget_dance_007240a0);
    if ((*(int *)(iVar4 + 8) == iVar3) &&
       (((0 < param_1[0x14d] ||
         ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
          ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) &&
        (_DAT_006e999c <= (float)param_1[0x14d])))) {
      FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0x2a7);
      return;
    }
  }
  if ((param_1[0x14d] < 1) &&
     ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
      ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
LAB_0043b2a2:
    if (param_1[0x100] != 0) {
      FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724060,0x2ba);
      return;
    }
    if (param_1[0x1ac] != 0) {
      FUN_0043a3f0(0x15,s_C__projects_meridian_Support_Obj_00724060,0x2c1);
      return;
    }
    if (param_1[0x11b4] != 0) {
      FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00724060,0x2c8);
      return;
    }
    if (param_1[0x196] == 0) {
      if ((param_1[400] != 0) && (iVar4 = FUN_00422510(), iVar4 != 0)) {
        FUN_00422590();
        return;
      }
      if (param_1[0x191] != 0) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar9 = 0x3e000000;
        uVar8 = 1;
        uVar7 = 0;
        uVar5 = FUN_0053cc70(s_idle_sneak_00724054);
        FUN_00540840(uVar5,uVar7,uVar8,uVar9);
      }
      if (param_1[0x1be] == 0) {
        if (DAT_006e92e4 < (float)param_1[0x184]) {
          fVar6 = (float10)FUN_0056b610(param_1[0x185]);
          param_1[0x1eb] = (int)(float)fVar6;
        }
      }
      else {
        iVar4 = (**(code **)(*param_1 + 0x30))();
        fVar2 = _DAT_006e9598;
        fVar1 = *(float *)(iVar4 + 4);
        param_1[0x1eb] = (int)fVar1;
        if (fVar2 < fVar1) {
          do {
            fVar1 = fVar1 - _DAT_006e9598;
          } while (_DAT_006e9598 < fVar1);
          param_1[0x1eb] = (int)fVar1;
        }
        fVar1 = (float)param_1[0x1eb];
        if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
          do {
            fVar1 = fVar1 + _DAT_006e9598;
          } while (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4)));
          param_1[0x1eb] = (int)fVar1;
        }
      }
      fVar6 = ((float10)(float)param_1[0x1eb] - (float10)(float)param_1[0x11d]) +
              (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar6) ||
         (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
        fVar6 = (float10)FUN_0064c6b0((float)fVar6,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar6) {
        do {
          fVar6 = fVar6 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar6);
      }
      if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar6 = fVar6 + (float10)_DAT_006e9598;
        } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
      }
      fVar6 = fVar6 - (float10)_DAT_006e9368;
      if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
        fVar6 = -fVar6;
      }
      if (((fVar6 < (float10)_DAT_006ec070 != (NAN(fVar6) || NAN((float10)_DAT_006ec070))) ||
          (param_1[0x1658] != 0)) && (*(float *)(param_1[0x114] + 0xc) < (float)param_1[0x184])) {
        if (param_1[0x191] == 0) {
          FUN_0043a3f0(3,s_C__projects_meridian_Support_Obj_00724060,0x30a);
          return;
        }
        FUN_0043a3f0(4,s_C__projects_meridian_Support_Obj_00724060,0x305);
        return;
      }
      _DAT_00723d9c = 0x41400000;
      _DAT_00723da0 = 0x41c80000;
      param_1[0x1ec] =
           (int)(float)(fVar6 * (float10)_DAT_006e955c * (float10)_DAT_006ec054 +
                       (float10)_DAT_006e99d8);
    }
    else {
      if ((param_1[0xf4] != 0) || (param_1[0xf0] != 0)) {
        FUN_0043a3f0(0x10,s_C__projects_meridian_Support_Obj_00724060,0x2d1);
        return;
      }
      if ((param_1[0xec] != 0) &&
         (fVar6 = (float10)FUN_00434ca0(2),
         (NAN(fVar6) || NAN((float10)DAT_006e92e4)) == (fVar6 == (float10)DAT_006e92e4))) {
        FUN_0043a3f0(0x14,s_C__projects_meridian_Support_Obj_00724060,0x2d5);
        return;
      }
    }
    return;
  }
  iVar4 = param_1[0x158];
  if (*(int *)(iVar4 + 8) != -1) {
    FUN_00549470(iVar4 + 4);
    FUN_00549580(iVar4 + 4);
    iVar3 = FUN_0053cc70(s_fidget_dance_007240a0);
    if (*(int *)(iVar4 + 8) == iVar3) goto LAB_0043b2a2;
  }
  FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0x2af);
  return;
}

