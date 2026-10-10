
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447870(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_18c;
  float local_17c;
  float local_16c;
  float local_15c;
  float local_14c;
  float local_13c;
  undefined1 local_120 [288];
  
  *param_5 = 0;
  local_1a4 = 0x3f800000;
  local_1a0 = 0;
  local_19c = 0;
  FUN_004357e0(&local_1a4);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(param_1);
  local_18c = (float)-fVar2;
  local_1a4 = 0;
  local_1a0 = 0x3f800000;
  local_19c = 0;
  FUN_004357e0(&local_1a4);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(param_1);
  local_17c = (float)-fVar2;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 0x3f800000;
  FUN_004357e0(&local_1a4);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(param_1);
  local_16c = (float)-fVar2;
  local_1a4 = 0xbf800000;
  local_1a0 = 0;
  local_19c = 0;
  FUN_004357e0(&local_1a4);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  iVar1 = param_1 + 0xc;
  fVar2 = (float10)FUN_00402020(iVar1);
  local_15c = (float)-fVar2;
  local_1a4 = 0;
  local_1a0 = 0xbf800000;
  local_19c = 0;
  FUN_004357e0(&local_1a4);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(iVar1);
  local_14c = (float)-fVar2;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 0xbf800000;
  FUN_004357e0(&local_1a4);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(iVar1);
  local_13c = (float)-fVar2;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_004484a0(param_2,param_3);
  iVar1 = FUN_004322c0(param_1);
  if (iVar1 != 0) {
    FUN_00401080(local_120,0xc,0x18,FUN_0041def0);
    FUN_004482e0(local_120,param_5,param_2,param_3);
    FUN_004482e0(param_4,param_5,local_120,*param_5);
    FUN_004482e0(local_120,param_5,param_4,*param_5);
    FUN_004482e0(param_4,param_5,local_120,*param_5);
    FUN_004482e0(local_120,param_5,param_4,*param_5);
    FUN_004482e0(param_4,param_5,local_120,*param_5);
  }
  return;
}

