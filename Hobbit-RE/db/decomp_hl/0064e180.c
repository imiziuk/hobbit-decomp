
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0064e180(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 local_684;
  int local_680;
  undefined4 local_67c [4];
  float local_66c;
  float local_65c;
  float local_64c;
  float local_63c;
  float local_62c;
  float local_61c;
  undefined1 local_600 [768];
  undefined1 local_300 [768];
  
  local_68c = 0x3f800000;
  local_688 = 0;
  local_684 = 0;
  FUN_004357e0(&local_68c);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(param_1);
  local_66c = (float)-fVar2;
  local_68c = 0;
  local_688 = 0x3f800000;
  local_684 = 0;
  FUN_004357e0(&local_68c);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(param_1);
  local_65c = (float)-fVar2;
  local_68c = 0;
  local_688 = 0;
  local_684 = 0x3f800000;
  FUN_004357e0(&local_68c);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(param_1);
  local_64c = (float)-fVar2;
  local_68c = 0xbf800000;
  local_688 = 0;
  local_684 = 0;
  FUN_004357e0(&local_68c);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  iVar1 = param_1 + 0xc;
  fVar2 = (float10)FUN_00402020(iVar1);
  local_63c = (float)-fVar2;
  local_68c = 0;
  local_688 = 0xbf800000;
  local_684 = 0;
  FUN_004357e0(&local_68c);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(iVar1);
  local_62c = (float)-fVar2;
  local_68c = 0;
  local_688 = 0;
  local_684 = 0xbf800000;
  FUN_004357e0(&local_68c);
  fVar2 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar2 == ((float10)_DAT_006e92f0 == fVar2)) ||
     (fVar2 < (float10)_DAT_006e92ec == (fVar2 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar2)));
  }
  fVar2 = (float10)FUN_00402020(iVar1);
  local_61c = (float)-fVar2;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_004484a0(param_2,param_3);
  iVar1 = FUN_004322c0(param_1);
  if (iVar1 != 0) {
    FUN_00401080(local_600,0xc,0x40,FUN_0041def0);
    FUN_00401080(local_300,0xc,0x40,FUN_0041def0);
    FUN_004482e0(local_600,local_67c,param_2,param_3);
    FUN_004482e0(local_300,&local_680,local_600,local_67c[0]);
    FUN_004482e0(local_600,local_67c,local_300,local_680);
    FUN_004482e0(local_300,&local_680,local_600,local_67c[0]);
    FUN_004482e0(local_600,local_67c,local_300,local_680);
    FUN_004482e0(local_300,&local_680,local_600,local_67c[0]);
    return local_680 != 0;
  }
  return false;
}

