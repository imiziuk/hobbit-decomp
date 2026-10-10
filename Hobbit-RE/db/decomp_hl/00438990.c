
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00438990(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 uVar17;
  int local_40;
  int local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_10 [16];
  
  local_3c = 0;
  local_40 = 0;
  if (_DAT_006e95a8 <
      (float)param_1[0x181] * (float)param_1[0x181] + (float)param_1[0x180] * (float)param_1[0x180])
  {
    if (param_1[0x1be] == 0) {
      fVar13 = (float10)FUN_00422fb0();
      fVar12 = (float10)FUN_0064ca10(param_1[0x181],param_1[0x180]);
      fVar12 = (float10)FUN_0056b610((float)fVar12);
      fVar12 = fVar12 - (float10)(float)fVar13;
      if (((float10)_DAT_006e95a0 < fVar12) ||
         (fVar12 < (float10)_DAT_006e959c != (NAN(fVar12) || NAN((float10)_DAT_006e959c)))) {
        fVar12 = (float10)FUN_0064c6b0((float)fVar12,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar12) {
        do {
          fVar12 = fVar12 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar12);
      }
      if (fVar12 < (float10)DAT_006e92e4 != (NAN(fVar12) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar12 = fVar12 + (float10)_DAT_006e9598;
        } while (fVar12 < (float10)DAT_006e92e4 != (NAN(fVar12) || NAN((float10)DAT_006e92e4)));
      }
      if ((fVar12 < (float10)_DAT_006ec068 != (NAN(fVar12) || NAN((float10)_DAT_006ec068))) ||
         (local_3c = 0, (float10)_DAT_006ec064 < fVar12)) {
        local_3c = 1;
      }
      if ((fVar12 <= (float10)_DAT_006ec060) ||
         (fVar12 < (float10)_DAT_006ec05c == (NAN(fVar12) || NAN((float10)_DAT_006ec05c)))) {
        local_40 = 0;
      }
      else {
        local_40 = 1;
      }
    }
    else {
      local_3c = param_1[0x1c0];
      local_40 = param_1[0x1c1];
    }
  }
  iVar11 = param_1[0x158];
  if (*(int *)(iVar11 + 8) != -1) {
    pcVar16 = s_mount_ladder_top_00723c8c;
    FUN_004258a0(s_mount_ladder_top_00723c8c);
    iVar9 = FUN_0053cc70(pcVar16);
    if (*(int *)(iVar11 + 8) == iVar9) {
      if (((param_1[0x14d] < 1) &&
          ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
           ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) || (local_40 == 0)) {
        if ((param_1[0x14d] < 1) &&
           ((float)(param_1[0x14b] + -2) < (float)param_1[0x14c] ==
            ((float)(param_1[0x14b] + -2) == (float)param_1[0x14c]))) {
          param_1[0x1e5] = 0x3fc00000;
          return;
        }
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar17 = 0x3e000000;
        uVar15 = 1;
        uVar14 = 0;
        uVar10 = FUN_0053cc70(s_ladder_idle_00723d00);
        FUN_00540840(uVar10,uVar14,uVar15,uVar17);
        local_34 = (float)param_1[0x11ab] - (float)param_1[0x11a8];
        local_30 = (float)param_1[0x11ac] - (float)param_1[0x11a9];
        local_2c = (float)param_1[0x11ad] - (float)param_1[0x11aa];
        fVar2 = DAT_006e92e8 / SQRT(local_30 * local_30 + local_2c * local_2c + local_34 * local_34)
        ;
        iVar11 = FUN_0064cf30(fVar2);
        if (iVar11 == 0) {
          local_2c = 0.0;
          local_34 = DAT_006e92e4;
          fVar2 = DAT_006e92e4;
        }
        else {
          local_2c = local_2c * fVar2;
          local_34 = local_34 * fVar2;
          fVar2 = local_30 * fVar2;
        }
        local_34 = local_34 * _DAT_006ec054;
        param_1[0x163] = param_1[0x163] + 1;
        fVar2 = fVar2 * _DAT_006ec054;
        param_1[0x160] = 1;
        param_1[0x164] = 1;
        fVar3 = local_2c * _DAT_006ec054;
        param_1[0x167] = param_1[0x167] + 1;
        param_1[0x122] = (int)fVar2;
        param_1[0x121] = (int)local_34;
        param_1[0x123] = (int)fVar3;
        param_1[0x1e5] = 0x3f800000;
      }
      else {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar17 = 0;
        uVar15 = 1;
        uVar14 = 1;
        uVar10 = FUN_0053cc70(s_CLIMB_DOWN_LADDER_00723d48);
        FUN_00540840(uVar10,uVar14,uVar15,uVar17);
        param_1[0x160] = 1;
        param_1[0x164] = 1;
        param_1[0x163] = param_1[0x163] + 1;
        param_1[0x167] = param_1[0x167] + 1;
        fVar13 = (float10)FUN_0064c6b0(0x40a00000,(float)param_1[0x14b] - DAT_006e92e8);
        param_1[0x14c] = (int)(float)fVar13;
        param_1[0x1e5] = 0;
      }
      FUN_004430e0(5);
    }
  }
  if (((NAN((float)param_1[0x182]) || NAN((float)param_1[0x276])) ==
       ((float)param_1[0x182] == (float)param_1[0x276])) ||
     ((NAN((float)param_1[0x183]) || NAN((float)param_1[0x277])) ==
      ((float)param_1[0x183] == (float)param_1[0x277]))) {
    param_1[0x275] = 0;
  }
  if ((((param_1[0x275] == 0) && (local_3c != 0)) &&
      (fVar2 = SQRT(((float)param_1[6] - (float)param_1[0x11a9]) *
                    ((float)param_1[6] - (float)param_1[0x11a9]) +
                    ((float)param_1[7] - (float)param_1[0x11aa]) *
                    ((float)param_1[7] - (float)param_1[0x11aa]) +
                    ((float)param_1[5] - (float)param_1[0x11a8]) *
                    ((float)param_1[5] - (float)param_1[0x11a8])),
      fVar2 < _DAT_006ec058 != (NAN(fVar2) || NAN(_DAT_006ec058)))) &&
     (iVar11 = FUN_00442640(), iVar11 != 0)) {
    FUN_0043a3f0(0x1d,s_C__projects_meridian_Support_Obj_00723d0c,0x1a8);
    return;
  }
  if (local_40 == 0) {
    iVar11 = param_1[0x158];
    if (*(int *)(iVar11 + 8) != -1) {
      pcVar16 = s_SLIDE_DOWN_LADDER_00723cec;
      FUN_004258a0(s_SLIDE_DOWN_LADDER_00723cec);
      iVar9 = FUN_0053cc70(pcVar16);
      if (*(int *)(iVar11 + 8) == iVar9) goto LAB_00438e31;
    }
  }
  else {
LAB_00438e31:
    pfVar1 = (float *)(param_1 + 5);
    bVar8 = false;
    (**(code **)(*param_1 + 0x140))(pfVar1,1,&local_34,local_10);
    fVar2 = *pfVar1;
    fVar3 = (float)param_1[0x11a8];
    fVar4 = (float)param_1[6];
    fVar5 = (float)param_1[0x11a9];
    fVar6 = (float)param_1[7];
    fVar7 = (float)param_1[0x11aa];
    if (param_1[0x27a] != 0) {
      uVar10 = (**(code **)(*param_1 + 0x28))();
      FUN_0065a290(param_1[0x27a],uVar10);
    }
    if (((float)param_1[6] - local_30 < *(float *)(param_1[0x114] + 0x4c) * _DAT_006e99bc) &&
       (_DAT_006e9364 <
        SQRT((fVar2 - fVar3) * (fVar2 - fVar3) +
             (fVar4 - fVar5) * (fVar4 - fVar5) + (fVar6 - fVar7) * (fVar6 - fVar7)))) {
      bVar8 = true;
    }
    fVar2 = SQRT((*pfVar1 - (float)param_1[0x11ab]) * (*pfVar1 - (float)param_1[0x11ab]) +
                 ((float)param_1[6] - (float)param_1[0x11ac]) *
                 ((float)param_1[6] - (float)param_1[0x11ac]) +
                 ((float)param_1[7] - (float)param_1[0x11ad]) *
                 ((float)param_1[7] - (float)param_1[0x11ad])) - *(float *)(param_1[0x114] + 0x70);
    if ((fVar2 < DAT_006e92e8 != (NAN(fVar2) || NAN(DAT_006e92e8))) || (bVar8)) {
      fStack_28 = *pfVar1;
      fStack_1c = local_34 - *pfVar1;
      iStack_24 = param_1[6];
      iStack_20 = param_1[7];
      fStack_18 = local_30 - (float)param_1[6];
      fStack_14 = local_2c - (float)param_1[7];
      FUN_00469060(&fStack_28,&fStack_1c,0,0xbf800000,0,1,1);
      (**(code **)(*param_1 + 0x14))(&fStack_28,0);
      fVar13 = (float10)FUN_0064ca10(param_1[0x11ae],param_1[0x11b0]);
      param_1[0x1eb] = (int)(float)fVar13;
      param_1[0x11d] = (int)(float)fVar13;
      param_1[0x167] = param_1[0x167] + 1;
      param_1[0x160] = 1;
      param_1[0x163] = param_1[0x163] + 1;
      param_1[0x164] = 1;
      FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00723d0c,0x1dd);
      if (param_1[0x27a] != 0) {
        FUN_00659c80(param_1[0x27a],0);
        param_1[0x27a] = 0;
      }
      param_1[0x279] = 0;
      return;
    }
  }
  if ((param_1[400] != 0) && (_DAT_006e936c < (float)param_1[0x247])) {
    fVar2 = *(float *)(param_1[0x114] + 0xa0);
    fStack_14 = fVar2 * (float)param_1[0x11b0];
    param_1[0x1d5] = (int)(fVar2 * (float)param_1[0x11ae]);
    param_1[0x1d7] = (int)fStack_14;
    param_1[0x1d6] = (int)(fVar2 * (float)param_1[0x11af]);
    fVar13 = (float10)FUN_0064ca10(param_1[0x11ae],param_1[0x11b0]);
    param_1[0x1eb] = (int)(float)fVar13;
    param_1[0x11d] = (int)(float)fVar13;
    param_1[0x160] = 1;
    param_1[0x164] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x167] = param_1[0x167] + 1;
    param_1[0x278] = 0;
    param_1[0x279] = 0;
    FUN_0043a3f0(5,s_C__projects_meridian_Support_Obj_00723d0c,0x1fb);
    if (param_1[0x27a] == 0) {
      return;
    }
    FUN_00659c80(param_1[0x27a],0);
    param_1[0x27a] = 0;
    return;
  }
  param_1[0x1e5] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  iVar11 = param_1[0x158];
  if (*(int *)(iVar11 + 8) == -1) {
LAB_00439152:
    iVar11 = param_1[0x158];
    if (*(int *)(iVar11 + 8) == -1) goto LAB_004391b8;
    FUN_00549470(iVar11 + 4);
    FUN_00549580(iVar11 + 4);
    iVar9 = FUN_0053cc70(s_jump_to_ladder_left_00723cb0);
    if (*(int *)(iVar11 + 8) != iVar9) goto LAB_004391b8;
  }
  else {
    FUN_00549470(iVar11 + 4);
    FUN_00549580(iVar11 + 4);
    iVar9 = FUN_0053cc70(s_jump_to_ladder_right_00723cc4);
    if (*(int *)(iVar11 + 8) != iVar9) goto LAB_00439152;
  }
  fVar2 = (float)param_1[0x183];
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar2 = -fVar2;
  }
  if ((NAN(fVar2) || NAN(DAT_006e92e4)) != (fVar2 == DAT_006e92e4)) {
    param_1[0x1e5] = 0x3f800000;
  }
