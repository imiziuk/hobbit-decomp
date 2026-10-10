
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004318d0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined4 uVar18;
  float fVar19;
  float local_8c;
  int local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_74 [12];
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28 [3];
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  iVar7 = param_1[0x158];
  if (*(int *)(iVar7 + 8) == -1) {
LAB_00431904:
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      puVar17 = &DAT_00720f70;
      FUN_004258a0(&DAT_00720f70);
      iVar6 = FUN_0053cc70(puVar17);
      if (*(int *)(iVar7 + 8) == iVar6) goto LAB_0043192f;
    }
  }
  else {
    pcVar16 = s_PICKUP_00720f08;
    FUN_004258a0(s_PICKUP_00720f08);
    iVar6 = FUN_0053cc70(pcVar16);
    if (*(int *)(iVar7 + 8) != iVar6) goto LAB_00431904;
LAB_0043192f:
    iVar7 = FUN_00549470(param_1 + 0x149);
    FUN_00549580(param_1 + 0x149);
    iVar6 = (int)*(short *)(param_1[0x14a] * 0x50 + 0x26 + *(int *)(iVar7 + 0x58));
    iVar7 = __ftol();
    iVar12 = 0;
    if (0 < iVar6) {
      do {
        iVar8 = FUN_0053f210(3);
        if (((iVar8 == 0x2a) && (iVar8 = FUN_0053f210(0), iVar8 <= iVar7)) &&
           (iVar8 = FUN_0053f210(1), iVar7 <= iVar8)) {
          iVar8 = param_1[0x158];
          if (*(int *)(iVar8 + 8) != -1) {
            pcVar16 = s_PICKUP_00720f08;
            FUN_004258a0(s_PICKUP_00720f08);
            iVar9 = FUN_0053cc70(pcVar16);
            if (*(int *)(iVar8 + 8) == iVar9) {
              param_1[0x296] = 1;
              goto LAB_00431a0b;
            }
          }
          if (*(int *)(param_1[0x158] + 8) != -1) {
            puVar17 = &DAT_00720f70;
            FUN_004258a0(&DAT_00720f70);
            FUN_0053cc70(puVar17);
          }
        }
LAB_00431a0b:
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar6);
    }
  }
  iVar7 = param_1[0x158];
  if (*(int *)(iVar7 + 8) != -1) {
    pcVar16 = s_PICKUP_00720f08;
    FUN_004258a0(s_PICKUP_00720f08);
    iVar6 = FUN_0053cc70(pcVar16);
    if ((*(int *)(iVar7 + 8) == iVar6) &&
       ((0 < param_1[0x14d] ||
        ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
         ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) {
      param_1[0x297] = 1;
    }
  }
  if (param_1[0x296] != 0) {
    piVar10 = (int *)FUN_004021c0(param_1[0x294],param_1[0x295]);
    if (piVar10 == (int *)0x0) {
      FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00720f10,0xa0);
      return;
    }
    FUN_00540e90(s_WEAPON_00720f68,&local_68,0);
    local_8c = 0.0;
    local_84 = 0;
    local_80 = local_68 * _DAT_006ec020 + local_48 * _DAT_006ec024 + local_58 * _DAT_006ec028 +
               local_38;
    local_7c = local_44 * _DAT_006ec024 + local_54 * _DAT_006ec028 + local_64 * _DAT_006ec020 +
               local_34;
    local_78 = local_40 * _DAT_006ec024 + local_50 * _DAT_006ec028 + local_60 * _DAT_006ec020 +
               local_30;
    local_88 = param_1[0x11d];
    (**(code **)(*piVar10 + 0xf0))(&local_8c);
    (**(code **)(*piVar10 + 0x14))(&local_84,0);
  }
  if (DAT_006e92e4 < (float)param_1[0x184]) {
    fVar13 = (float10)FUN_0056b610(param_1[0x185]);
    param_1[0x1eb] = (int)(float)fVar13;
    if ((param_1[0x1be] != 0) &&
       ((float)param_1[0x181] < DAT_006e92e4 != ((float)param_1[0x181] == DAT_006e92e4))) {
      param_1[0x184] = 0;
    }
  }
  if ((param_1[0x296] != 0) && (param_1[0x297] != 0)) {
    if (param_1[0x194] != 0) {
      param_1[0x194] = 0;
      param_1[0x196] = 0;
      iVar7 = FUN_004021c0(param_1[0x294],param_1[0x295]);
      FUN_00401f00(*(float *)(iVar7 + 0x44) + *(float *)(iVar7 + 0x50),
                   *(float *)(iVar7 + 0x48) + *(float *)(iVar7 + 0x54),
                   *(float *)(iVar7 + 0x4c) + *(float *)(iVar7 + 0x58));
      FUN_00402160(local_28,&local_80,0x3f000000);
      FUN_00401f00((float)param_1[0x11] + (float)param_1[0x14],
                   (float)param_1[0x15] + (float)param_1[0x12],
                   (float)param_1[0x16] + (float)param_1[0x13]);
      FUN_00402160(local_74,&local_8c,0x3f000000);
      iVar7 = FUN_00431660(local_74,local_28);
      if (iVar7 == 0) {
        param_1[0x1e5] = 0x40000000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar18 = 0x3e800000;
        uVar15 = 1;
        uVar14 = 0;
        uVar11 = FUN_0053cc70(&DAT_00720f70);
        FUN_00540840(uVar11,uVar14,uVar15,uVar18);
        return;
      }
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      puVar17 = &DAT_00720f70;
      FUN_004258a0(&DAT_00720f70);
      iVar6 = FUN_0053cc70(puVar17);
      if (*(int *)(iVar7 + 8) == iVar6) goto LAB_00431f00;
    }
    piVar10 = param_1 + 0x115;
    if ((float)param_1[0x184] < *(float *)(param_1[0x114] + 0x14) ==
        (NAN((float)param_1[0x184]) || NAN(*(float *)(param_1[0x114] + 0x14)))) {
      FUN_00549470(piVar10);
      FUN_00549580(piVar10);
      uVar18 = 0;
      uVar15 = 1;
      uVar14 = 0;
      uVar11 = FUN_0053cc70(s_CARRY_WALK_00720f50);
      FUN_00540840(uVar11,uVar14,uVar15,uVar18);
      fVar19 = (float)param_1[0x184];
      iVar7 = param_1[0x114];
      fVar1 = *(float *)(iVar7 + 0x14);
      iVar6 = param_1[0x14a];
      fVar5 = DAT_006e92e8 - *(float *)(iVar7 + 0x14);
      fVar2 = *(float *)(iVar7 + 0x28);
      fVar3 = *(float *)(iVar7 + 0x24);
      fVar4 = *(float *)(iVar7 + 0x24);
      iVar7 = FUN_00549470(piVar10);
      FUN_00549580(piVar10);
      iVar7 = iVar6 * 0x50 + *(int *)(iVar7 + 0x58);
      fVar13 = (float10)FUN_00404890();
      param_1[0x1e5] =
           (int)(float)(((float10)((fVar2 - fVar3) * ((fVar19 - fVar1) / fVar5) + fVar4) /
                        (fVar13 / ((float10)(int)*(short *)(iVar7 + 0x24) /
                                  (float10)*(byte *)(iVar7 + 0x2f)))) * (float10)_DAT_006ebfd0);
    }
    else {
      FUN_00549470(piVar10);
      FUN_00549580(piVar10);
      uVar18 = 0;
      uVar15 = 1;
      uVar14 = 0;
      uVar11 = FUN_0053cc70(s_CARRY_IDLE_00720f5c);
      FUN_00540840(uVar11,uVar14,uVar15,uVar18);
      param_1[0x1e5] = 0x3f800000;
    }
    fVar13 = ((float10)(float)param_1[0x1eb] - (float10)(float)param_1[0x11d]) +
             (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar13) ||
       (fVar13 < (float10)_DAT_006e959c != (NAN(fVar13) || NAN((float10)_DAT_006e959c)))) {
      fVar13 = (float10)FUN_0064c6b0((float)fVar13,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar13) {
      do {
        fVar13 = fVar13 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar13);
    }
    if (fVar13 < (float10)DAT_006e92e4 != (NAN(fVar13) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar13 = fVar13 + (float10)_DAT_006e9598;
      } while (fVar13 < (float10)DAT_006e92e4 != (NAN(fVar13) || NAN((float10)DAT_006e92e4)));
    }
    fVar13 = fVar13 - (float10)_DAT_006e9368;
    if (fVar13 < (float10)DAT_006e92e4 != (NAN(fVar13) || NAN((float10)DAT_006e92e4))) {
      fVar13 = -fVar13;
    }
    if (fVar13 <= (float10)_DAT_006e99e0) {
      param_1[0x1ec] = *(int *)(param_1[0x114] + 4);
    }
    else {
      param_1[0x1ec] = 0x41200000;
    }
  }
LAB_00431f00:
  iVar7 = param_1[0x158];
  if (*(int *)(iVar7 + 8) != -1) {
    FUN_00549470(iVar7 + 4);
    FUN_00549580(iVar7 + 4);
    iVar6 = FUN_0053cc70(&DAT_00720f70);
    if (*(int *)(iVar7 + 8) == iVar6) {
      if ((0 < param_1[0x14d]) ||
         ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
          ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
        FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00720f10,0x111);
        return;
      }
      if ((param_1[0x296] != 0) &&
         ((float)param_1[0x14b] * (float)_DAT_006ec018 < (float)param_1[0x14c] !=
          (NAN((float)param_1[0x14b] * (float)_DAT_006ec018) || NAN((float)param_1[0x14c])))) {
        param_1[0x296] = 0;
        param_1[0x297] = 0;
      }
    }
  }
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_1c,local_10);
  local_8c = (float)param_1[0x248] * (float)param_1[0x1d6];
  fVar19 = 0.0;
  if ((param_1[0x2a] != 0 || param_1[0x2b] != 0) &&
     (iVar7 = FUN_004021c0(param_1[0x2a],param_1[0x2b]), iVar7 != 0)) {
    if (*(char *)(iVar7 + 0x7c) == '\x0e') {
      iVar6 = FUN_00491ad0(&local_84);
      fVar19 = *(float *)(iVar6 + 4);
    }
    if ((*(char *)(iVar7 + 0x7c) == '.') && (*(char *)(iVar7 + 0x154) < '\0')) {
      FUN_0043a3f0(0x1b,s_C__projects_meridian_Support_Obj_00720f10,0x138);
      return;
    }
  }
  local_28[0] = (float)param_1[6] - local_28[0];
  if (local_8c < DAT_006e92e4 == (local_8c == DAT_006e92e4)) {
    fVar1 = _DAT_006e9364;
    if (DAT_006e92e4 <= fVar19) {
      fVar1 = (local_28[0] + local_8c) - fVar19;
    }
  }
  else if (fVar19 <= DAT_006e92e4) {
    fVar1 = local_28[0] + fVar19;
  }
  else {
    fVar1 = local_28[0];
    if (local_28[0] < fVar19 - local_8c != (NAN(local_28[0]) || NAN(fVar19 - local_8c))) {
      fVar1 = DAT_006e92e4;
    }
  }
  if (fVar1 < *(float *)(param_1[0x114] + 0x4c) == (fVar1 == *(float *)(param_1[0x114] + 0x4c))) {
    fVar19 = (float)param_1[0x270];
    param_1[0x270] = (int)(fVar19 + (float)param_1[0x248]);
    if ((param_1[0x1d8] == 0) && (DAT_006e92e4 < fVar19 + (float)param_1[0x248])) {
      FUN_004430e0(3);
      return;
    }
    return;
  }
  FUN_004430e0(2);
  param_1[0x270] = 0;
  return;
}

