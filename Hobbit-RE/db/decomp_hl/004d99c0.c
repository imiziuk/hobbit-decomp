
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d99c0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  byte bVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  undefined4 unaff_EBX;
  float10 fVar15;
  float *pfStack_104;
  float *pfStack_100;
  float fStack_ec;
  int local_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float *pfStack_c8;
  undefined1 *puStack_c4;
  float fStack_c0;
  float *pfStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float *pfStack_94;
  float *pfStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d557b;
  pvStack_c = ExceptionList;
  pfStack_100 = (float *)0x4d99eb;
  ExceptionList = &pvStack_c;
  FUN_0064cc00();
  pfStack_100 = (float *)s_treeleaf_cluster__RenderCluster_0072dd8c;
  pfStack_104 = (float *)0x4d99f9;
  FUN_00649600();
  local_4 = 0;
  if (param_2 != (int *)0x0) {
    pfStack_100 = (float *)0x0;
    local_e4 = 1.0;
    pfStack_104 = (float *)0x4d9a2c;
    FUN_0065fce0();
    pfStack_100 = (float *)0x4d9a38;
    pfVar10 = (float *)(**(code **)(*param_1 + 0x28))();
    pfStack_100 = &fStack_b0;
    pfStack_104 = (float *)0x4d9a46;
    pfVar11 = (float *)FUN_00672260();
    fStack_b4 = pfVar11[2] - pfVar10[2];
    pfStack_100 = &fStack_b0;
    fStack_b8 = pfVar11[1] - pfVar10[1];
    pfStack_bc = (float *)(*pfVar11 - *pfVar10);
    pfStack_104 = (float *)0x4d9a6e;
    puVar12 = (undefined4 *)FUN_00672330();
    pfStack_bc = (float *)*puVar12;
    fStack_b8 = (float)puVar12[1];
    fStack_b4 = (float)puVar12[2];
    pfStack_100 = (float *)0x4d9a89;
    pfVar10 = (float *)(**(code **)(*param_1 + 0x28))();
    pfStack_100 = &fStack_b0;
    pfStack_104 = (float *)0x4d9a97;
    pfVar11 = (float *)FUN_00672260();
    fVar1 = SQRT((pfVar11[2] - pfVar10[2]) * (pfVar11[2] - pfVar10[2]) +
                 (pfVar11[1] - pfVar10[1]) * (pfVar11[1] - pfVar10[1]) +
                 (*pfVar11 - *pfVar10) * (*pfVar11 - *pfVar10));
    if (fVar1 <= (float)param_1[0x38]) {
      if ((float)param_1[0x39] < fVar1) {
        local_e4 = DAT_006e92e8 -
                   (fVar1 - (float)param_1[0x39]) / ((float)param_1[0x38] - (float)param_1[0x39]);
        if ((local_e4 < DAT_006e92e4) ||
           (DAT_006e92e8 < local_e4 == (NAN(DAT_006e92e8) || NAN(local_e4)))) {
          if (local_e4 < DAT_006e92e4) {
            local_e4 = 0.0;
          }
        }
        else {
          local_e4 = 1.0;
        }
      }
    }
    else {
      local_e4 = 0.0;
    }
    pfStack_100 = (float *)0x4d9b4e;
    fVar15 = (float10)FUN_00491460();
    fVar1 = (float)fVar15;
    pfStack_100 = (float *)fStack_b4;
    pfStack_104 = pfStack_bc;
    fVar15 = (float10)FUN_0064ca10();
    fStack_e0 = (float)fVar15;
    fStack_ec = (float)param_1[0x2d] * _DAT_006e9368 * _DAT_006e957c;
    fStack_a0 = (float)param_1[0x2e] * _DAT_006e9368 * _DAT_006e957c * local_e4;
    fStack_c0 = (float)param_1[0x2f] * _DAT_006e9368 * _DAT_006e957c;
    if ((fVar1 <= fStack_ec) &&
       (fVar2 = -fStack_ec, fStack_ec = fVar1, fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2)))) {
      fStack_ec = fVar2;
    }
    *(float **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
    DAT_007f23d4 = DAT_007f23d4 + 1;
    pfStack_100 = &fStack_4c;
    pfStack_104 = (float *)0x4d9c20;
    (**(code **)(*param_1 + 0x34))();
    pfVar10 = (float *)((int)DAT_007f23cc - ((int)fStack_ec * 0x3c + 0xfU & 0xfffffff0));
    pfStack_104 = &fStack_d8;
    fStack_a8 = (float)param_1[0x32] * (float)param_1[0x31];
    uStack_60 = 0;
    fStack_70 = 0.0;
    fStack_80 = 0.0;
    uStack_5c = 0;
    fStack_6c = 0.0;
    fStack_8c = 0.0;
    uStack_58 = 0;
    fStack_78 = 0.0;
    fStack_88 = 0.0;
    uStack_64 = 0;
    uStack_74 = 0;
    uStack_84 = 0;
    pfStack_90 = (float *)0x3f800000;
    fStack_7c = 1.0;
    fStack_68 = 1.0;
    uStack_54 = 0x3f800000;
    DAT_007f23cc = pfVar10;
    pfStack_94 = pfVar10;
    FUN_0064c8e0(unaff_EBX,&fStack_cc);
    FUN_0064c8e0(local_e4,&fStack_dc,&fStack_e0);
    fStack_70 = fStack_dc * fStack_d8;
    local_e8 = 0;
    fStack_6c = -fStack_cc;
    fStack_68 = fStack_e0 * fStack_d8;
    if (0 < (int)fStack_ec) {
      fStack_a0 = (float)(int)fStack_ec;
      iVar13 = (int)param_2 + (8 - (int)pfVar10);
      pfStack_c8 = pfVar10;
      do {
        pfStack_104 = (float *)(((float)local_e8 / fStack_a0) * _DAT_006e9598 + fStack_a8);
        fVar15 = (float10)FUN_0064c800();
        FUN_0064c8e0((float)(fVar15 * (float10)fStack_a4 + (float10)(float)puStack_c4),&fStack_d4,
                     &fStack_d0);
        local_e4 = 7.00649e-45;
        pfStack_90 = (float *)(fStack_d0 * fStack_e0 + fStack_d4 * fStack_cc * fStack_dc);
        fStack_8c = fStack_d4 * fStack_d8;
        fStack_88 = fStack_d4 * fStack_cc * fStack_e0 - fStack_d0 * fStack_dc;
        fStack_80 = fStack_dc * fStack_d0 * fStack_cc - fStack_d4 * fStack_e0;
        fStack_7c = fStack_d0 * fStack_d8;
        fStack_78 = fStack_d0 * fStack_cc * fStack_e0 + fStack_d4 * fStack_dc;
        pfVar10 = pfStack_c8;
        do {
          pfStack_104 = (float *)(iVar13 + (int)pfVar10);
          FUN_0041b9f0(&fStack_b4);
          pfVar10[2] = fStack_ac;
          *pfVar10 = fStack_b4;
          pfVar10[1] = fStack_b0;
          pfVar10 = pfVar10 + 3;
          local_e4 = (float)((int)local_e4 + -1);
        } while (local_e4 != 0.0);
        iVar13 = iVar13 + -0x3c;
        pfStack_c8 = pfStack_c8 + 0xf;
        local_e8 = local_e8 + 1;
      } while (local_e8 < (int)fStack_ec);
    }
    DAT_007f23d8 = DAT_007f23d8 + (*param_2 * 0x3c + 0xfU & 0xfffffff0);
    uVar3 = *(undefined1 *)((int)param_1 + 0xea);
    uVar4 = *(undefined1 *)((int)param_1 + 0xe9);
    iVar8 = param_1[0x3a];
    iVar13 = *param_1;
    pfStack_104 = &fStack_b4;
    FUN_0065fce0(0);
    pfStack_104 = (float *)FUN_00672260();
    bVar9 = (**(code **)(iVar13 + 0xcc))();
    if (bVar9 == 0) {
      DAT_007f23cc = *(float **)(&DAT_007f23dc + DAT_007f23d4 * 4);
      DAT_007f23d4 = DAT_007f23d4 + -1;
    }
    else {
      pfStack_100 = (float *)0x22;
      if (bVar9 != 0xff) {
        pfStack_100 = (float *)0x26;
      }
      pfStack_104 = (float *)0x3;
      FUN_0066c3a0();
      pfStack_100 = &fStack_4c;
      pfStack_104 = (float *)0x4d9f5d;
      (**(code **)(*param_1 + 0x34))();
      pfStack_104 = (float *)0x4d9f62;
      FUN_0066dac0();
      puStack_c4 = (undefined1 *)&pfStack_104;
      pfStack_104 = (float *)CONCAT31(CONCAT21(CONCAT11(bVar9,uVar3),uVar4),(char)iVar8);
      FUN_0066ddd0();
      pfStack_104 = (float *)0x4d9f92;
      FUN_00553770();
      pfStack_104 = (float *)0x0;
      FUN_00553fa0(param_2[0x1b],0,0);
      pfStack_104 = (float *)0x1;
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x16);
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xd,3);
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xe,3);
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,0xd,3);
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,0xe,3);
      FUN_00554860(0,&DAT_0072dd80,&DAT_0072dd84);
      FUN_00554fb0(s_c__c_f___c_0072dd74,0);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,1);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,1);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x19,7);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x18,((uint)bVar9 * 0x80) / 0xff);
      iVar13 = 0;
      local_e4 = 0.0;
      if (0 < *param_2) {
        pfVar10 = pfStack_90;
        pfVar11 = (float *)((int)fStack_e0 + 0x14);
        do {
          pfVar14 = (float *)(param_2[1] + iVar13);
          fVar5 = fStack_44 * *pfVar14 +
                  fStack_24 * pfVar14[2] + fStack_34 * *(float *)(param_2[1] + 4 + iVar13) +
                  fStack_14;
          fVar6 = fStack_48 * *pfVar14 + fStack_28 * pfVar14[2] + fStack_38 * pfVar14[1] + fStack_18
          ;
          fVar7 = fStack_2c * pfVar14[2] + fStack_3c * pfVar14[1] + fStack_4c * *pfVar14 + fStack_1c
          ;
          fVar1 = pfVar10[2];
          fVar2 = pfVar10[1];
          pfVar11[-5] = fVar7 + *pfVar10;
          pfVar11[-4] = fVar6 + fVar2;
          pfVar11[-3] = fVar5 + fVar1;
          fVar1 = pfVar10[5];
          fVar2 = pfVar10[4];
          pfVar11[-2] = fVar7 + pfVar10[3];
          pfVar11[-1] = fVar6 + fVar2;
          *pfVar11 = fVar5 + fVar1;
          fVar1 = pfVar10[8];
          fVar2 = pfVar10[7];
          pfVar11[1] = fVar7 + pfVar10[6];
          pfVar11[2] = fVar6 + fVar2;
          pfVar11[3] = fVar5 + fVar1;
          fVar1 = pfVar10[0xb];
          fVar2 = pfVar10[10];
          pfVar11[4] = fVar7 + pfVar10[9];
          pfVar11[5] = fVar6 + fVar2;
          pfVar11[6] = fVar5 + fVar1;
          fVar1 = pfVar10[0xe];
          fVar2 = pfVar10[0xd];
          pfVar11[7] = fVar7 + pfVar10[0xc];
          pfVar10 = pfVar10 + 0xf;
          pfVar11[8] = fVar6 + fVar2;
          pfVar11[9] = fVar5 + fVar1;
          if (pfVar10 == pfStack_90 + (int)fStack_ec * 0xf) {
            pfVar10 = pfStack_90;
          }
          local_e4 = (float)((int)local_e4 + 1);
          iVar13 = iVar13 + 0xc;
          pfVar11 = pfVar11 + 0xf;
        } while ((int)local_e4 < *param_2);
      }
      iVar13 = *param_2;
      iVar8 = param_2[0x22];
      pfStack_104 = (float *)(iVar13 * 5);
      pfStack_100 = (float *)0xc;
      FUN_0066e180(fStack_e0);
      FUN_0066e100(iVar8,*param_2 * 5,8);
      FUN_0066e550(iVar8 + iVar13 * 0x28,*param_2 * 0xc);
      pfStack_100 = (float *)0x4da221;
      FUN_0066d9a0();
      DAT_007f23d4 = DAT_007f23d4 + -1;
      DAT_007f23cc = *(float **)(&DAT_007f23e0 + DAT_007f23d4 * 4);
      pfStack_100 = (float *)0x4da242;
      FUN_00553770();
      pfStack_100 = (float *)0x4da24c;
      FUN_0064cc50();
    }
  }
  local_4 = 0xffffffff;
  pfStack_100 = (float *)0x4da260;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

