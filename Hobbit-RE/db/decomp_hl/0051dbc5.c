
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051dbc5(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint unaff_EBX;
  uint uVar7;
  bool in_ZF;
  float10 fVar8;
  float10 fVar9;
  float fStack00000008;
  float fStack0000000c;
  float fStack00000010;
  float in_stack_00000024;
  float in_stack_00000028;
  undefined4 in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  undefined4 in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  float in_stack_00000060;
  float in_stack_00000064;
  float in_stack_00000068;
  float in_stack_0000006c;
  float in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  float in_stack_00000084;
  float in_stack_00000088;
  float in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  float in_stack_000000a0;
  undefined4 in_stack_000000a4;
  float in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  float in_stack_000000c0;
  float in_stack_000000c4;
  float in_stack_000000c8;
  float in_stack_000000cc;
  float in_stack_000000d0;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000dc;
  undefined4 in_stack_000000e0;
  float in_stack_000000e4;
  float in_stack_000000e8;
  undefined4 in_stack_000000ec;
  void *in_stack_00000108;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (!in_ZF) {
    DAT_00734f1c = unaff_EBX;
    ExceptionList = in_stack_00000108;
    return;
  }
  FUN_006501d0(s_dlg_pickLock__OnUpdate_00734f40);
  uVar7 = 0;
  iVar3 = FUN_0042a7d0(6);
  if (((iVar3 != 0) || (iVar3 = FUN_0042a7d0(7), iVar3 != 0)) ||
     (iVar3 = FUN_0042a7d0(8), iVar3 != 0)) {
    FUN_0052a3f0();
  }
  fVar8 = (float10)FUN_00671130(0x81);
  if ((fVar8 <= (float10)_DAT_006e95b0) || (*(int *)(param_1 + 0x158) == 1)) {
    fVar8 = (float10)FUN_00671130(0x81);
    if (fVar8 < (float10)_DAT_006e95b0 != (NAN(fVar8) || NAN((float10)_DAT_006e95b0))) {
      *(uint *)(param_1 + 0x158) = unaff_EBX;
    }
  }
  else {
    FUN_0059ed70(unaff_EBX);
    *(undefined4 *)(param_1 + 0x158) = 1;
  }
  fVar8 = (float10)FUN_00671130(0x81);
  if ((fVar8 < (float10)_DAT_006f09e4 == (NAN(fVar8) || NAN((float10)_DAT_006f09e4))) ||
     (*(int *)(param_1 + 0x15c) == 1)) {
    fVar8 = (float10)FUN_00671130(0x81);
    if ((float10)_DAT_006f09e4 < fVar8) {
      *(uint *)(param_1 + 0x15c) = unaff_EBX;
    }
  }
  else {
    FUN_0059ed70(2);
    *(undefined4 *)(param_1 + 0x15c) = 1;
  }
  fVar8 = (float10)FUN_00671130(0x80);
  if ((fVar8 <= (float10)_DAT_006e95b0) || (*(int *)(param_1 + 0x160) == 1)) {
    fVar8 = (float10)FUN_00671130(0x80);
    if (fVar8 < (float10)_DAT_006e95b0 != (NAN(fVar8) || NAN((float10)_DAT_006e95b0))) {
      *(uint *)(param_1 + 0x160) = unaff_EBX;
    }
  }
  else {
    FUN_0059ed70(1);
    *(undefined4 *)(param_1 + 0x160) = 1;
  }
  fVar8 = (float10)FUN_00671130(0x80);
  if ((fVar8 < (float10)_DAT_006f09e4 == (NAN(fVar8) || NAN((float10)_DAT_006f09e4))) ||
     (*(int *)(param_1 + 0x164) == 1)) {
    fVar8 = (float10)FUN_00671130(0x80);
    if ((float10)_DAT_006f09e4 < fVar8) {
      *(uint *)(param_1 + 0x164) = unaff_EBX;
    }
  }
  else {
    FUN_0059ed70(3);
    *(undefined4 *)(param_1 + 0x164) = 1;
  }
  iVar3 = FUN_0042a7d0(0x4c);
  if (iVar3 != 0) {
    fVar8 = (float10)FUN_00434ca0(0x17);
    bVar1 = (NAN(fVar8) || NAN((float10)DAT_006e92e4)) != (fVar8 == (float10)DAT_006e92e4);
    if (bVar1) {
      pcVar10 = s_OptionCancel_00723140;
    }
    else {
      FUN_00434dd0(0x17,0x3f800000);
      pcVar10 = s_OptionSelect_00723150;
    }
    uVar7 = (uint)!bVar1;
    FUN_00659600(pcVar10,1);
  }
  iVar3 = FUN_005299e0();
  if (uVar7 != unaff_EBX) {
    iVar3 = 1;
  }
  if (iVar3 == 1) {
    iVar3 = FUN_0041bcc0();
    if (*(uint *)(iVar3 + 0x4ec4) != unaff_EBX) {
      FUN_004d5bd0();
    }
    goto LAB_0051e61d;
  }
  if (iVar3 != 2) goto LAB_0051e639;
  iVar3 = FUN_0041bcc0();
  piVar6 = *(int **)(iVar3 + 0x4ec4);
  piVar4 = (int *)FUN_0041bcc0();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  fStack00000008 = *pfVar5;
  fStack0000000c = pfVar5[1];
  fStack00000010 = pfVar5[2];
  pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
  fStack00000010 = fStack00000010 - pfVar5[2];
  fStack0000000c = fStack0000000c - pfVar5[1];
  fStack00000008 = fStack00000008 - *pfVar5;
  fVar2 = DAT_006e92e8 /
          SQRT(fStack00000010 * fStack00000010 +
               fStack0000000c * fStack0000000c + fStack00000008 * fStack00000008);
  iVar3 = FUN_0064cf30(fVar2);
  if (iVar3 == 0) {
    fStack00000008 = 0.0;
    fStack0000000c = 0.0;
    fStack00000010 = 0.0;
  }
  else {
    fStack00000008 = fStack00000008 * fVar2;
    fStack0000000c = fStack0000000c * fVar2;
    fStack00000010 = fStack00000010 * fVar2;
  }
  switch(piVar6[0x5e]) {
  case 1:
    in_stack_00000078 = 0x3e99999a;
    in_stack_0000007c = 0x3e99999a;
    in_stack_00000080 = 0x3e99999a;
    fVar8 = (float10)FUN_0064ca10(fStack0000000c,
                                  SQRT(fStack00000010 * fStack00000010 +
                                       fStack00000008 * fStack00000008));
    fVar9 = (float10)FUN_0064ca10(fStack00000008,fStack00000010);
    in_stack_000000e8 = (float)fVar9;
    fStack00000008 = fStack00000008 * _DAT_006e9448;
    in_stack_000000ec = 0;
    fStack0000000c = fStack0000000c * _DAT_006e9448;
    fStack00000010 = fStack00000010 * _DAT_006e9448;
    in_stack_000000e4 = (float)-fVar8;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    FUN_00401f00(fStack00000008 + *pfVar5,fStack0000000c + pfVar5[1] + _DAT_006e95a4,
                 fStack00000010 + pfVar5[2]);
    FUN_00488d30(s_PoisonSpitImpact_0072bf88,&stack0x000000f0,&stack0x000000e4,&stack0x00000078);
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f34) = 1;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f40) = 0x40000000;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f38) = 0x41200000;
    break;
  case 2:
    in_stack_00000048 = 0x3f19999a;
    in_stack_0000004c = 0x3f19999a;
    in_stack_00000050 = 0x3f19999a;
    fVar8 = (float10)FUN_0064ca10(fStack0000000c,
                                  SQRT(fStack00000010 * fStack00000010 +
                                       fStack00000008 * fStack00000008));
    fVar9 = (float10)FUN_0064ca10(fStack00000008,fStack00000010);
    in_stack_000000ac = (float)fVar9;
    fStack00000008 = fStack00000008 * _DAT_006e9448;
    in_stack_000000b0 = 0;
    fStack0000000c = fStack0000000c * _DAT_006e9448;
    fStack00000010 = fStack00000010 * _DAT_006e9448;
    in_stack_000000a8 = (float)-fVar8;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    in_stack_00000068 = fStack00000010 + pfVar5[2];
    in_stack_00000060 = fStack00000008 + *pfVar5;
    in_stack_00000064 = fStack0000000c + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_PoisonSpitImpact_0072bf88,&stack0x00000060,&stack0x000000a8,&stack0x00000048);
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f34) = 1;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f40) = 0x40800000;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f38) = 0x41a00000;
    break;
  case 3:
    in_stack_000000d8 = 0x3f800000;
    in_stack_000000dc = 0x3f800000;
    in_stack_000000e0 = 0x3f800000;
    fVar8 = (float10)FUN_0064ca10(fStack0000000c,
                                  SQRT(fStack00000010 * fStack00000010 +
                                       fStack00000008 * fStack00000008));
    fVar9 = (float10)FUN_0064ca10(fStack00000008,fStack00000010);
    in_stack_00000028 = (float)fVar9;
    fStack00000008 = fStack00000008 * _DAT_006e9448;
    in_stack_0000002c = 0;
    fStack0000000c = fStack0000000c * _DAT_006e9448;
    fStack00000010 = fStack00000010 * _DAT_006e9448;
    in_stack_00000024 = (float)-fVar8;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    in_stack_000000c8 = fStack00000010 + pfVar5[2];
    in_stack_000000c0 = fStack00000008 + *pfVar5;
    in_stack_000000c4 = fStack0000000c + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_PoisonSpitImpact_0072bf88,&stack0x000000c0,&stack0x00000024,&stack0x000000d8);
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f34) = 1;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f40) = 0x40800000;
    iVar3 = FUN_0041bcc0();
    *(undefined4 *)(iVar3 + 0x5f38) = 0x41f00000;
    break;
  case 4:
    in_stack_00000090 = 0x3e4ccccd;
    in_stack_00000094 = 0x3e4ccccd;
    in_stack_00000098 = 0x3e4ccccd;
    fVar8 = (float10)FUN_0064ca10(fStack0000000c,
                                  SQRT(fStack00000010 * fStack00000010 +
                                       fStack00000008 * fStack00000008));
    fVar9 = (float10)FUN_0064ca10(fStack00000008,fStack00000010);
    in_stack_00000034 = (float)fVar9;
    fStack00000008 = fStack00000008 * _DAT_006e9448;
    in_stack_00000038 = 0;
    fStack0000000c = fStack0000000c * _DAT_006e9448;
    fStack00000010 = fStack00000010 * _DAT_006e9448;
    in_stack_00000030 = (float)-fVar8;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    in_stack_00000044 = fStack00000010 + pfVar5[2];
    in_stack_0000003c = fStack00000008 + *pfVar5;
    in_stack_00000040 = fStack0000000c + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_ExplosionSmall_0072c330,&stack0x0000003c,&stack0x00000030,&stack0x00000090);
    piVar6 = (int *)FUN_0041bcc0();
    uVar11 = 0xfffffffc;
    goto LAB_0051e5ea;
  case 5:
    in_stack_00000054 = 0x3ecccccd;
    in_stack_00000058 = 0x3ecccccd;
    in_stack_0000005c = 0x3ecccccd;
    fVar8 = (float10)FUN_0064ca10(fStack0000000c,
                                  SQRT(fStack00000010 * fStack00000010 +
                                       fStack00000008 * fStack00000008));
    fVar9 = (float10)FUN_0064ca10(fStack00000008,fStack00000010);
    in_stack_00000070 = (float)fVar9;
    fStack00000008 = fStack00000008 * _DAT_006e9448;
    in_stack_00000074 = 0;
    fStack0000000c = fStack0000000c * _DAT_006e9448;
    fStack00000010 = fStack00000010 * _DAT_006e9448;
    in_stack_0000006c = (float)-fVar8;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    in_stack_0000008c = fStack00000010 + pfVar5[2];
    in_stack_00000084 = fStack00000008 + *pfVar5;
    in_stack_00000088 = fStack0000000c + pfVar5[1] + _DAT_006e95a4;
    FUN_00488d30(s_ExplosionSmall_0072c330,&stack0x00000084,&stack0x0000006c,&stack0x00000054);
    piVar6 = (int *)FUN_0041bcc0();
    uVar11 = 0xfffffff6;
    goto LAB_0051e5ea;
  case 6:
    in_stack_000000b4 = 0x3f19999a;
    in_stack_000000b8 = 0x3f19999a;
    in_stack_000000bc = 0x3f19999a;
    fVar8 = (float10)FUN_0064ca10(fStack0000000c,
                                  SQRT(fStack00000010 * fStack00000010 +
                                       fStack00000008 * fStack00000008));
    fVar9 = (float10)FUN_0064ca10(fStack00000008,fStack00000010);
    in_stack_000000d0 = (float)fVar9;
    fStack00000008 = fStack00000008 * _DAT_006e9448;
    in_stack_000000d4 = 0;
    fStack0000000c = fStack0000000c * _DAT_006e9448;
    fStack00000010 = fStack00000010 * _DAT_006e9448;
    in_stack_000000cc = (float)-fVar8;
    pfVar5 = (float *)(**(code **)(*piVar6 + 0x28))();
    FUN_00401f00(fStack00000008 + *pfVar5,fStack0000000c + pfVar5[1],fStack00000010 + pfVar5[2]);
    FUN_00401f00(in_stack_0000009c,in_stack_000000a0 + _DAT_006e95a4,in_stack_000000a4);
    FUN_00488d30(s_ExplosionSmall_0072c330,&stack0x000000fc,&stack0x000000cc,&stack0x000000b4);
    piVar6 = (int *)FUN_0041bcc0();
    uVar11 = 0xffffffec;
LAB_0051e5ea:
    (**(code **)(*piVar6 + 0x128))(uVar11);
  }
  uVar12 = 0x3f800000;
  uVar11 = 10;
  FUN_0041bcc0(10,0x3f800000);
  FUN_0044c120(uVar11,uVar12);
LAB_0051e61d:
  uVar11 = 6;
  iVar3 = FUN_0052d730(6);
  FUN_0052d740(iVar3 == 0,uVar11);
LAB_0051e639:
  FUN_006501e0();
  ExceptionList = in_stack_00000108;
  return;
}

