
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ba8d0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  piVar6 = param_1 + 0x6a;
  iVar5 = 4;
  do {
    iStack_ac = piVar6[-1];
    iStack_a8 = param_1[6];
    iStack_a4 = *piVar6;
    FUN_0066a810(&iStack_ac,0xff00ff00);
    piVar6 = piVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar4 = (**(code **)(*param_1 + 0x28))(0xffffff00);
  FUN_0066a810(uVar4);
  iStack_98 = param_1[0x13];
  iStack_9c = param_1[0x12];
  iStack_a0 = param_1[0x11];
  iStack_8c = param_1[0x16];
  iStack_80 = param_1[0x13];
  iStack_74 = param_1[0x16];
  iStack_68 = param_1[0x13];
  iStack_84 = param_1[0x15];
  iStack_5c = param_1[0x16];
  iStack_6c = param_1[0x12];
  iStack_50 = param_1[0x13];
  iStack_70 = param_1[0x14];
  iStack_54 = param_1[0x15];
  iStack_44 = param_1[0x16];
  iStack_94 = iStack_a0;
  iStack_90 = iStack_9c;
  iStack_88 = iStack_a0;
  iStack_7c = iStack_a0;
  iStack_78 = iStack_84;
  iStack_64 = iStack_70;
  iStack_60 = iStack_6c;
  iStack_58 = iStack_70;
  iStack_4c = iStack_70;
  iStack_48 = iStack_54;
  FUN_0066c3a0(1,0);
  FUN_0066ddd0(0xffffffff);
  FUN_0066e180(&iStack_a0,8,0xc);
  FUN_0066e550(&DAT_0072c448,0x18);
  FUN_0066d9a0();
  FUN_00401f00((float)param_1[0x14] + (float)param_1[0x11],
               (float)param_1[0x15] + (float)param_1[0x12],
               (float)param_1[0x16] + (float)param_1[0x13]);
  FUN_00402160(&fStack_d0,&iStack_b8,0x3f000000);
  iStack_b8 = param_1[0x75];
  piVar6 = param_1 + 0x75;
  iStack_b4 = param_1[0x76];
  iStack_b0 = param_1[0x77];
  fStack_e8 = 100.0;
  fStack_e4 = 0.0;
  fStack_e0 = 0.0;
  fStack_dc = 0.0;
  fStack_d8 = 100.0;
  fStack_d4 = 0.0;
  fStack_f4 = 0.0;
  fStack_f0 = 0.0;
  fStack_ec = 100.0;
  fVar7 = (float10)FUN_00402000();
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  fVar1 = (float)fVar7;
  FUN_00401f00(param_1[0x79],param_1[0x7a],param_1[0x7b]);
  fVar7 = (float10)FUN_00402000();
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  fVar2 = (float)fVar7;
  FUN_00401f00(param_1[0x7d],param_1[0x7e],param_1[0x7f]);
  fVar7 = (float10)FUN_00402000();
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  fVar3 = (float)fVar7;
  if ((((_DAT_006e9378 < fVar1) || (fVar1 < _DAT_006e9374 != (NAN(fVar1) || NAN(_DAT_006e9374)))) ||
      (_DAT_006e9378 < fVar2)) ||
     (((fVar2 < _DAT_006e9374 != (NAN(fVar2) || NAN(_DAT_006e9374)) || (_DAT_006e9378 < fVar3)) ||
      (fVar3 < _DAT_006e9374 != (NAN(fVar3) || NAN(_DAT_006e9374)))))) {
    FUN_00424a30(piVar6);
    FUN_00424aa0();
    if (fStack_1c < DAT_006e92e8 == (NAN(fStack_1c) || NAN(DAT_006e92e8))) goto LAB_004bad1c;
    if (_DAT_006e9370 < fStack_1c) {
      fVar7 = (float10)FUN_0064ca10(uStack_3c,uStack_2c);
      fStack_fc = (float)fVar7;
      fVar7 = (float10)FUN_006c0370();
      fStack_f8 = (float)-fVar7;
      fVar7 = (float10)FUN_0064ca10(uStack_20,uStack_18);
      fStack_100 = (float)fVar7;
      goto LAB_004bad3a;
    }
    fVar7 = (float10)FUN_0064ca10(iStack_38,iStack_40);
    fStack_f8 = 1.5707964;
  }
  else if ((float)param_1[0x7e] < DAT_006e92e8 == (NAN((float)param_1[0x7e]) || NAN(DAT_006e92e8)))
  {
    iStack_40 = *piVar6;
    iStack_38 = param_1[0x77];
LAB_004bad1c:
    fVar7 = (float10)FUN_0064ca10(iStack_38,iStack_40);
    fVar7 = -fVar7;
    fStack_f8 = -1.5707964;
  }
  else {
    if (_DAT_006e9370 < (float)param_1[0x7e]) {
      fVar7 = (float10)FUN_0064ca10(param_1[0x76],param_1[0x7a]);
      fStack_fc = (float)fVar7;
      fVar7 = (float10)FUN_006c0370();
      fStack_f8 = (float)-fVar7;
      fVar7 = (float10)FUN_0064ca10(param_1[0x7d],param_1[0x7f]);
      fStack_100 = (float)fVar7;
      goto LAB_004bad3a;
    }
    fVar7 = (float10)FUN_0064ca10(param_1[0x77],*piVar6);
    fStack_f8 = 1.5707964;
  }
  fStack_fc = (float)fVar7;
  fStack_100 = 0.0;
LAB_004bad3a:
  FUN_00401f00(fStack_f8,fStack_100,fStack_fc);
  FUN_00428790(uStack_bc);
  FUN_004286f0(uStack_c4);
  FUN_00428740(uStack_c0);
  FUN_00428790(uStack_bc);
  FUN_004286f0(uStack_c4);
  FUN_00428740(uStack_c0);
  FUN_00428790(uStack_bc);
  FUN_004286f0(uStack_c4);
  FUN_00428740(uStack_c0);
  fStack_e8 = fStack_d0 + fStack_e8;
  uVar8 = 0;
  fStack_e4 = fStack_e4 + fStack_cc;
  fStack_e0 = fStack_e0 + fStack_c8;
  fStack_dc = fStack_d0 + fStack_dc;
  fStack_d8 = fStack_d8 + fStack_cc;
  fStack_d4 = fStack_d4 + fStack_c8;
  fStack_f4 = fStack_d0 + fStack_f4;
  fStack_f0 = fStack_f0 + fStack_cc;
  fStack_ec = fStack_ec + fStack_c8;
  uVar4 = extraout_ECX;
  FUN_00413480(0xff,0x80,0x80,0xff);
  FUN_00669ca0(&fStack_d0,&fStack_e8,uVar4,uVar8);
  uVar8 = 0;
  uVar4 = extraout_ECX_00;
  FUN_00413480(0x80,0xff,0x80,0xff);
  FUN_00669ca0(&fStack_d0,&fStack_dc,uVar4,uVar8);
  uVar8 = 0;
  uVar4 = extraout_ECX_01;
  FUN_00413480(0x80,0x80,0xff,0xff);
  FUN_00669ca0(&fStack_d0,&fStack_f4,uVar4,uVar8);
  return;
}

