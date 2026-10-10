
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0058d110(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  uint local_2f8;
  uint local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  undefined1 local_2c0 [12];
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  undefined1 local_2a0 [96];
  undefined1 local_240 [288];
  undefined1 local_120 [288];
  
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  pfVar4 = param_2 + 2;
  iVar5 = 3;
  do {
    if (pfVar4[-2] < local_2f0 != (NAN(pfVar4[-2]) || NAN(local_2f0))) {
      local_2f0 = pfVar4[-2];
    }
    if (pfVar4[-1] < local_2ec != (NAN(pfVar4[-1]) || NAN(local_2ec))) {
      local_2ec = pfVar4[-1];
    }
    if (*pfVar4 < local_2e8 != (NAN(*pfVar4) || NAN(local_2e8))) {
      local_2e8 = *pfVar4;
    }
    if (local_2e4 < pfVar4[-2]) {
      local_2e4 = pfVar4[-2];
    }
    if (local_2e0 < pfVar4[-1]) {
      local_2e0 = pfVar4[-1];
    }
    if (local_2dc < *pfVar4 != (NAN(local_2dc) || NAN(*pfVar4))) {
      local_2dc = *pfVar4;
    }
    pfVar4 = pfVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_2f0 = local_2f0 - DAT_006e92e8;
  pfVar4 = param_1 + 3;
  local_2ec = local_2ec - DAT_006e92e8;
  local_2e8 = local_2e8 - DAT_006e92e8;
  local_2e4 = local_2e4 + DAT_006e92e8;
  local_2e0 = local_2e0 + DAT_006e92e8;
  local_2dc = local_2dc + DAT_006e92e8;
  if (((((*pfVar4 < local_2f0) || (local_2e4 < *param_1 != (NAN(local_2e4) || NAN(*param_1)))) ||
       (param_1[5] < local_2e8)) ||
      ((local_2dc < param_1[2] != (NAN(local_2dc) || NAN(param_1[2])) || (param_1[4] < local_2ec))))
     || (local_2e0 < param_1[1] != (NAN(local_2e0) || NAN(param_1[1])))) {
    return 0;
  }
  pfVar1 = param_2 + 6;
  pfVar2 = param_2 + 3;
  uVar3 = FUN_00405080(local_2c0,pfVar1,param_2);
  uVar3 = FUN_00405080(&local_2cc,pfVar2,param_2,uVar3);
  uVar3 = FUN_0042eb90(&local_2d8,uVar3);
  FUN_004357e0(uVar3);
  FUN_0042e1f0();
  fVar6 = (float10)FUN_00402020(param_2);
  local_2a8 = (float)-fVar6;
  local_2cc = *pfVar4;
  if (local_2b4 <= DAT_006e92e4) {
    local_2d8 = *param_1;
  }
  else {
    local_2d8 = local_2cc;
    local_2cc = *param_1;
  }
  local_2c8 = param_1[4];
  if (local_2b0 <= DAT_006e92e4) {
    local_2d4 = param_1[1];
  }
  else {
    local_2d4 = local_2c8;
    local_2c8 = param_1[1];
  }
  local_2c4 = param_1[5];
  if (local_2ac <= DAT_006e92e4) {
    local_2d0 = param_1[2];
  }
  else {
    local_2d0 = local_2c4;
    local_2c4 = param_1[2];
  }
  fVar6 = (float10)FUN_00439830(&local_2d8);
  local_2a4 = (float)fVar6;
  fVar6 = (float10)FUN_00439830(&local_2cc);
  if ((local_2a4 <= DAT_006e92e4) ||
     (fVar6 < (float10)DAT_006e92e4 == (NAN(fVar6) || NAN((float10)DAT_006e92e4)))) {
    return 0;
  }
  if (((*param_2 < *pfVar4 != (*param_2 == *pfVar4)) &&
      (((param_2[1] < param_1[4] != (param_2[1] == param_1[4]) &&
        (param_2[2] < param_1[5] != (param_2[2] == param_1[5]))) && (*param_1 <= *param_2)))) &&
     ((param_1[1] <= param_2[1] && (param_1[2] <= param_2[2])))) {
    return 1;
  }
  if (((*pfVar2 < *pfVar4 != (*pfVar2 == *pfVar4)) &&
      (param_2[4] < param_1[4] != (param_2[4] == param_1[4]))) &&
     ((param_2[5] < param_1[5] != (param_2[5] == param_1[5]) &&
      (((*param_1 <= *pfVar2 && (param_1[1] <= param_2[4])) && (param_1[2] <= param_2[5])))))) {
    return 1;
  }
  if ((((*pfVar1 < *pfVar4 != (*pfVar1 == *pfVar4)) &&
       (param_2[7] < param_1[4] != (param_2[7] == param_1[4]))) &&
      ((param_2[8] < param_1[5] != (param_2[8] == param_1[5]) &&
       ((*param_1 <= *pfVar1 && (param_1[1] <= param_2[7])))))) && (param_1[2] <= param_2[8])) {
    return 1;
  }
  FUN_00401f00(*pfVar2 + *param_2,param_2[4] + param_2[1],param_2[5] + param_2[2]);
  FUN_00401f00(local_2cc + *pfVar1,local_2c8 + param_2[7],local_2c4 + param_2[8]);
  FUN_00401f00(local_2d8 * _DAT_006ebfc0,local_2d4 * _DAT_006ebfc0,local_2d0 * _DAT_006ebfc0);
  iVar5 = FUN_00499e00(local_2c0);
  if (iVar5 != 0) {
    return 1;
  }
  FUN_00401080(local_240,0xc,0x18,FUN_0041def0);
  FUN_00401080(local_120,0xc,0x18,FUN_0041def0);
  FUN_004357e0(param_2);
  FUN_004357e0(pfVar2);
  FUN_004357e0(pfVar1);
  local_2f8 = 3;
  local_2f4 = 0;
  FUN_00401080(local_2a0,0x10,6,FUN_0041def0);
  uVar3 = FUN_00401f00(0x3f800000,0,0);
  FUN_00499d00(param_1,uVar3);
  uVar3 = FUN_00401f00(0,0x3f800000,0);
  FUN_00499d00(param_1,uVar3);
  uVar3 = FUN_00401f00(0,0,0x3f800000);
  FUN_00499d00(param_1,uVar3);
  uVar3 = FUN_00401f00(0xbf800000,0,0);
  FUN_00499d00(pfVar4,uVar3);
  uVar3 = FUN_00401f00(0,0xbf800000,0);
  FUN_00499d00(pfVar4,uVar3);
  uVar3 = FUN_00401f00(0,0,0xbf800000);
  FUN_00499d00(pfVar4,uVar3);
  FUN_004482e0(local_120,&local_2f4,local_240,local_2f8);
  if (local_2f4 == 0) {
    return local_2f4;
  }
  FUN_004482e0(local_240,&local_2f8,local_120,local_2f4);
  if (local_2f8 == 0) {
    return local_2f8;
  }
  FUN_004482e0(local_120,&local_2f4,local_240,local_2f8);
  if (local_2f4 != 0) {
    FUN_004482e0(local_240,&local_2f8,local_120,local_2f4);
    if (local_2f8 == 0) {
      return local_2f8;
    }
    FUN_004482e0(local_120,&local_2f4,local_240,local_2f8);
    if (local_2f4 != 0) {
      FUN_004482e0(local_240,&local_2f8,local_120,local_2f4);
      return (uint)(local_2f8 != 0);
    }
    return local_2f4;
  }
  return local_2f4;
}

