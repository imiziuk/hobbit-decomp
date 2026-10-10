
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00429410(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e5] = 0x3f800000;
  if (param_1[0x11b4] == 0) {
    FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00720b28,0x7df);
    return;
  }
  fVar8 = (float10)FUN_00426760();
  param_1[0x1eb] = (int)(float)fVar8;
  param_1[0x1ec] = *(int *)(param_1[0x114] + 0x184);
  if ((float)param_1[6] < (float)param_1[0x272] ==
      (NAN((float)param_1[6]) || NAN((float)param_1[0x272]))) {
    iVar5 = param_1[6];
  }
  else {
    iVar5 = param_1[0x272];
  }
  param_1[0x272] = iVar5;
  if ((float)param_1[6] <= (float)param_1[0x273]) {
    iVar5 = param_1[6];
  }
  else {
    iVar5 = param_1[0x273];
  }
  param_1[0x273] = iVar5;
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_1c,local_10);
  if ((param_1[0x196] != 0) &&
     ((((param_1[0xf0] != 0 || (param_1[0xf4] != 0)) &&
       (*(float *)(param_1[0x114] + 0x4c) + *(float *)(param_1[0x114] + 0x4c) <=
        (float)param_1[6] - fStack_28)) &&
      (fVar8 = (float10)FUN_004272d0(), (float10)DAT_006e92e4 < fVar8)))) {
    if (_DAT_006e9554 <= (float)param_1[0x281]) {
      FUN_0043a3f0(0x17,s_C__projects_meridian_Support_Obj_00720b28,0x7fc);
      param_1[0x281] = 0;
      return;
    }
    iVar5 = FUN_00647b10(0,1);
    piVar1 = param_1 + 0x115;
    if (iVar5 == 0) {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar6 = FUN_0053cc70(s_L2R_swing_start_00720b8c);
      FUN_00540840(uVar6,uVar9,uVar10,uVar11);
    }
    else {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar6 = FUN_0053cc70(s_R2L_swing_start_00720b9c);
      FUN_00540840(uVar6,uVar9,uVar10,uVar11);
    }
  }
  iVar5 = param_1[0x158];
  if (*(int *)(iVar5 + 8) != -1) {
    pcVar12 = s_targ_jump_00720c88;
    FUN_004258a0(s_targ_jump_00720c88);
    iVar7 = FUN_0053cc70(pcVar12);
    if (*(int *)(iVar5 + 8) == iVar7) {
      if (0 < param_1[0x14d]) goto LAB_004298ad;
      if ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
          ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c])) {
        uStack_38 = 0;
        fVar8 = (float10)FUN_0056b610(param_1[0x185]);
        fStack_34 = (float)fVar8;
        fStack_30 = 0.0;
        FUN_00429030(&uStack_38);
        if ((param_1[0x1658] != 0) ||
           ((param_1[0x231] != 0 && (_DAT_006e998c < (float)param_1[0x232])))) {
          fVar2 = (float)param_1[0x184];
          fVar3 = (float)param_1[0x248];
          fStack_34 = fVar2 * 0.0;
          fVar4 = *(float *)(param_1[0x114] + 0x44) * _DAT_006e95a8;
          fStack_30 = fVar2 * 1.0 * fVar4;
          param_1[0x1ed] = (int)(fVar2 * 0.0 * fVar4 * fVar3 + (float)param_1[0x1ed]);
          param_1[0x1ee] = (int)(fStack_34 * fVar4 * fVar3 + (float)param_1[0x1ee]);
          param_1[0x1ef] = (int)(fStack_30 * fVar3 + (float)param_1[0x1ef]);
        }
        else {
          if (((param_1[0x1c0] == 0) && (param_1[0x1c1] == 0)) &&
             ((param_1[0x1c2] == 0 && (param_1[0x1c3] == 0)))) {
            param_1[0x184] = 0;
          }
          fVar2 = (float)param_1[0x184];
          fVar3 = *(float *)(param_1[0x114] + 0x44);
          fVar4 = (float)param_1[0x248];
          fStack_34 = fVar2 * 0.0;
          fStack_30 = fVar2 * 1.0 * fVar3;
          param_1[0x1ed] = (int)(fVar2 * 0.0 * fVar3 * fVar4 + (float)param_1[0x1ed]);
          param_1[0x1ee] = (int)(fStack_34 * fVar3 * fVar4 + (float)param_1[0x1ee]);
          param_1[0x1ef] = (int)(fStack_30 * fVar4 + (float)param_1[0x1ef]);
          fVar2 = SQRT((float)param_1[0x1ef] * (float)param_1[0x1ef] +
                       (float)param_1[0x1ed] * (float)param_1[0x1ed]);
          if (DAT_006e92e4 < fVar2) {
            fVar3 = DAT_006e92e8 / fVar2;
            param_1[0x1ed] = (int)(fVar3 * (float)param_1[0x1ed]);
            param_1[0x1ef] = (int)(fVar3 * (float)param_1[0x1ef]);
            fVar3 = *(float *)(param_1[0x114] + 0x48);
            if (fVar2 < fVar3 == (NAN(fVar2) || NAN(fVar3))) {
              fVar2 = *(float *)(param_1[0x114] + 0x48);
            }
            param_1[0x1ee] = 0;
            param_1[0x1ed] = (int)(fVar2 * (float)param_1[0x1ed]);
            param_1[0x1ef] = (int)(fVar2 * (float)param_1[0x1ef]);
          }
        }
      }
    }
  }
  if ((param_1[0x14d] < 1) &&
     ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
      ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
    return;
  }
LAB_004298ad:
  FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00720b28,0x83b);
  return;
}

