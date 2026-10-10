
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056f5b0(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 **ppuVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  undefined4 **local_6c;
  float *local_68;
  float *local_64;
  float local_50;
  undefined4 *local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 *local_34 [4];
  float *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db640;
  local_c = ExceptionList;
  local_64 = (float *)s_camera_mgr__AdvanceManualControl_0073f94c;
  local_68 = (float *)0x56f5dc;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  local_64 = (float *)0x56f5e7;
  iVar10 = FUN_0041bcc0();
  if ((*(int *)(iVar10 + 0x6f8) == 0) || (*(int *)(*(int *)(param_1 + 0x730) + 0x54) == 0)) {
    if ((*(uint *)(param_1 + 0x484) & 0x100) != 0) {
      local_64 = (float *)0x56f8c0;
      iVar10 = FUN_00571230();
      fVar6 = *(float *)(iVar10 + 0xdc) - *(float *)(param_1 + 0x4b0);
      local_44 = *(float *)(iVar10 + 0xd8) - *(float *)(param_1 + 0x4ac);
      fVar2 = *(float *)(iVar10 + 0xd4) - *(float *)(param_1 + 0x4a8);
      if ((*(int *)(iVar10 + 0xb4) == 0) &&
         (*(float *)(param_1 + 0x680) < SQRT(fVar6 * fVar6 + local_44 * local_44 + fVar2 * fVar2)))
      {
        *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfffffeff;
      }
      local_64 = (float *)0x56f932;
      FUN_00429100();
    }
    if (-1 < *(char *)(param_1 + 0x484)) goto LAB_0056fd54;
    fVar2 = *(float *)(param_1 + 0x67c);
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      fVar2 = -fVar2;
    }
    if (fVar2 <= DAT_006e92e4) {
      fVar2 = *(float *)(param_1 + 0x678);
      if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
        fVar2 = -fVar2;
      }
      if (fVar2 <= DAT_006e92e4) goto LAB_0056fd54;
    }
    local_64 = (float *)0x56f98f;
    fVar11 = (float10)FUN_0056bc20();
    local_3c = (float)fVar11;
    pfVar1 = (float *)(param_1 + 0x4a8);
    ppuVar3 = (undefined4 **)(*(float *)(param_1 + 0x4b0) - *(float *)(param_1 + 0x4a4));
    fVar2 = *(float *)(param_1 + 0x4ac) - *(float *)(param_1 + 0x4a0);
    fVar6 = *pfVar1 - *(float *)(param_1 + 0x49c);
    local_40 = (float)ppuVar3 * (float)ppuVar3;
    local_44 = fVar6 * fVar6;
    local_64 = (float *)SQRT(local_44 + local_40);
    local_6c = (undefined4 **)0x56f9f3;
    local_68 = (float *)fVar2;
    local_38 = (float)local_64;
    fVar11 = (float10)FUN_0064ca10();
    local_34[0] = (undefined1 *)(float)-fVar11;
    local_6c = ppuVar3;
    fVar11 = (float10)FUN_0064ca10(fVar6);
    iVar10 = *(int *)(param_1 + 0x730);
    local_38 = (float)(fVar11 - (float10)*(float *)(param_1 + 0x678));
    ppuVar3 = (undefined4 **)((float)local_34[0] - *(float *)(param_1 + 0x67c));
    ppuVar8 = ppuVar3;
    if ((float)ppuVar3 < *(float *)(iVar10 + 100) ==
        (NAN((float)ppuVar3) || NAN(*(float *)(iVar10 + 100)))) {
      ppuVar8 = *(undefined4 ***)(iVar10 + 100);
    }
    if (*(float *)(iVar10 + 0x60) <= (float)ppuVar8) {
      if ((float)ppuVar3 < *(float *)(iVar10 + 100) ==
          (NAN((float)ppuVar3) || NAN(*(float *)(iVar10 + 100)))) {
        ppuVar3 = *(undefined4 ***)(iVar10 + 100);
      }
    }
    else {
      ppuVar3 = *(undefined4 ***)(iVar10 + 0x60);
    }
    local_50 = fVar2 * fVar2 + local_44 + local_40;
    fVar2 = SQRT(local_50);
    if (fVar2 < local_3c == (NAN(fVar2) || NAN(local_3c))) {
      local_50 = SQRT(local_50);
    }
    else {
      local_50 = local_3c;
    }
    *(undefined4 ***)(param_1 + 0x734) = ppuVar3;
    local_64 = &local_3c;
    local_68 = &local_40;
    local_6c = ppuVar3;
    FUN_0064c8e0();
    FUN_0064c8e0(local_38,local_34,&local_44);
    fVar2 = (float)local_34[0] * local_3c;
    local_64 = (float *)0x20049810;
    local_34[0] = (undefined1 *)(local_44 * local_3c * local_50);
    local_6c = &local_24;
    local_3c = -local_40 * local_50;
    local_40 = fVar2 * local_50;
    local_1c = *(float *)(param_1 + 0x4b0) - (float)local_34[0];
    local_20 = *(float *)(param_1 + 0x4ac) - local_3c;
    local_24 = (float *)(*pfVar1 - local_40);
    fVar2 = *(float *)(*(int *)(param_1 + 0x730) + 0xc4);
    local_68 = (float *)(fVar2 + fVar2);
    FUN_005795c0(*(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494),pfVar1);
    local_64 = (float *)0x1;
    local_68 = (float *)0x56fb57;
    FUN_005798f0();
    local_64 = (float *)0x56fb61;
    FUN_00577e70();
    local_44 = 0.0;
    if (0 < DAT_00773970) {
      local_48 = &DAT_00773520;
      do {
        uVar4 = *local_48;
        uVar5 = local_48[1];
        local_64 = (float *)s_obj_mgr__LockObject_Guid__0071cef0;
        local_68 = (float *)0x56fb93;
        FUN_00649600();
        local_4._0_1_ = 1;
        local_6c = (float **)0x56fba4;
        local_68 = (float *)uVar4;
        local_64 = (float *)uVar5;
        iVar10 = FUN_00406ce0();
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar10 == -1) {
          local_64 = (float *)0x56fbb7;
          FUN_00649720();
        }
        else {
          local_64 = (float *)0x56fbd7;
          FUN_00649720();
        }
        local_64 = (float *)0x56fbde;
        iVar10 = FUN_004ab470();
        if (iVar10 == 0) {
          fVar2 = (float)(&DAT_007734f0)[(int)local_44 * 0x12];
          local_18 = (float)(&DAT_00773500)[(int)local_44 * 0x12];
          local_14 = (float)(&DAT_00773504)[(int)local_44 * 0x12];
          local_10 = (float)(&DAT_00773508)[(int)local_44 * 0x12];
          local_64 = &local_3c;
          local_68 = &local_40;
          local_6c = ppuVar3;
          FUN_0064c8e0();
          FUN_0064c8e0(local_38,local_34,&local_44);
          fVar6 = (float)local_34[0] * local_3c;
          fVar7 = local_44 * local_3c;
          local_44 = fVar2 * local_50;
          local_3c = *(float *)(param_1 + 0x4ac) - -local_40 * local_44;
          local_38 = *pfVar1 - fVar6 * local_44;
          local_1c = local_10 + (*(float *)(param_1 + 0x4b0) - fVar7 * local_44);
          local_20 = local_14 + local_3c;
          local_24 = (float *)(local_38 + local_18);
          break;
        }
        local_44 = (float)((int)local_44 + 1);
        local_48 = local_48 + 0x12;
      } while ((int)local_44 < DAT_00773970);
    }
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0x100;
    fVar2 = local_1c - *(float *)(param_1 + 0x4b0);
    fVar6 = local_20 - *(float *)(param_1 + 0x4ac);
    local_34[0] = (undefined1 *)&local_6c;
    *(float *)(param_1 + 0x680) =
         SQRT(fVar2 * fVar2 +
              fVar6 * fVar6 + ((float)local_24 - *pfVar1) * ((float)local_24 - *pfVar1));
    local_6c = (undefined4 **)local_24;
    local_68 = (float *)local_20;
    local_64 = (float *)local_1c;
    FUN_00570010();
  }
  else {
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfffffeff;
    local_64 = (float *)0x56f613;
    iVar10 = FUN_0041bcc0();
    if ((*(int *)(iVar10 + 0x710) == 0) || (-1 < *(char *)(param_1 + 0x484))) goto LAB_0056fd54;
    *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x4b8);
    local_64 = (float *)0x1;
    *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 0x4bc);
    local_68 = &local_38;
    local_6c = (undefined4 **)&local_18;
    *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x4c0);
    FUN_0056c890(param_1 + 0x688);
    local_64 = (float *)local_38;
    if (local_38 < DAT_006e92e4 != (NAN(local_38) || NAN(DAT_006e92e4))) {
      do {
        local_38 = local_38 + _DAT_006e9598;
        local_64 = (float *)local_38;
      } while (local_38 < DAT_006e92e4 != (NAN(local_38) || NAN(DAT_006e92e4)));
    }
    for (; _DAT_006e9598 < (float)local_64; local_64 = (float *)((float)local_64 - _DAT_006e9598)) {
    }
    iVar10 = *(int *)(param_1 + 0x730);
    local_68 = (float *)(*(float *)(param_1 + 0x734) - *(float *)(param_1 + 0x67c));
    fVar2 = (float)local_68;
    if ((float)local_68 < *(float *)(iVar10 + 100) ==
        (NAN((float)local_68) || NAN(*(float *)(iVar10 + 100)))) {
      fVar2 = *(float *)(iVar10 + 100);
    }
    if (*(float *)(iVar10 + 0x60) <= fVar2) {
      if ((float)local_68 < *(float *)(iVar10 + 100) ==
          (NAN((float)local_68) || NAN(*(float *)(iVar10 + 100)))) {
        local_68 = *(float **)(iVar10 + 100);
      }
    }
    else {
      local_68 = *(float **)(iVar10 + 0x60);
    }
    *(float **)(param_1 + 0x734) = local_68;
    fVar9 = (*(float *)(iVar10 + 0x2c) - *(float *)(iVar10 + 0x28)) *
            (((float)local_68 - *(float *)(iVar10 + 0x60)) /
            (*(float *)(iVar10 + 100) - *(float *)(iVar10 + 0x60))) + *(float *)(iVar10 + 0x28);
    fVar2 = *(float *)(param_1 + 0x4b0) - *(float *)(param_1 + 0x4a4);
    fVar7 = *(float *)(param_1 + 0x4ac) - *(float *)(param_1 + 0x4a0);
    fVar6 = *(float *)(param_1 + 0x4a8) - *(float *)(param_1 + 0x49c);
    fVar2 = SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
    if ((NAN(*(float *)(param_1 + 0x67c)) || NAN(DAT_006e92e4)) !=
        (*(float *)(param_1 + 0x67c) == DAT_006e92e4)) {
      if ((((NAN(*(float *)(param_1 + 0x4c4)) || NAN(*(float *)(param_1 + 0x4a8))) ==
            (*(float *)(param_1 + 0x4c4) == *(float *)(param_1 + 0x4a8))) ||
          ((NAN(*(float *)(param_1 + 0x4c8)) || NAN(*(float *)(param_1 + 0x4ac))) ==
           (*(float *)(param_1 + 0x4c8) == *(float *)(param_1 + 0x4ac)))) ||
         ((NAN(*(float *)(param_1 + 0x4cc)) || NAN(*(float *)(param_1 + 0x4b0))) ==
          (*(float *)(param_1 + 0x4cc) == *(float *)(param_1 + 0x4b0)))) {
        fVar6 = fVar2;
        if (fVar9 < fVar2 != (NAN(fVar9) || NAN(fVar2))) {
          fVar6 = fVar9;
        }
        if (*(float *)(iVar10 + 0x28) <= fVar6) {
          if (fVar9 < fVar2 == (NAN(fVar9) || NAN(fVar2))) goto LAB_0056f7e7;
        }
        else {
          fVar9 = *(float *)(iVar10 + 0x28);
        }
      }
      else {
LAB_0056f7e7:
        fVar9 = fVar2;
      }
    }
    fVar2 = (fVar9 - fVar2) * (float)_DAT_006f3ed0 + fVar2;
    local_6c = (undefined4 **)0x56f815;
    local_38 = (float)local_68;
    FUN_00440b10();
    local_34[0] = (undefined1 *)&local_6c;
    local_38 = local_14 * fVar2;
    local_3c = local_18 * fVar2;
    local_64 = (float *)(*(float *)(param_1 + 0x4b0) - local_10 * fVar2);
    local_68 = (float *)(*(float *)(param_1 + 0x4ac) - local_38);
    local_6c = (undefined4 **)(*(float *)(param_1 + 0x4a8) - local_3c);
    FUN_00570010();
    fVar2 = *(float *)(param_1 + 0x4a4) - *(float *)(param_1 + 0x4b0);
    fVar7 = *(float *)(param_1 + 0x4a0) - *(float *)(param_1 + 0x4ac);
    fVar6 = *(float *)(param_1 + 0x49c) - *(float *)(param_1 + 0x4a8);
    *(float *)(param_1 + 0x680) = SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
  }
  *(undefined4 *)(param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
LAB_0056fd54:
  local_4 = 0xffffffff;
  local_64 = (float *)0x56fd65;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

