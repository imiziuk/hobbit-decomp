
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b9300(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  int *piVar7;
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_84 [8];
  float local_7c;
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_5c;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 local_30 [28];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4558;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_prop__PropSetL2W_0072c428);
  local_4 = 0;
  fVar1 = param_2[6];
  fVar2 = param_2[5];
  fVar3 = param_2[4];
  local_7c = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  param_1[0x4c] = (int)SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2)
  ;
  param_1[0x4e] = (int)local_7c;
  param_1[0x4d] = (int)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  FUN_00401f00(*param_2,param_2[1],param_2[2]);
  fVar6 = (float10)FUN_00402000();
  if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
    fVar6 = -fVar6;
  }
  fVar1 = (float)fVar6;
  FUN_00401f00(param_2[4],param_2[5],param_2[6]);
  fVar6 = (float10)FUN_00402000();
  if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
    fVar6 = -fVar6;
  }
  fVar2 = (float)fVar6;
  FUN_00401f00(param_2[8],param_2[9],param_2[10]);
  fVar6 = (float10)FUN_00402000();
  if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
    fVar6 = -fVar6;
  }
  fVar3 = (float)fVar6;
  if ((((_DAT_006e9378 < fVar1) || (fVar1 < _DAT_006e9374 != (NAN(fVar1) || NAN(_DAT_006e9374)))) ||
      (_DAT_006e9378 < fVar2)) ||
     (((fVar2 < _DAT_006e9374 != (NAN(fVar2) || NAN(_DAT_006e9374)) || (_DAT_006e9378 < fVar3)) ||
      (fVar3 < _DAT_006e9374 != (NAN(fVar3) || NAN(_DAT_006e9374)))))) {
    FUN_00424a30(param_2);
    FUN_00424aa0();
    if (local_4c < DAT_006e92e8 == (NAN(local_4c) || NAN(DAT_006e92e8))) goto LAB_004b95e6;
    if (_DAT_006e9370 < local_4c) {
      fVar6 = (float10)FUN_0064ca10(local_6c,local_5c);
      local_88 = (float)fVar6;
      fVar6 = (float10)FUN_006c0370();
      local_90 = (float)-fVar6;
      fVar6 = (float10)FUN_0064ca10(local_50,local_48);
      local_8c = (float)fVar6;
      goto LAB_004b9604;
    }
    fVar6 = (float10)FUN_0064ca10(local_68,local_70);
    local_90 = 1.5707964;
  }
  else if (param_2[9] < DAT_006e92e8 == (NAN(param_2[9]) || NAN(DAT_006e92e8))) {
    local_70 = *param_2;
    local_68 = param_2[2];
LAB_004b95e6:
    fVar6 = (float10)FUN_0064ca10(local_68,local_70);
    fVar6 = -fVar6;
    local_90 = -1.5707964;
  }
  else {
    if (_DAT_006e9370 < param_2[9]) {
      fVar6 = (float10)FUN_0064ca10(param_2[1],param_2[5]);
      local_88 = (float)fVar6;
      fVar6 = (float10)FUN_006c0370();
      local_90 = (float)-fVar6;
      fVar6 = (float10)FUN_0064ca10(param_2[8],param_2[10]);
      local_8c = (float)fVar6;
      goto LAB_004b9604;
    }
    fVar6 = (float10)FUN_0064ca10(param_2[2],*param_2);
    local_90 = 1.5707964;
  }
  local_88 = (float)fVar6;
  local_8c = 0.0;
LAB_004b9604:
  FUN_00401f00(local_90,local_8c,local_88);
  piVar7 = param_1 + 0x1a;
  FUN_004357e0(local_84);
  iVar4 = *param_1;
  uVar5 = FUN_004b9680(local_30);
  (**(code **)(iVar4 + 0x110))(uVar5,piVar7);
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_14;
  return;
}

