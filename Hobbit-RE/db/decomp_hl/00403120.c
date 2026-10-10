
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00403120(undefined4 *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float unaff_EBX;
  float unaff_EBP;
  int *piVar12;
  float10 fVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float *local_134;
  float local_120;
  float *local_11c;
  undefined1 *local_118;
  float fStack_114;
  float fStack_110;
  int iStack_10c;
  int *piStack_108;
  float fStack_104;
  int *local_100;
  float *local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float *local_e4;
  float *local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float *pfStack_c8;
  float local_c0;
  float *pfStack_bc;
  float *local_b8;
  float *local_b4;
  float local_b0;
  float fStack_ac;
  undefined1 auStack_9c [4];
  float local_98 [2];
  undefined1 auStack_90 [4];
  float local_8c [3];
  float fStack_80;
  float local_7c;
  float local_78;
  float local_74 [3];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [76];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ceac1;
  pvStack_c = ExceptionList;
  local_134 = (float *)s_mine_cart_ride__OnAdvanceLogic_0071d1e0;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if ((param_1[0x47] == 0) || (param_1[0xd3] = param_2 + (float)param_1[0xd3], param_1[2] == 0))
  goto LAB_00404830;
  param_1[4] = param_2;
  pfVar1 = (float *)(param_1 + 5);
  param_1[0x81] =
       SQRT(((float)param_1[7] - (float)param_1[0xd]) * ((float)param_1[7] - (float)param_1[0xd]) +
            ((float)param_1[6] - (float)param_1[0xc]) * ((float)param_1[6] - (float)param_1[0xc]) +
            (*pfVar1 - (float)param_1[0xb]) * (*pfVar1 - (float)param_1[0xb])) / param_2;
  local_134 = (float *)0x4031cf;
  FUN_00406080();
  local_134 = (float *)((float)param_1[0x81] * (float)param_1[4] * _DAT_006e9360);
  FUN_00434d10(0xb1);
  pfVar9 = (float *)(param_1 + 8);
  local_134 = (float *)(DAT_006e92e8 /
                       SQRT(((float)param_1[7] - (float)param_1[10]) *
                            ((float)param_1[7] - (float)param_1[10]) +
                            ((float)param_1[6] - (float)param_1[9]) *
                            ((float)param_1[6] - (float)param_1[9]) +
                            (*pfVar1 - *pfVar9) * (*pfVar1 - *pfVar9)));
  local_e4 = local_134;
  local_b8 = pfVar9;
  FUN_0064cf30();
  local_134 = local_98;
  DAT_0075b6b0 = 0;
  FUN_0053b910();
  if (_DAT_006e9360 <
      ((float)param_1[10] - local_74[0]) * ((float)param_1[10] - local_74[0]) +
      ((float)param_1[9] - local_78) * ((float)param_1[9] - local_78) +
      (*pfVar9 - local_7c) * (*pfVar9 - local_7c)) {
    *pfVar9 = local_7c;
    param_1[9] = local_78;
    param_1[10] = local_74[0];
  }
  puVar6 = param_1 + 0x27;
  iVar11 = 9;
  do {
    puVar6[-1] = puVar6[-4];
    *puVar6 = puVar6[-3];
    puVar6[1] = puVar6[-2];
    puVar6 = puVar6 + -3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  param_1[0xb] = *pfVar9;
  param_1[0xc] = param_1[9];
  param_1[0xd] = param_1[10];
  if (param_1[2] == 0) goto LAB_00404830;
  if (param_1[0x7f] != 0) {
    *pfVar1 = *pfVar9;
    param_1[6] = param_1[9];
    param_1[7] = param_1[10];
    local_134 = (float *)0x3f800000;
    FUN_0053b780();
    local_134 = local_98;
    FUN_0053b910();
    local_f8 = local_7c;
    local_134 = (float *)0xbf800000;
    local_f0 = local_74[0];
    FUN_0053b780();
    local_100 = (int *)((float)param_1[7] - local_f0);
    local_120 = *pfVar1 - local_f8;
    local_134 = (float *)(DAT_006e92e8 /
                         SQRT((float)local_100 * (float)local_100 + local_120 * local_120));
    local_fc = local_134;
    iVar11 = FUN_0064cf30();
    if (iVar11 == 0) {
      local_f0 = 0.0;
      local_f8 = DAT_006e92e4;
      fVar2 = DAT_006e92e4;
    }
    else {
      local_f0 = (float)local_100 * (float)local_fc;
      local_f8 = local_120 * (float)local_fc;
      fVar2 = (float)local_fc * DAT_006e92e4;
    }
    local_134 = (float *)s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4;
    local_f8 = local_f8 * _DAT_006e935c;
    local_f0 = local_f0 * _DAT_006e935c;
    local_f4 = fVar2 * _DAT_006e935c + _DAT_006e9358;
    param_1[0x48] = local_f8 + *pfVar1;
    param_1[0x49] = local_f4 + (float)param_1[6];
    param_1[0x4a] = local_f0 + (float)param_1[7];
    param_1[0x4e] = *pfVar1;
    param_1[0x4f] = (float)param_1[6] + _DAT_006e9354;
    param_1[0x50] = param_1[7];
    local_b4 = (float *)param_1[1];
    uVar8 = *param_1;
    FUN_00649600();
    local_134 = local_b4;
    local_4._0_1_ = 1;
    iVar11 = FUN_00406ce0(uVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar11 == -1) {
      local_134 = (float *)0x403473;
      FUN_00649720();
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = *(int **)(DAT_0076f648 + iVar11 * 0x14);
      local_134 = (float *)0x40348c;
      FUN_00649720();
    }
    local_134 = (float *)0x1;
    (**(code **)(*piVar12 + 0x9c))();
    FUN_0053b910(auStack_9c);
    param_1[7] = local_78;
    *pfVar1 = fStack_80;
    param_1[6] = local_7c;
    FUN_004064d0();
    FUN_004069b0(auStack_90);
    FUN_004065c0(&local_fc);
    param_1[0x29] = local_fc;
    param_1[0x2b] = local_f4;
    param_1[0x2a] = local_f8;
    param_1[0x38] = 0;
    param_1[0x34] = 0;
    param_1[0x30] = 0;
    param_1[0x39] = 0;
    param_1[0x35] = 0;
    param_1[0x2d] = 0;
    param_1[0x3a] = 0;
    param_1[0x32] = 0;
    param_1[0x2e] = 0;
    param_1[0x37] = 0;
    param_1[0x33] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x3b] = 0x3f800000;
    FUN_0064c8e0(param_1[0x29],&stack0xfffffedc,&fStack_104);
    FUN_0064c8e0(param_1[0x2a],&local_120,&fStack_ec);
    FUN_0064c8e0(param_1[0x2b],&local_f0,&local_100);
    param_1[0x2c] = (float)local_100 * fStack_ec + local_f0 * unaff_EBX * local_120;
    param_1[0x2d] = local_f0 * fStack_104;
    param_1[0x2e] = local_f0 * unaff_EBX * fStack_ec - (float)local_100 * local_120;
    param_1[0x30] = local_120 * (float)local_100 * unaff_EBX - local_f0 * fStack_ec;
    param_1[0x31] = (float)local_100 * fStack_104;
    param_1[0x32] = (float)local_100 * unaff_EBX * fStack_ec + local_f0 * local_120;
    param_1[0x34] = local_120 * fStack_104;
    param_1[0x35] = -unaff_EBX;
    param_1[0x36] = fStack_ec * fStack_104;
    param_1[0x38] = *pfVar1;
    param_1[0x39] = param_1[6];
    param_1[0x3a] = param_1[7];
    (**(code **)(*piVar12 + 0x9c))(0);
    (**(code **)(*piVar12 + 0x14))(pfVar1,0);
    (**(code **)(*piVar12 + 0xf0))(param_1 + 0x29);
    param_1[0x81] = 0x447a0000;
    local_134 = (float *)0x4036bc;
    FUN_004060a0();
    goto LAB_00404830;
  }
  local_134 = (float *)0x4036ce;
  fVar13 = (float10)FUN_0064cd90();
  if ((float10)_DAT_0071cf48 <= fVar13) {
    local_134 = (float *)0x4036e2;
    fVar13 = (float10)FUN_0064cd90();
    if (fVar13 <= (float10)_DAT_006e9314 + (float10)_DAT_0071cf48) {
      local_134 = (float *)0x4036fe;
      FUN_00406100();
    }
  }
  iVar11 = param_1[2];
  local_e4 = (float *)(*(int *)(iVar11 + 0xc) + -1);
  local_11c = (float *)((float)param_1[*(int *)(iVar11 + 8) + 0x55] * (float)param_1[0x82] *
                       (float)param_1[4]);
  local_120 = (float)(int)local_e4 - *(float *)(iVar11 + 0x10);
  local_134 = (float *)0x403732;
  iVar7 = FUN_00406dc0();
  local_e4 = (float *)(uint)*(byte *)(*(int *)(iVar11 + 8) * 0x50 + *(int *)(iVar7 + 0x58) + 0x2f);
  local_120 = local_120 / (float)(int)local_e4;
  if ((float)local_11c <= local_120) {
LAB_00403806:
    local_134 = local_11c;
    FUN_0053b780();
  }
  else {
    local_134 = (float *)(local_120 - _DAT_006e9360);
    FUN_0053b780();
    local_11c = (float *)((float)local_11c - local_120);
    if (param_1[0x7a] == 0) {
      local_134 = (float *)0x40379a;
      FUN_00404a90();
    }
    else {
      param_1[0x7c] = 1;
      local_134 = (float *)0x0;
      FUN_0053b700(*(undefined4 *)(param_1[2] + 8));
    }
    iVar11 = param_1[2];
    local_e4 = (float *)(*(int *)(iVar11 + 0xc) + -1);
    local_120 = (float)(int)local_e4 - *(float *)(iVar11 + 0x10);
    local_134 = (float *)0x4037d0;
    iVar7 = FUN_00406dc0();
    local_e4 = (float *)(uint)*(byte *)(*(int *)(iVar11 + 8) * 0x50 + 0x2f + *(int *)(iVar7 + 0x58))
    ;
    if ((float)local_11c < local_120 / (float)(int)local_e4) goto LAB_00403806;
  }
  local_134 = local_98;
  FUN_0053b910();
  local_134 = (float *)s_mine_cart_ride_0071d1a4;
  *pfVar1 = local_7c;
  param_1[6] = local_78;
  param_1[7] = local_74[0];
  iVar11 = FUN_0065f190();
  if (iVar11 != 0) {
    local_118 = (undefined1 *)&local_134;
    local_134 = (float *)0xffffff00;
    uVar8 = FUN_00401f00(0,0x42c80000,0);
    uVar8 = FUN_00402130(&local_f8,pfVar1,uVar8);
    FUN_0066a800(uVar8);
    local_134 = (float *)0x403892;
    FUN_0065f430();
  }
  local_134 = (float *)0x40389e;
  FUN_004064d0();
  local_134 = local_8c;
  FUN_004069b0();
  local_134 = &local_f8;
  FUN_004065c0();
  param_1[0x29] = local_f8;
  param_1[0x2a] = local_f4;
  param_1[0x2b] = local_f0;
  param_1[0x7c] = 0;
  local_134 = (float *)0x4038ee;
  FUN_00405860();
  local_e0 = (float *)param_1[1];
  uVar8 = *param_1;
  local_134 = (float *)s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4;
  FUN_00649600();
  local_134 = local_e0;
  local_4._0_1_ = 2;
  iVar11 = FUN_00406ce0(uVar8);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar11 == -1) {
    local_134 = (float *)0x403933;
    FUN_00649720();
    local_fc = (float *)0x0;
  }
  else {
    pfVar9 = *(float **)(DAT_0076f648 + iVar11 * 0x14);
    local_134 = (float *)0x40394e;
    FUN_00649720();
    local_fc = pfVar9;
  }
  local_134 = (float *)0x1;
  (**(code **)((int)*local_fc + 0x9c))();
  param_1[0x2c] = 1.0;
  param_1[0x31] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x3b] = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x34] = 0;
  param_1[0x30] = 0;
  param_1[0x39] = 0;
  param_1[0x35] = 0;
  param_1[0x2d] = 0;
  param_1[0x3a] = 0;
  param_1[0x32] = 0;
  param_1[0x2e] = 0;
  param_1[0x37] = 0;
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  FUN_0064c8e0(param_1[0x29],&fStack_e8,&stack0xfffffedc);
  FUN_0064c8e0(param_1[0x2a],&fStack_ec,&local_120);
  FUN_0064c8e0(param_1[0x2b],&local_f0,&fStack_104);
  param_1[0x2c] = fStack_104 * local_120 + local_f0 * fStack_e8 * fStack_ec;
  param_1[0x2d] = local_f0 * unaff_EBX;
  param_1[0x2e] = local_f0 * fStack_e8 * local_120 - fStack_104 * fStack_ec;
  param_1[0x30] = fStack_ec * fStack_104 * fStack_e8 - local_f0 * local_120;
  param_1[0x31] = fStack_104 * unaff_EBX;
  param_1[0x32] = fStack_104 * fStack_e8 * local_120 + local_f0 * fStack_ec;
  param_1[0x34] = fStack_ec * unaff_EBX;
  param_1[0x35] = -fStack_e8;
  param_1[0x36] = local_120 * unaff_EBX;
  param_1[0x38] = *pfVar1;
  param_1[0x39] = param_1[6];
  param_1[0x3a] = param_1[7];
  FUN_00401f00(*pfVar1 - *pfStack_bc,(float)param_1[6] - pfStack_bc[1],
               (float)param_1[7] - pfStack_bc[2]);
  if (_DAT_006e9350 < local_f8 * local_f8 + local_f4 * local_f4 + (float)local_fc * (float)local_fc)
  {
    (**(code **)(*local_100 + 0x9c))(0);
  }
  (**(code **)(*local_100 + 0x14))(pfVar1,0);
  (**(code **)(*piStack_108 + 0xf0))(param_1 + 0x29);
  FUN_00401f00(*pfVar1 - (float)param_1[0x26],(float)param_1[6] - (float)param_1[0x27],
               (float)param_1[7] - (float)param_1[0x28]);
  fVar2 = DAT_006e92e8 /
          SQRT(fStack_114 * fStack_114 +
               (float)local_118 * (float)local_118 + (float)local_11c * (float)local_11c);
  iVar11 = FUN_0064cf30(fVar2);
  if (iVar11 == 0) {
    local_11c = (float *)0x0;
    local_118 = (undefined1 *)0x0;
    fStack_114 = 0.0;
  }
  else {
    local_11c = (float *)((float)local_11c * fVar2);
    local_118 = (undefined1 *)((float)local_118 * fVar2);
    fStack_114 = fStack_114 * fVar2;
  }
  FUN_00401f00((float)local_118 * DAT_006e92e4 - fStack_114,
               fStack_114 * DAT_006e92e4 - (float)local_11c * DAT_006e92e4,
               (float)local_11c - (float)local_118 * DAT_006e92e4);
  FUN_00401f00(local_b0 * fStack_114 - fStack_ac * (float)local_118,
               fStack_ac * (float)local_11c - fStack_114 * (float)local_b4,
               (float)local_118 * (float)local_b4 - local_b0 * (float)local_11c);
  local_11c = (float *)((float)local_11c * _DAT_006e934c);
  local_118 = (undefined1 *)((float)local_118 * _DAT_006e934c);
  fStack_114 = fStack_114 * _DAT_006e934c;
  fStack_dc = fStack_dc * _DAT_006e9348;
  fStack_d8 = fStack_d8 * _DAT_006e9348;
  fStack_d4 = fStack_d4 * _DAT_006e9348;
  if (param_1[0x54] == 0) {
    FUN_00401f00(*pfVar1 - (float)local_11c,(float)param_1[6] - (float)local_118,
                 (float)param_1[7] - fStack_114);
    FUN_00401f00(unaff_EBP + fStack_dc,fStack_d8 + unaff_EBX,fStack_d4 + local_120);
    pfVar9 = &local_c0;
  }
  else {
    FUN_00401f00(*pfVar1 - *pfStack_c8,(float)param_1[6] - pfStack_c8[1],
                 (float)param_1[7] - pfStack_c8[2]);
    FUN_00401f00(*pfVar1,(float)param_1[6] + _DAT_006e9344,param_1[7]);
    FUN_00401f00((float)piStack_108 - fStack_e8,fStack_104 - (float)local_e4,
                 (float)local_100 - (float)local_e0);
    pfVar9 = &local_f4;
  }
  fStack_e8 = *pfVar9;
  local_e4 = (float *)pfVar9[1];
  local_e0 = (float *)pfVar9[2];
  fVar2 = DAT_006e92e8 /
          SQRT(fStack_114 * fStack_114 +
               (float)local_118 * (float)local_118 + (float)local_11c * (float)local_11c);
  iVar11 = FUN_0064cf30(fVar2);
  if (iVar11 == 0) {
    fStack_114 = 0.0;
    fVar4 = DAT_006e92e4;
    fVar2 = DAT_006e92e4;
  }
  else {
    fStack_114 = fStack_114 * fVar2;
    fVar4 = fVar2 * (float)local_11c;
    fVar2 = (float)local_118 * fVar2;
  }
  local_11c = (float *)(fVar4 * _DAT_006e9344);
  local_118 = (undefined1 *)(fVar2 * _DAT_006e9344);
  fStack_114 = fStack_114 * _DAT_006e9344;
  if (param_1[0x54] == 0) {
    FUN_00401f00((float)local_11c + *pfVar1,(float)local_118 + (float)param_1[6],
                 fStack_114 + (float)param_1[7]);
    pfVar9 = (float *)&stack0xfffffed8;
  }
  else {
    FUN_00401f00((float)local_11c * _DAT_006e9340,(float)local_118 * _DAT_006e9340,
                 fStack_114 * _DAT_006e9340);
    FUN_00401f00((float)piStack_108 + *pfVar1,fStack_104 + (float)param_1[6],
                 (float)local_100 + (float)param_1[7]);
    pfVar9 = &local_c0;
  }
  fStack_104 = pfVar9[1];
  piStack_108 = (int *)*pfVar9;
  local_100 = (int *)pfVar9[2];
  FUN_00401f00(fStack_e8 - (float)param_1[0x48],(float)local_e4 - (float)param_1[0x49],
               (float)local_e0 - (float)param_1[0x4a]);
  if ((_DAT_006e933c < unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX + local_120 * local_120) ||
     (param_1[0x7c] != 0)) {
    param_1[0x48] = fStack_e8;
    param_1[0x49] = local_e4;
    param_1[0x4a] = local_e0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
  }
  else {
    FUN_00401f00(fStack_e8 - (float)param_1[0x48],(float)local_e4 - (float)param_1[0x49],
                 (float)local_e0 - (float)param_1[0x4a]);
    local_f4 = SQRT(unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX + local_120 * local_120);
    fVar2 = local_f4 / (float)param_1[4];
    fVar13 = (float10)FUN_00404a70(local_f4,DAT_006e9330,0x447a0000);
    local_f4 = (float)fVar13;
    if (fVar2 < local_f4 == (NAN(fVar2) || NAN(local_f4))) {
      fVar2 = DAT_006e92e8 /
              SQRT(unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX + local_120 * local_120);
      iVar11 = FUN_0064cf30(fVar2);
      if (iVar11 == 0) {
        local_120 = 0.0;
        fVar4 = DAT_006e92e4;
        fVar2 = DAT_006e92e4;
      }
      else {
        local_120 = local_120 * fVar2;
        fVar4 = fVar2 * unaff_EBP;
        fVar2 = unaff_EBX * fVar2;
      }
      local_f4 = local_f4 * (float)param_1[4];
      unaff_EBP = local_f4 * fVar4;
      param_1[0x48] = unaff_EBP + (float)param_1[0x48];
      param_1[0x49] = fVar2 * local_f4 + (float)param_1[0x49];
      param_1[0x4a] = local_120 * local_f4 + (float)param_1[0x4a];
    }
    else {
      param_1[0x48] = fStack_e8;
      param_1[0x49] = local_e4;
      param_1[0x4a] = local_e0;
    }
  }
  FUN_00401f00((float)piStack_108 - (float)param_1[0x4e],fStack_104 - (float)param_1[0x4f],
               (float)local_100 - (float)param_1[0x50]);
  if ((_DAT_006e933c <
       fStack_e8 * fStack_e8 + (float)local_e4 * (float)local_e4 + (float)local_e0 * (float)local_e0
      ) || (param_1[0x7c] != 0)) {
    param_1[0x4e] = piStack_108;
    param_1[0x4f] = fStack_104;
    param_1[0x50] = local_100;
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
  }
  else {
    FUN_00401f00((float)piStack_108 - (float)param_1[0x4e],fStack_104 - (float)param_1[0x4f],
                 (float)local_100 - (float)param_1[0x50]);
    local_f4 = SQRT(unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX + local_120 * local_120);
    fVar2 = local_f4 / (float)param_1[4];
    fVar13 = (float10)FUN_00404a70(local_f4,DAT_006e9330,0x447a0000);
    local_f4 = (float)fVar13;
    if (fVar2 < local_f4 == (NAN(fVar2) || NAN(local_f4))) {
      fVar2 = DAT_006e92e8 /
              SQRT(unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX + local_120 * local_120);
      iVar11 = FUN_0064cf30(fVar2);
      if (iVar11 == 0) {
        local_120 = 0.0;
        fVar4 = DAT_006e92e4;
        fVar2 = DAT_006e92e4;
      }
      else {
        local_120 = local_120 * fVar2;
        fVar4 = fVar2 * unaff_EBP;
        fVar2 = unaff_EBX * fVar2;
      }
      local_f4 = local_f4 * (float)param_1[4];
      param_1[0x4e] = local_f4 * fVar4 + (float)param_1[0x4e];
      param_1[0x4f] = fVar2 * local_f4 + (float)param_1[0x4f];
      param_1[0x50] = local_120 * local_f4 + (float)param_1[0x50];
    }
    else {
      param_1[0x4e] = piStack_108;
      param_1[0x4f] = fStack_104;
      param_1[0x50] = local_100;
    }
  }
  local_7c = DAT_0075b688;
  local_f4 = 0.0;
  iStack_10c = 0;
  fStack_80 = DAT_0075b684;
  local_78 = DAT_0075b68c;
  FUN_004357e0(&DAT_0075b6a0);
  FUN_00406510(&local_c0,&fStack_80);
  FUN_00406510(&local_c0,local_74);
  piVar12 = (int *)param_1[2];
  fStack_110 = (float)piVar12[4];
  uVar3 = piVar12[1] * 2;
  if (((uVar3 ^ piVar12[1]) & 0x7fffffff ^ uVar3) == 0xffffffff) {
    iVar11 = *piVar12;
  }
  else {
    iVar11 = FUN_00549470(piVar12 + 1);
  }
  _DAT_0075b6c8 = _DAT_0075b6c8 - (float)pvStack_c;
  iVar7 = (int)*(short *)(piVar12[2] * 0x50 + 0x26 + *(int *)(iVar11 + 0x58));
  local_f8 = (float)(piVar12[2] * 0x50 + *(int *)(iVar11 + 0x58));
  _DAT_0075b6cc = _DAT_0075b6cc - (float)pvStack_c;
  local_fc = (float *)0x0;
  _DAT_0075b6d0 = _DAT_0075b6d0 - (float)pvStack_c;
  _DAT_0075b6d4 = _DAT_0075b6d4 - (float)pvStack_c;
  if (iVar7 < 1) {
LAB_00404753:
    if (DAT_0075b6d8 == 0.0) goto LAB_00404763;
    bVar5 = true;
  }
  else {
    do {
      pfVar9 = local_fc;
      FUN_00406d60(local_fc);
      iVar11 = FUN_0053f210(0);
      if (((float)iVar11 < fStack_110 != ((float)iVar11 == fStack_110)) &&
         (iVar11 = FUN_0053f210(1), fStack_110 <= (float)iVar11)) {
        uVar8 = FUN_0053f210(3);
        switch(uVar8) {
        case 0xb:
          if (_DAT_0075b6c8 < DAT_006e92e4 != (NAN(_DAT_0075b6c8) || NAN(DAT_006e92e4))) {
            fVar13 = (float10)FUN_00647b30(DAT_006e9308,DAT_006e930c);
            _DAT_0075b6c8 = (float)fVar13;
            uVar15 = FUN_0054bad0(0x2d,0,0);
            pfVar10 = (float *)FUN_00406bf0(uVar15);
            local_fc = pfVar10;
            FUN_00488c30(s_SparksContinuous_0071d190);
            (**(code **)((int)*pfVar10 + 0x110))();
            fVar2 = *pfVar10;
            uVar16 = 0;
            uVar8 = FUN_0053c3a0(&local_c0,pfVar9);
            (**(code **)((int)fVar2 + 0x14))(uVar8,uVar16);
            FUN_0048b750(_DAT_0075b6c8 * _DAT_006e9338);
          }
          break;
        case 0xc:
          if (_DAT_0075b6cc < DAT_006e92e4 != (NAN(_DAT_0075b6cc) || NAN(DAT_006e92e4))) {
            fVar13 = (float10)FUN_00647b30(DAT_006e9308,DAT_006e930c);
            _DAT_0075b6cc = (float)fVar13;
            uVar15 = FUN_0054bad0(0x2d,0,0);
            piVar12 = (int *)FUN_00406bf0(uVar15);
            FUN_00488c30(s_SparksContinuous_0071d190);
            (**(code **)(*piVar12 + 0x110))();
            iVar11 = *piVar12;
            uVar16 = 0;
            uVar8 = FUN_0053c3a0(&piStack_108,pfVar9);
            (**(code **)(iVar11 + 0x14))(uVar8,uVar16);
            fVar2 = _DAT_0075b6cc;
LAB_004046c6:
            FUN_0048b750(fVar2 * _DAT_006e9338);
            pfVar9 = local_fc;
          }
          break;
        case 0xd:
          if (_DAT_0075b6d0 < DAT_006e92e4 != (NAN(_DAT_0075b6d0) || NAN(DAT_006e92e4))) {
            fVar13 = (float10)FUN_00647b30(DAT_006e9308,DAT_006e930c);
            _DAT_0075b6d0 = (float)fVar13;
            uVar15 = FUN_0054bad0(0x2d,0,0);
            piVar12 = (int *)FUN_00406bf0(uVar15);
            FUN_00488c30(s_SparksContinuous_0071d190);
            (**(code **)(*piVar12 + 0x110))();
            iVar11 = *piVar12;
            uVar16 = 0;
            uVar8 = FUN_0053c3a0(&fStack_e8,pfVar9);
            (**(code **)(iVar11 + 0x14))(uVar8,uVar16);
            fVar2 = _DAT_0075b6d0;
            goto LAB_004046c6;
          }
          break;
        case 0xe:
          if (_DAT_0075b6d4 < DAT_006e92e4 != (NAN(_DAT_0075b6d4) || NAN(DAT_006e92e4))) {
            fVar13 = (float10)FUN_00647b30(DAT_006e9308,DAT_006e930c);
            _DAT_0075b6d4 = (float)fVar13;
            uVar15 = FUN_0054bad0(0x2d,0,0);
            piVar12 = (int *)FUN_00406bf0(uVar15);
            FUN_00488c30(s_SparksContinuous_0071d190);
            (**(code **)(*piVar12 + 0x110))();
            iVar11 = *piVar12;
            uVar16 = 0;
            uVar8 = FUN_0053c3a0(auStack_68,pfVar9);
            (**(code **)(iVar11 + 0x14))(uVar8,uVar16);
            fVar2 = _DAT_0075b6d4;
            goto LAB_004046c6;
          }
        }
      }
      iVar11 = FUN_0053f210(0);
      if (((float)iVar11 < fStack_110 != ((float)iVar11 == fStack_110)) &&
         (iVar11 = FUN_0053f210(1), fStack_110 <= (float)iVar11)) {
        iVar11 = FUN_0053f210(3);
        if (iVar11 == 0xf) {
          local_f4 = 1.4013e-45;
        }
        else if (iVar11 == 0x10) {
          iStack_10c = 1;
        }
      }
      local_fc = (float *)((int)pfVar9 + 1);
    } while ((int)local_fc < iVar7);
    if (local_f4 == 0.0) goto LAB_00404753;
LAB_00404763:
    bVar5 = false;
  }
  fVar2 = local_f4;
  iVar11 = iStack_10c;
  DAT_0075b6d8 = local_f4;
  if ((iStack_10c != 0) && (DAT_0075b6dc == 0)) {
    FUN_00659600(s_MineCartSqueal_0071d180,1);
  }
  DAT_0075b6dc = iVar11;
  if (bVar5) {
    FUN_00659600(s_MineCartLand_0071d170,1);
    _DAT_0075b6c0 = 0.0;
  }
  if (fVar2 == 0.0) {
    FUN_0065a050(DAT_0075b6b8,0x3f800000);
    local_134 = pfVar1;
    FUN_00405080(auStack_58,local_b8);
    local_134 = (float *)0x4047fc;
    fVar14 = (float10)FUN_00404890();
    fVar13 = (float10)_DAT_0075b6c0;
    _DAT_0075b6c0 = (float)(fVar14 + fVar13);
    if ((float10)_DAT_0071cf4c < fVar14 + fVar13) {
      local_134 = (float *)0x1;
      _DAT_0075b6c0 = 0.0;
      FUN_00659600(s_MineCartTrackClack_0071d15c);
    }
  }
  else {
    FUN_0065a050(DAT_0075b6b8,0);
  }
LAB_00404830:
  local_4 = 0xffffffff;
  local_134 = (float *)0x404844;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

