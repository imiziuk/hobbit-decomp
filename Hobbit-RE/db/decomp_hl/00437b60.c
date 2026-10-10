
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00437b60(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float local_3d0;
  int local_3cc;
  float local_3c8 [4];
  int local_3b8;
  float *local_3b4;
  float local_3b0 [11];
  undefined4 local_384;
  float local_380;
  float local_37c;
  float local_378;
  undefined4 local_374;
  undefined1 local_370 [12];
  undefined4 local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  undefined1 local_33c [36];
  undefined4 local_318;
  int local_314;
  float local_310 [10];
  int local_2e8;
  float local_2e4 [9];
  undefined4 local_2c0;
  int local_2bc [10];
  undefined4 local_294;
  int local_290;
  undefined4 local_268;
  int local_264;
  undefined1 local_260 [8];
  float local_258;
  undefined1 local_254 [12];
  undefined1 local_248 [4];
  float local_244;
  undefined1 local_238 [28];
  float local_21c;
  float local_210 [10];
  int aiStack_1e8 [122];
  
  pfVar8 = local_210;
  iVar11 = 0xc;
  local_3b8 = param_1;
  do {
    FUN_00401080(pfVar8,0xc,3,FUN_0041def0);
    pfVar8 = pfVar8 + 0xb;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  FUN_005788e0(param_1 + 0x4688,*(undefined4 *)(param_1 + 0x4680),*(undefined4 *)(param_1 + 0x4684))
  ;
  local_3b0[0] = -NAN;
  local_3b0[1] = -NAN;
  local_3b0[2] = -NAN;
  local_3b0[3] = -NAN;
  local_3c8[0] = 0.0;
  local_3c8[1] = 0.0;
  local_3c8[2] = 0.0;
  local_3c8[3] = 0.0;
  local_3d0 = 0.0;
  if (0 < DAT_00777218) {
    local_3cc = 0;
    local_3b4 = (float *)&DAT_00773a20;
    do {
      *(float *)((int)local_210 + local_3cc) = local_3b4[-2];
      pfVar8 = (float *)((int)local_210 + local_3cc + 8);
      *(float *)((int)local_210 + local_3cc + 4) = local_3b4[-1];
      *pfVar8 = *local_3b4;
      *(float *)((int)local_210 + local_3cc + 0xc) = local_3b4[1];
      *(float *)((int)local_210 + local_3cc + 0x10) = local_3b4[2];
      *(float *)((int)local_210 + local_3cc + 0x14) = local_3b4[3];
      *(float *)((int)local_210 + local_3cc + 0x18) = local_3b4[4];
      fVar1 = local_3b4[6];
      *(float *)((int)local_210 + local_3cc + 0x1c) = local_3b4[5];
      *(float *)((int)local_210 + local_3cc + 0x20) = fVar1;
      *(undefined4 *)((int)local_210 + local_3cc + 0x24) = 0;
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 1;
        iVar7 = local_3cc + (iVar12 % 3) * 0xc;
        fVar1 = *(float *)((int)local_210 + iVar7) - pfVar8[-2];
        fVar2 = *(float *)((int)local_210 + iVar7 + 4) - pfVar8[-1];
        fVar3 = *(float *)((int)local_210 + iVar7 + 8) - *pfVar8;
        fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
        if (*(float *)((int)local_210 + local_3cc + 0x24) < fVar1) {
          *(float *)((int)local_210 + local_3cc + 0x24) = fVar1;
          *(int *)((int)local_210 + local_3cc + 0x28) = iVar11;
        }
        pfVar8 = pfVar8 + 3;
        iVar11 = iVar12;
      } while (iVar12 < 3);
      iVar11 = 0;
      iVar7 = 0;
      iVar12 = 0;
      do {
        if (local_3c8[iVar7] < *(float *)((int)local_3c8 + iVar12) !=
            (NAN(local_3c8[iVar7]) || NAN(*(float *)((int)local_3c8 + iVar12)))) {
          iVar11 = iVar7;
          iVar12 = iVar7 * 4;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
      fVar1 = *(float *)((int)local_210 + local_3cc + 0x24);
      if (local_3c8[iVar11] < fVar1 != (NAN(local_3c8[iVar11]) || NAN(fVar1))) {
        local_3c8[iVar11] = *(float *)((int)local_210 + local_3cc + 0x24);
        local_3b0[iVar11] = local_3d0;
      }
      local_3d0 = (float)((int)local_3d0 + 1);
      local_3cc = local_3cc + 0x2c;
      local_3b4 = local_3b4 + 0xe;
    } while ((int)local_3d0 < DAT_00777218);
  }
  pfVar8 = local_310;
  iVar11 = 4;
  do {
    FUN_00401080(pfVar8,0xc,3,FUN_0041def0);
    pfVar8 = pfVar8 + 0xb;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  local_3d0 = 0.0;
  pfVar8 = local_310;
  pfVar10 = local_3b0;
  do {
    pfVar10 = pfVar10 + 4;
    fVar1 = local_3b0[(int)local_3d0];
    pfVar6 = local_210 + (int)fVar1 * 0xb;
    uVar4 = FUN_00405080(local_3c8,local_210 + (int)fVar1 * 0xb + 6,pfVar6);
    uVar4 = FUN_00405080(&local_354,local_210 + (int)fVar1 * 0xb + 3,pfVar6,uVar4);
    pfVar5 = (float *)FUN_0042eb90(&local_360,uVar4);
    *pfVar10 = *pfVar5;
    pfVar10[1] = pfVar5[1];
    pfVar10[2] = pfVar5[2];
    FUN_0042e1f0();
    fVar13 = (float10)FUN_00402020(pfVar6);
    pfVar10[3] = (float)-fVar13;
    pfVar5 = pfVar8 + 1;
    iVar11 = (int)pfVar6 - (int)pfVar8;
    local_3cc = 3;
    do {
      pfVar5[-1] = *pfVar6;
      *pfVar5 = *(float *)(iVar11 + (int)pfVar5);
      pfVar5[1] = pfVar6[2];
      pfVar6 = pfVar6 + 3;
      pfVar5 = pfVar5 + 3;
      local_3cc = local_3cc + -1;
    } while (local_3cc != 0);
    fVar2 = local_210[(int)fVar1 * 0xb + 10];
    local_3d0 = (float)((int)local_3d0 + 1);
    pfVar8[9] = local_210[(int)fVar1 * 0xb + 9];
    pfVar8[10] = fVar2;
    pfVar8 = pfVar8 + 0xb;
  } while ((int)local_3d0 < 4);
  fVar1 = local_3b0[6] * local_3b0[10] + local_3b0[5] * local_3b0[9] + local_3b0[8] * local_3b0[4];
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    if (local_380 * local_3b0[4] + local_378 * local_3b0[6] + local_37c * local_3b0[5] <=
        DAT_006e92e4) {
      FUN_004357e0(local_3b0 + 8);
      local_3c8[3] = (float)local_384;
      FUN_004357e0(local_370);
      local_384 = local_364;
      FUN_004357e0(local_3c8);
      local_364 = local_3c8[3];
      uVar9 = 0;
      do {
        FUN_004357e0((int)local_2e4 + uVar9);
        uVar9 = uVar9 + 0xc;
      } while (uVar9 < 0x24);
      local_318 = local_2c0;
      local_314 = local_2bc[0];
      pfVar8 = local_2e4;
      iVar11 = 3;
      do {
        FUN_004357e0(pfVar8 + 0x16);
        pfVar8 = pfVar8 + 3;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      local_2c0 = local_268;
      local_2bc[0] = local_264;
      uVar9 = 0;
      do {
        FUN_004357e0(local_33c + uVar9);
        uVar9 = uVar9 + 0xc;
      } while (uVar9 < 0x24);
      local_268 = local_318;
      local_264 = local_314;
    }
    else {
      local_3c8[1] = local_3b0[9];
      local_3c8[0] = local_3b0[8];
      local_3c8[2] = local_3b0[10];
      local_3c8[3] = (float)local_384;
      FUN_004357e0(&local_380);
      local_384 = local_374;
      FUN_004357e0(local_3c8);
      local_374 = local_3c8[3];
      uVar9 = 0;
      do {
        FUN_004357e0((int)local_2e4 + uVar9);
        uVar9 = uVar9 + 0xc;
      } while (uVar9 < 0x24);
      local_318 = local_2c0;
      local_314 = local_2bc[0];
      pfVar8 = local_2e4;
      iVar11 = 3;
      do {
        FUN_004357e0(pfVar8 + 0xb);
        pfVar8 = pfVar8 + 3;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      local_2c0 = local_294;
      local_2bc[0] = local_290;
      uVar9 = 0;
      do {
        FUN_004357e0(local_33c + uVar9);
        uVar9 = uVar9 + 0xc;
      } while (uVar9 < 0x24);
      local_294 = local_318;
      local_290 = local_314;
    }
  }
  iVar11 = 2;
  do {
    FUN_0041def0();
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  iVar11 = 0;
  pfVar8 = local_3b0 + 4;
  pfVar10 = &local_258;
  do {
    iVar7 = (*(int *)((int)&local_2e8 + iVar11) + 1) % 3;
    iVar12 = iVar11 + iVar7 * 0xc;
    iVar7 = iVar11 + ((iVar7 + 1) % 3) * 0xc;
    FUN_00401f00(*(float *)((int)local_310 + iVar12) + *(float *)((int)local_310 + iVar7),
                 *(float *)((int)local_310 + iVar12 + 4) + *(float *)((int)local_310 + iVar7 + 4),
                 *(float *)((int)local_310 + iVar12 + 8) + *(float *)((int)local_310 + iVar7 + 8));
    FUN_00401f00(local_348 * _DAT_006e936c,local_344 * _DAT_006e936c,local_340 * _DAT_006e936c);
    *pfVar10 = local_3b0[2];
    iVar12 = *(int *)((int)local_2bc + iVar11);
    pfVar10[-1] = local_3b0[1];
    pfVar10[-2] = local_3b0[0];
    iVar7 = (iVar12 + 1) % 3;
    iVar12 = iVar11 + iVar7 * 0xc;
    iVar7 = iVar11 + ((iVar7 + 1) % 3) * 0xc;
    FUN_00401f00(*(float *)((int)local_2e4 + iVar12) + *(float *)((int)local_2e4 + iVar7),
                 *(float *)((int)local_2e4 + iVar12 + 4) + *(float *)((int)local_2e4 + iVar7 + 4),
                 *(float *)((int)local_2e4 + iVar12 + 8) + *(float *)((int)local_2e4 + iVar7 + 8));
    FUN_00401f00(local_360 * _DAT_006e936c,local_35c * _DAT_006e936c,local_358 * _DAT_006e936c);
    pfVar10[3] = local_34c;
    pfVar10[1] = local_354;
    pfVar10[2] = local_350;
    if (pfVar10[-1] < pfVar10[2] != (NAN(pfVar10[-1]) || NAN(pfVar10[2]))) {
      fVar1 = pfVar10[-2];
      local_3c8[2] = *pfVar10;
      fVar2 = pfVar10[-1];
      pfVar10[-2] = pfVar10[1];
      pfVar10[-1] = pfVar10[2];
      *pfVar10 = pfVar10[3];
      pfVar10[1] = fVar1;
      pfVar10[3] = local_3c8[2];
      pfVar10[2] = fVar2;
    }
    FUN_004357e0(pfVar8);
    pfVar10[7] = pfVar8[3];
    iVar11 = iVar11 + 0x58;
    pfVar8 = pfVar8 + 8;
    pfVar10 = pfVar10 + 10;
  } while (iVar11 < 0xb0);
  if (local_21c < local_244) {
    FUN_004357e0(local_260);
    FUN_004357e0(local_254);
    FUN_0042fda0(local_248);
    return;
  }
  if (local_244 < local_21c) {
    FUN_00438360(local_238);
    return;
  }
  fVar13 = (float10)FUN_00439830(local_3b8 + 0x14);
  if (fVar13 < (float10)DAT_006e92e4) {
    FUN_00438360(local_238);
    return;
  }
  FUN_00438360(local_260);
  return;
}

