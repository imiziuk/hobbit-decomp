
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00599ec0(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__UpdatePosition_00743280);
  local_4 = 0;
  if ((*(int *)(param_1 + 0x158) == 0) ||
     ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x400) == 0x400)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  piVar3 = (int *)FUN_00592920();
  pfVar4 = (float *)(**(code **)(*piVar3 + 0x28))();
  fStack_24 = *pfVar4;
  fStack_20 = pfVar4[1];
  fStack_1c = pfVar4[2];
  pfVar4 = (float *)(param_1 + 0x21c);
  fStack_30 = *(float *)(*(int *)(param_1 + 0x158) + 4);
  fStack_18 = fStack_24;
  fStack_14 = fStack_20;
  fStack_10 = fStack_1c;
  if (_DAT_006ec0b4 <
      *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x224) +
      *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x220) + *pfVar4 * *pfVar4) {
    iVar5 = FUN_005928c0();
    iVar1 = *piVar3;
    if (iVar5 == 0) {
      iVar5 = FUN_00592920(2,1);
      uVar9 = *(undefined4 *)(iVar5 + 0xd4);
    }
    else {
      iVar5 = FUN_00592920(0,1);
      uVar9 = *(undefined4 *)(iVar5 + 0xd4);
    }
    (**(code **)(iVar1 + 0x15c))(&fStack_24,pfVar4,0,uVar9);
    lVar8 = FUN_00469820();
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x23c) = 0;
    }
    else {
      *(float *)(param_1 + 0x23c) = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x23c);
    }
    (**(code **)(*piVar3 + 0x14))(&fStack_3c,0);
  }
  FUN_00592920();
  fVar7 = (float10)FUN_004a3370();
  fStack_3c = (float)fVar7;
  fVar7 = (float10)*(float *)(param_1 + 0x228) + (float10)_DAT_006e9368;
  fStack_34 = (float)fVar7;
  if (((float10)_DAT_006e95a0 < fVar7) ||
     (fVar7 < (float10)_DAT_006e959c != (NAN(fVar7) || NAN((float10)_DAT_006e959c)))) {
    fVar7 = (float10)FUN_0064c6b0(fStack_34,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar7) {
    do {
      fVar7 = fVar7 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar7);
  }
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar7 = fVar7 + (float10)_DAT_006e9598;
    } while (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4)));
  }
  fStack_38 = (float)(fVar7 - (float10)_DAT_006e9368);
  fVar7 = ((float10)*(float *)(param_1 + 0x234) - (float10)fStack_3c) + (float10)_DAT_006e9368;
  fStack_34 = (float)fVar7;
  if (((float10)_DAT_006e95a0 < fVar7) ||
     (fVar7 < (float10)_DAT_006e959c != (NAN(fVar7) || NAN((float10)_DAT_006e959c)))) {
    fVar7 = (float10)FUN_0064c6b0(fStack_34,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar7) {
    do {
      fVar7 = fVar7 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar7);
  }
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar7 = fVar7 + (float10)_DAT_006e9598;
    } while (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4)));
  }
  uVar6 = *(uint *)(param_1 + 0x4c);
  fVar10 = (float)(fVar7 - (float10)_DAT_006e9368);
  fStack_34 = *(float *)(*(int *)(param_1 + 0x158) + 0x4c) * *(float *)(param_1 + 0x294);
  if ((uVar6 & 1) == 0) {
    fVar2 = fVar10;
    if (fVar10 < DAT_006e92e4 != (NAN(fVar10) || NAN(DAT_006e92e4))) {
      fVar2 = -fVar10;
    }
    if (*(float *)(*(int *)(param_1 + 0x34) + 0x10) < fVar2) {
      uVar6 = uVar6 | 1;
      goto LAB_0059a1b2;
    }
  }
  else if ((fVar10 < _DAT_006ebfe4 != (NAN(fVar10) || NAN(_DAT_006ebfe4))) &&
          (_DAT_006f40cc < fVar10)) {
    uVar6 = uVar6 & 0xfffffffe;
LAB_0059a1b2:
    *(uint *)(param_1 + 0x4c) = uVar6;
  }
  if (((*(byte *)(param_1 + 0x4c) & 1) == 0) && (fStack_30 == 8.26766e-44)) {
    FUN_00595730();
  }
  if ((*(int *)(param_1 + 0x158) == 0) || (*(int *)(*(int *)(param_1 + 0x158) + 4) != 0x3b)) {
    if (fVar10 <= _DAT_006e9360) {
      if (fVar10 < _DAT_006f3ee0 == (NAN(fVar10) || NAN(_DAT_006f3ee0))) goto LAB_0059a28c;
      fStack_34 = -fStack_34;
      if (fStack_34 < fVar10) goto LAB_0059a280;
    }
    else if (fVar10 < fStack_34 != (NAN(fVar10) || NAN(fStack_34))) {
LAB_0059a280:
      fStack_34 = fVar10;
    }
  }
  else if (fStack_38 <= _DAT_006e9360) {
    if (fStack_38 < _DAT_006f3ee0 == (NAN(fStack_38) || NAN(_DAT_006f3ee0))) goto LAB_0059a28c;
    fStack_34 = _DAT_006f40c8;
    if (_DAT_006f40c8 < fStack_38) {
      fStack_34 = fStack_38;
    }
  }
  else {
    fStack_34 = _DAT_006e9368;
    if (fStack_38 < _DAT_006e9368 != (NAN(fStack_38) || NAN(_DAT_006e9368))) {
      fStack_34 = fStack_38;
    }
  }
  fStack_3c = fStack_34 + fStack_3c;
LAB_0059a28c:
  fStack_30 = fStack_20 - fStack_14;
  fStack_38 = fStack_24 - fStack_18;
  fStack_34 = DAT_006e92e8 / *(float *)(param_1 + 0x294);
  *pfVar4 = fStack_38 * fStack_34;
  *(float *)(param_1 + 0x220) = fStack_30 * fStack_34;
  *(float *)(param_1 + 0x224) = (fStack_1c - fStack_10) * fStack_34;
  fVar10 = fStack_3c;
  FUN_00592920(fStack_3c);
  FUN_004a3330(fVar10);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

