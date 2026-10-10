
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b66e0(int *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined1 auStack_e4 [4];
  undefined4 uStack_e0;
  float *pfStack_dc;
  int iStack_d8;
  int iStack_d4;
  float *pfStack_d0;
  undefined1 **ppuStack_cc;
  undefined8 uStack_c8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 *puStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 *puStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 uStack_4c;
  undefined4 uStack_4b;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d446f;
  pvStack_c = ExceptionList;
  uStack_c8._4_4_ = s_Projectile__OnAdvanceLogic_0072c3a0;
  uStack_c8._0_4_ = (char *)0x4b670f;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if ((int *)param_1[0x56] != (int *)0x0) {
    uStack_c8._0_4_ = (char *)param_2;
    ppuStack_cc = (undefined1 **)0x4b6732;
    uStack_c8._4_4_ = (char *)param_1;
    (**(code **)(*(int *)param_1[0x56] + 4))();
  }
  uStack_c8._4_4_ = (char *)0x4b6739;
  FUN_004b8560();
  uStack_c8._4_4_ = (char *)0x4b6740;
  FUN_004b82c0();
  fVar4 = (float)param_2 + (float)param_1[0x57];
  param_1[0x57] = (int)fVar4;
  if ((float)param_1[99] <= fVar4) {
    param_1[0x5a] = 1;
  }
  if ((param_1[0x61] == 3) && (fVar4 < (float)param_1[99] != (fVar4 == (float)param_1[99]))) {
    if ((float)param_1[0x5e] <= DAT_006e92e4) {
      ppuStack_cc = (undefined1 **)param_1[0x62];
      iStack_d4 = param_1[0x60];
      uStack_c8._4_4_ = (char *)0x0;
      uStack_c8._0_4_ = (char *)0x20;
      iStack_d8 = param_1[0x59];
      pfStack_d0 = (float *)(param_1 + 5);
      pfStack_dc = (float *)param_1[0x58];
      uStack_e0 = 0x4b67d6;
      FUN_005750e0();
      param_1[0x5e] = 0x3f800000;
    }
    else {
      param_1[0x5e] = (int)((float)param_1[0x5e] - (float)param_2);
    }
  }
  if (param_1[0x5a] == 0) goto LAB_004b74d8;
  param_1[0x6d] = 0;
  uStack_c8._4_4_ = (char *)0x4b6803;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x30))();
  uStack_70 = *puVar6;
  uStack_6c = puVar6[1];
  uStack_68 = puVar6[2];
  if (param_1[0x61] == 4) {
    if ((float)param_1[0x5f] < DAT_006e92e4 != ((float)param_1[0x5f] == DAT_006e92e4)) {
      uStack_c8._4_4_ = (char *)0x1;
      uStack_c8._0_4_ = (char *)0x41a00000;
      ppuStack_cc = (undefined1 **)0x3c0efa35;
      pfStack_d0 = (float *)0x40000000;
      iStack_d4 = 0x4b6858;
      FUN_0056b660();
      uStack_c8._4_4_ = (char *)0x4b685f;
      pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_98 = pfVar7[2];
      puStack_a0 = (undefined1 *)*pfVar7;
      fStack_9c = pfVar7[1] + _DAT_006e9994;
      uStack_c8._4_4_ = (char *)0x4b6880;
      pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_a4 = pfVar7[2];
      pfStack_d0 = (float *)param_1[3];
      uStack_c8._4_4_ = (char *)0x1901;
      fStack_a8 = pfVar7[1] - _DAT_006e9994;
      uStack_c8._0_4_ = (char *)&fStack_ac;
      fStack_ac = *pfVar7;
      iStack_d4 = param_1[2];
      ppuStack_cc = &puStack_a0;
      iStack_d8 = 0x4b68cb;
      fStack_7c = fStack_ac;
      fStack_78 = fStack_a8;
      fStack_74 = fStack_a4;
      FUN_00579720();
      uStack_c8._4_4_ = (char *)0x1;
      uStack_c8._0_4_ = (char *)0x4b68d7;
      FUN_005798f0();
      uStack_c8._4_4_ = (char *)0x4b68e1;
      iVar8 = FUN_00577e70();
      if (iVar8 != 0) {
        uStack_c8._4_4_ = (char *)0x0;
        uStack_c8._0_4_ = (char *)&fStack_7c;
        fStack_80 = (fStack_a4 - fStack_98) * DAT_007734f0;
        puStack_88 = (undefined1 *)((fStack_a8 - fStack_9c) * DAT_007734f0);
        fStack_84 = (fStack_ac - (float)puStack_a0) * DAT_007734f0;
        fStack_74 = fStack_98 + fStack_80;
        fStack_78 = fStack_9c + (float)puStack_88;
        fStack_7c = fStack_84 + (float)puStack_a0;
        ppuStack_cc = (undefined1 **)0x4b695a;
        (**(code **)(*param_1 + 0x14))();
      }
      uStack_c8._4_4_ = (char *)0x4b695f;
      piVar9 = (int *)FUN_0041bcc0();
      uStack_c8._4_4_ = (char *)0x4b6966;
      pfVar7 = (float *)(**(code **)(*piVar9 + 0x28))();
      fVar4 = (pfVar7[2] - fStack_74) * (pfVar7[2] - fStack_74) +
              (pfVar7[1] - fStack_78) * (pfVar7[1] - fStack_78) +
              (*pfVar7 - fStack_7c) * (*pfVar7 - fStack_7c);
      fVar1 = (_DAT_006e9348 - SQRT(fVar4)) * _DAT_006ee5fc;
      if ((fVar1 < DAT_006e92e8 == (NAN(fVar1) || NAN(DAT_006e92e8))) ||
         (DAT_006e92e4 <= (_DAT_006e9348 - SQRT(fVar4)) * _DAT_006ee5fc)) {
        fVar1 = (_DAT_006e9348 - SQRT(fVar4)) * _DAT_006ee5fc;
        if (fVar1 < DAT_006e92e8 == (NAN(fVar1) || NAN(DAT_006e92e8))) {
          fStack_b0 = 1.0;
        }
        else {
          fStack_b0 = (_DAT_006e9348 - SQRT(fVar4)) * _DAT_006ee5fc;
        }
      }
      else {
        fStack_b0 = 0.0;
      }
      uStack_c8._4_4_ = (char *)fStack_b0;
      uStack_c8._0_4_ = (char *)0x16;
      ppuStack_cc = (undefined1 **)0x4b6a1f;
      FUN_0041bcc0();
      ppuStack_cc = (undefined1 **)0x4b6a26;
      FUN_0044c120();
    }
    uStack_c8._4_4_ = (char *)0x285;
    uStack_c8._0_4_ = s_C__projects_meridian_Support_Obj_0072c360;
    puStack_a0 = auStack_e4;
    fVar4 = ((float)param_1[0x62] - _DAT_006ee500) * ((float)param_1[0x5f] / (float)param_1[0x5b]);
    puStack_88 = (undefined1 *)(fVar4 + _DAT_006ee500);
    FUN_0042a610(&DAT_0075cba4);
    uVar10 = FUN_0054c650();
    uStack_c8._4_4_ = (char *)0x4b6a81;
    sVar5 = FUN_0054c7c0();
    while (-1 < sVar5) {
      if (sVar5 == -1) {
        piVar9 = (int *)0x0;
      }
      else {
        uVar13 = *(uint *)(DAT_0076f648 + sVar5 * 0x14);
        if (uVar13 == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
        }
      }
      uStack_c8._4_4_ = (char *)0x4b6ac5;
      pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
      uStack_c8._4_4_ = (char *)0x4b6ace;
      pfVar11 = (float *)(**(code **)(*piVar9 + 0x28))();
      fVar1 = SQRT((pfVar11[2] - pfVar7[2]) * (pfVar11[2] - pfVar7[2]) +
                   (pfVar11[1] - pfVar7[1]) * (pfVar11[1] - pfVar7[1]) +
                   (*pfVar11 - *pfVar7) * (*pfVar11 - *pfVar7));
      if ((fVar1 < (float)puStack_88 != (fVar1 == (float)puStack_88)) && (fVar4 <= fVar1)) {
        uStack_c8._4_4_ = (char *)0x4b6b1c;
        iVar8 = (**(code **)(*param_1 + 0x28))();
        fStack_80 = *(float *)(iVar8 + 4) + _DAT_006e9554;
        uStack_c8._4_4_ = (char *)0x4b6b30;
        iVar8 = (**(code **)(*piVar9 + 0x28))();
        if (*(float *)(iVar8 + 4) <= fStack_80) {
          if ((char)piVar9[0x1f] == '\x12') {
            uStack_c8._4_4_ = (char *)0x1;
            uStack_c8._0_4_ = (char *)0x41a00000;
            ppuStack_cc = (undefined1 **)0x3d567750;
            pfStack_d0 = (float *)0x40000000;
            iStack_d4 = 0x4b6b5f;
            FUN_0056b660();
          }
          uStack_c8._4_4_ = (char *)0x4b6b66;
          pfVar7 = (float *)(**(code **)(*piVar9 + 0x28))();
          fStack_ac = *pfVar7;
          uStack_c8._4_4_ = (char *)0x0;
          fStack_a8 = pfVar7[1];
          uStack_c8._0_4_ = (char *)0xffffffff;
          ppuStack_cc = (undefined1 **)0x41200000;
          fStack_a4 = pfVar7[2];
          iStack_d4 = param_1[0x60];
          pfStack_d0 = &fStack_ac;
          pfStack_dc = (float *)param_1[0x58];
          iStack_d8 = param_1[0x59];
          uStack_e0 = 0x4b6ba7;
          FUN_005750e0();
        }
      }
      uStack_c8._4_4_ = (char *)0x4b6bb5;
      sVar5 = FUN_0054c7c0();
    }
    uStack_c8._0_4_ = (char *)0x4b6bc9;
    uStack_c8._4_4_ = (char *)uVar10;
    FUN_0054c880();
  }
  else if (param_1[0x61] == 5) {
    if ((float)param_1[0x5f] < DAT_006e92e4 != ((float)param_1[0x5f] == DAT_006e92e4)) {
      uStack_c8._4_4_ = (char *)0x1;
      uStack_c8._0_4_ = (char *)0x41a00000;
      ppuStack_cc = (undefined1 **)0x3c0efa35;
      pfStack_d0 = (float *)0x40000000;
      iStack_d4 = 0x4b6c09;
      FUN_0056b660();
      uStack_c8._4_4_ = (char *)0x4b6c10;
      pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
      uStack_c8._4_4_ = (char *)0x4b6c17;
      piVar9 = (int *)FUN_0041bcc0();
      uStack_c8._4_4_ = (char *)0x4b6c1e;
      pfVar11 = (float *)(**(code **)(*piVar9 + 0x28))();
      fVar4 = (pfVar11[2] - pfVar7[2]) * (pfVar11[2] - pfVar7[2]) +
              (pfVar11[1] - pfVar7[1]) * (pfVar11[1] - pfVar7[1]) +
              (*pfVar11 - *pfVar7) * (*pfVar11 - *pfVar7);
      fVar1 = (_DAT_006e9994 - SQRT(fVar4)) * _DAT_006e9360;
      if ((fVar1 < _DAT_006e95d8 == (NAN(fVar1) || NAN(_DAT_006e95d8))) ||
         (DAT_006e92e4 <= (_DAT_006e9994 - SQRT(fVar4)) * _DAT_006e9360)) {
        fVar1 = (_DAT_006e9994 - SQRT(fVar4)) * _DAT_006e9360;
        if (fVar1 < _DAT_006e95d8 == (NAN(fVar1) || NAN(_DAT_006e95d8))) {
          fStack_b0 = 0.75;
        }
        else {
          fStack_b0 = (_DAT_006e9994 - SQRT(fVar4)) * _DAT_006e9360;
        }
      }
      else {
        fStack_b0 = 0.0;
      }
      uStack_c8._4_4_ = (char *)fStack_b0;
      uStack_c8._0_4_ = (char *)0x16;
      ppuStack_cc = (undefined1 **)0x4b6cd3;
      FUN_0041bcc0();
      ppuStack_cc = (undefined1 **)0x4b6cda;
      FUN_0044c120();
    }
    fVar4 = ((float)param_1[0x62] - _DAT_006ee500) * ((float)param_1[0x5f] / (float)param_1[0x5b]);
    puStack_a0 = (undefined1 *)(fVar4 + _DAT_006ee500);
    uStack_c8._4_4_ = (char *)0x4b6d09;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x30))();
    uStack_70 = *puVar6;
    uStack_6c = puVar6[1];
    uStack_68 = puVar6[2];
    uStack_c8._4_4_ = (char *)0x4b6d24;
    uStack_c8._4_4_ = (char *)(**(code **)(*param_1 + 0x30))();
    fStack_ac = 0.0;
    fStack_a8 = 0.0;
    fStack_a4 = 1.0;
    uStack_c8._0_4_ = (char *)0x4b6d46;
    FUN_00429030();
    puStack_88 = (undefined1 *)(fStack_a4 * _DAT_006e9364);
    fStack_80 = fStack_a8 * _DAT_006e9364;
    fStack_84 = fStack_ac * _DAT_006e9364;
    uStack_c8._4_4_ = (char *)0x4b6d77;
    pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
    fStack_74 = (float)puStack_88 + pfVar7[2];
    fStack_78 = fStack_80 + pfVar7[1];
    fStack_7c = fStack_84 + *pfVar7;
    uStack_c8._4_4_ = (char *)0x4b6d9e;
    pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
    fStack_8c = pfVar7[2];
    fStack_94 = *pfVar7;
    fStack_90 = pfVar7[1] + _DAT_006e9364;
    uStack_c8._4_4_ = (char *)0x4b6dbf;
    ppuStack_cc = (undefined1 **)(**(code **)(*param_1 + 0x28))();
    uStack_c8._4_4_ = (char *)&fStack_7c;
    uStack_c8._0_4_ = (char *)&fStack_94;
    pfStack_d0 = (float *)0x4b6dd3;
    FUN_004b8740();
    uStack_c8._4_4_ = (char *)0x2b5;
    uStack_c8._0_4_ = s_C__projects_meridian_Support_Obj_0072c360;
    puStack_88 = auStack_e4;
    FUN_0042a610(&DAT_0075cba4);
    uVar10 = FUN_0054c650();
    uStack_c8._4_4_ = (char *)0x4b6e06;
    sVar5 = FUN_0054c7c0();
    while (-1 < sVar5) {
      if (sVar5 == -1) {
        piVar9 = (int *)0x0;
      }
      else {
        uVar13 = *(uint *)(DAT_0076f648 + sVar5 * 0x14);
        if (uVar13 == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(-(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13);
        }
      }
      uStack_c8._4_4_ = (char *)0x4b6e45;
      pfVar7 = (float *)(**(code **)(*param_1 + 0x28))();
      uStack_c8._4_4_ = (char *)0x4b6e4e;
      pfVar11 = (float *)(**(code **)(*piVar9 + 0x28))();
      fVar1 = SQRT((pfVar11[2] - pfVar7[2]) * (pfVar11[2] - pfVar7[2]) +
                   (pfVar11[1] - pfVar7[1]) * (pfVar11[1] - pfVar7[1]) +
                   (*pfVar11 - *pfVar7) * (*pfVar11 - *pfVar7));
      if ((fVar1 < (float)puStack_a0 != (fVar1 == (float)puStack_a0)) && (fVar4 <= fVar1)) {
        if (fStack_64 <= DAT_006e92e4) {
          fStack_ac = (float)piVar9[0x14];
          fVar1 = (float)piVar9[0x11];
        }
        else {
          fStack_ac = (float)piVar9[0x11];
          fVar1 = (float)piVar9[0x14];
        }
        if (fStack_60 <= DAT_006e92e4) {
          fStack_a8 = (float)piVar9[0x15];
          fVar2 = (float)piVar9[0x12];
        }
        else {
          fStack_a8 = (float)piVar9[0x12];
          fVar2 = (float)piVar9[0x15];
        }
        if (fStack_5c <= DAT_006e92e4) {
          fStack_a4 = (float)piVar9[0x16];
          fVar3 = (float)piVar9[0x13];
        }
        else {
          fStack_a4 = (float)piVar9[0x13];
          fVar3 = (float)piVar9[0x16];
        }
        uStack_c8._4_4_ = (char *)&fStack_ac;
        puStack_88 = (undefined1 *)
                     (fStack_64 * fVar1 + fStack_60 * fVar2 + fStack_5c * fVar3 + fStack_58);
        uStack_c8._0_4_ = (char *)0x4b6f3c;
        fVar14 = (float10)FUN_00439830();
        if ((DAT_006e92e4 < (float)puStack_88) &&
           (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4)))) {
          if ((char)piVar9[0x1f] == '\x12') {
            uStack_c8._4_4_ = (char *)0x1;
            uStack_c8._0_4_ = (char *)0x41a00000;
            ppuStack_cc = (undefined1 **)0x3d567750;
            pfStack_d0 = (float *)0x40000000;
            iStack_d4 = 0x4b6f7b;
            FUN_0056b660();
          }
          uStack_c8._4_4_ = (char *)0x4b6f82;
          pfVar7 = (float *)(**(code **)(*piVar9 + 0x28))();
          fStack_94 = *pfVar7;
          uStack_c8._4_4_ = (char *)0x0;
          fStack_90 = pfVar7[1];
          uStack_c8._0_4_ = (char *)0xffffffff;
          ppuStack_cc = (undefined1 **)0x41200000;
          fStack_8c = pfVar7[2];
          iStack_d4 = param_1[0x60];
          pfStack_d0 = &fStack_94;
          pfStack_dc = (float *)param_1[0x58];
          iStack_d8 = param_1[0x59];
          uStack_e0 = 0x4b6fc3;
          FUN_005750e0();
        }
      }
      uStack_c8._4_4_ = (char *)0x4b6fd1;
      sVar5 = FUN_0054c7c0();
    }
    uStack_c8._0_4_ = (char *)0x4b6fe5;
    uStack_c8._4_4_ = (char *)uVar10;
    FUN_0054c880();
  }
  else {
    fStack_a4 = (float)param_1[7];
    fStack_ac = (float)param_1[5];
    fStack_a8 = (float)param_1[6];
    iVar8 = param_1[0x5c];
    iVar12 = param_1[0x5d];
    uStack_c8._4_4_ = s_obj_mgr__LockObject_Guid__0071cef0;
    uStack_c8._0_4_ = (char *)0x4b7019;
    FUN_00649600();
    local_4._0_1_ = 1;
    ppuStack_cc = (undefined1 **)0x4b702d;
    uStack_c8._0_4_ = (char *)iVar8;
    uStack_c8._4_4_ = (char *)iVar12;
    iVar8 = FUN_00406ce0();
    local_4._0_1_ = 0;
    if (iVar8 == -1) {
      uStack_c8._4_4_ = (char *)0x4b7043;
      FUN_00649720();
    }
    else {
      uVar13 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
      uVar13 = -(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13;
      uStack_c8._4_4_ = (char *)0x4b706a;
      FUN_00649720();
      if ((uVar13 != 0) && ((*(byte *)(uVar13 + 0x10) & 0x50) != 0)) {
        uStack_c8._4_4_ = (char *)(*(float *)(uVar13 + 0x58) + *(float *)(uVar13 + 0x4c));
        uStack_c8._0_4_ = (char *)(*(float *)(uVar13 + 0x54) + *(float *)(uVar13 + 0x48));
        ppuStack_cc = (undefined1 **)(*(float *)(uVar13 + 0x44) + *(float *)(uVar13 + 0x50));
        pfStack_d0 = (float *)0x4b709d;
        FUN_00401f00();
        uStack_c8._4_4_ = (char *)0x3f000000;
        uStack_c8._0_4_ = (char *)&fStack_7c;
        ppuStack_cc = (undefined1 **)&fStack_94;
        pfStack_d0 = (float *)0x4b70b1;
        FUN_00402160();
        fStack_ac = fStack_94;
        fStack_a8 = fStack_90;
        fStack_a4 = fStack_8c;
      }
    }
    ppuStack_cc = (undefined1 **)param_1[0x62];
    iStack_d4 = param_1[0x60];
    uStack_c8._4_4_ = (char *)0x0;
    uStack_c8._0_4_ = (char *)0x20;
    iStack_d8 = param_1[0x59];
    pfStack_d0 = &fStack_ac;
    pfStack_dc = (float *)param_1[0x58];
    uStack_e0 = 0x4b70fb;
    FUN_005750e0();
  }
  if ((float)param_1[0x5f] < DAT_006e92e4 != ((float)param_1[0x5f] == DAT_006e92e4)) {
    uStack_c8._4_4_ = (char *)0x4b7119;
    FUN_004b83e0();
    iVar8 = param_1[0x60];
    if (*(int *)(&DAT_0075d4ac + iVar8 * 0x24) != 0) {
      if ((iVar8 == 0x17) || (iVar8 == 0x18)) {
        uStack_c8._4_4_ = (char *)0x4b715f;
        iVar8 = FUN_0041bcc0();
        uStack_4c = 0;
        puVar6 = &uStack_4b;
        for (iVar12 = 0xf; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(undefined2 *)puVar6 = 0;
        *(undefined1 *)((int)puVar6 + 2) = 0;
        uVar10 = 0;
        if (*(int *)(iVar8 + 0x3d0) == 0) {
          uStack_c8._4_4_ = (char *)0x4b7190;
          iVar8 = FUN_0041bcc0();
          if (*(int *)(iVar8 + 0x3c0) != 0) {
            uStack_c8._4_4_ = (char *)0x4b71a1;
            FUN_004272d0();
            goto LAB_004b71a1;
          }
        }
        else {
          uStack_c8._4_4_ = (char *)0x4b7189;
          FUN_00427320();
LAB_004b71a1:
          uStack_c8._4_4_ = (char *)0x4b71a6;
          uVar10 = __ftol();
        }
        uStack_c8._0_4_ = *(char **)(&DAT_0075d4ac + param_1[0x60] * 0x24);
        ppuStack_cc = &puStack_a0;
        pfStack_d0 = (float *)0x4b71c4;
        uStack_c8._4_4_ = (char *)uVar10;
        FUN_00649920();
        local_4._0_1_ = 2;
        uStack_c8._4_4_ = (char *)0x4b71d6;
        uStack_c8._4_4_ = (char *)FUN_00649940();
        uStack_c8._0_4_ = &uStack_4c;
        ppuStack_cc = (undefined1 **)0x4b71e1;
        FUN_00647d10();
        local_4._0_1_ = 0;
        uStack_c8._4_4_ = (char *)0x4b71f5;
        FUN_00649950();
        uStack_c8._4_4_ = (char *)0x1;
        uStack_c8._0_4_ = (char *)0x4b71fe;
        uStack_c8._0_4_ = (char *)(**(code **)(*param_1 + 0x28))();
        ppuStack_cc = (undefined1 **)&uStack_4c;
      }
      else {
        uStack_c8._4_4_ = (char *)0x1;
        uStack_c8._0_4_ = (char *)0x4b7144;
        uStack_c8._0_4_ = (char *)(**(code **)(*param_1 + 0x28))();
        ppuStack_cc = *(undefined1 ***)(&DAT_0075d4ac + param_1[0x60] * 0x24);
      }
      pfStack_d0 = (float *)0x4b720e;
      FUN_00659630();
    }
    iVar8 = param_1[0x60];
    if (*(int *)(&DAT_0075d4b0 + iVar8 * 0x24) != 0) {
      if ((iVar8 == 0x17) || (iVar8 == 0x18)) {
        uStack_c8._4_4_ = (char *)0x4b73e1;
        iVar8 = FUN_0041bcc0();
        uStack_4c = 0;
        puVar6 = &uStack_4b;
        for (iVar12 = 0xf; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(undefined2 *)puVar6 = 0;
        *(undefined1 *)((int)puVar6 + 2) = 0;
        uVar10 = 0;
        if (*(int *)(iVar8 + 0x3d0) == 0) {
          uStack_c8._4_4_ = (char *)0x4b7412;
          iVar8 = FUN_0041bcc0();
          if (*(int *)(iVar8 + 0x3c0) != 0) {
            uStack_c8._4_4_ = (char *)0x4b7423;
            FUN_004272d0();
            goto LAB_004b7423;
          }
        }
        else {
          uStack_c8._4_4_ = (char *)0x4b740b;
          FUN_00427320();
LAB_004b7423:
          uStack_c8._4_4_ = (char *)0x4b7428;
          uVar10 = __ftol();
        }
        uStack_c8._0_4_ = *(char **)(&DAT_0075d4b0 + param_1[0x60] * 0x24);
        ppuStack_cc = &puStack_a0;
        pfStack_d0 = (float *)0x4b7446;
        uStack_c8._4_4_ = (char *)uVar10;
        FUN_00649920();
        local_4._0_1_ = 3;
        uStack_c8._4_4_ = (char *)0x4b7458;
        uStack_c8._4_4_ = (char *)FUN_00649940();
        uStack_c8._0_4_ = &uStack_4c;
        ppuStack_cc = (undefined1 **)0x4b7463;
        FUN_00647d10();
        local_4._0_1_ = 0;
        uStack_c8._4_4_ = (char *)0x4b7477;
        FUN_00649950();
        uStack_c8._4_4_ = (char *)&fStack_94;
        uStack_c8._0_4_ = (char *)&uStack_70;
        fStack_94 = 1.0;
        fStack_90 = 1.0;
        fStack_8c = 1.0;
        ppuStack_cc = (undefined1 **)0x4b74a0;
        ppuStack_cc = (undefined1 **)(**(code **)(*param_1 + 0x28))();
        pfStack_d0 = (float *)&uStack_4c;
      }
      else {
        if (param_1[0x61] == 7) {
          puVar6 = (undefined4 *)param_1[0x5c];
          iVar8 = param_1[0x5d];
          uStack_c8._4_4_ = s_obj_mgr__LockObject_Guid__0071cef0;
          uStack_c8._0_4_ = (char *)0x4b725f;
          FUN_00649600();
          local_4._0_1_ = 4;
          ppuStack_cc = (undefined1 **)0x4b7273;
          uStack_c8._0_4_ = (char *)puVar6;
          uStack_c8._4_4_ = (char *)iVar8;
          iVar8 = FUN_00406ce0();
          local_4._0_1_ = 0;
          if (iVar8 == -1) {
            uStack_c8._4_4_ = (char *)0x4b7289;
            FUN_00649720();
          }
          else {
            uVar13 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
            uVar13 = -(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13;
            uStack_c8._4_4_ = (char *)0x4b72b1;
            FUN_00649720();
            if ((uVar13 != 0) && ((*(byte *)(uVar13 + 0x10) & 0x50) != 0)) {
              iStack_d4 = param_1[0x5d];
              uStack_c8._4_4_ = (char *)0x1;
              uStack_c8._0_4_ = (char *)&fStack_94;
              iStack_d8 = param_1[0x5c];
              ppuStack_cc = (undefined1 **)&fStack_ac;
              pfStack_d0 = (float *)&DAT_0075b6e0;
              pfStack_dc = *(float **)(&DAT_0075d4b0 + param_1[0x60] * 0x24);
              fStack_94 = 1.0;
              fStack_90 = 1.0;
              fStack_8c = 1.0;
              fStack_ac = 0.0;
              fStack_a8 = 0.0;
              fStack_a4 = 0.0;
              uStack_e0 = 0x4b731e;
              uVar15 = FUN_00488f10();
              uStack_c8._4_4_ = s_obj_mgr__LockObject_Guid__0071cef0;
              uStack_c8._0_4_ = (char *)0x4b7333;
              FUN_00649600();
              local_4._0_1_ = 5;
              ppuStack_cc = (undefined1 **)0x4b7347;
              uStack_c8 = uVar15;
              iVar8 = FUN_00406ce0();
              local_4._0_1_ = 0;
              if (iVar8 == -1) {
                uStack_c8._4_4_ = (char *)0x4b735c;
                FUN_00649720();
                uVar13 = 0;
              }
              else {
                uVar13 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
                uVar13 = -(uint)((*(byte *)(uVar13 + 0x7f) & 0x10) != 0) & uVar13;
                uStack_c8._4_4_ = (char *)0x4b7383;
                FUN_00649720();
              }
              *(undefined4 *)(uVar13 + 0x1a8) = 0;
              *(undefined4 *)(uVar13 + 0x1ac) = 0;
              *(undefined4 *)(uVar13 + 0x1b0) = 0;
            }
          }
          goto LAB_004b74b1;
        }
        uStack_c8._4_4_ = (char *)&fStack_94;
        uStack_c8._0_4_ = (char *)&uStack_70;
        fStack_94 = 1.0;
        fStack_90 = 1.0;
        fStack_8c = 1.0;
        ppuStack_cc = (undefined1 **)0x4b73c5;
        ppuStack_cc = (undefined1 **)(**(code **)(*param_1 + 0x28))();
        pfStack_d0 = *(float **)(&DAT_0075d4b0 + param_1[0x60] * 0x24);
      }
      iStack_d4 = 0x4b74ae;
      FUN_00488d30();
    }
  }
LAB_004b74b1:
  fVar4 = (float)param_1[0x5f];
  param_1[0x5f] = (int)((float)param_2 + fVar4);
  if ((float)param_1[0x5b] < (float)param_2 + fVar4) {
    uStack_c8._4_4_ = (char *)0x4b74d8;
    FUN_004aaa60();
  }
LAB_004b74d8:
  if ((param_1[0x6d] != 0) && (-1 < param_1[0x6c])) {
    iVar8 = param_1[0x60];
    fVar4 = _DAT_006e998c;
    if ((iVar8 != 4) && ((iVar8 != 5 && (iVar8 != 6)))) {
      fVar4 = ((float)param_1[0x15] - (float)param_1[0x12]) * _DAT_006e936c;
    }
    fStack_8c = (float)param_1[7];
    fStack_94 = (float)param_1[5];
    fStack_90 = (float)param_1[6] - fVar4;
    puStack_a0 = (undefined1 *)&iStack_d8;
    pfStack_dc = &fStack_94;
    uStack_c8._4_4_ = (char *)param_1[7];
    uStack_c8._0_4_ = (char *)(fVar4 + (float)param_1[6]);
    ppuStack_cc = (undefined1 **)param_1[5];
    uStack_e0 = 0x4b7563;
    FUN_004357e0();
    pfStack_dc = (float *)param_1[0x6c];
    uStack_e0 = 0x4b7574;
    FUN_005c1f90();
  }
  local_4 = 0xffffffff;
  uStack_c8._4_4_ = (char *)0x4b7588;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

