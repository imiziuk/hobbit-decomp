
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00421120(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5,
            float param_6,undefined4 param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float10 fVar11;
  undefined4 unaff_retaddr;
  char *pcVar12;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float afStack_24 [2];
  int iStack_1c;
  float local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar10 = param_9;
  iVar6 = param_1[0x235];
  if (iVar6 == 0x1a) {
    return 1;
  }
  if (iVar6 == 0x21) {
    return 1;
  }
  if (iVar6 == 0x20) {
    return 1;
  }
  if (param_1[0x113] != 0) {
    return 1;
  }
  if (param_9 == 1.68156e-44) {
    FUN_0043a3f0(0x24,s_C__projects_meridian_Support_Obj_007200c0,0xbfd);
    return 1;
  }
  if (param_9 == 1.4013e-44) {
    param_1[0x10c] = *(int *)(param_1[0x114] + 0x1a0);
    piVar4 = (int *)FUN_004021c0(param_2,param_3);
    if (piVar4 == (int *)0x0) {
      local_18 = param_4[2];
      local_38 = *param_4;
      local_34 = param_4[1];
    }
    else {
      pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
      local_38 = *pfVar5;
      local_34 = pfVar5[1];
      local_18 = pfVar5[2];
    }
    pfVar5 = param_4;
    local_38 = (float)param_1[5] - local_38;
    local_34 = (float)param_1[6] - local_34;
    local_30 = (float)param_1[7] - local_18;
    fVar1 = SQRT(local_38 * local_38 + local_34 * local_34 + local_30 * local_30);
    if ((NAN(fVar1) || NAN(DAT_006e92e4)) != (fVar1 == DAT_006e92e4)) {
      local_38 = 0.0;
      local_34 = 0.0;
      local_30 = 1.0;
    }
    fVar1 = DAT_006e92e8 / SQRT(local_38 * local_38 + local_34 * local_34 + local_30 * local_30);
    iVar6 = FUN_0064cf30(fVar1);
    if (iVar6 == 0) {
      local_38 = 0.0;
      local_34 = 0.0;
      local_30 = 0.0;
    }
    else {
      local_38 = fVar1 * local_38;
      local_34 = local_34 * fVar1;
      local_30 = local_30 * fVar1;
    }
    iVar6 = FUN_00647b10(3,6);
    if (0 < iVar6) {
      do {
        FUN_0044e180(param_1[0x10c],&local_38);
        iVar6 = iVar6 + -1;
        fVar10 = param_9;
      } while (iVar6 != 0);
    }
  }
  else {
    if (((param_9 == 2.10195e-44) || (param_9 == 2.38221e-44)) &&
       (fVar11 = (float10)FUN_00434ca0(6),
       (NAN(fVar11) || NAN((float10)DAT_006e92e4)) != (fVar11 == (float10)DAT_006e92e4))) {
      param_1[0x17ce] = (int)param_8;
      param_1[0x17cd] = 1;
      param_1[0x17cf] = *(int *)(param_1[0x114] + 0x1c8);
      param_1[0x17d0] = (int)param_6;
      FUN_00425a40();
    }
    pfVar5 = param_4;
    if (fVar10 == 0.0) {
      piVar4 = (int *)FUN_004021c0(param_2,param_3);
      uVar9 = (**(code **)(*piVar4 + 0x4c))(s_MineCart_00720614,8);
      iVar6 = FUN_00647e80(uVar9);
      pfVar5 = param_4;
      if (iVar6 == 0) {
        local_38 = (float)param_1[5] - *param_4;
        local_30 = (float)param_1[7] - param_4[2];
        iVar6 = FUN_00647b10(0,100);
        param_4 = (float *)0xbfc90fdb;
        if (0x31 < iVar6) {
          param_4 = (float *)0x3fc90fdb;
        }
        FUN_0064c8e0(param_4,&param_9,&param_4);
        fVar10 = local_38 * (float)param_4 + local_30 * param_9;
        local_30 = local_30 * (float)param_4 - local_38 * param_9;
        param_4 = (float *)(DAT_006e92e8 / SQRT(fVar10 * fVar10 + local_30 * local_30));
        local_38 = fVar10;
        iVar6 = FUN_0064cf30(param_4);
        if (iVar6 == 0) {
          local_30 = 0.0;
          local_38 = DAT_006e92e4;
          fVar10 = DAT_006e92e4;
        }
        else {
          local_30 = local_30 * (float)param_4;
          local_38 = local_38 * (float)param_4;
          fVar10 = (float)param_4 * DAT_006e92e4;
        }
        local_38 = local_38 * _DAT_00720090;
        fVar10 = fVar10 * _DAT_00720090;
        fVar1 = local_30 * _DAT_00720090;
        param_1[0x1d5] = (int)local_38;
        param_1[0x1d6] = (int)fVar10;
        param_1[0x1d7] = (int)fVar1;
        FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_007200c0,0xc39);
        pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
        local_38 = *pfVar5 - *pfVar7;
        local_30 = pfVar5[2] - pfVar7[2];
        param_4 = (float *)(DAT_006e92e8 /
                           SQRT((pfVar5[1] - pfVar7[1]) * (pfVar5[1] - pfVar7[1]) +
                                local_38 * local_38 + local_30 * local_30));
        iVar6 = FUN_0064cf30(param_4);
        fVar10 = DAT_006e92e4;
        fVar1 = DAT_006e92e4;
        if (iVar6 != 0) {
          fVar10 = local_38 * (float)param_4;
          fVar1 = local_30 * (float)param_4;
        }
        local_38 = fVar10 * param_8;
        local_34 = param_8 * DAT_006e92e4;
        local_30 = fVar1 * param_8;
        pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
        fStack_2c = *pfVar7 + local_38;
        fStack_28 = pfVar5[1] + local_34;
        local_38 = 1.0;
        local_34 = 1.0;
        afStack_24[1] = 0.0;
        iStack_1c = 0;
        local_18 = 0.0;
        afStack_24[0] = pfVar7[2] + local_30;
        local_30 = 1.0;
        FUN_00488d30(s_HitStick_00720608,&fStack_2c,afStack_24 + 1,&local_38);
        FUN_00425ac0(0);
        FUN_0044c120(3,0x3f800000);
        if (DAT_0075cf1c != 0) {
          local_18 = (float)param_1[2];
          iStack_14 = param_1[3];
          uStack_10 = param_2;
          afStack_24[1] = 1.12104e-44;
          uStack_c = param_3;
          fStack_8 = 0.0;
          fStack_4 = param_6;
          FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),
                       afStack_24 + 1);
        }
        iVar6 = *param_1;
        uVar9 = __ftol();
        (**(code **)(iVar6 + 0x128))(uVar9);
        return 1;
      }
    }
  }
  iVar6 = FUN_004021c0(param_2,param_3);
  if (((iVar6 != 0) && (*(char *)(iVar6 + 0x7c) == '\x1c')) &&
     (iVar6 = FUN_004683d0(param_1), iVar6 == 0)) {
    return 1;
  }
  if ((float)param_1[0xf9] < DAT_006e92e4 == ((float)param_1[0xf9] == DAT_006e92e4)) {
    return 1;
  }
  pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
  local_38 = *pfVar5 - *pfVar7;
  local_30 = pfVar5[2] - pfVar7[2];
  fVar1 = DAT_006e92e8 /
          SQRT(local_30 * local_30 +
               (pfVar5[1] - pfVar7[1]) * (pfVar5[1] - pfVar7[1]) + local_38 * local_38);
  iVar6 = FUN_0064cf30(fVar1);
  fVar2 = DAT_006e92e4;
  fVar3 = DAT_006e92e4;
  if (iVar6 != 0) {
    fVar2 = local_38 * fVar1;
    fVar3 = local_30 * fVar1;
  }
  local_38 = fVar2 * param_8;
  local_34 = param_8 * DAT_006e92e4;
  local_30 = fVar3 * param_8;
  pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_2c = *pfVar7 + local_38;
  fStack_28 = pfVar5[1] + local_34;
  afStack_24[0] = pfVar7[2] + local_30;
  if (param_1[0xec] == 0) {
    iVar6 = param_1[0x158];
    if (*(int *)(iVar6 + 8) != -1) {
      pcVar12 = s_STING_TARG_BACK_007204ac;
      FUN_004258a0(s_STING_TARG_BACK_007204ac);
      iVar8 = FUN_0053cc70(pcVar12);
      if (*(int *)(iVar6 + 8) != iVar8) goto LAB_00421788;
LAB_004217f5:
      param_6 = param_6 * DAT_006e92e4;
      FUN_00425b10(param_9);
      afStack_24[1] = 1.0;
      iStack_1c = 0x3f800000;
      local_18 = 1.0;
      local_38 = 0.0;
      local_34 = 0.0;
      local_30 = 0.0;
      FUN_00488d30(s_Sparks_007205e8,&fStack_2c,&local_38,afStack_24 + 1);
      FUN_0044c120(4,0x3f800000);
      pfVar5 = param_4;
      fVar10 = param_9;
      goto LAB_004218dd;
    }
LAB_00421788:
    iVar6 = param_1[0x158];
    if (*(int *)(iVar6 + 8) != -1) {
      pcVar12 = s_STAFF_TARG_BACK_0072041c;
      FUN_004258a0(s_STAFF_TARG_BACK_0072041c);
      iVar8 = FUN_0053cc70(pcVar12);
      if (*(int *)(iVar6 + 8) == iVar8) goto LAB_004217f5;
    }
    iVar6 = param_1[0x158];
    if (*(int *)(iVar6 + 8) != -1) {
      pcVar12 = s_STAFF_BLOCK_007205fc;
      FUN_004258a0(s_STAFF_BLOCK_007205fc);
      iVar8 = FUN_0053cc70(pcVar12);
      if (*(int *)(iVar6 + 8) == iVar8) goto LAB_004217f5;
    }
    iVar6 = param_1[0x158];
    pfVar5 = param_4;
    fVar10 = param_9;
    if (*(int *)(iVar6 + 8) != -1) {
      pcVar12 = s_STING_BLOCK_007205f0;
      FUN_004258a0(s_STING_BLOCK_007205f0);
      iVar8 = FUN_0053cc70(pcVar12);
      pfVar5 = param_4;
      fVar10 = param_9;
      if (*(int *)(iVar6 + 8) == iVar8) goto LAB_004217f5;
    }
  }
  afStack_24[1] = 1.0;
  iStack_1c = 0x3f800000;
  local_18 = 1.0;
  local_38 = 0.0;
  local_34 = 0.0;
  local_30 = 0.0;
  FUN_00488d30(s_HitStick_00720608,&fStack_2c,&local_38,afStack_24 + 1);
  FUN_00425ac0(fVar10);
  FUN_0044c120(3,0x3f800000);
