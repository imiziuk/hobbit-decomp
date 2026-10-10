
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00428aa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float local_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  if (param_1[0x100] == 0) {
    if (param_1[0x11b4] == 0) {
      FUN_0043a3f0(3,s_C__projects_meridian_Support_Obj_00720b28,0x6ea);
      return;
    }
    if (param_1[0x196] != 0) {
      if ((param_1[0xf0] != 0) || (param_1[0xf4] != 0)) {
        FUN_0043a3f0(0x10,s_C__projects_meridian_Support_Obj_00720b28,0x6f3);
        return;
      }
      if (param_1[0xec] == 0) {
        return;
      }
      fVar6 = (float10)FUN_00434ca0(2);
      if ((NAN(fVar6) || NAN((float10)DAT_006e92e4)) != (fVar6 == (float10)DAT_006e92e4)) {
        return;
      }
      FUN_0043a3f0(0x14,s_C__projects_meridian_Support_Obj_00720b28,0x6f7);
      return;
    }
    if (param_1[0x1d8] == 0) {
      FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00720b28,0x700);
      return;
    }
    if ((((param_1[0x1be] != 0) && (param_1[0x1c0] == 0)) && (param_1[0x1c1] == 0)) &&
       ((param_1[0x1c2] == 0 && (param_1[0x1c3] == 0)))) {
      param_1[0x184] = 0;
    }
    if ((float)param_1[0x184] < *(float *)(param_1[0x114] + 0xc) !=
        (NAN((float)param_1[0x184]) || NAN(*(float *)(param_1[0x114] + 0xc)))) {
      FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00720b28,0x70d);
      return;
    }
    if ((param_1[400] != 0) && (param_1[0x1da] == 0)) {
      FUN_0043a3f0(0x13,s_C__projects_meridian_Support_Obj_00720b28,0x714);
      return;
    }
    if ((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) == ((float)param_1[0x184] == DAT_006e92e4)
       ) {
      fVar6 = (float10)(**(code **)(*param_1 + 0x10c))();
      fStack_8 = (float)fVar6;
      uStack_c = 0;
      uStack_4 = 0;
      local_18 = 0.0;
      fStack_14 = 0.0;
      local_10 = 1.0;
      FUN_00429030(&uStack_c);
      fVar3 = local_18 * (float)param_1[0x18c] +
              fStack_14 * (float)param_1[0x18d] + local_10 * (float)param_1[0x18e];
      if ((param_1[0x231] == 0) || ((float)param_1[0x232] <= *(float *)(param_1[0x114] + 0x1cc))) {
        param_1[0x1e6] = 0x3f800000;
      }
      else {
        param_1[0x1e6] = 0x3f000000;
      }
      if (fVar3 < _DAT_006e936c) {
        if (fVar3 < _DAT_006e99ec == (fVar3 == _DAT_006e99ec)) {
          fVar3 = (fStack_14 * DAT_006e92e4 - local_10) * (float)param_1[0x18c] +
                  (local_10 * DAT_006e92e4 - local_18 * DAT_006e92e4) * (float)param_1[0x18d] +
                  (local_18 - fStack_14 * DAT_006e92e4) * (float)param_1[0x18e];
          if (fVar3 < _DAT_006e936c) {
            if (fVar3 < _DAT_006e99ec == (fVar3 == _DAT_006e99ec)) goto LAB_00428ffe;
            piVar1 = param_1 + 0x115;
            if (param_1[0xf4] == 0) {
              FUN_00549470(piVar1);
              FUN_00549580(piVar1);
              pcVar9 = s_STING_TARG_LEFT_00720488;
            }
            else {
              FUN_00549470(piVar1);
              FUN_00549580(piVar1);
              pcVar9 = s_STAFF_TARG_LEFT_007203f8;
            }
          }
          else {
            piVar1 = param_1 + 0x115;
            if (param_1[0xf4] == 0) {
              FUN_00549470(piVar1);
              FUN_00549580(piVar1);
              pcVar9 = s_STING_TARG_RIGHT_00720474;
            }
            else {
              FUN_00549470(piVar1);
              FUN_00549580(piVar1);
              pcVar9 = s_STAFF_TARG_RIGHT_007203e4;
            }
          }
          uVar10 = 0x3e000000;
          uVar8 = 1;
          uVar7 = 0;
          uVar5 = FUN_0053cc70(pcVar9);
          FUN_00540840(uVar5,uVar7,uVar8,uVar10);
          param_1[0x1e5] = 0x3fc00000;
          goto LAB_00428ffe;
        }
        piVar1 = param_1 + 0x115;
        if (param_1[0xf4] == 0) {
          FUN_00549470(piVar1);
          FUN_00549580(piVar1);
          pcVar9 = s_STING_TARG_BACK_007204ac;
        }
        else {
          FUN_00549470(piVar1);
          FUN_00549580(piVar1);
          pcVar9 = s_STAFF_TARG_BACK_0072041c;
        }
      }
      else {
        piVar1 = param_1 + 0x115;
        if (param_1[0xf4] == 0) {
          FUN_00549470(piVar1);
          FUN_00549580(piVar1);
          pcVar9 = s_STING_TARG_FORWARD_00720498;
        }
        else {
          FUN_00549470(piVar1);
          FUN_00549580(piVar1);
          pcVar9 = s_STAFF_TARG_FORWARD_00720408;
        }
      }
      uVar10 = 0x3e000000;
      uVar8 = 1;
      uVar7 = 0;
      uVar5 = FUN_0053cc70(pcVar9);
      FUN_00540840(uVar5,uVar7,uVar8,uVar10);
      param_1[0x1e5] = 0x3f800000;
    }
LAB_00428ffe:
    fVar6 = (float10)FUN_00426760();
    param_1[0x1eb] = (int)(float)fVar6;
    param_1[0x1ec] = *(int *)(param_1[0x114] + 0x184);
    return;
  }
  iVar2 = param_1[0x158];
  if (*(int *)(iVar2 + 8) != -1) {
    pcVar9 = s_STING_TARG_BACK_007204ac;
    FUN_004258a0(s_STING_TARG_BACK_007204ac);
    iVar4 = FUN_0053cc70(pcVar9);
    if (*(int *)(iVar2 + 8) == iVar4) goto LAB_00428b2f;
  }
  iVar2 = param_1[0x158];
  if (*(int *)(iVar2 + 8) != -1) {
    pcVar9 = s_STAFF_TARG_BACK_0072041c;
    FUN_004258a0(s_STAFF_TARG_BACK_0072041c);
    iVar4 = FUN_0053cc70(pcVar9);
    if (*(int *)(iVar2 + 8) == iVar4) {
LAB_00428b2f:
      local_18 = (float)param_1[0xfa] - (float)param_1[5];
      local_10 = (float)param_1[0xfc] - (float)param_1[7];
      FUN_0064c8e0(param_1[0x11d],&local_1c,&local_20);
      if ((DAT_006e92e4 <
           (local_20 * DAT_006e92e4 + local_1c) * local_18 +
           local_10 * (local_20 - local_1c * DAT_006e92e4)) &&
         ((param_1[0xf0] != 0 || (param_1[0xf4] != 0)))) {
        FUN_0043a3f0(0x18,s_C__projects_meridian_Support_Obj_00720b28,0x6d8);
        return;
      }
      FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00720b28,0x6dc);
      return;
    }
  }
  FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00720b28,0x6e1);
  return;
}

