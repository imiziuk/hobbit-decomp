
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bf630(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  float10 fVar9;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
  undefined4 local_9c;
  float local_98 [3];
  int local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_5c;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_2c;
  
  local_a0 = param_1[0x99];
  local_8c = param_1[0x99];
  piVar2 = param_1 + 0x75;
  local_88 = -(float)param_1[0x99];
  local_9c = 0;
  local_98[0] = 0.0;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = local_88;
  FUN_00401f00(param_1[0x75],param_1[0x76],param_1[0x77]);
  fVar9 = (float10)FUN_00402000();
  if (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4))) {
    fVar9 = -fVar9;
  }
  local_ac = (float)fVar9;
  FUN_00401f00(param_1[0x79],param_1[0x7a],param_1[0x7b]);
  fVar9 = (float10)FUN_00402000();
  if (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4))) {
    fVar9 = -fVar9;
  }
  local_a4 = (float)fVar9;
  FUN_00401f00(param_1[0x7d],param_1[0x7e],param_1[0x7f]);
  fVar9 = (float10)FUN_00402000();
  if (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4))) {
    fVar9 = -fVar9;
  }
  local_a8 = (float)fVar9;
  if ((((_DAT_006e9378 < local_ac) ||
       (local_ac < _DAT_006e9374 != (NAN(local_ac) || NAN(_DAT_006e9374)))) ||
      (_DAT_006e9378 < local_a4)) ||
     (((local_a4 < _DAT_006e9374 != (NAN(local_a4) || NAN(_DAT_006e9374)) ||
       (_DAT_006e9378 < local_a8)) ||
      (local_a8 < _DAT_006e9374 != (NAN(local_a8) || NAN(_DAT_006e9374)))))) {
    FUN_00424a30(piVar2);
    FUN_00424aa0();
    if (local_4c < DAT_006e92e8 == (NAN(local_4c) || NAN(DAT_006e92e8))) goto LAB_004bf8ce;
    if (_DAT_006e9370 < local_4c) {
      fVar9 = (float10)FUN_0064ca10(local_6c,local_5c);
      local_a8 = (float)fVar9;
      fVar9 = (float10)FUN_006c0370();
      local_ac = (float)-fVar9;
      fVar9 = (float10)FUN_0064ca10(local_50,local_48);
      local_a4 = (float)fVar9;
      goto LAB_004bf8ec;
    }
    fVar9 = (float10)FUN_0064ca10(local_68,local_70);
    local_ac = 1.5707964;
  }
  else if ((float)param_1[0x7e] < DAT_006e92e8 == (NAN((float)param_1[0x7e]) || NAN(DAT_006e92e8)))
  {
    local_70 = *piVar2;
    local_68 = param_1[0x77];
LAB_004bf8ce:
    fVar9 = (float10)FUN_0064ca10(local_68,local_70);
    fVar9 = -fVar9;
    local_ac = -1.5707964;
  }
  else {
    if (_DAT_006e9370 < (float)param_1[0x7e]) {
      fVar9 = (float10)FUN_0064ca10(param_1[0x76],param_1[0x7a]);
      local_a8 = (float)fVar9;
      fVar9 = (float10)FUN_006c0370();
      local_ac = (float)-fVar9;
      fVar9 = (float10)FUN_0064ca10(param_1[0x7d],param_1[0x7f]);
      local_a4 = (float)fVar9;
      goto LAB_004bf8ec;
    }
    fVar9 = (float10)FUN_0064ca10(param_1[0x77],*piVar2);
    local_ac = 1.5707964;
  }
  local_a8 = (float)fVar9;
  local_a4 = 0.0;
LAB_004bf8ec:
  FUN_00401f00(local_ac,local_a4,local_a8);
  pfVar8 = local_98;
  local_a8 = 5.60519e-45;
  do {
    FUN_0064c8e0(local_2c,&local_a4,&local_ac);
    fVar3 = pfVar8[-2];
    pfVar1 = pfVar8 + -2;
    iVar4 = *param_1;
    *pfVar1 = fVar3 * local_ac + local_a4 * *pfVar8;
    *pfVar8 = *pfVar8 * local_ac - fVar3 * local_a4;
    pfVar5 = (float *)(**(code **)(iVar4 + 0x28))();
    *pfVar1 = *pfVar1 + *pfVar5;
    pfVar8[-1] = pfVar5[1] + pfVar8[-1];
    *pfVar8 = pfVar5[2] + *pfVar8;
    uVar6 = FUN_00401f00(0x40400000,0x3f800000,0x40400000);
    uVar7 = FUN_00401f00(0,0,0);
    FUN_00488d30(s_FootfallHeavy_00724210,pfVar1,uVar7,uVar6);
    pfVar8 = pfVar8 + 3;
    local_a8 = (float)((int)local_a8 + -1);
  } while (local_a8 != 0.0);
  return;
}

