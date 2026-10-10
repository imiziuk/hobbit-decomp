
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006093f0(int param_1,float param_2,float param_3,undefined4 param_4)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_2 == 0.0) {
    return param_4;
  }
  iVar4 = *(int *)(param_1 + 8);
  *(float *)(param_1 + 0xdc) = param_3 + *(float *)(param_1 + 0xdc);
  local_18 = *(float *)(iVar4 + 400);
  local_14 = *(float *)(iVar4 + 0x194);
  local_10 = *(float *)(iVar4 + 0x198);
  fVar6 = (float10)FUN_0064ca10(local_18,local_10);
  fVar1 = (float10)_DAT_006e9368;
  fVar7 = ((float10)*(float *)(param_1 + 0xe0) - (float10)(float)(fVar6 + fVar1)) +
          (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar7) ||
     (fVar7 < (float10)_DAT_006e959c != (NAN(fVar7) || NAN((float10)_DAT_006e959c)))) {
    fVar7 = (float10)FUN_0064c6b0((float)fVar7,0x40c90fdb);
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
  param_2 = (float)(fVar7 - (float10)_DAT_006e9368);
  iVar4 = FUN_005af120();
  iVar4 = *(int *)(*(int *)(iVar4 + 0x304) + 400);
  iVar5 = FUN_00566dd0();
  if (iVar5 == 1) {
    if (param_2 <= _DAT_006f55b0) {
      if (param_2 < _DAT_006f55ac != (NAN(param_2) || NAN(_DAT_006f55ac))) {
        param_2 = -0.34906587;
      }
    }
    else {
      param_2 = 0.34906587;
    }
    FUN_0064c8e0(0,&local_20,&local_28);
    FUN_0064c8e0(param_2 + (float)(fVar6 + fVar1),&local_24,&local_1c);
    local_c = local_24 * local_28;
    local_8 = -local_20;
    local_4 = local_1c * local_28;
    fVar2 = DAT_006e92e8 / SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4);
    iVar5 = FUN_0064cf30(fVar2);
    if (iVar5 == 0) {
      local_4 = 0.0;
      fVar3 = DAT_006e92e4;
      fVar2 = DAT_006e92e4;
    }
    else {
      fVar2 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10) * fVar2;
      local_4 = local_4 * fVar2;
      fVar3 = local_c * fVar2;
      fVar2 = local_8 * fVar2;
    }
    *(float *)(iVar4 + 0x18) = fVar3;
    *(float *)(iVar4 + 0x20) = local_4;
    *(float *)(iVar4 + 0x1c) = fVar2;
  }
  fVar2 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  fVar3 = *(float *)(param_1 + 0xc4) + _DAT_006e9358;
  if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
    return 6;
  }
  if (*(float *)(param_1 + 0xbc) <= *(float *)(param_1 + 0xb8)) {
    return 0xb;
  }
  if (((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) &&
     (param_4 = 8,
     *(float *)(param_1 + 0xdc) < _DAT_006e999c !=
     (NAN(*(float *)(param_1 + 0xdc)) || NAN(_DAT_006e999c)))) {
    *(undefined4 *)(param_1 + 0xdc) = 0x40000000;
    return 8;
  }
  return param_4;
}

