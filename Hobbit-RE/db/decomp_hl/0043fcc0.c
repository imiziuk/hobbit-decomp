
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043fcc0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_EBP;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  if (param_1[0x1f0] != 0) {
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0xcfd);
    return;
  }
  if (param_1[0x100] != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724060,0xd04);
    return;
  }
  iVar6 = FUN_00449e80();
  if (iVar6 != 0) {
    FUN_0043a3f0(0x23,s_C__projects_meridian_Support_Obj_00724060,0xd0d);
    return;
  }
  iVar6 = FUN_004383b0();
  if (iVar6 == 0) {
    iVar6 = FUN_0042fb20();
    if (iVar6 != 0) {
      FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0xd24);
      return;
    }
    local_3c = (float)param_1[0x11d];
    iVar6 = FUN_00442a80(param_1 + 5,local_3c,*(undefined4 *)(param_1[0x114] + 0x90),
                         *(undefined4 *)(param_1[0x114] + 0x94),3,3,&local_1c,&local_c);
    if (iVar6 == 0) {
      iVar6 = param_1[0x158];
      if (*(int *)(iVar6 + 8) != -1) {
        pcVar13 = s_POLE_PLANT_007242a0;
        FUN_004258a0(s_POLE_PLANT_007242a0);
        iVar7 = FUN_0053cc70(pcVar13);
        if (((*(int *)(iVar6 + 8) == iVar7) && (param_1[0x14d] < 1)) &&
           (local_3c = (float)(param_1[0x14b] + -2),
           (float)(int)local_3c < (float)param_1[0x14c] ==
           ((float)(int)local_3c == (float)param_1[0x14c]))) {
          if (param_1[0x1be] == 0) {
            fVar9 = (float10)FUN_0056b610(param_1[0x185]);
          }
          else {
            fVar9 = (float10)(float)param_1[0x185];
          }
          local_34 = (float)fVar9;
          local_38 = 0.0;
          local_30 = 0.0;
          local_1c = 0.0;
          local_18 = 0.0;
          local_14 = 1.0;
          FUN_00429030(&local_38);
          fVar9 = (float10)(**(code **)(*param_1 + 0x10c))();
          local_34 = (float)fVar9;
          local_38 = 0.0;
          local_30 = 0.0;
          fStack_28 = 0.0;
          fStack_24 = 0.0;
          fStack_20 = 1.0;
          FUN_00429030(&local_38);
          local_38 = fStack_24 * DAT_006e92e4 - fStack_20;
          local_34 = fStack_20 * DAT_006e92e4 - fStack_28 * DAT_006e92e4;
          local_30 = fStack_28 - fStack_24 * DAT_006e92e4;
          local_3c = DAT_006e92e8 /
                     SQRT(local_34 * local_34 + local_30 * local_30 + local_38 * local_38);
          iVar6 = FUN_0064cf30(local_3c);
          if (iVar6 == 0) {
            local_30 = 0.0;
            fVar3 = DAT_006e92e4;
            fVar4 = DAT_006e92e4;
          }
          else {
            local_30 = local_30 * local_3c;
            fVar3 = local_38 * local_3c;
            fVar4 = local_34 * local_3c;
          }
          fVar5 = fVar3 * (float)param_1[0x18c] +
                  fVar4 * (float)param_1[0x18d] + local_30 * (float)param_1[0x18e];
          fVar1 = (float)param_1[0x184];
          fVar2 = *(float *)(param_1[0x114] + 0x140);
          local_c = fVar5 * fVar3 * fVar1 * fVar2;
          fVar3 = (float)param_1[0x248];
          local_34 = fVar4 * fVar5 * fVar1 * fVar2 * fVar3;
          param_1[0x1ed] = (int)(local_c * fVar3 + (float)param_1[0x1ed]);
          param_1[0x1ee] = (int)(local_34 + (float)param_1[0x1ee]);
          param_1[0x1ef] = (int)(local_30 * fVar5 * fVar1 * fVar2 * fVar3 + (float)param_1[0x1ef]);
          fVar3 = (float)param_1[0x184];
          fStack_8 = local_18 * fVar3;
          fVar4 = *(float *)(param_1[0x114] + 0x140);
          local_3c = (float)param_1[0x248];
          fStack_4 = local_14 * fVar3 * fVar4;
          local_38 = local_1c * fVar3 * fVar4 * local_3c;
          param_1[0x1ed] = (int)(local_38 + (float)param_1[0x1ed]);
          param_1[0x1ee] = (int)(fStack_8 * fVar4 * local_3c + (float)param_1[0x1ee]);
          param_1[0x1ef] = (int)(fStack_4 * local_3c + (float)param_1[0x1ef]);
          fVar3 = SQRT((float)param_1[0x1ef] * (float)param_1[0x1ef] +
                       (float)param_1[0x1ed] * (float)param_1[0x1ed]);
          if (DAT_006e92e4 < fVar3) {
            fVar4 = DAT_006e92e8 / fVar3;
            param_1[0x1ed] = (int)(fVar4 * (float)param_1[0x1ed]);
            param_1[0x1ef] = (int)(fVar4 * (float)param_1[0x1ef]);
            fVar4 = *(float *)(param_1[0x114] + 0x144);
            if (fVar3 < fVar4 == (NAN(fVar3) || NAN(fVar4))) {
              fVar3 = *(float *)(param_1[0x114] + 0x144);
            }
            param_1[0x1ee] = 0;
            param_1[0x1ed] = (int)(fVar3 * (float)param_1[0x1ed]);
            param_1[0x1ef] = (int)(fVar3 * (float)param_1[0x1ef]);
          }
        }
      }
      if (((param_1[0x271] == 0) && (iVar6 = FUN_00442480(s_POLE_PLANT_007242a0), iVar6 != 0)) &&
         (_DAT_00723db0 < (float)param_1[0x14c])) {
        local_c = 1.0;
        fStack_8 = 1.0;
        fStack_4 = 1.0;
        local_1c = 0.0;
        local_18 = 0.0;
        local_14 = 0.0;
        uVar8 = (**(code **)(*param_1 + 0x28))(&local_1c,&local_c);
        FUN_00488d30(s_Footfall_00724204,uVar8);
        FUN_00425b70();
        FUN_0044c120(0xe,0x3f800000);
        param_1[0x271] = 1;
      }
      iVar6 = param_1[0x158];
      if (*(int *)(iVar6 + 8) != -1) {
        pcVar13 = s_POLE_PLANT_007242a0;
        FUN_004258a0(s_POLE_PLANT_007242a0);
        iVar7 = FUN_0053cc70(pcVar13);
        if ((*(int *)(iVar6 + 8) == iVar7) &&
           ((0 < param_1[0x14d] ||
            (local_3c = (float)(param_1[0x14b] + -2),
            (float)(int)local_3c < (float)param_1[0x14c] !=
            ((float)(int)local_3c == (float)param_1[0x14c]))))) {
          iVar6 = *param_1;
          uVar8 = (**(code **)(iVar6 + 0x28))(0,&local_1c,&local_38);
          iVar6 = (**(code **)(iVar6 + 0x140))(uVar8);
          param_1[0x1ef] = 0;
          param_1[0x1ee] = 0;
          param_1[0x1ed] = 0;
          if ((iVar6 != 0) &&
             (iVar6 = (**(code **)(*param_1 + 0x28))(),
             *(float *)(iVar6 + 4) - fStack_28 <= *(float *)(param_1[0x114] + 0x13c))) {
            FUN_004430e0(2);
            local_1c = (float)param_1[0x1d5] * _DAT_006e95d8;
            local_14 = (float)param_1[0x1d7] * _DAT_006e95d8;
            local_18 = 0.0;
            FUN_00442560(&local_1c,0x3f2ac083);
            FUN_00549470(param_1 + 0x115);
            FUN_00549580(param_1 + 0x115);
            uVar12 = 0x3e800000;
            uVar11 = 1;
            uVar10 = 1;
            uVar8 = FUN_0053cc70(s_pole_slide_00720390);
            FUN_00540840(uVar8,uVar10,uVar11,uVar12);
            iVar7 = param_1[0x114];
            iVar6 = *(int *)(iVar7 + 0x130);
            fVar3 = *(float *)(iVar7 + 0x134) + _DAT_006ec08c;
            local_30 = *(float *)(iVar7 + 0x138);
            param_1[0x160] = 1;
            param_1[0x163] = param_1[0x163] + 1;
            param_1[0x164] = 1;
            param_1[0x167] = param_1[0x167] + 1;
            param_1[0x121] = iVar6;
            param_1[0x123] = (int)local_30;
            param_1[0x122] = (int)fVar3;
            param_1[0x1e5] = 0x3f800000;
            FUN_0044c120(0xf,0x3f800000);
            return;
          }
          FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0xd99);
          return;
        }
      }
      iVar6 = param_1[0x158];
      if (*(int *)(iVar6 + 8) != -1) {
        pcVar13 = s_pole_slide_00720390;
        FUN_004258a0(s_pole_slide_00720390);
        iVar7 = FUN_0053cc70(pcVar13);
        if (*(int *)(iVar6 + 8) == iVar7) {
          local_3c = (float)param_1[0x11d];
          iVar6 = FUN_00442790(param_1 + 5,local_3c,&local_c,&local_3c,0);
          if (iVar6 != 0) {
            (**(code **)(*param_1 + 0x14))(&local_c,0);
            param_1[0x11d] = unaff_EBP;
            param_1[0x160] = 1;
            param_1[0x163] = param_1[0x163] + 1;
            param_1[0x164] = 1;
            param_1[0x167] = param_1[0x167] + 1;
            FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0xdbc);
            return;
          }
          FUN_0044c120(0xf,0x3f800000);
          if ((0 < param_1[0x14d]) ||
             (local_3c = (float)(param_1[0x14b] + -2),
             (float)(int)local_3c < (float)param_1[0x14c] !=
             ((float)(int)local_3c == (float)param_1[0x14c]))) {
            FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0xdc6);
          }
        }
      }
      return;
    }
    FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00724060,0xd39);
    return;
  }
  FUN_0043a3f0(0x1c,s_C__projects_meridian_Support_Obj_00724060,0xd17);
  return;
}

