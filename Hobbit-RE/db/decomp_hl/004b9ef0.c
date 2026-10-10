
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b9ef0(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  undefined8 uVar14;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int iStack_a8;
  int iStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_90;
  float afStack_88 [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 auStack_5c [3];
  undefined1 auStack_50 [4];
  float fStack_4c;
  float fStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  iVar5 = FUN_004ba6e0();
  if (((iVar5 == 0) || ((*(byte *)(param_1 + 0x98) & 4) != 0)) ||
     (param_1[0x96] != 0 || param_1[0x97] != 0)) goto LAB_004ba567;
  pfVar6 = (float *)(**(code **)(*param_1 + 0x28))();
  FUN_00401f00(*param_2 - *pfVar6,param_2[1] - pfVar6[1],param_2[2] - pfVar6[2]);
  fVar13 = (float10)FUN_00402000();
  fStack_98 = (float)fVar13;
  if (fVar13 <= (float10)_DAT_006e9340) goto LAB_004ba567;
  pfVar6 = (float *)(param_1 + 0x75);
  fStack_ac = (float)param_1[0x99] * _DAT_006e9380;
  iStack_a8 = 0;
  afStack_88[0] = 0.0;
  afStack_88[1] = 10.0;
  uStack_78 = 0x41200000;
  afStack_88[2] = -(float)param_1[0x99];
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x41200000;
  iStack_68 = param_1[0x99];
  uStack_60 = 0x41200000;
  iStack_64 = param_1[0x99];
  auStack_5c[0] = 0;
  fStack_c4 = *pfVar6;
  fStack_c0 = (float)param_1[0x76];
  fStack_bc = (float)param_1[0x77];
  afStack_88[3] = afStack_88[2];
  fVar13 = (float10)FUN_00402000();
  if (fVar13 < (float10)DAT_006e92e4 != (NAN(fVar13) || NAN((float10)DAT_006e92e4))) {
    fVar13 = -fVar13;
  }
  fVar1 = (float)fVar13;
  FUN_00401f00(param_1[0x79],param_1[0x7a],param_1[0x7b]);
  fVar13 = (float10)FUN_00402000();
  if (fVar13 < (float10)DAT_006e92e4 != (NAN(fVar13) || NAN((float10)DAT_006e92e4))) {
    fVar13 = -fVar13;
  }
  fStack_cc = (float)fVar13;
  FUN_00401f00(param_1[0x7d],param_1[0x7e],param_1[0x7f]);
  fVar13 = (float10)FUN_00402000();
  if (fVar13 < (float10)DAT_006e92e4 != (NAN(fVar13) || NAN((float10)DAT_006e92e4))) {
    fVar13 = -fVar13;
  }
  fStack_c8 = (float)fVar13;
  if ((((_DAT_006e9378 < fVar1) || (fVar1 < _DAT_006e9374 != (NAN(fVar1) || NAN(_DAT_006e9374)))) ||
      ((_DAT_006e9378 < fStack_cc ||
       ((fStack_cc < _DAT_006e9374 != (NAN(fStack_cc) || NAN(_DAT_006e9374)) ||
        (_DAT_006e9378 < fStack_c8)))))) ||
     (fStack_c8 < _DAT_006e9374 != (NAN(fStack_c8) || NAN(_DAT_006e9374)))) {
    FUN_00424a30(pfVar6);
    FUN_00424aa0();
    if (fStack_1c < DAT_006e92e8 == (NAN(fStack_1c) || NAN(DAT_006e92e8))) goto LAB_004ba244;
    if (fStack_1c <= _DAT_006e9370) {
      fVar13 = (float10)FUN_0064ca10(iStack_38,fStack_40);
      fStack_d0 = 1.5707964;
      goto LAB_004ba253;
    }
    fVar13 = (float10)FUN_0064ca10(uStack_3c,uStack_2c);
    fStack_c8 = (float)fVar13;
    fVar13 = (float10)FUN_006c0370();
    fStack_d0 = (float)-fVar13;
    fVar13 = (float10)FUN_0064ca10(uStack_20,uStack_18);
    fStack_cc = (float)fVar13;
  }
  else {
    if ((float)param_1[0x7e] < DAT_006e92e8 == (NAN((float)param_1[0x7e]) || NAN(DAT_006e92e8))) {
      fStack_40 = *pfVar6;
      iStack_38 = param_1[0x77];
LAB_004ba244:
      fVar13 = (float10)FUN_0064ca10(iStack_38,fStack_40);
      fVar13 = -fVar13;
      fStack_d0 = -1.5707964;
    }
    else {
      if (_DAT_006e9370 < (float)param_1[0x7e]) {
        fVar13 = (float10)FUN_0064ca10(param_1[0x76],param_1[0x7a]);
        fStack_c8 = (float)fVar13;
        fVar13 = (float10)FUN_006c0370();
        fStack_d0 = (float)-fVar13;
        fVar13 = (float10)FUN_0064ca10(param_1[0x7d],param_1[0x7f]);
        fStack_cc = (float)fVar13;
        goto LAB_004ba262;
      }
      fVar13 = (float10)FUN_0064ca10(param_1[0x77],*pfVar6);
      fStack_d0 = 1.5707964;
    }
LAB_004ba253:
    fStack_c8 = (float)fVar13;
    fStack_cc = 0.0;
  }
LAB_004ba262:
  FUN_00401f00(fStack_d0,fStack_cc,fStack_c8);
  pfVar6 = (float *)(**(code **)(*param_1 + 0x28))();
  FUN_00401f00(*param_2 - *pfVar6,param_2[1] - pfVar6[1],param_2[2] - pfVar6[2]);
  fVar1 = DAT_006e92e8 / SQRT(fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8)
  ;
  iVar5 = FUN_0064cf30(fVar1);
  if (iVar5 == 0) {
    fStack_b8 = 0.0;
    fStack_b4 = 0.0;
    fStack_b0 = 0.0;
  }
  else {
    fStack_b8 = fStack_b8 * fVar1;
    fStack_b4 = fStack_b4 * fVar1;
    fStack_b0 = fStack_b0 * fVar1;
  }
  iVar5 = -1;
  iVar11 = 0;
  pfVar6 = afStack_88 + 2;
  do {
    FUN_0064c8e0(fStack_90,&fStack_c8,&fStack_cc);
    fVar1 = pfVar6[-2];
    pfVar6[-2] = fVar1 * fStack_cc + fStack_c8 * *pfVar6;
    *pfVar6 = *pfVar6 * fStack_cc - fVar1 * fStack_c8;
    fStack_c4 = pfVar6[-2];
    fStack_c0 = pfVar6[-1];
    fStack_bc = *pfVar6;
    pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
    pfVar6[-2] = pfVar6[-2] + *pfVar7;
    pfVar6[-1] = pfVar7[1] + pfVar6[-1];
    *pfVar6 = pfVar7[2] + *pfVar6;
    fVar1 = DAT_006e92e8 /
            SQRT(fStack_bc * fStack_bc + fStack_c0 * fStack_c0 + fStack_c4 * fStack_c4);
    iVar8 = FUN_0064cf30(fVar1);
    fVar2 = DAT_006e92e4;
    fVar3 = DAT_006e92e4;
    fVar4 = DAT_006e92e4;
    if (iVar8 != 0) {
      fVar2 = fVar1 * fStack_c4;
      fVar3 = fStack_c0 * fVar1;
      fVar4 = fStack_bc * fVar1;
    }
    fVar1 = fVar3 * fStack_b4 + fVar4 * fStack_b0 + fVar2 * fStack_b8;
    if ((fVar1 < _DAT_006e99ec != (NAN(fVar1) || NAN(_DAT_006e99ec))) &&
       (bVar12 = iVar5 != -1, iVar5 = iVar11, bVar12)) {
      iStack_a8 = 1;
    }
    iVar11 = iVar11 + 1;
    pfVar6 = pfVar6 + 3;
  } while (iVar11 < 4);
  if ((iVar5 != -1) && (iStack_a8 == 0)) {
    fStack_c4 = afStack_88[iVar5 * 3];
    fStack_c0 = afStack_88[iVar5 * 3 + 1];
    fStack_bc = afStack_88[iVar5 * 3 + 2];
    fStack_a0 = (float)iVar5 * _DAT_006e9578 + fStack_90;
    param_1[0x98] = param_1[0x98] | 0x20;
    iStack_a4 = 0;
    uStack_9c = 0;
    piVar9 = (int *)FUN_004021c0(param_1[0xa6],param_1[0xa7]);
    if (piVar9 == (int *)0x0) {
      uVar14 = FUN_0054bad0(0x2d,0,0);
      *(undefined8 *)(param_1 + 0xa6) = uVar14;
      piVar9 = (int *)FUN_004021c0(uVar14);
      FUN_00488c30(s_PushblockDust_0072c504);
    }
    (**(code **)(*piVar9 + 0x14))(&fStack_c4,0);
    (**(code **)(*piVar9 + 0x1c))(&fStack_ac);
    (**(code **)(*piVar9 + 0xfc))(fStack_b8,fStack_b8,fStack_b8);
    if (fStack_b0 < _DAT_006e9554 == (NAN(fStack_b0) || NAN(_DAT_006e9554))) {
      (**(code **)(*piVar9 + 0x100))(0x3fc00000);
    }
    else {
      (**(code **)(*piVar9 + 0x100))(0x3f4ccccd);
    }
  }
LAB_004ba567:
  (**(code **)(*param_1 + 0x9c))(1);
  iVar5 = FUN_004bec00(2);
  if (iVar5 == 0) {
    piVar9 = (int *)(**(code **)(*param_1 + 0x28))();
    param_1[0x60] = *piVar9;
    param_1[0x61] = piVar9[1];
    param_1[0x62] = piVar9[2];
  }
  iVar5 = FUN_004bec20(auStack_50);
  if (iVar5 == 0) {
    uVar10 = FUN_00405080(auStack_5c,param_2,param_1 + 5);
    FUN_004357e0(uVar10);
  }
  else {
    fStack_c0 = param_2[2];
    fStack_c8 = *param_2;
    fStack_c4 = fStack_4c;
    FUN_00401f00(fStack_c8 - (float)param_1[5],fStack_4c - (float)param_1[6],
                 fStack_c0 - (float)param_1[7]);
    param_1[0x5c] = iStack_a8;
    param_2 = &fStack_c8;
    param_1[0x5d] = iStack_a4;
    param_1[0x5e] = (int)fStack_a0;
  }
  FUN_004c36f0(param_2,0);
  if ((param_1[0x94] != 0 || param_1[0x95] != 0) &&
     (piVar9 = (int *)FUN_004021c0(param_1[0x94],param_1[0x95]), piVar9 != (int *)0x0)) {
    iVar5 = *piVar9;
    uVar10 = (**(code **)(iVar5 + 0x28))(param_1 + 0x5c);
    uVar10 = FUN_00402130(auStack_5c,uVar10);
    (**(code **)(iVar5 + 300))(uVar10);
  }
  FUN_004b9dd0();
  if ((*(byte *)(param_1 + 0x98) & 4) == 0) {
    FUN_004baec0();
  }
  return;
}

