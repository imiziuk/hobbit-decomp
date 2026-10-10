
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044b3b0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [2];
  float local_4;
  
  uVar5 = FUN_0044ad00(&local_1c);
  *(undefined4 *)(param_1 + 0x467c) = uVar5;
  iVar6 = FUN_004021c0(*(undefined4 *)(param_1 + 0x3a50),*(undefined4 *)(param_1 + 0x3a54));
  if (iVar6 == 0) {
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724604,0x369);
    return;
  }
  FUN_004c8770(*(undefined4 *)(param_1 + 0x465c));
  iVar7 = FUN_004caff0();
  local_20 = *(float *)(iVar6 + 0x188);
  if (iVar7 == 0) {
    local_1c = *(float *)(param_1 + 0x474) + _DAT_006e9368;
    local_24 = DAT_006e92e8 / SQRT((float)_DAT_006ec0f8);
    iVar6 = FUN_0064cf30(local_24);
    if (iVar6 == 0) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 0.0;
    }
    else {
      local_18 = local_24 * DAT_006e92e4;
      local_10 = local_24;
      local_14 = local_24 * _DAT_006e9550;
    }
    FUN_0064c8e0(local_1c,&local_24,&local_20);
    local_14 = local_14 * _DAT_006e9364;
    fVar2 = (local_10 * local_20 - local_18 * local_24) * _DAT_006e9364;
    *(float *)(param_1 + 0x754) = (local_20 * local_18 + local_10 * local_24) * _DAT_006e9364;
    *(float *)(param_1 + 0x75c) = fVar2;
    *(float *)(param_1 + 0x758) = local_14;
    local_4 = -*(float *)(param_1 + 0x75c);
    local_18 = -*(float *)(param_1 + 0x754) * _DAT_006e9554;
    local_14 = -*(float *)(param_1 + 0x758) * _DAT_006e9554;
    local_10 = local_4 * _DAT_006e9554;
    FUN_0044aba0(*(undefined4 *)(param_1 + 0x465c),&local_18);
    FUN_0043a3f0(5,s_C__projects_meridian_Support_Obj_00724604,0x387);
    return;
  }
  if (*(int *)(param_1 + 0x400) != 0) {
    local_20 = *(float *)(param_1 + 0x474) + _DAT_006e9368;
    local_1c = DAT_006e92e8 / SQRT((float)_DAT_006ec0f8);
    FUN_0064cf30(local_1c);
    FUN_0064c8e0(local_20,&local_20,&local_1c);
    *(undefined4 *)(param_1 + 0x75c) = 0;
    *(undefined4 *)(param_1 + 0x758) = 0;
    *(undefined4 *)(param_1 + 0x754) = 0;
    fVar8 = (float10)FUN_00647b30(0x3e19999a,0x3e800000);
    *(float *)(param_1 + 0x466c) = (float)fVar8;
    local_4 = -*(float *)(param_1 + 0x75c);
    local_18 = -*(float *)(param_1 + 0x754) * _DAT_006e9554;
    local_14 = -*(float *)(param_1 + 0x758) * _DAT_006e9554;
    local_10 = local_4 * _DAT_006e9554;
    FUN_0044aba0(*(undefined4 *)(param_1 + 0x465c),&local_18);
    FUN_0043a3f0(5,s_C__projects_meridian_Support_Obj_00724604,0x39c);
    return;
  }
  if ((*(int *)(param_1 + 0x640) != 0) && (_DAT_006e936c < *(float *)(param_1 + 0x91c))) {
    *(undefined4 *)(param_1 + 0x4670) = *(undefined4 *)(param_1 + 0x3a50);
    puVar1 = (undefined4 *)(param_1 + 0x7ac);
    *(undefined4 *)(param_1 + 0x466c) = 0x42700000;
    *(undefined4 *)(param_1 + 0x4674) = *(undefined4 *)(param_1 + 0x3a54);
    iVar6 = FUN_0044ad00(puVar1);
    if (iVar6 == 0) {
      *puVar1 = *(undefined4 *)(param_1 + 0x474);
    }
    *(undefined4 *)(param_1 + 0x474) = *puVar1;
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    FUN_0064c8e0(*puVar1,&local_24,&local_20);
    iVar6 = *(int *)(param_1 + 0x450);
    fVar2 = local_24 * DAT_006e92e4;
    *(float *)(param_1 + 0x754) =
         (local_20 * DAT_006e92e4 + local_24) * *(float *)(iVar6 + 0xa0) * _DAT_006ec0f0;
    *(float *)(param_1 + 0x75c) = (local_20 - fVar2) * *(float *)(iVar6 + 0xa0) * _DAT_006ec0f0;
    *(float *)(param_1 + 0x758) = *(float *)(iVar6 + 0x3c) * _DAT_006e95d8;
    local_4 = -*(float *)(param_1 + 0x75c);
    local_18 = -*(float *)(param_1 + 0x754) * _DAT_006e9554;
    local_14 = -*(float *)(param_1 + 0x758) * _DAT_006e9554;
    local_10 = local_4 * _DAT_006e9554;
    FUN_0044aba0(*(undefined4 *)(param_1 + 0x465c),&local_18);
    FUN_0043a3f0(5,s_C__projects_meridian_Support_Obj_00724604,0x3be);
    return;
  }
  if (*(int *)(param_1 + 0x64c) != 0) {
    *(undefined4 *)(param_1 + 0x4670) = *(undefined4 *)(param_1 + 0x3a50);
    *(undefined4 *)(param_1 + 0x658) = 0;
    *(undefined4 *)(param_1 + 0x466c) = 0x42700000;
    *(undefined4 *)(param_1 + 0x4674) = *(undefined4 *)(param_1 + 0x3a54);
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724604,0x3ca);
    return;
  }
  if (*(int *)(param_1 + 0x4664) == 0) {
    local_24 = *(float *)(param_1 + 0x600);
    *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_1c,&local_20);
    local_c[0] = local_20 * DAT_006e92e4 + local_1c;
    local_4 = local_20 - local_1c * DAT_006e92e4;
    FUN_0056bad0(&local_18);
    local_20 = DAT_006e92e8 / SQRT(local_18 * local_18 + local_10 * local_10 + local_14 * local_14);
    iVar6 = FUN_0064cf30(local_20);
    if (iVar6 == 0) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 0.0;
    }
    else {
      local_18 = local_18 * local_20;
      local_14 = local_14 * local_20;
      local_10 = local_10 * local_20;
    }
    fVar2 = local_14 * DAT_006e92e4 + local_18 * local_c[0] + local_10 * local_4;
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      local_24 = -local_24;
    }
    fVar2 = local_24;
    if (local_24 < DAT_006e92e4 != (NAN(local_24) || NAN(DAT_006e92e4))) {
      fVar2 = -local_24;
    }
    iVar6 = param_1 + 0x454;
    if (fVar2 < _DAT_006e9550 == (NAN(fVar2) || NAN(_DAT_006e9550))) {
      if (local_24 <= DAT_006e92e4) {
        FUN_00549470(iVar6);
        FUN_00549580(iVar6);
        uVar12 = 0x3e000000;
        uVar10 = 1;
        uVar9 = 1;
        uVar5 = FUN_0053cc70(s_EDGE_LEFT_00720e88);
        FUN_00540840(uVar5,uVar9,uVar10,uVar12);
        if (local_24 < DAT_006e92e4 != (NAN(local_24) || NAN(DAT_006e92e4))) {
          local_24 = -local_24;
        }
        *(float *)(param_1 + 0x794) = local_24;
      }
      else {
        FUN_00549470(iVar6);
        FUN_00549580(iVar6);
        uVar12 = 0x3e000000;
        uVar10 = 1;
        uVar9 = 1;
        uVar5 = FUN_0053cc70(s_EDGE_RIGHT_00720e94);
        FUN_00540840(uVar5,uVar9,uVar10,uVar12);
        *(float *)(param_1 + 0x794) = local_24;
      }
    }
    else {
      FUN_00549470(iVar6);
      FUN_00549580(iVar6);
      uVar12 = 0x3e000000;
      uVar10 = 1;
      uVar9 = 1;
      uVar5 = FUN_0053cc70(s_EDGE_IDLE_00720e6c);
      FUN_00540840(uVar5,uVar9,uVar10,uVar12);
    }
    iVar6 = *(int *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(iVar6 + 0xfc);
    *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(iVar6 + 0x100);
    *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(iVar6 + 0x104);
    return;
  }
  local_24 = *(float *)(param_1 + 0x604);
  bVar3 = NAN(DAT_006e92e4);
  bVar4 = local_24 < DAT_006e92e4;
  *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
  fVar2 = local_24;
  if (bVar4 != (NAN(local_24) || bVar3)) {
    fVar2 = -local_24;
  }
  if (fVar2 < _DAT_006e9550 != (NAN(fVar2) || NAN(_DAT_006e9550))) {
    *(undefined4 *)(param_1 + 0x4678) = 0;
    iVar6 = *(int *)(param_1 + 0x560);
    if (*(int *)(iVar6 + 8) != -1) {
      pcVar11 = s_ROPE_SLIDE_007246e4;
      FUN_004258a0(s_ROPE_SLIDE_007246e4);
      iVar7 = FUN_0053cc70(pcVar11);
      if (*(int *)(iVar6 + 8) == iVar7) {
        FUN_00549470(param_1 + 0x454);
        FUN_00549580(param_1 + 0x454);
        uVar12 = 0x3e000000;
        uVar10 = 1;
        uVar9 = 1;
        uVar5 = FUN_0053cc70(s_ROPE_STOP_SLIDE_007246d4);
        FUN_00540840(uVar5,uVar9,uVar10,uVar12);
        goto LAB_0044bd7d;
      }
    }
    iVar6 = *(int *)(param_1 + 0x560);
    if (*(int *)(iVar6 + 8) != -1) {
      pcVar11 = s_ROPE_STOP_SLIDE_007246d4;
      FUN_004258a0(s_ROPE_STOP_SLIDE_007246d4);
      iVar7 = FUN_0053cc70(pcVar11);
      if (((*(int *)(iVar6 + 8) == iVar7) && (*(int *)(param_1 + 0x534) < 1)) &&
         (local_1c = (float)(*(int *)(param_1 + 0x52c) + -2),
         (float)(int)local_1c < *(float *)(param_1 + 0x530) ==
         ((float)(int)local_1c == *(float *)(param_1 + 0x530)))) goto LAB_0044bd7d;
    }
    if (*(int *)(param_1 + 0x467c) == 0) {
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      uVar12 = 0x3e000000;
      uVar10 = 1;
      uVar9 = 1;
      uVar5 = FUN_0053cc70(s_ROPE_IDLE_007246ac);
      FUN_00540840(uVar5,uVar9,uVar10,uVar12);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x560);
      if (*(int *)(iVar6 + 8) != -1) {
        pcVar11 = s_ROPE_REACH_007246c8;
        FUN_004258a0(s_ROPE_REACH_007246c8);
        iVar7 = FUN_0053cc70(pcVar11);
        if ((*(int *)(iVar6 + 8) == iVar7) &&
           ((0 < *(int *)(param_1 + 0x534) ||
            (local_1c = (float)(*(int *)(param_1 + 0x52c) + -2),
            (float)(int)local_1c < *(float *)(param_1 + 0x530) !=
            ((float)(int)local_1c == *(float *)(param_1 + 0x530)))))) {
          FUN_00549470(param_1 + 0x454);
          FUN_00549580(param_1 + 0x454);
          uVar12 = 0x3e000000;
          uVar10 = 0;
          uVar9 = 1;
          uVar5 = FUN_0053cc70(s_ROPE_REACH_IDLE_007246b8);
          FUN_00540840(uVar5,uVar9,uVar10,uVar12);
          goto LAB_0044bd7d;
        }
      }
      iVar6 = *(int *)(param_1 + 0x560);
      if (*(int *)(iVar6 + 8) != -1) {
        pcVar11 = s_ROPE_REACH_IDLE_007246b8;
        FUN_004258a0(s_ROPE_REACH_IDLE_007246b8);
        iVar7 = FUN_0053cc70(pcVar11);
        if (*(int *)(iVar6 + 8) == iVar7) goto LAB_0044bd7d;
      }
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      uVar12 = 0x3e000000;
      uVar10 = 0;
      uVar9 = 1;
      uVar5 = FUN_0053cc70(s_ROPE_REACH_007246c8);
      FUN_00540840(uVar5,uVar9,uVar10,uVar12);
    }
    goto LAB_0044bd7d;
  }
  if (local_24 <= DAT_006e92e4) {
    fVar2 = local_24;
    if (local_24 < DAT_006e92e4 != (NAN(local_24) || NAN(DAT_006e92e4))) {
      fVar2 = -local_24;
    }
    if (_DAT_006e99a8 < fVar2) {
      *(float *)(param_1 + 0x4678) = *(float *)(param_1 + 0x920) + *(float *)(param_1 + 0x4678);
    }
    iVar6 = *(int *)(param_1 + 0x4658) + -1;
    if ((*(int *)(param_1 + 0x465c) == iVar6) && (_DAT_006e95d8 < *(float *)(param_1 + 0x4660))) {
      *(undefined4 *)(param_1 + 0x4678) = 0;
    }
    if (DAT_006e92e8 < *(float *)(param_1 + 0x4678)) {
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      uVar12 = 0x3e000000;
      uVar10 = 1;
      uVar9 = 1;
      uVar5 = FUN_0053cc70(s_ROPE_SLIDE_007246e4);
      FUN_00540840(uVar5,uVar9,uVar10,uVar12);
      *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x580) = 1;
      *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
      local_1c = *(float *)(param_1 + 0x52c);
      *(undefined4 *)(param_1 + 0x590) = 1;
      *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
      iVar6 = *(int *)(param_1 + 0x528);
      iVar7 = FUN_004258a0();
      fVar2 = DAT_006e92e8 /
              ((float)(int)local_1c / (float)*(byte *)(iVar6 * 0x50 + 0x2f + *(int *)(iVar7 + 0x58))
              );
      local_1c = DAT_006e92e4 * fVar2;
      FUN_00401f00(local_1c,fVar2 * _DAT_006ec0d8,local_1c);
      FUN_004357e0(local_c);
      goto LAB_0044bd7d;
    }
    if ((*(int *)(param_1 + 0x465c) == iVar6) && (_DAT_006e95d8 < *(float *)(param_1 + 0x4660))) {
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      uVar12 = 0x3e000000;
      uVar10 = 1;
      uVar9 = 1;
      uVar5 = FUN_0053cc70(s_ROPE_IDLE_007246ac);
      FUN_00540840(uVar5,uVar9,uVar10,uVar12);
      *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
      goto LAB_0044bd7d;
    }
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    uVar12 = 0x3e000000;
    uVar10 = 1;
    uVar9 = 1;
    uVar5 = FUN_0053cc70(s_ROPE_CLIMB_DOWN_00724678);
    FUN_00540840(uVar5,uVar9,uVar10,uVar12);
    fVar2 = local_24;
    if (local_24 < DAT_006e92e4 != (NAN(local_24) || NAN(DAT_006e92e4))) {
      fVar2 = -local_24;
    }
    *(float *)(param_1 + 0x794) = fVar2 + fVar2;
    if ((local_20 == 0.0) || (local_20 == 1.4013e-45)) goto LAB_0044bd6c;
    if (local_20 != 2.8026e-45) goto LAB_0044bd7d;
    pcVar11 = s_BilboRopeClimbChain_00724688;
  }
  else {
    *(undefined4 *)(param_1 + 0x4678) = 0;
    if ((*(int *)(param_1 + 0x465c) == 0) &&
       (*(float *)(param_1 + 0x4660) < _DAT_006e9550 !=
        (NAN(*(float *)(param_1 + 0x4660)) || NAN(_DAT_006e9550)))) {
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      uVar12 = 0x3e000000;
      uVar10 = 1;
      uVar9 = 1;
      uVar5 = FUN_0053cc70(s_ROPE_IDLE_007246ac);
      FUN_00540840(uVar5,uVar9,uVar10,uVar12);
      *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
      goto LAB_0044bd7d;
    }
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    uVar12 = 0x3e000000;
    uVar10 = 1;
    uVar9 = 1;
    uVar5 = FUN_0053cc70(s_ROPE_CLIMB_UP_0072469c);
    FUN_00540840(uVar5,uVar9,uVar10,uVar12);
    *(float *)(param_1 + 0x794) = local_24;
    if ((local_20 == 0.0) || (local_20 == 1.4013e-45)) {
LAB_0044bd6c:
      pcVar11 = s_BilboRopeClimbRope_00724664;
    }
    else {
      if (local_20 != 2.8026e-45) goto LAB_0044bd7d;
      pcVar11 = s_BilboRopeClimbChain_00724688;
    }
  }
  FUN_00659600(pcVar11,1);
LAB_0044bd7d:
  iVar6 = *(int *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(iVar6 + 0xfc);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(iVar6 + 0x100);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(iVar6 + 0x104);
  fVar2 = *(float *)(param_1 + 0x600);
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar2 = -fVar2;
  }
  if (fVar2 <= _DAT_006e95d8) {
    return;
  }
  *(float *)(param_1 + 0x7ac) =
       *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0x600) * _DAT_006e9368 +
       *(float *)(param_1 + 0x7ac);
  return;
}

