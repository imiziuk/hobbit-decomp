
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043cea0(int *param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  float10 fVar7;
  char *pcVar8;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  param_1[0x1e6] = 0x3f800000;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e5] = 0x3f800000;
  param_1[0x1ec] = *(int *)(param_1[0x114] + 4);
  iVar4 = FUN_00467eb0();
  if (iVar4 == 0) {
    param_1[0x17a7] = 0;
    if (param_1[0x1658] != 0) {
      param_1[0x1e6] = 0x3eaa7efa;
    }
    if (param_1[0x100] != 0) {
      FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724060,0x6d8);
      return;
    }
    iVar4 = FUN_004383b0();
    if (iVar4 != 0) {
      FUN_0043a3f0(0x1c,s_C__projects_meridian_Support_Obj_00724060,0x6e1);
      return;
    }
    piVar1 = param_1 + 5;
    iVar4 = FUN_00442a80(piVar1,param_1[0x11d],*(undefined4 *)(param_1[0x114] + 0x90),
                         *(undefined4 *)(param_1[0x114] + 0x94),1,2,local_10,local_1c);
    if (iVar4 != 0) {
      FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00724060,0x6f3);
      return;
    }
    if (param_1[0x196] == 0) {
      if (param_1[0x191] == 0) {
        FUN_0043a3f0(3,s_C__projects_meridian_Support_Obj_00724060,0x706);
        return;
      }
      if ((((param_1[0x1c0] == 0) && (param_1[0x1c1] == 0)) && (param_1[0x1c2] == 0)) &&
         (param_1[0x1c3] == 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((param_1[0x1be] != 0) && (bVar3)) {
        param_1[0x184] = 0;
      }
      if ((float)param_1[0x184] < *(float *)(param_1[0x114] + 0xc) !=
          (NAN((float)param_1[0x184]) || NAN(*(float *)(param_1[0x114] + 0xc)))) {
        FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0x712);
        return;
      }
      if ((param_1[400] != 0) && (iVar4 = FUN_00422510(), iVar4 != 0)) {
        if (param_1[0xf4] == 0) {
          FUN_00422590();
          return;
        }
        FUN_0043a3f0(0xf,s_C__projects_meridian_Support_Obj_00724060,0x71b);
        FUN_00425c80();
        return;
      }
      if (*(float *)(param_1[0x114] + 0xc) < (float)param_1[0x184]) {
        FUN_0042c8b0(piVar1,param_1[0x11d],1);
        iVar4 = FUN_00442790(piVar1,param_1[0x11d],local_1c,&local_30,0);
        if (iVar4 != 0) {
          (**(code **)(*param_1 + 0x14))(local_1c,0);
          param_1[0x11d] = unaff_EBX;
          param_1[0x160] = 1;
          param_1[0x163] = param_1[0x163] + 1;
          param_1[0x164] = 1;
          param_1[0x167] = param_1[0x167] + 1;
          FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0x734);
          return;
        }
      }
      if (param_1[0x1d8] == 0) {
        param_1[0x270] = (int)((float)param_1[0x248] + (float)param_1[0x270]);
        if (_DAT_006e95a8 < (float)param_1[0x270]) {
          FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0x745);
          return;
        }
      }
      else {
        param_1[0x270] = 0;
      }
      if (param_1[0x1be] == 0) {
        fVar7 = (float10)FUN_0056b610(param_1[0x185]);
        param_1[0x1eb] = (int)(float)fVar7;
      }
      else if ((param_1[0x1c2] == 0) && (param_1[0x1c3] == 0)) {
        param_1[0x1eb] = param_1[0x185];
      }
      _DAT_00723d9c = 4.0;
      _DAT_00723da0 = 8.0;
      fVar7 = ((float10)(float)param_1[0x1eb] - (float10)(float)param_1[0x11d]) +
              (float10)_DAT_006e9368;
      local_30 = (float)fVar7;
      if (((float10)_DAT_006e95a0 < fVar7) ||
         (fVar7 < (float10)_DAT_006e959c != (NAN(fVar7) || NAN((float10)_DAT_006e959c)))) {
        fVar7 = (float10)FUN_0064c6b0(local_30,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar7) {
        do {
          fVar7 = fVar7 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar7);
      }
      if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar7 = fVar7 + (float10)_DAT_006e9598;
        } while (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4)));
      }
      fVar7 = fVar7 - (float10)_DAT_006e9368;
      if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
        fVar7 = -fVar7;
      }
      piVar1 = param_1 + 0x115;
      param_1[0x1ec] =
           (int)(float)(fVar7 * (float10)_DAT_006ec074 *
                        ((float10)_DAT_00723da0 - (float10)_DAT_00723d9c) + (float10)_DAT_00723d9c);
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      local_28 = FUN_0053cc70(s_sneak_backup_00720538);
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      local_24 = FUN_0053cc70(s_sneak_strafe_left_00720524);
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      local_20 = FUN_0053cc70(s_sneak_strafe_right_00720510);
      if (((param_1[0xf0] == 0) && (param_1[0xf4] == 0)) && (param_1[0xec] == 0)) {
        FUN_00549470(piVar1);
        FUN_00549580(piVar1);
        pcVar8 = s_SNEAK_NO_WEAPON_00724140;
      }
      else {
        FUN_00549470(piVar1);
        FUN_00549580(piVar1);
        pcVar8 = s_SNEAK_WEAPON_00724164;
      }
      iVar5 = FUN_0053cc70(pcVar8);
      iVar4 = param_1[0x114];
      iVar6 = param_1[0x14a];
      local_2c = (*(float *)(iVar4 + 0x20) - *(float *)(iVar4 + 0x1c)) *
                 (((float)param_1[0x184] - *(float *)(iVar4 + 0x10)) /
                 (DAT_006e92e8 - *(float *)(iVar4 + 0x10))) + *(float *)(iVar4 + 0x1c);
      iVar4 = FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      fVar2 = *(float *)(iVar6 * 0x50 + 0x40 + *(int *)(iVar4 + 0x58));
      iVar6 = iVar6 * 0x50 + *(int *)(iVar4 + 0x58);
      local_30 = (float)(uint)*(byte *)(iVar6 + 0x2f);
      iVar4 = param_1[0x14a];
      param_1[0x1e5] =
           (int)(local_2c /
                (SQRT(fVar2 * fVar2 +
                      *(float *)(iVar6 + 0x3c) * *(float *)(iVar6 + 0x3c) +
                      *(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38)) /
                ((float)(int)*(short *)(iVar6 + 0x24) / (float)(int)local_30)));
      if (param_1[0x1be] != 0) {
        if ((float)param_1[0x181] < DAT_006e92e4 !=
            (NAN((float)param_1[0x181]) || NAN(DAT_006e92e4))) {
          if (iVar4 != local_28) {
            FUN_00540840(local_28,0,1,0x3e99999a);
          }
          param_1[0x1e5] = 0x3f99999a;
          return;
        }
        if (param_1[0x1c2] == 0) {
          if (param_1[0x1c3] == 0) {
            if (iVar4 == iVar5) {
              return;
            }
            FUN_00540840(iVar5,0,1,0x3e99999a);
            return;
          }
          if (iVar4 != local_20) {
            FUN_00540840(local_20,0,1,0x3e99999a);
          }
        }
        else if (iVar4 != local_24) {
          FUN_00540840(local_24,0,1,0x3e99999a);
          param_1[0x1e5] = 0x3fb33333;
          return;
        }
        param_1[0x1e5] = 0x3fb33333;
        return;
      }
      if (iVar4 != iVar5) {
        FUN_00540840(iVar5,0,1,0x3e800000);
      }
    }
    else if ((param_1[0xf4] != 0) || (param_1[0xf0] != 0)) {
      FUN_0043a3f0(0x10,s_C__projects_meridian_Support_Obj_00724060,0x6fd);
      return;
    }
  }
  else {
    fVar2 = (float)param_1[0x17a7];
    param_1[0x17a7] = (int)((float)param_1[0x248] + fVar2);
    if (_DAT_00723d98 < (float)param_1[0x248] + fVar2) {
      FUN_0043a3f0(0x26,s_C__projects_meridian_Support_Obj_00724060,0x6c5);
      return;
    }
  }
  return;
}

