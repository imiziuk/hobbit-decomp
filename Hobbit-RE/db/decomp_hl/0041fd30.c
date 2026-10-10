
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041fd30(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  float10 fVar12;
  float afStack_128 [3];
  int iStack_11c;
  float fStack_118;
  float afStack_114 [8];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d4 [7];
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float afStack_8c [2];
  float fStack_84;
  float fStack_6c;
  float fStack_64;
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf451;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_bilbo__UpdateProps_00720308);
  local_4 = 0;
  (**(code **)(*param_1 + 0x154))();
  iVar4 = FUN_00540e90(s_Weapon_00720300,afStack_114,0);
  if ((iVar4 == 0) || (bVar3 = true, param_1[0x235] == 0x1e)) {
    bVar3 = false;
  }
  iVar4 = param_1[0x136c];
  iVar2 = param_1[0x136d];
  iStack_11c = (param_1[0x3a] << 0x1d) >> 0x1f;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar4 = FUN_00406ce0(iVar4,iVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    FUN_00649720();
  }
  if ((((param_1[0xf0] == 0) || (param_1[0xf2] == 0)) || (param_1[0x235] == 0x15)) || (!bVar3)) {
    FUN_004d22c0(1);
    FUN_004b9220(0);
    param_1[0x1398] = 0;
  }
  else {
    afStack_128[0] = _DAT_0072008c;
    afStack_d4[0] = _DAT_0072008c;
    afStack_d4[1] = _DAT_0072008c * DAT_006e92e4;
    uStack_a8 = 0;
    uStack_b8 = 0;
    afStack_d4[3] = 0.0;
    uStack_98 = 0x3f800000;
    afStack_d4[5] = _DAT_0072008c;
    fStack_ac = _DAT_0072008c;
    afStack_d4[2] = afStack_d4[1];
    afStack_d4[4] = afStack_d4[1];
    afStack_d4[6] = afStack_d4[1];
    fStack_b4 = afStack_d4[1];
    fStack_b0 = afStack_d4[1];
    fStack_a4 = afStack_d4[1];
    fStack_a0 = afStack_d4[1];
    fStack_9c = afStack_d4[1];
    FUN_0064c8e0(0x3fc90fdb,&fStack_118,afStack_128);
    FUN_004064d0();
    fStack_84 = -fStack_118;
    afStack_8c[0] = afStack_128[0];
    fStack_6c = fStack_118;
    fStack_64 = afStack_128[0];
    uVar5 = FUN_0064e040(auStack_4c,afStack_8c,afStack_d4);
    FUN_00406570(uVar5);
    pfVar6 = (float *)FUN_0064e040(auStack_4c,afStack_114,afStack_d4);
    if ((afStack_114 != pfVar6) && (pfVar7 = pfVar6 + 0x10, pfVar6 != pfVar7)) {
      pfVar9 = afStack_114 + 2;
      iVar4 = (int)pfVar6 - (int)afStack_114;
      do {
        pfVar9[-2] = *pfVar6;
        pfVar9[-1] = pfVar6[1];
        *pfVar9 = *(float *)(iVar4 + (int)pfVar9);
        pfVar9[1] = pfVar6[3];
        pfVar6 = pfVar6 + 4;
        pfVar9 = pfVar9 + 4;
      } while (pfVar6 != pfVar7);
    }
    pfVar6 = (float *)(param_1 + 0x139a);
    if ((afStack_d4 != pfVar6) && (pfVar6 != (float *)(param_1 + 0x13aa))) {
      pfVar7 = afStack_d4 + 2;
      pfVar9 = pfVar6;
      do {
        pfVar7[-2] = *pfVar9;
        pfVar7[-1] = pfVar9[1];
        *pfVar7 = *(float *)(((int)pfVar6 - (int)afStack_d4) + (int)pfVar7);
        pfVar7[1] = pfVar9[3];
        pfVar9 = pfVar9 + 4;
        pfVar7 = pfVar7 + 4;
      } while (pfVar9 != (float *)(param_1 + 0x13aa));
    }
    pfVar7 = (float *)FUN_0064e040(auStack_4c,afStack_d4,afStack_114);
    if ((afStack_114 != pfVar7) && (pfVar9 = pfVar7 + 0x10, pfVar7 != pfVar9)) {
      pfVar10 = afStack_114 + 2;
      iVar4 = (int)pfVar7 - (int)afStack_114;
      do {
        pfVar10[-2] = *pfVar7;
        pfVar10[-1] = pfVar7[1];
        *pfVar10 = *(float *)(iVar4 + (int)pfVar10);
        pfVar10[1] = pfVar7[3];
        pfVar7 = pfVar7 + 4;
        pfVar10 = pfVar10 + 4;
      } while (pfVar7 != pfVar9);
    }
    FUN_004b9300(afStack_114);
    FUN_004d22c0(0);
    FUN_004b9220(iStack_11c);
    FUN_00401f00(afStack_114[0] * DAT_006e92e4 +
                 fStack_f4 * DAT_006e92e4 + afStack_114[4] * _DAT_006e99a0 + fStack_e4,
                 fStack_f0 * DAT_006e92e4 +
                 afStack_114[5] * _DAT_006e99a0 + afStack_114[1] * DAT_006e92e4 + fStack_e0,
                 fStack_ec * DAT_006e92e4 +
                 afStack_114[6] * _DAT_006e99a0 + afStack_114[2] * DAT_006e92e4 + fStack_dc);
    param_1[0x1398] = 1;
    piVar8 = (int *)FUN_0064e040(auStack_4c,pfVar6,afStack_114);
    if ((param_1 + 5000 != piVar8) && (piVar1 = piVar8 + 0x10, piVar8 != piVar1)) {
      piVar11 = param_1 + 0x138a;
      iVar4 = (int)piVar8 - (int)(param_1 + 5000);
      do {
        piVar11[-2] = *piVar8;
        piVar11[-1] = piVar8[1];
        *piVar11 = *(int *)(iVar4 + (int)piVar11);
        piVar11[1] = piVar8[3];
        piVar8 = piVar8 + 4;
        piVar11 = piVar11 + 4;
      } while (piVar8 != piVar1);
    }
    FUN_00421a00();
  }
  iVar4 = param_1[0x136e];
  iVar2 = param_1[0x136f];
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 2;
  iVar4 = FUN_00406ce0(iVar4,iVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    FUN_00649720();
  }
  if ((((param_1[0xf4] == 0) || (param_1[0xf6] == 0)) || (param_1[0x235] == 0x15)) || (!bVar3)) {
    FUN_004d22c0(1);
    iVar4 = 0;
  }
  else {
    FUN_004064d0();
    FUN_00420470(&DAT_0075ba10);
    uVar5 = FUN_0064e040(auStack_4c,afStack_114,afStack_8c);
    FUN_00406570(uVar5);
    FUN_004b9300(afStack_114);
    FUN_004d22c0(0);
    iVar4 = iStack_11c;
  }
  FUN_004b9220(iVar4);
  FUN_004021c0(param_1[0x1370],param_1[0x1371]);
  if (((param_1[0xec] == 0) || (param_1[0xed] == 0)) ||
     ((param_1[0x235] == 0x15 ||
      ((!bVar3 ||
       (fVar12 = (float10)FUN_00434ca0(2),
       (NAN(fVar12) || NAN((float10)DAT_006e92e4)) != (fVar12 == (float10)DAT_006e92e4))))))) {
    FUN_004d22c0(1);
    FUN_004b9220(0);
  }
  else {
    FUN_004b9300(afStack_114);
    FUN_004d22c0(0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

