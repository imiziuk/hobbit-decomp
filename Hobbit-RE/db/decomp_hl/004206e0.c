
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004206e0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x528);
  iVar1 = iVar3 * 4;
  if (*(int *)(param_1 + 0x5960) == 0) {
    fVar2 = *(float *)(iVar1 + *(int *)(param_1 + 0x5ec));
  }
  else {
    fVar2 = *(float *)(iVar1 + *(int *)(param_1 + 0x5f0));
  }
  if (DAT_006e92e4 <= fVar2) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x8d4);
  if ((((((iVar4 != 2) && (iVar4 != 5)) && (iVar4 != 6)) && ((iVar4 != 9 && (iVar4 != 0x1c)))) &&
      ((iVar4 != 0x23 && ((iVar4 != 0xc && (iVar4 != 0xd)))))) &&
     ((iVar4 != 0x11 && (iVar4 != 0x15)))) {
    if (iVar4 == 1) {
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      iVar4 = FUN_0053cc70(s_SLIDE_FLAT_007205dc);
      if (iVar3 != iVar4) goto LAB_00420f92;
    }
    if (*(int *)(param_1 + 0x8d4) == 0x25) {
      iVar4 = param_1 + 0x454;
      FUN_00549470(iVar4);
      FUN_00549580(iVar4);
      iVar5 = FUN_0053cc70(s_PUSH_BLOCK_IDLE_007205cc);
      if (iVar3 != iVar5) {
        FUN_00549470(iVar4);
        FUN_00549580(iVar4);
        iVar4 = FUN_0053cc70(s_PUSH_BLOCK_INTO_IDLE_007205b4);
        if (iVar3 != iVar4) goto LAB_00420835;
      }
    }
    else {
LAB_00420835:
      iVar4 = *(int *)(param_1 + 0x8d4);
      fVar2 = _DAT_006e99a4;
      if ((((iVar4 == 0x10) || (iVar4 == 0x14)) || (iVar4 == 0x16)) ||
         ((iVar4 == 0x17 || (iVar4 == 0x24)))) goto LAB_00420fa2;
      iVar5 = param_1 + 0x454;
      if (iVar4 == 7) {
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar4 = FUN_0053cc70(s_STAFF_JUMP_STRIKE_LAND_0072059c);
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar6 = FUN_0053cc70(s_STING_JUMP_STRIKE_LAND_00720584);
        if ((iVar3 == iVar4) || (iVar3 == iVar6)) {
          fVar2 = _DAT_006e999c;
          if (*(int *)(param_1 + 0x5960) != 0) {
            fVar2 = _DAT_006e95b4;
          }
          goto LAB_00420fa2;
        }
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar4 = FUN_0053cc70(s_LAND_WEAPON_00720578);
        if (iVar3 != iVar4) {
          FUN_00549470(iVar5);
          FUN_00549580(iVar5);
          iVar4 = FUN_0053cc70(s_LAND_NO_WEAPON_00720568);
          if (iVar3 != iVar4) {
LAB_00420f9e:
            fVar2 = 0.0;
            goto LAB_00420fa2;
          }
        }
        fVar2 = _DAT_006e99b8;
        if (*(int *)(param_1 + 0x5960) != 0) {
          fVar2 = DAT_006e92e8;
        }
        goto LAB_00420fa2;
      }
      FUN_00549470(iVar5);
      FUN_00549580(iVar5);
      iVar4 = FUN_0053cc70(s_sneak_weapon_00720558);
      if (iVar3 == iVar4) {
LAB_00420f80:
        iVar3 = *(int *)(param_1 + 0x5960);
        fVar2 = _DAT_006e99a4;
      }
      else {
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar4 = FUN_0053cc70(s_sneak_no_weapon_00720548);
        if (iVar3 == iVar4) goto LAB_00420f80;
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar4 = FUN_0053cc70(s_sneak_backup_00720538);
        if (iVar3 == iVar4) goto LAB_00420f80;
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar4 = FUN_0053cc70(s_sneak_strafe_left_00720524);
        if (iVar3 == iVar4) goto LAB_00420f80;
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar4 = FUN_0053cc70(s_sneak_strafe_right_00720510);
        if (iVar3 == iVar4) goto LAB_00420f80;
        FUN_00549470(iVar5);
        FUN_00549580(iVar5);
        iVar4 = FUN_0053cc70(s_WALK_NO_WEAPON_00720500);
        if (iVar3 != iVar4) {
          FUN_00549470(iVar5);
          FUN_00549580(iVar5);
          iVar4 = FUN_0053cc70(s_WALK_WEAPON_007204f4);
          if (iVar3 != iVar4) {
            FUN_00549470(iVar5);
            FUN_00549580(iVar5);
            iVar4 = FUN_0053cc70(s_SLIDE_FLAT_007205dc);
            if (iVar3 != iVar4) {
              FUN_00549470(iVar5);
              FUN_00549580(iVar5);
              iVar4 = FUN_0053cc70(s_CROUCH_SLIDE_007204e4);
              if (iVar3 != iVar4) {
                FUN_00549470(iVar5);
                FUN_00549580(iVar5);
                iVar4 = FUN_0053cc70(s_RUN_WEAPON_007204d8);
                if (iVar3 == iVar4) {
LAB_00420f54:
                  fVar2 = _DAT_006e936c;
                  if (*(int *)(param_1 + 0x5960) == 0) goto LAB_00420fa2;
                }
                else {
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_RUN_NO_WEAPON_007204c8);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_TARG_JUMP_007204bc);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STING_TARG_BACK_007204ac);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STING_TARG_FORWARD_00720498);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STING_TARG_LEFT_00720488);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STING_TARG_RIGHT_00720474);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STING_TARG_JUMP_BACK_0072045c);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STING_TARG_JUMP_LEFT_00720444);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STING_TARG_JUMP_RIGHT_0072042c);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STAFF_TARG_BACK_0072041c);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STAFF_TARG_FORWARD_00720408);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STAFF_TARG_LEFT_007203f8);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STAFF_TARG_RIGHT_007203e4);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STAFF_TARG_JUMP_BACK_007203cc);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STAFF_TARG_JUMP_LEFT_007203b4);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_STAFF_TARG_JUMP_RIGHT_0072039c);
                  if (iVar3 == iVar4) goto LAB_00420f54;
                  FUN_00549470(iVar5);
                  FUN_00549580(iVar5);
                  iVar4 = FUN_0053cc70(s_pole_slide_00720390);
                  if (iVar3 != iVar4) {
                    FUN_00549470(iVar5);
                    FUN_00549580(iVar5);
                    iVar4 = FUN_0053cc70(s_PUSH_BLOCK_FORWARD_0072037c);
                    fVar2 = _DAT_006e99ac;
                    if (iVar3 == iVar4) goto LAB_00420fa2;
                    FUN_00549470(iVar5);
                    FUN_00549580(iVar5);
                    iVar4 = FUN_0053cc70(s_PUSH_BLOCK_BACKWARD_00720368);
                    fVar2 = _DAT_006e99ac;
                    if (iVar3 == iVar4) goto LAB_00420fa2;
                    FUN_00549470(iVar5);
                    FUN_00549580(iVar5);
                    iVar4 = FUN_0053cc70(s_PUSH_BLOCK_LEFT_00720358);
                    fVar2 = _DAT_006e99ac;
                    if (iVar3 == iVar4) goto LAB_00420fa2;
                    FUN_00549470(iVar5);
                    FUN_00549580(iVar5);
                    iVar4 = FUN_0053cc70(s_PUSH_BLOCK_RIGHT_00720344);
                    fVar2 = _DAT_006e99ac;
                    if (iVar3 == iVar4) goto LAB_00420fa2;
                    FUN_00549470(iVar5);
                    FUN_00549580(iVar5);
                    iVar4 = FUN_0053cc70(s_PUSH_BLOCK_FLIP_00720334);
                    fVar2 = _DAT_006e99ac;
                    if (iVar3 == iVar4) goto LAB_00420fa2;
                    FUN_00549470(iVar5);
                    FUN_00549580(iVar5);
                    iVar4 = FUN_0053cc70(s_LAND_HARD_00720328);
                    fVar2 = _DAT_006e99b0;
                    if (iVar3 == iVar4) goto LAB_00420fa2;
                    FUN_00549470(iVar5);
                    FUN_00549580(iVar5);
                    iVar4 = FUN_0053cc70(s_LAND_HARD1_0072031c);
                    fVar2 = _DAT_006e99b0;
                    if (iVar3 == iVar4) goto LAB_00420fa2;
                    goto LAB_00420f9e;
                  }
                  fVar2 = _DAT_006e99b4;
                  if (*(int *)(param_1 + 0x5960) != 0) goto LAB_00420fa2;
                }
                fVar2 = DAT_006e92e8;
                goto LAB_00420fa2;
              }
            }
          }
        }
        iVar3 = *(int *)(param_1 + 0x5960);
        fVar2 = _DAT_006e99a8;
      }
      if (iVar3 != 0) goto LAB_00420fa2;
    }
  }
LAB_00420f92:
  fVar2 = DAT_006e92e4;
LAB_00420fa2:
  if (*(int *)(param_1 + 0x5960) == 0) {
    *(float *)(iVar1 + *(int *)(param_1 + 0x5ec)) = fVar2;
    return;
  }
  *(float *)(iVar1 + *(int *)(param_1 + 0x5f0)) = fVar2;
  return;
}

