
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056e500(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined1 local_c [12];
  
  fVar2 = DAT_006e92e8;
  fVar1 = param_2 / *(float *)(param_1 + 0x6b0);
  if (DAT_006e92e8 < fVar1 != (NAN(DAT_006e92e8) || NAN(fVar1))) {
    fVar1 = DAT_006e92e8;
  }
  fVar1 = fVar1 + *(float *)(param_1 + 0x6c0);
  *(float *)(param_1 + 0x6c0) = fVar1;
  if (fVar2 < fVar1) {
    if (*(int *)(param_1 + 0x710) == 0) {
      *(undefined4 *)(param_1 + 0x6c0) = 0x3f800000;
    }
    else {
      *(float *)(param_1 + 0x6c0) = fVar1 - DAT_006e92e8;
    }
  }
  *(float *)(param_1 + 0x6ec) =
       (*(float *)(param_1 + 0x6f0) - *(float *)(param_1 + 0x6e8)) * *(float *)(param_1 + 0x6c0) +
       *(float *)(param_1 + 0x6e8);
  iVar4 = FUN_004021c0(*(undefined4 *)(param_1 + 0x6b8),*(undefined4 *)(param_1 + 0x6bc));
  if (iVar4 == 0) {
    return;
  }
  FUN_00460c20(*(undefined4 *)(param_1 + 0x6c0),&local_98);
  local_a8 = local_60;
  *(undefined4 *)(param_1 + 0x49c) = local_68;
  *(float *)(param_1 + 0x4a4) = local_60;
  *(undefined4 *)(param_1 + 0x4a0) = local_64;
  FUN_00401f00(local_98,local_94,local_90);
  fVar7 = (float10)FUN_00402000();
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  fVar1 = (float)fVar7;
  FUN_00401f00(local_88,local_84,local_80);
  fVar7 = (float10)FUN_00402000();
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  fVar2 = (float)fVar7;
  FUN_00401f00(local_78,local_74,local_70);
  fVar7 = (float10)FUN_00402000();
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  fVar3 = (float)fVar7;
  if (((((_DAT_006e9378 < fVar1) || (fVar1 < _DAT_006e9374 != (NAN(fVar1) || NAN(_DAT_006e9374))))
       || (_DAT_006e9378 < fVar2)) ||
      ((fVar2 < _DAT_006e9374 != (NAN(fVar2) || NAN(_DAT_006e9374)) || (_DAT_006e9378 < fVar3)))) ||
     (fVar3 < _DAT_006e9374 != (NAN(fVar3) || NAN(_DAT_006e9374)))) {
    FUN_00424a30(&local_98);
    FUN_00424aa0();
    if (local_34 < DAT_006e92e8 == (NAN(local_34) || NAN(DAT_006e92e8))) goto LAB_0056e839;
    if (_DAT_006e9370 < local_34) {
      fVar7 = (float10)FUN_0064ca10(local_54,local_44);
      local_b4 = (float)fVar7;
      fVar7 = (float10)FUN_006c0370();
      local_bc = (float)-fVar7;
      fVar7 = (float10)FUN_0064ca10(local_38,local_30);
      local_b8 = (float)fVar7;
      goto LAB_0056e859;
    }
    fVar7 = (float10)FUN_0064ca10(local_50,local_58);
    local_bc = 1.5707964;
  }
  else {
    local_58 = local_98;
    local_50 = local_90;
    if (local_74 < DAT_006e92e8 == (NAN(local_74) || NAN(DAT_006e92e8))) {
LAB_0056e839:
      fVar7 = (float10)FUN_0064ca10(local_50,local_58);
      fVar7 = -fVar7;
      local_bc = -1.5707964;
    }
    else {
      if (_DAT_006e9370 < local_74) {
        fVar7 = (float10)FUN_0064ca10(local_94,local_84);
        local_b4 = (float)fVar7;
        fVar7 = (float10)FUN_006c0370();
        local_bc = (float)-fVar7;
        fVar7 = (float10)FUN_0064ca10(local_78,local_70);
        local_b8 = (float)fVar7;
        goto LAB_0056e859;
      }
      fVar7 = (float10)FUN_0064ca10(local_90,local_98);
      local_bc = 1.5707964;
    }
  }
  local_b4 = (float)fVar7;
  local_b8 = 0.0;
LAB_0056e859:
  FUN_00401f00(local_bc,local_b8,local_b4);
  *(float *)(param_1 + 0x4b4) = local_a8;
  if ((*(int *)(iVar4 + 0x130) != 0 || *(int *)(iVar4 + 0x134) != 0) &&
     (*(int *)(iVar4 + 0x144) != 0)) {
    FUN_004606e0(&local_b0);
    FUN_00401f00(local_b0 - *(float *)(param_1 + 0x4c4),local_ac - *(float *)(param_1 + 0x4c8),
                 local_a8 - *(float *)(param_1 + 0x4cc));
    iVar4 = *(int *)(param_1 + 0x730);
    if (*(float *)(iVar4 + 0xdc) <
        SQRT(local_9c * local_9c + local_a0 * local_a0 + local_a4 * local_a4)) {
      *(float *)(param_1 + 0x4ac) = local_ac;
      *(float *)(param_1 + 0x4b0) = local_a8;
      *(float *)(param_1 + 0x4a8) = local_b0;
      *(float *)(param_1 + 0x4c4) = local_b0;
      *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4ac);
      *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4b0);
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x484) & 0x200;
    fVar1 = DAT_006e92e8;
    if (uVar6 != 0) {
      fVar1 = _DAT_006e999c;
    }
    fVar2 = DAT_006e92e8;
    if (fVar1 * *(float *)(iVar4 + 0xd4) * param_2 <= DAT_006e92e8) {
      fVar1 = DAT_006e92e8;
      if (uVar6 != 0) {
        fVar1 = _DAT_006e999c;
      }
      fVar2 = fVar1 * *(float *)(iVar4 + 0xd4) * param_2;
    }
    fVar1 = DAT_006e92e8;
    if (uVar6 != 0) {
      fVar1 = _DAT_006e999c;
    }
    fVar1 = param_2 * fVar1 * *(float *)(iVar4 + 0xd0);
    fVar3 = DAT_006e92e8;
    if (DAT_006e92e8 < fVar1 == (NAN(DAT_006e92e8) || NAN(fVar1))) {
      fVar1 = DAT_006e92e8;
      if (uVar6 != 0) {
        fVar1 = _DAT_006e999c;
      }
      fVar3 = fVar1 * param_2 * *(float *)(iVar4 + 0xd0);
    }
    fVar1 = DAT_006e92e8;
    if (uVar6 != 0) {
      fVar1 = _DAT_006e999c;
    }
    local_b0 = DAT_006e92e8;
    if (fVar1 * *(float *)(iVar4 + 0xcc) * param_2 <= DAT_006e92e8) {
      fVar1 = DAT_006e92e8;
      if (uVar6 != 0) {
        fVar1 = _DAT_006e999c;
      }
      local_b0 = fVar1 * *(float *)(iVar4 + 0xcc) * param_2;
    }
    local_b0 = local_b0 * local_a4;
    FUN_00401f00(local_b0 + *(float *)(param_1 + 0x4c4),
                 fVar3 * local_a0 + *(float *)(param_1 + 0x4c8),
                 fVar2 * local_9c + *(float *)(param_1 + 0x4cc));
    *(float *)(param_1 + 0x4a8) = local_b0;
    *(float *)(param_1 + 0x4ac) = local_ac;
    *(float *)(param_1 + 0x4b0) = local_a8;
    return;
  }
  uVar5 = FUN_00401f00(0,0,0x42c80000);
  uVar5 = FUN_0041b9f0(local_c,uVar5);
  FUN_004357e0(uVar5);
  return;
}

