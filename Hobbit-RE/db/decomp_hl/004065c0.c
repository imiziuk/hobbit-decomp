
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004065c0(float *param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
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
  
  fVar4 = *param_1 * *param_1 + param_1[2] * param_1[2] + param_1[1] * param_1[1];
  if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
    fVar4 = -fVar4;
  }
  fVar5 = param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6];
  if (fVar5 < DAT_006e92e4 != (NAN(fVar5) || NAN(DAT_006e92e4))) {
    fVar5 = -fVar5;
  }
  fVar1 = param_1[8] * param_1[8] + param_1[9] * param_1[9] + param_1[10] * param_1[10];
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  if ((((_DAT_006e9378 < fVar4) || (fVar4 < _DAT_006e9374 != (NAN(fVar4) || NAN(_DAT_006e9374)))) ||
      (_DAT_006e9378 < fVar5)) ||
     (((fVar5 < _DAT_006e9374 != (NAN(fVar5) || NAN(_DAT_006e9374)) || (_DAT_006e9378 < fVar1)) ||
      (fVar1 < _DAT_006e9374 != (NAN(fVar1) || NAN(_DAT_006e9374)))))) {
    local_3c = param_1[1];
    local_40 = *param_1;
    local_38 = param_1[2];
    local_30 = param_1[4];
    local_34 = param_1[3];
    local_2c = param_1[5];
    local_24 = param_1[7];
    local_28 = param_1[6];
    local_20 = param_1[8];
    local_18 = param_1[10];
    local_1c = param_1[9];
    local_14 = param_1[0xb];
    local_c = param_1[0xd];
    local_10 = param_1[0xc];
    local_8 = param_1[0xe];
    local_4 = param_1[0xf];
    FUN_004068c0(&local_58);
    uVar2 = FUN_00401f00(DAT_006e92e8 / local_58,DAT_006e92e8 / local_54,DAT_006e92e8 / local_50);
    FUN_00406940(uVar2);
    fVar4 = local_38;
    fVar5 = local_40;
    if (local_1c < DAT_006e92e8 == (NAN(local_1c) || NAN(DAT_006e92e8))) goto LAB_0040687b;
    if (_DAT_006e9370 < local_1c) {
      fVar3 = (float10)FUN_0064ca10(local_3c,local_2c);
      local_5c = (float)fVar3;
      fVar3 = (float10)FUN_006c0370();
      local_60 = (float)-fVar3;
      fVar3 = (float10)FUN_0064ca10(local_20,local_18);
      goto LAB_00406897;
    }
    fVar3 = (float10)FUN_0064ca10(local_38,local_40);
    local_60 = 1.5707964;
  }
  else if (param_1[9] < DAT_006e92e8 == (NAN(param_1[9]) || NAN(DAT_006e92e8))) {
    fVar4 = param_1[2];
    fVar5 = *param_1;
LAB_0040687b:
    fVar3 = (float10)FUN_0064ca10(fVar4,fVar5);
    fVar3 = -fVar3;
    local_60 = -1.5707964;
  }
  else {
    if (_DAT_006e9370 < param_1[9]) {
      fVar3 = (float10)FUN_0064ca10(param_1[1],param_1[5]);
      local_5c = (float)fVar3;
      fVar3 = (float10)FUN_006c0370();
      local_60 = (float)-fVar3;
      fVar3 = (float10)FUN_0064ca10(param_1[8],param_1[10]);
      goto LAB_00406897;
    }
    fVar3 = (float10)FUN_0064ca10(param_1[2],*param_1);
    local_60 = 1.5707964;
  }
  local_5c = (float)fVar3;
  fVar3 = (float10)DAT_006e92e4;
LAB_00406897:
  *param_2 = local_60;
  param_2[2] = local_5c;
  param_2[1] = (float)fVar3;
  return;
}

