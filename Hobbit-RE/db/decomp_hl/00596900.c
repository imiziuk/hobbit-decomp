
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00596900(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  undefined4 uVar12;
  int iVar13;
  float10 fVar14;
  int local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd36b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  *param_2 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x158) == 0) goto LAB_00597347;
  if (((*(int *)(param_1 + 400) == 0) || ((*(byte *)(*(int *)(param_1 + 400) + 0x5c) & 4) == 0)) ||
     (iVar7 = FUN_00592920(), *(int *)(iVar7 + 0x1cc) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (*(int *)(*(int *)(param_1 + 0x1a0) + 0xc) == 1) {
    FUN_00592920();
    iVar7 = FUN_005b7390();
    if (iVar7 == 0) goto LAB_005969bf;
    local_84 = 1;
  }
  else {
LAB_005969bf:
    local_84 = 0;
    if (*(int *)(*(int *)(param_1 + 0x158) + 4) == 0xd) {
      FUN_00595b80();
      FUN_005960d0();
    }
  }
  if (((*(int *)(param_1 + 0x1a0) == 0) || (*(int *)(param_1 + 0x19c) < 1)) ||
     ((iVar7 = FUN_00592920(), *(int *)(iVar7 + 0x1bc) == 0 ||
      ((*(int *)(param_1 + 400) == 0 || (iVar7 = FUN_00566dd0(), iVar7 != 1)))))) goto LAB_00597347;
  *(float *)(param_1 + 0x298) = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x298);
  piVar8 = (int *)FUN_00592920();
  pfVar11 = *(float **)(param_1 + 0x1a0);
  pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
  fStack_80 = pfVar11[2] - pfVar9[2];
  fStack_74 = pfVar11[1] - pfVar9[1];
  fStack_7c = *pfVar11 - *pfVar9;
  fStack_78 = fStack_7c;
  fStack_70 = fStack_80;
  fStack_6c = fStack_74;
  piVar8 = (int *)FUN_00592920();
  pfVar11 = (float *)(*(int *)(param_1 + 0x19c) * 0x20 + -0x20 + *(int *)(param_1 + 0x1a0));
  pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
  fStack_9c = pfVar11[2] - pfVar9[2];
  fStack_94 = fStack_6c;
  fStack_90 = fStack_80;
  fStack_a0 = pfVar11[1] - pfVar9[1];
  fStack_a4 = *pfVar11 - *pfVar9;
  fStack_98 = fStack_7c;
  fStack_68 = fStack_a0;
  fStack_60 = fStack_a4;
  fStack_54 = fStack_9c;
  if (bVar6) {
    FUN_00592920();
    FUN_004a4160();
    FUN_00649600();
    local_4._0_1_ = 1;
    iVar7 = FUN_00406ce0();
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar7 == -1) {
      FUN_00649720();
      piVar8 = (int *)0x0;
    }
    else {
      uVar4 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
      piVar8 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
      FUN_00649720();
    }
    FUN_00592920();
    FUN_004a4160();
    if (piVar8 != (int *)0x0) {
      piVar10 = (int *)FUN_00592920();
      pfVar11 = (float *)(**(code **)(*piVar10 + 0x28))();
      pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
      fStack_90 = pfVar9[2] - pfVar11[2];
      fStack_94 = pfVar9[1] - pfVar11[1];
      fStack_98 = *pfVar9 - *pfVar11;
    }
  }
  fStack_8c = DAT_006f4090;
  if (*(int *)(param_1 + 0x40) == 2) {
    iVar7 = FUN_00592190();
    fStack_3c = *(float *)(iVar7 + 0x50);
    fStack_2c = *(float *)(iVar7 + 0x54);
    fStack_40 = *(float *)(iVar7 + 0x58);
    fStack_48 = *(float *)(iVar7 + 0x5c);
    fStack_4c = *(float *)(iVar7 + 0x4c);
    fVar2 = *(float *)(iVar7 + 0x6c);
    fStack_34 = *(float *)(iVar7 + 100);
    fStack_38 = *(float *)(iVar7 + 0x60);
    fVar3 = *(float *)(iVar7 + 0x70);
    fStack_30 = *(float *)(iVar7 + 0x68);
    fStack_24 = *(float *)(iVar7 + 0x74);
    fStack_20 = *(float *)(iVar7 + 0x78);
    fStack_70 = fStack_7c * fVar2 + fStack_80 * fStack_24 + fStack_6c * fVar3 + fStack_20;
    fStack_74 = fStack_7c * fStack_48 + fStack_6c * fStack_38 + fStack_80 * fStack_34 + fStack_30;
    fStack_78 = fStack_6c * fStack_3c + fStack_80 * fStack_2c + fStack_4c * fStack_7c + fStack_40;
    fStack_9c = fStack_60 * fVar2 + fStack_54 * fStack_24 + fStack_68 * fVar3 + fStack_20;
    fStack_a0 = fStack_60 * fStack_48 + fStack_68 * fStack_38 + fStack_54 * fStack_34 + fStack_30;
    fStack_a4 = fStack_68 * fStack_3c + fStack_54 * fStack_2c + fStack_4c * fStack_60 + fStack_40;
    fVar2 = fStack_98 * fVar2;
    fVar3 = fVar3 * fStack_94;
    fVar5 = fStack_98 * fStack_48;
    fStack_98 = fStack_3c * fStack_94 + fStack_90 * fStack_2c + fStack_4c * fStack_98 + fStack_40;
    fStack_8c = DAT_006f4090 + **(float **)(param_1 + 0x34);
    fStack_94 = fStack_38 * fStack_94 + fVar5 + fStack_90 * fStack_34 + fStack_30;
    fStack_90 = fVar3 + fVar2 + fStack_90 * fStack_24 + fStack_20;
    fStack_28 = fStack_34;
  }
  if (((*(int *)(param_1 + 0x158) != 0) &&
      (((byte)*(undefined4 *)(*(int *)(param_1 + 0x158) + 0x78) & 0x80) != 0x80)) &&
     (*(int *)(param_1 + 0x40) != 2)) {
    fStack_74 = 0.0;
    fStack_a0 = 0.0;
    fStack_94 = 0.0;
  }
  fVar14 = (float10)FUN_0064ca10();
  *(float *)(param_1 + 0x234) = (float)fVar14;
  if (local_84 == 0) {
    if (bVar6) {
      fStack_8c = DAT_006f4094;
      FUN_0064ca10();
      FUN_0064ca10();
      FUN_00445150();
      FUN_004357e0();
      iVar7 = FUN_00597370();
      if (((iVar7 != 0) && (*(int *)(param_1 + 0x158) != 0)) &&
         ((iVar7 != *(int *)(param_1 + 0x158) && (_DAT_006e9340 <= *(float *)(param_1 + 0x298))))) {
        *(undefined4 *)(param_1 + 0x298) = 0;
        goto LAB_00596ee2;
      }
    }
  }
  else {
    fStack_8c = DAT_006f4098;
    if (*(int *)(*(int *)(param_1 + 0x158) + 4) != 0xd) {
      FUN_00593dd0();
LAB_00596ee2:
      FUN_005960d0();
    }
  }
  fVar2 = fStack_a0 * fStack_a0 + fStack_9c * fStack_9c + fStack_a4 * fStack_a4;
  fVar3 = SQRT(fVar2);
  if ((fVar3 < fStack_8c != (NAN(fVar3) || NAN(fStack_8c))) ||
     (fVar2 = SQRT(fVar2), fVar3 = *(float *)(*(int *)(param_1 + 400) + 0x24),
     fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))) {
    *param_2 = 1;
    goto LAB_00597347;
  }
  iVar7 = *(uint *)(param_1 + 0x4c) << 0xd;
  if (iVar7 < 0) {
    if (_DAT_006f40a8 + _DAT_006f40a8 < *(float *)(param_1 + 0x23c) ==
        (NAN(_DAT_006f40a8 + _DAT_006f40a8) || NAN(*(float *)(param_1 + 0x23c)))) {
      if (-1 < iVar7) goto LAB_00596f56;
      goto LAB_00596f91;
    }
LAB_00596f69:
    *(undefined4 *)(param_1 + 0x23c) = 0;
    if (iVar7 < 0) goto LAB_00597347;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x60000;
  }
  else {
LAB_00596f56:
    if (_DAT_006f40a8 < *(float *)(param_1 + 0x23c)) goto LAB_00596f69;
LAB_00596f91:
    fVar2 = fStack_74 * fStack_74 + fStack_70 * fStack_70 + fStack_78 * fStack_78;
    fVar3 = SQRT(fVar2);
    if (fVar3 < fStack_8c == (NAN(fVar3) || NAN(fStack_8c))) {
      if ((1 < *(int *)(param_1 + 0x19c)) &&
         (fVar2 = SQRT(fVar2), fVar3 = *(float *)(*(int *)(param_1 + 0x1a0) + 0x10),
         fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))) {
        if (local_84 != 0) goto LAB_00596feb;
        goto LAB_00597024;
      }
      if (local_84 != 0) {
LAB_00596feb:
        iVar7 = FUN_00592190();
        if (((0 < *(int *)(iVar7 + 0xe0)) ||
            (fVar2 = (float)(*(int *)(iVar7 + 0xd8) + -2),
            fVar2 < *(float *)(iVar7 + 0xdc) != (fVar2 == *(float *)(iVar7 + 0xdc)))) &&
           (*(int *)(param_1 + 0x144) != 0)) goto LAB_00597024;
      }
    }
    else {
LAB_00597024:
      local_a8 = *(int *)(param_1 + 0x19c) + -1;
      if (0 < local_a8) {
        iVar7 = 0;
        do {
          iVar1 = iVar7 + 0x20 + *(int *)(param_1 + 0x1a0);
          iVar13 = *(int *)(param_1 + 0x1a0) + iVar7;
          FUN_004357e0();
          *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
          FUN_004357e0();
          iVar7 = iVar7 + 0x20;
          local_a8 = local_a8 + -1;
        } while (local_a8 != 0);
      }
      *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
    }
  }
  piVar8 = (int *)FUN_00592920();
  fVar14 = (float10)(**(code **)(*piVar8 + 0x10c))();
  fVar14 = ((float10)*(float *)(param_1 + 0x234) - fVar14) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar14) ||
     (fVar14 < (float10)_DAT_006e959c != (NAN(fVar14) || NAN((float10)_DAT_006e959c)))) {
    fVar14 = (float10)FUN_0064c6b0();
  }
  if ((float10)_DAT_006e9598 <= fVar14) {
    do {
      fVar14 = fVar14 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar14);
  }
  if (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar14 = fVar14 + (float10)_DAT_006e9598;
    } while (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4)));
  }
  uVar4 = *(uint *)(param_1 + 0x4c);
  iVar7 = uVar4 << 0x16;
  fVar2 = (float)(fVar14 - (float10)_DAT_006e9368);
  if (-1 < iVar7) {
    if ((uVar4 & 0x20) == 0) {
      if (((*(int *)(param_1 + 400) != 0) && (iVar7 = FUN_00566dd0(), iVar7 == 1)) &&
         ((*(byte *)(*(int *)(param_1 + 400) + 0x5c) & 2) != 0)) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x60;
      }
      goto LAB_005972ff;
    }
    if (-1 < iVar7) {
      if (*(int *)(param_1 + 0x19c) < 2) {
        fStack_68 = 0.0;
        iStack_64 = 0;
        piVar8 = (int *)FUN_00592920();
        pfVar11 = (float *)(**(code **)(*piVar8 + 0x28))();
        fStack_a4 = *pfVar11;
        fStack_a0 = pfVar11[1];
        fStack_9c = pfVar11[2];
        FUN_004357e0();
        FUN_005b3350();
        FUN_004357e0(&fStack_a4);
        iVar7 = FUN_005b38a0();
        if ((iVar7 != 0) || (fStack_68 == 0.0 && iStack_64 == 0)) {
LAB_00597347:
          local_4 = 0xffffffff;
          FUN_00649720();
          ExceptionList = local_c;
          return 1;
        }
        FUN_00649600();
        local_4._0_1_ = 2;
        iVar7 = FUN_00406ce0();
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar7 == -1) {
          FUN_00649720();
          piVar8 = (int *)0x0;
        }
        else {
          uVar4 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
          piVar8 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
          FUN_00649720();
        }
        fVar14 = (float10)FUN_0049e280();
        (**(code **)(*piVar8 + 0x28))();
        FUN_004357e0();
        fStack_48 = fStack_a0;
        fStack_4c = fStack_a4;
        fStack_44 = fStack_9c;
        pfVar11 = (float *)FUN_0059b420();
        *pfVar11 = fStack_4c;
        pfVar11[1] = fStack_48;
        pfVar11[2] = fStack_44;
        pfVar11[3] = 0.0;
        pfVar11[4] = (float)fVar14;
        pfVar11[5] = 0.0;
        pfVar11[6] = 0.0;
        pfVar11[7] = 0.0;
        goto LAB_005972ff;
      }
      if (-1 < iVar7) goto LAB_005972ff;
    }
  }
  if (((uVar4 & 0x100) == 0) && (DAT_006e92e4 < fVar2)) {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  if ((-1 < (char)uVar4) && (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4)))) {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
LAB_005972ff:
  uVar12 = FUN_00595ad0();
  *(undefined4 *)(param_1 + 0x230) = uVar12;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

