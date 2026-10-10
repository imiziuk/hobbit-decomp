
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bf3a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  puVar1 = (undefined4 *)(param_1 + 0x1d4);
  fVar7 = *(float *)(param_1 + 0x1d8) * *(float *)(param_1 + 0x1d8) +
          *(float *)(param_1 + 0x1d4) * *(float *)(param_1 + 0x1d4) +
          *(float *)(param_1 + 0x1dc) * *(float *)(param_1 + 0x1dc);
  if (fVar7 < DAT_006e92e4 != (NAN(fVar7) || NAN(DAT_006e92e4))) {
    fVar7 = -fVar7;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1e4);
  uVar3 = *(undefined4 *)(param_1 + 0x1e8);
  uVar4 = *(undefined4 *)(param_1 + 0x1ec);
  fVar8 = (float10)FUN_00402000();
  if (fVar8 < (float10)DAT_006e92e4 != (NAN(fVar8) || NAN((float10)DAT_006e92e4))) {
    fVar8 = -fVar8;
  }
  fVar5 = (float)fVar8;
  FUN_00401f00(*(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x1f8),
               *(undefined4 *)(param_1 + 0x1fc));
  fVar8 = (float10)FUN_00402000();
  if (fVar8 < (float10)DAT_006e92e4 != (NAN(fVar8) || NAN((float10)DAT_006e92e4))) {
    fVar8 = -fVar8;
  }
  fVar6 = (float)fVar8;
  if ((((_DAT_006e9378 < fVar7) || (fVar7 < _DAT_006e9374 != (NAN(fVar7) || NAN(_DAT_006e9374)))) ||
      (_DAT_006e9378 < fVar5)) ||
     (((fVar5 < _DAT_006e9374 != (NAN(fVar5) || NAN(_DAT_006e9374)) || (_DAT_006e9378 < fVar6)) ||
      (fVar6 < _DAT_006e9374 != (NAN(fVar6) || NAN(_DAT_006e9374)))))) {
    FUN_00424a30(puVar1);
    FUN_00424aa0();
    if (local_1c < DAT_006e92e8 == (NAN(local_1c) || NAN(DAT_006e92e8))) goto LAB_004bf5ce;
    if (_DAT_006e9370 < local_1c) {
      fVar8 = (float10)FUN_0064ca10(local_3c,local_2c);
      local_64 = (float)fVar8;
      fVar8 = (float10)FUN_006c0370();
      local_5c = (float)-fVar8;
      fVar8 = (float10)FUN_0064ca10(local_20,local_18);
      local_60 = (float)fVar8;
      goto LAB_004bf5ec;
    }
    fVar8 = (float10)FUN_0064ca10(local_38,local_40);
    local_5c = 1.5707964;
  }
  else if (*(float *)(param_1 + 0x1f8) < DAT_006e92e8 ==
           (NAN(*(float *)(param_1 + 0x1f8)) || NAN(DAT_006e92e8))) {
    local_40 = *puVar1;
    local_38 = *(undefined4 *)(param_1 + 0x1dc);
LAB_004bf5ce:
    fVar8 = (float10)FUN_0064ca10(local_38,local_40);
    fVar8 = -fVar8;
    local_5c = -1.5707964;
  }
  else {
    if (_DAT_006e9370 < *(float *)(param_1 + 0x1f8)) {
      fVar8 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0x1d8),
                                    *(undefined4 *)(param_1 + 0x1e8));
      local_64 = (float)fVar8;
      fVar8 = (float10)FUN_006c0370();
      local_5c = (float)-fVar8;
      fVar8 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x1fc))
      ;
      local_60 = (float)fVar8;
      goto LAB_004bf5ec;
    }
    fVar8 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0x1dc),*puVar1);
    local_5c = 1.5707964;
  }
  local_64 = (float)fVar8;
  local_60 = 0.0;
LAB_004bf5ec:
  FUN_00401f00(local_5c,local_60,local_64);
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  return;
}

