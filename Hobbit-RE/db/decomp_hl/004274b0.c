
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004274b0(int *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float10 fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  float local_34;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float fStack_4;
  
  bVar2 = false;
  if ((param_1[0xf0] == 0) && (param_1[0xf4] == 0)) {
    if (param_1[0x11b4] == 0) {
      FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00720b28,0x456);
      return;
    }
    FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00720b28,0x451);
    return;
  }
  iVar7 = FUN_00467eb0();
  if (iVar7 != 0) {
    fVar1 = (float)param_1[0x17a7];
    param_1[0x17a7] = (int)((float)param_1[0x248] + fVar1);
    if ((float)param_1[0x248] + fVar1 <= _DAT_006e99c8) {
      return;
    }
    FUN_0043a3f0(0x26,s_C__projects_meridian_Support_Obj_00720b28,0x465);
    return;
  }
  param_1[0x17a7] = 0;
  if (param_1[0x100] != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00720b28,0x471);
    return;
  }
  if ((param_1[400] != 0) && (iVar7 = FUN_00422510(), iVar7 != 0)) {
    FUN_00422590();
    return;
  }
  if (param_1[0x195] == 0) {
    param_1[0x280] = 0;
  }
  else {
    param_1[0x280] = (int)((float)param_1[0x248] + (float)param_1[0x280]);
  }
  if (param_1[0x1d8] == 0) {
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00720b28,0x48d);
    return;
  }
  bVar4 = false;
  bVar5 = false;
  bVar3 = false;
  if (param_1[0x196] != 0) {
    if (param_1[0x17bf] != -1) {
      FUN_00549470(param_1 + 0x17be);
      FUN_00549580(param_1 + 0x17be);
      iVar7 = FUN_0053cc70(s_damage_poison_00720b7c);
      if (param_1[0x17bf] == iVar7) {
        (**(code **)(param_1[0x17bd] + 8))();
      }
    }
    bVar2 = false;
    fVar10 = (float10)FUN_004272a0();
    if ((float10)DAT_006e92e8 < fVar10) {
      iVar7 = param_1[0x158];
      fVar1 = (float)param_1[0x14c];
      if (*(int *)(iVar7 + 8) != -1) {
        pcVar14 = s_R2L_swing_start_00720b9c;
        FUN_004258a0(s_R2L_swing_start_00720b9c);
        iVar8 = FUN_0053cc70(pcVar14);
        if (*(int *)(iVar7 + 8) == iVar8) {
          bVar2 = fVar1 < _DAT_006e99e8 != (NAN(fVar1) || NAN(_DAT_006e99e8));
          param_1[0x27f] = 1;
        }
      }
      fVar10 = (float10)FUN_004272a0();
      if (((float10)_DAT_006e999c < fVar10) && (iVar7 = param_1[0x158], *(int *)(iVar7 + 8) != -1))
      {
        pcVar14 = s_L2R_swing_00720c44;
        FUN_004258a0(s_L2R_swing_00720c44);
        iVar8 = FUN_0053cc70(pcVar14);
        if (*(int *)(iVar7 + 8) == iVar8) {
          bVar3 = fVar1 < _DAT_006e99e4 != (NAN(fVar1) || NAN(_DAT_006e99e4));
          param_1[0x27f] = 1;
        }
      }
      iVar7 = param_1[0x158];
      if (*(int *)(iVar7 + 8) != -1) {
        pcVar14 = s_L2R_swing_start_00720b8c;
        FUN_004258a0(s_L2R_swing_start_00720b8c);
        iVar8 = FUN_0053cc70(pcVar14);
        if (*(int *)(iVar7 + 8) == iVar8) {
          bVar4 = fVar1 < _DAT_006e99e8 != (NAN(fVar1) || NAN(_DAT_006e99e8));
          param_1[0x27f] = 1;
        }
      }
      fVar10 = (float10)FUN_004272a0();
      if (((float10)_DAT_006e999c < fVar10) && (iVar7 = param_1[0x158], *(int *)(iVar7 + 8) != -1))
      {
        pcVar14 = s_R2L_swing_00720c38;
        FUN_004258a0(s_R2L_swing_00720c38);
        iVar8 = FUN_0053cc70(pcVar14);
        if (*(int *)(iVar7 + 8) == iVar8) {
          bVar5 = fVar1 < _DAT_006e99e4 != (NAN(fVar1) || NAN(_DAT_006e99e4));
          param_1[0x27f] = 1;
        }
      }
    }
  }
  fVar10 = (float10)FUN_004272a0();
  if ((float10)_DAT_006e999c < fVar10) {
    if ((float)param_1[0x280] < *(float *)(param_1[0x114] + 0x160)) {
LAB_004278e0:
      if ((param_1[0x195] == 0) && (iVar7 = param_1[0x158], *(int *)(iVar7 + 8) != -1)) {
        pcVar14 = s_L2R_spin_idle_00720c28;
        FUN_004258a0(s_L2R_spin_idle_00720c28);
        iVar8 = FUN_0053cc70(pcVar14);
        if (*(int *)(iVar7 + 8) == iVar8) {
          param_1[0x1e5] = 0x3fa00000;
          FUN_00549470(param_1 + 0x115);
          FUN_00549580(param_1 + 0x115);
          uVar15 = 0;
          uVar13 = 1;
          uVar12 = 0;
          uVar9 = FUN_0053cc70(s_L2R_spin_charge_00720c0c);
          FUN_00540840(uVar9,uVar12,uVar13,uVar15);
          FUN_00425e90(2);
        }
      }
    }
    else {
      iVar7 = param_1[0x158];
      if (*(int *)(iVar7 + 8) != -1) {
        pcVar14 = s_L2R_spin_idle_00720c28;
        FUN_004258a0(s_L2R_spin_idle_00720c28);
        iVar8 = FUN_0053cc70(pcVar14);
        if (*(int *)(iVar7 + 8) == iVar8) goto LAB_004278e0;
      }
      param_1[0x1e5] = 0x3f800000;
      if (param_1[0x195] != 0) {
        param_1[0x27f] = 0;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar15 = 0x3e800000;
        uVar13 = 1;
        uVar12 = 0;
        uVar9 = FUN_0053cc70(s_L2R_spin_idle_00720c28);
        FUN_00540840(uVar9,uVar12,uVar13,uVar15);
        if ((param_1[0xf0] != 0) && (param_1[0x102] == 0 && param_1[0x103] == 0)) {
          local_18 = 1.0;
          local_14 = 1.0;
          local_10 = 1.0;
          local_24 = 0.0;
          local_20 = 0.0;
          local_1c = 0.0;
          uVar11 = FUN_00488f10(s_StingCharge_00720c1c,param_1[0x136c],param_1[0x136d],&DAT_0075b6e0
                                ,&local_24,&local_18,0);
          *(undefined8 *)(param_1 + 0x102) = uVar11;
        }
      }
    }
  }
  if (param_1[0x27f] != 0) {
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) == -1) {
LAB_004279b7:
      if (bVar2) {
LAB_00427a1b:
        if ((float)param_1[0x14c] < _DAT_006e99e8) goto LAB_00427c98;
        goto LAB_00427a32;
      }
      iVar7 = param_1[0x158];
      if (*(int *)(iVar7 + 8) == -1) {
LAB_00427a0a:
        if (bVar3) goto LAB_00427b8b;
        iVar7 = param_1[0x158];
        if (*(int *)(iVar7 + 8) == -1) {
LAB_00427ac6:
          if (!bVar4) {
            iVar7 = param_1[0x158];
            if (*(int *)(iVar7 + 8) != -1) {
              pcVar14 = s_R2L_swing_00720c38;
              FUN_004258a0(s_R2L_swing_00720c38);
              iVar8 = FUN_0053cc70(pcVar14);
              if ((*(int *)(iVar7 + 8) == iVar8) &&
                 ((bVar3 = bVar5, 0 < param_1[0x14d] ||
                  ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
                   ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) goto LAB_00427b87;
            }
            if (!bVar5) goto LAB_00427c98;
            goto LAB_00427b8b;
          }
LAB_00427b33:
          if ((float)param_1[0x14c] < _DAT_006e99e8) goto LAB_00427c98;
        }
        else {
          pcVar14 = s_L2R_swing_start_00720b8c;
          FUN_004258a0(s_L2R_swing_start_00720b8c);
          iVar8 = FUN_0053cc70(pcVar14);
          if ((*(int *)(iVar7 + 8) != iVar8) ||
             ((param_1[0x14d] < 1 &&
              ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
               ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) goto LAB_00427ac6;
          if (bVar4) goto LAB_00427b33;
        }
        param_1[0x1e5] = 0x40000000;
        param_1[0x27f] = 0;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar14 = s_R2L_swing_00720c38;
      }
      else {
        pcVar14 = s_L2R_swing_00720c44;
        FUN_004258a0(s_L2R_swing_00720c44);
        iVar8 = FUN_0053cc70(pcVar14);
        if ((*(int *)(iVar7 + 8) != iVar8) ||
           ((param_1[0x14d] < 1 &&
            ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
             ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) goto LAB_00427a0a;
LAB_00427b87:
        if (bVar3) {
LAB_00427b8b:
          if ((float)param_1[0x14c] < _DAT_006e99e4) goto LAB_00427c98;
        }
        param_1[0x27f] = 0;
        param_1[0x1e5] = 0x3fc00000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar14 = s_L2R_spin_00720c00;
      }
    }
    else {
      pcVar14 = s_R2L_swing_start_00720b9c;
      FUN_004258a0(s_R2L_swing_start_00720b9c);
      iVar8 = FUN_0053cc70(pcVar14);
      if ((*(int *)(iVar7 + 8) != iVar8) ||
         ((param_1[0x14d] < 1 &&
          ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
           ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) goto LAB_004279b7;
      if (bVar2) goto LAB_00427a1b;
LAB_00427a32:
      param_1[0x1e5] = 0x40000000;
      param_1[0x27f] = 0;
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar14 = s_L2R_swing_00720c44;
    }
    iVar7 = FUN_0053cc70(pcVar14);
    if (iVar7 != -1) {
      FUN_00540840(iVar7,0,1,0);
      if ((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) ==
          ((float)param_1[0x184] == DAT_006e92e4)) {
        local_14 = (float)param_1[0x1eb];
        local_24 = 0.0;
        local_20 = 0.0;
        local_1c = 1.0;
        FUN_00428790(0);
        FUN_004286f0(0);
        FUN_00428740(local_14);
        local_24 = local_24 * _DAT_006e9984;
        local_20 = local_20 * _DAT_006e9984;
        local_1c = local_1c * _DAT_006e9984;
        FUN_00442560(&local_24,0x3e800000);
      }
      FUN_00425e90(2);
    }
  }
LAB_00427c98:
  iVar7 = param_1[0x158];
  if (*(int *)(iVar7 + 8) == -1) {
LAB_00427d20:
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      pcVar14 = s_L2R_swing_00720c44;
      FUN_004258a0(s_L2R_swing_00720c44);
      iVar8 = FUN_0053cc70(pcVar14);
      if ((*(int *)(iVar7 + 8) == iVar8) &&
         ((0 < param_1[0x14d] ||
          ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
           ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) {
        param_1[0x1e5] = 0x3fc00000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar14 = s_R_2_Idle_00720bdc;
        goto LAB_00427ea8;
      }
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      pcVar14 = s_L2R_swing_start_00720b8c;
      FUN_004258a0(s_L2R_swing_start_00720b8c);
      iVar8 = FUN_0053cc70(pcVar14);
      if ((*(int *)(iVar7 + 8) == iVar8) &&
         ((0 < param_1[0x14d] ||
          ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
           ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) {
        param_1[0x1e5] = 0x3fc00000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar14 = s_L2R_swing_start_2_Idle_00720bc4;
        goto LAB_00427ea8;
      }
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      pcVar14 = s_R2L_swing_00720c38;
      FUN_004258a0(s_R2L_swing_00720c38);
      iVar8 = FUN_0053cc70(pcVar14);
      if ((*(int *)(iVar7 + 8) == iVar8) &&
         ((0 < param_1[0x14d] ||
          ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
           ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) {
        param_1[0x1e5] = 0x3fc00000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar14 = s_L_2_Idle_00720bb8;
        goto LAB_00427ea8;
      }
    }
  }
  else {
    pcVar14 = s_R2L_swing_start_00720b9c;
    FUN_004258a0(s_R2L_swing_start_00720b9c);
    iVar8 = FUN_0053cc70(pcVar14);
    if ((*(int *)(iVar7 + 8) != iVar8) ||
       ((param_1[0x14d] < 1 &&
        ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
         ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))))) goto LAB_00427d20;
    param_1[0x1e5] = 0x3fc00000;
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    pcVar14 = s_R2L_swing_start_2_Idle_00720be8;
LAB_00427ea8:
    uVar15 = 0;
    uVar13 = 1;
    uVar12 = 0;
    uVar9 = FUN_0053cc70(pcVar14);
    FUN_00540840(uVar9,uVar12,uVar13,uVar15);
  }
  fVar10 = (float10)FUN_004272a0();
  if (((NAN(fVar10) || NAN((float10)DAT_006e92e8)) == (fVar10 == (float10)DAT_006e92e8)) ||
     (iVar7 = param_1[0x158], *(int *)(iVar7 + 8) == -1)) {
LAB_00427f52:
    fVar10 = (float10)FUN_004272a0();
    if (((NAN(fVar10) || NAN((float10)_DAT_006e999c)) != (fVar10 == (float10)_DAT_006e999c)) &&
       (iVar7 = param_1[0x158], *(int *)(iVar7 + 8) != -1)) {
      pcVar14 = s_L2R_swing_00720c44;
      FUN_004258a0(s_L2R_swing_00720c44);
      iVar8 = FUN_0053cc70(pcVar14);
      if ((*(int *)(iVar7 + 8) == iVar8) && (_DAT_006e99e4 <= (float)param_1[0x14c])) {
        param_1[0x1e5] = 0x3fc00000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar15 = 0;
        uVar13 = 1;
        uVar12 = 0;
        uVar9 = FUN_0053cc70(s_R_2_Idle_00720bdc);
        FUN_00540840(uVar9,uVar12,uVar13,uVar15);
      }
    }
  }
  else {
    pcVar14 = s_R2L_swing_start_00720b9c;
    FUN_004258a0(s_R2L_swing_start_00720b9c);
    iVar8 = FUN_0053cc70(pcVar14);
    if (*(int *)(iVar7 + 8) != iVar8) goto LAB_00427f52;
    if (_DAT_006e99e8 <= (float)param_1[0x14c]) {
      param_1[0x1e5] = 0x3fc00000;
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      uVar15 = 0;
      uVar13 = 1;
      uVar12 = 0;
      uVar9 = FUN_0053cc70(s_L_2_Idle_00720bb8);
      FUN_00540840(uVar9,uVar12,uVar13,uVar15);
    }
  }
  fVar10 = (float10)FUN_004272a0();
  if (((NAN(fVar10) || NAN((float10)DAT_006e92e8)) == (fVar10 == (float10)DAT_006e92e8)) ||
     (iVar7 = param_1[0x158], *(int *)(iVar7 + 8) == -1)) {
LAB_00428067:
    fVar10 = (float10)FUN_004272a0();
    if (((NAN(fVar10) || NAN((float10)_DAT_006e999c)) != (fVar10 == (float10)_DAT_006e999c)) &&
       (iVar7 = param_1[0x158], *(int *)(iVar7 + 8) != -1)) {
      pcVar14 = s_R2L_swing_00720c38;
      FUN_004258a0(s_R2L_swing_00720c38);
      iVar8 = FUN_0053cc70(pcVar14);
      if ((*(int *)(iVar7 + 8) == iVar8) && (_DAT_006e99e4 <= (float)param_1[0x14c])) {
        param_1[0x1e5] = 0x3fc00000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar14 = s_L_2_Idle_00720bb8;
        goto LAB_004280e1;
      }
    }
  }
  else {
    pcVar14 = s_L2R_swing_start_00720b8c;
    FUN_004258a0(s_L2R_swing_start_00720b8c);
    iVar8 = FUN_0053cc70(pcVar14);
    if (*(int *)(iVar7 + 8) != iVar8) goto LAB_00428067;
    if (_DAT_006e99e8 <= (float)param_1[0x14c]) {
      param_1[0x1e5] = 0x3fc00000;
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar14 = s_R_2_Idle_00720bdc;
LAB_004280e1:
      uVar15 = 0;
      uVar13 = 1;
      uVar12 = 0;
      uVar9 = FUN_0053cc70(pcVar14);
      FUN_00540840(uVar9,uVar12,uVar13,uVar15);
    }
  }
  iVar7 = param_1[0x158];
  if (*(int *)(iVar7 + 8) == -1) {
LAB_00428118:
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      pcVar14 = s_L2R_swing_start_2_Idle_00720bc4;
      FUN_004258a0(s_L2R_swing_start_2_Idle_00720bc4);
      iVar8 = FUN_0053cc70(pcVar14);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428200;
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      pcVar14 = s_R_2_Idle_00720bdc;
      FUN_004258a0(s_R_2_Idle_00720bdc);
      iVar8 = FUN_0053cc70(pcVar14);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428200;
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      pcVar14 = s_L_2_idle_00720bac;
      FUN_004258a0(s_L_2_idle_00720bac);
      iVar8 = FUN_0053cc70(pcVar14);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428200;
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      FUN_00549470(iVar7 + 4);
      FUN_00549580(iVar7 + 4);
      iVar8 = FUN_0053cc70(s_L2R_spin_00720c00);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428200;
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      FUN_00549470(iVar7 + 4);
      FUN_00549580(iVar7 + 4);
      iVar8 = FUN_0053cc70(s_L2R_spin_charge_00720c0c);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428200;
    }
  }
  else {
    pcVar14 = s_R2L_swing_start_2_Idle_00720be8;
    FUN_004258a0(s_R2L_swing_start_2_Idle_00720be8);
    iVar8 = FUN_0053cc70(pcVar14);
    if (*(int *)(iVar7 + 8) != iVar8) goto LAB_00428118;
LAB_00428200:
    if ((0 < param_1[0x14d]) ||
       ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] !=
        ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
      if (param_1[0x11b4] == 0) {
        FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00720b28,0x5d9);
        return;
      }
      FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00720b28,0x5d5);
      return;
    }
  }
  if (param_1[0x11b4] != 0) {
    fVar10 = (float10)FUN_00426760();
    param_1[0x1eb] = (int)(float)fVar10;
    param_1[0x1ec] = *(int *)(param_1[0x114] + 0x15c);
    return;
  }
  bVar2 = false;
  iVar7 = FUN_004021c0(param_1[0x11b6],param_1[0x11b7]);
  if ((iVar7 != 0) && (fVar10 = (float10)FUN_004a4130(), (float10)DAT_006e92e4 < fVar10)) {
    bVar2 = true;
  }
  if ((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) != ((float)param_1[0x184] == DAT_006e92e4))
  {
    if (bVar2) {
      if (param_1[0x1be] != 0) {
        param_1[0x1eb] = param_1[0x185];
        return;
      }
      fVar10 = (float10)(**(code **)(*param_1 + 0x10c))();
      local_20 = (float)fVar10;
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 1.0;
      FUN_00428790(0);
      FUN_004286f0(0);
      FUN_00428740(local_20);
      fStack_4 = (float)param_1[7];
      local_24 = (float)param_1[0x1236] - (float)param_1[5];
      local_1c = (float)param_1[0x1238] - fStack_4;
      fVar1 = SQRT(local_24 * local_24 + local_1c * local_1c);
      fVar6 = DAT_006e92e8 / fVar1;
      iVar7 = FUN_0064cf30(fVar6);
      if (iVar7 == 0) {
        local_24 = 0.0;
        local_1c = 0.0;
        fVar6 = DAT_006e92e4;
      }
      else {
        local_24 = local_24 * fVar6;
        local_1c = local_1c * fVar6;
        fVar6 = fVar6 * DAT_006e92e4;
      }
      if ((DAT_006e92e4 < local_24 * local_18 + local_14 * fVar6 + local_10 * local_1c) &&
         (fVar1 < _DAT_006e99dc != (fVar1 == _DAT_006e99dc))) {
        param_1[0x1ec] = 0x47c35000;
        fVar10 = (float10)FUN_0064ca10(local_24,local_1c);
        param_1[0x1eb] = (int)(float)fVar10;
        return;
      }
    }
    param_1[0x1eb] = param_1[0x11d];
    return;
  }
  fVar10 = (float10)FUN_0056b610(param_1[0x185]);
  param_1[0x1eb] = (int)(float)fVar10;
  fVar10 = (fVar10 - (float10)(float)param_1[0x11d]) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar10) ||
     (fVar10 < (float10)_DAT_006e959c != (NAN(fVar10) || NAN((float10)_DAT_006e959c)))) {
    fVar10 = (float10)FUN_0064c6b0((float)fVar10,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar10) {
    do {
      fVar10 = fVar10 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar10);
  }
  if (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar10 = fVar10 + (float10)_DAT_006e9598;
    } while (fVar10 < (float10)DAT_006e92e4 != (NAN(fVar10) || NAN((float10)DAT_006e92e4)));
  }
  iVar7 = param_1[0x158];
  local_34 = (float)(fVar10 - (float10)_DAT_006e9368);
  if (*(int *)(iVar7 + 8) == -1) {
LAB_0042839d:
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      FUN_00549470(iVar7 + 4);
      FUN_00549580(iVar7 + 4);
      iVar8 = FUN_0053cc70(s_L2R_swing_00720c44);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428489;
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      FUN_00549470(iVar7 + 4);
      FUN_00549580(iVar7 + 4);
      iVar8 = FUN_0053cc70(s_L2R_swing_start_00720b8c);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428489;
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      FUN_00549470(iVar7 + 4);
      FUN_00549580(iVar7 + 4);
      iVar8 = FUN_0053cc70(s_R2L_swing_00720c38);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428489;
    }
    iVar7 = param_1[0x158];
    if (*(int *)(iVar7 + 8) != -1) {
      FUN_00549470(iVar7 + 4);
      FUN_00549580(iVar7 + 4);
      iVar8 = FUN_0053cc70(s_L2R_spin_00720c00);
      if (*(int *)(iVar7 + 8) == iVar8) goto LAB_00428489;
    }
  }
  else {
    FUN_00549470(iVar7 + 4);
    FUN_00549580(iVar7 + 4);
    iVar8 = FUN_0053cc70(s_R2L_swing_start_00720b9c);
    if (*(int *)(iVar7 + 8) != iVar8) goto LAB_0042839d;
LAB_00428489:
    fVar1 = local_34;
    if (local_34 < DAT_006e92e4 != (NAN(local_34) || NAN(DAT_006e92e4))) {
      fVar1 = -local_34;
    }
    if (_DAT_006e9578 < fVar1) {
      if (local_34 <= DAT_006e92e4) {
        if (local_34 < DAT_006e92e4 != (NAN(local_34) || NAN(DAT_006e92e4))) {
          local_34 = 1.5707964;
        }
      }
      else {
        local_34 = 1.5707964;
      }
      goto LAB_004284ca;
    }
  }
  if (local_34 < DAT_006e92e4 != (NAN(local_34) || NAN(DAT_006e92e4))) {
    local_34 = -local_34;
  }
LAB_004284ca:
  if (local_34 <= _DAT_006e99e0) {
    param_1[0x1ec] = (int)(*(float *)(param_1[0x114] + 4) * _DAT_006e936c);
    return;
  }
  param_1[0x1ec] = 0x47c35000;
  return;
}