LAB_004218dd:
  param_1[0xf9] = (int)((float)param_1[0xf9] + _DAT_006e936c);
  param_1[0xfa] = (int)*pfVar5;
  param_1[0xfb] = (int)pfVar5[1];
  param_1[0xfc] = (int)pfVar5[2];
  param_1[0xfd] = param_5;
  param_1[0xfe] = (int)param_6;
  param_1[0xff] = (int)param_8;
  param_1[0x100] = 1;
  if (DAT_0075cf1c != 0) {
    local_18 = (float)param_1[2];
    iStack_14 = param_1[3];
    uStack_10 = param_2;
    afStack_24[1] = 1.12104e-44;
    uStack_c = param_3;
    fStack_4 = param_6;
    fStack_8 = fVar10;
    FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),
                 afStack_24 + 1);
  }
  iVar6 = *param_1;
  uVar9 = __ftol();
  (**(code **)(iVar6 + 0x128))(uVar9);
  param_1[0x17d8] = 0;
  piVar4 = (int *)FUN_004021c0(unaff_retaddr,param_3);
  if ((piVar4 != (int *)0x0) && (_DAT_006e9360 < (float)param_1[0xfe])) {
    local_18 = (float)param_1[3];
    iStack_1c = param_1[2];
    afStack_24[0] = 9.80909e-45;
    (**(code **)(*piVar4 + 0xa8))(afStack_24);
  }
  return 1;
}