LAB_004391b8:
  if ((param_1[0x193] == 0) && ((param_1[0x279] == 0 || (param_1[0x183] != -0x40800000)))) {
    if (((local_3c == 0) && (local_40 == 0)) || (param_1[0x275] != 0)) {
      iVar11 = param_1[0x158];
      if (*(int *)(iVar11 + 8) != -1) {
        FUN_00549470(iVar11 + 4);
        FUN_00549580(iVar11 + 4);
        iVar9 = FUN_0053cc70(s_SLIDE_DOWN_LADDER_00723cec);
        if (*(int *)(iVar11 + 8) == iVar9) {
          FUN_00549470(param_1 + 0x115);
          FUN_00549580(param_1 + 0x115);
          uVar17 = 0;
          uVar15 = 1;
          uVar14 = 1;
          uVar10 = FUN_0053cc70(s_CLIMB_DOWN_LADDER_00723d48);
          FUN_00540840(uVar10,uVar14,uVar15,uVar17);
          if (param_1[0x27a] != 0) {
            FUN_00659c80(param_1[0x27a],0);
            param_1[0x27a] = 0;
          }
        }
      }
      param_1[0x278] = 0;
      param_1[0x279] = 0;
    }
    else {
      if (param_1[0x27a] != 0) {
        FUN_00659c80(param_1[0x27a],0);
        param_1[0x27a] = 0;
      }
      if (local_3c == 0) {
        if (local_40 != 0) {
          fVar2 = (float)param_1[0x248] + (float)param_1[0x278];
          param_1[0x278] = (int)fVar2;
          if (fVar2 < _DAT_006e936c == (NAN(fVar2) || NAN(_DAT_006e936c))) {
            param_1[0x278] = 0;
            param_1[0x279] = 1;
          }
          else {
            FUN_00549470(param_1 + 0x115);
            FUN_00549580(param_1 + 0x115);
            uVar17 = 0x3e000000;
            uVar15 = 1;
            uVar14 = 1;
            uVar10 = FUN_0053cc70(s_CLIMB_DOWN_LADDER_00723d48);
            FUN_00540840(uVar10,uVar14,uVar15,uVar17);
            param_1[0x1e5] = 0x40000000;
          }
        }
      }
      else {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar17 = 0x3e000000;
        uVar15 = 1;
        uVar14 = 1;
        uVar10 = FUN_0053cc70(s_CLIMB_UP_LADDER_00723ca0);
        FUN_00540840(uVar10,uVar14,uVar15,uVar17);
        param_1[0x1e5] = 0x40000000;
        param_1[0x279] = 0;
      }
    }
  }
  else {
    param_1[0x275] = 0;
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    uVar17 = 0x3e000000;
    uVar15 = 1;
    uVar14 = 1;
    uVar10 = FUN_0053cc70(s_SLIDE_DOWN_LADDER_00723cec);
    FUN_00540840(uVar10,uVar14,uVar15,uVar17);
    if (param_1[0x27a] == 0) {
      uVar14 = 1;
      uVar10 = (**(code **)(*param_1 + 0x28))(1);
      iVar11 = FUN_00659630(s_HandSlide_Loop_00723cdc,uVar10,uVar14);
      param_1[0x27a] = iVar11;
    }
    param_1[0x1e5] = 0x3fc00000;
    param_1[0x1e8] = 0;
    param_1[0x1e9] = -0x3c510000;
    param_1[0x1ea] = 0;
  }
  fVar13 = (float10)FUN_0064ca10(param_1[0x11af],
                                 SQRT((float)param_1[0x11b0] * (float)param_1[0x11b0] +
                                      (float)param_1[0x11ae] * (float)param_1[0x11ae]));
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x11c] = (int)(float)-fVar13;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  return;
}

