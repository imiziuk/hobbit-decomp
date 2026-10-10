
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051dba0(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d77ab;
  pvStack_c = ExceptionList;
  if (DAT_00734f1c != 0) {
    DAT_00734f1c = 0;
    return;
  }
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_dlg_pickLock__OnUpdate_00734f40);
  uStack_4 = 0;
  bVar1 = false;
  iVar3 = FUN_0042a7d0(6);
  if (((iVar3 != 0) || (iVar3 = FUN_0042a7d0(7), iVar3 != 0)) ||
     (iVar3 = FUN_0042a7d0(8), iVar3 != 0)) {
    FUN_0052a3f0();
  }
  fVar7 = (float10)FUN_00671130(0x81,0);
  if ((fVar7 <= (float10)_DAT_006e95b0) || (*(int *)(param_1 + 0x158) == 1)) {
    fVar7 = (float10)FUN_00671130(0x81,0);
    if (fVar7 < (float10)_DAT_006e95b0 != (NAN(fVar7) || NAN((float10)_DAT_006e95b0))) {
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
  }
  else {
    FUN_0059ed70(0);
    *(undefined4 *)(param_1 + 0x158) = 1;
  }
  fVar7 = (float10)FUN_00671130(0x81,0);
  if ((fVar7 < (float10)_DAT_006f09e4 == (NAN(fVar7) || NAN((float10)_DAT_006f09e4))) ||
     (*(int *)(param_1 + 0x15c) == 1)) {
    fVar7 = (float10)FUN_00671130(0x81,0);
    if ((float10)_DAT_006f09e4 < fVar7) {
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
  }
  else {
    FUN_0059ed70(2);
    *(undefined4 *)(param_1 + 0x15c) = 1;
  }
  fVar7 = (float10)FUN_00671130(0x80,0);
  if ((fVar7 <= (float10)_DAT_006e95b0) || (*(int *)(param_1 + 0x160) == 1)) {
    fVar7 = (float10)FUN_00671130(0x80,0);
    if (fVar7 < (float10)_DAT_006e95b0 != (NAN(fVar7) || NAN((float10)_DAT_006e95b0))) {
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
  }
  else {
    FUN_0059ed70(1);
    *(undefined4 *)(param_1 + 0x160) = 1;
  }
  fVar7 = (float10)FUN_00671130(0x80,0);
  if ((fVar7 < (float10)_DAT_006f09e4 == (NAN(fVar7) || NAN((float10)_DAT_006f09e4))) ||
     (*(int *)(param_1 + 0x164) == 1)) {
    fVar7 = (float10)FUN_00671130(0x80,0);
    if ((float10)_DAT_006f09e4 < fVar7) {
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
  }
  else {
    FUN_0059ed70(3);
    *(undefined4 *)(param_1 + 0x164) = 1;
  }
  iVar3 = FUN_0042a7d0(0x4c);
  if (iVar3 != 0) {
    fVar7 = (float10)FUN_00434ca0(0x17);
    bVar1 = (NAN(fVar7) || NAN((float10)DAT_006e92e4)) != (fVar7 == (float10)DAT_006e92e4);
    if (bVar1) {
      pcVar9 = s_OptionCancel_00723140;
    }
    else {
      FUN_00434dd0(0x17,0x3f800000);
      pcVar9 = s_OptionSelect_00723150;
    }
    bVar1 = !bVar1;
    FUN_00659600(pcVar9,1);
  }
  iVar3 = FUN_005299e0();
  if (bVar1) {
    iVar3 = 1;
  }
  if (iVar3 == 1) {
    iVar3 = FUN_0041bcc0();
    if (*(int *)(iVar3 + 0x4ec4) != 0) {
      FUN_004d5bd0();
    }
    goto LAB_0051e61d;
  }
  if (iVar3 != 2) goto LAB_0051e639;
  iVar3 = FUN_0041bcc0();
  piVar6 = *(int **)(iVar3 + 0x4ec4);
  piVar4 = (int *)FUN_0041bcc0();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  fStack_10c = *pfVar5;
  fStack_108 = pfVar5[1];
  fStack_104 = pfVar5[2];
  pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
  fStack_104 = fStack_104 - pfVar5[2];
  fStack_108 = fStack_108 - pfVar5[1];
  fStack_10c = fStack_10c - *pfVar5;
  fVar2 = DAT_006e92e8 /
          SQRT(fStack_104 * fStack_104 + fStack_108 * fStack_108 + fStack_10c * fStack_10c);
  iVar3 = FUN_0064cf30(fVar2);
  if (iVar3 == 0) {
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    fStack_104 = 0.0;
  }
  else {
    fStack_10c = fStack_10c * fVar2;
    fStack_108 = fStack_108 * fVar2;
    fStack_104 = fStack_104 * fVar2;
  }
  switch(piVar6[0x5e]) {
  case 1:
    uStack_9c = 0x3e99999a;
    uStack_98 = 0x3e99999a;
    uStack_94 = 0x3e99999a;
    fVar7 = (float10)FUN_0064ca10(fStack_108,SQRT(fStack_104 * fStack_104 + fStack_10c * fStack_10c)
                                 );
    fVar8 = (float10)FUN_0064ca10(fStack_10c,fStack_104);
    fStack_2c = (float)fVar8;
    fStack_10c = fStack_10c * _DAT_006e9448;
    uStack_28 = 0;
    fStack_108 = fStack_108 * _DAT_006e9448;
    fStack_104 = fStack_104 * _DAT_006e9448;
    fStack_30 = (float)-fVar7;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    FUN_00401f00(fStack_10c + *pfVar5,fStack_108 + pfVar5[1] + _DAT_006e95a4,fStack_104 + pfVar5[2])
    ;
    FUN_00488d30(s_PoisonSpitImpact_0072bf88,auStack_24,&fStack_30,&uStack_9c);
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f34) = 1;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f40) = 0x40000000;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f38) = 0x41200000;
    break;
  case 2:
    uStack_cc = 0x3f19999a;
    uStack_c8 = 0x3f19999a;
    uStack_c4 = 0x3f19999a;
    fVar7 = (float10)FUN_0064ca10(fStack_108,SQRT(fStack_104 * fStack_104 + fStack_10c * fStack_10c)
                                 );
    fVar8 = (float10)FUN_0064ca10(fStack_10c,fStack_104);
    fStack_68 = (float)fVar8;
    fStack_10c = fStack_10c * _DAT_006e9448;
    uStack_64 = 0;
    fStack_108 = fStack_108 * _DAT_006e9448;
    fStack_104 = fStack_104 * _DAT_006e9448;
    fStack_6c = (float)-fVar7;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    fStack_ac = fStack_104 + pfVar5[2];
    fStack_b4 = fStack_10c + *pfVar5;
    fStack_b0 = fStack_108 + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_PoisonSpitImpact_0072bf88,&fStack_b4,&fStack_6c,&uStack_cc);
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f34) = 1;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f40) = 0x40800000;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f38) = 0x41a00000;
    break;
  case 3:
    uStack_3c = 0x3f800000;
    uStack_38 = 0x3f800000;
    uStack_34 = 0x3f800000;
    fVar7 = (float10)FUN_0064ca10(fStack_108,SQRT(fStack_104 * fStack_104 + fStack_10c * fStack_10c)
                                 );
    fVar8 = (float10)FUN_0064ca10(fStack_10c,fStack_104);
    fStack_ec = (float)fVar8;
    fStack_10c = fStack_10c * _DAT_006e9448;
    uStack_e8 = 0;
    fStack_108 = fStack_108 * _DAT_006e9448;
    fStack_104 = fStack_104 * _DAT_006e9448;
    fStack_f0 = (float)-fVar7;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    fStack_4c = fStack_104 + pfVar5[2];
    fStack_54 = fStack_10c + *pfVar5;
    fStack_50 = fStack_108 + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_PoisonSpitImpact_0072bf88,&fStack_54,&fStack_f0,&uStack_3c);
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f34) = 1;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f40) = 0x40800000;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f38) = 0x41f00000;
    break;
  case 4:
    uStack_84 = 0x3e4ccccd;
    uStack_80 = 0x3e4ccccd;
    uStack_7c = 0x3e4ccccd;
    fVar7 = (float10)FUN_0064ca10(fStack_108,SQRT(fStack_104 * fStack_104 + fStack_10c * fStack_10c)
                                 );
    fVar8 = (float10)FUN_0064ca10(fStack_10c,fStack_104);
    fStack_e0 = (float)fVar8;
    fStack_10c = fStack_10c * _DAT_006e9448;
    uStack_dc = 0;
    fStack_108 = fStack_108 * _DAT_006e9448;
    fStack_104 = fStack_104 * _DAT_006e9448;
    fStack_e4 = (float)-fVar7;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    fStack_d0 = fStack_104 + pfVar5[2];
    fStack_d8 = fStack_10c + *pfVar5;
    fStack_d4 = fStack_108 + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_ExplosionSmall_0072c330,&fStack_d8,&fStack_e4,&uStack_84);
    piVar6 = (int *)FUN_0041bcc0();
    uVar10 = 0xfffffffc;
    goto LAB_0051e5ea;
  case 5:
    uStack_c0 = 0x3ecccccd;
    uStack_bc = 0x3ecccccd;
    uStack_b8 = 0x3ecccccd;
    fVar7 = (float10)FUN_0064ca10(fStack_108,SQRT(fStack_104 * fStack_104 + fStack_10c * fStack_10c)
                                 );
    fVar8 = (float10)FUN_0064ca10(fStack_10c,fStack_104);
    fStack_a4 = (float)fVar8;
    fStack_10c = fStack_10c * _DAT_006e9448;
    uStack_a0 = 0;
    fStack_108 = fStack_108 * _DAT_006e9448;
    fStack_104 = fStack_104 * _DAT_006e9448;
    fStack_a8 = (float)-fVar7;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    fStack_88 = fStack_104 + pfVar5[2];
    fStack_90 = fStack_10c + *pfVar5;
    fStack_8c = fStack_108 + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_ExplosionSmall_0072c330,&fStack_90,&fStack_a8,&uStack_c0);
    piVar6 = (int *)FUN_0041bcc0();
    uVar10 = 0xfffffff6;
    goto LAB_0051e5ea;
  case 6:
    uStack_60 = 0x3f19999a;
    uStack_5c = 0x3f19999a;
    uStack_58 = 0x3f19999a;
    fVar7 = (float10)FUN_0064ca10(fStack_108,SQRT(fStack_104 * fStack_104 + fStack_10c * fStack_10c)
                                 );
    fVar8 = (float10)FUN_0064ca10(fStack_10c,fStack_104);
    fStack_44 = (float)fVar8;
    fStack_10c = fStack_10c * _DAT_006e9448;
    uStack_40 = 0;
    fStack_108 = fStack_108 * _DAT_006e9448;
    fStack_104 = fStack_104 * _DAT_006e9448;
    fStack_48 = (float)-fVar7;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    FUN_00401f00(fStack_10c + *pfVar5,fStack_108 + pfVar5[1],fStack_104 + pfVar5[2]);
    FUN_00401f00(uStack_78,fStack_74 + _DAT_006e95a4,uStack_70);
    FUN_00488d30(s_ExplosionSmall_0072c330,auStack_18,&fStack_48,&uStack_60);
    piVar6 = (int *)FUN_0041bcc0();
    uVar10 = 0xffffffec;
LAB_0051e5ea:
    (**(code **)(*piVar6 + 0x128))(uVar10);
  }
  uVar11 = 0x3f800000;
  uVar10 = 10;
  FUN_0041bcc0(10,0x3f800000);
  FUN_0044c120(uVar10,uVar11);
LAB_0051e61d:
  uVar10 = 6;
  iVar3 = FUN_0052d730(6);
  FUN_0052d740(iVar3 == 0,uVar10);
LAB_0051e639:
  uStack_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

