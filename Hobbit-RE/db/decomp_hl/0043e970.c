
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043e970(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1ec] = 0;
  uVar2 = (uint)(_DAT_006e9590 < (float)param_1[0x272] - (float)param_1[0x273]);
  param_1[0x274] = uVar2;
  if (uVar2 == 0) {
    if (param_1[0x231] == 0) {
      local_c = 0x3f800000;
      local_8 = 0x3f800000;
      local_4 = 0x3f800000;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      uVar3 = (**(code **)(*param_1 + 0x28))(&local_18,&local_c);
      FUN_00488d30(s_Footfall_00724204,uVar3);
    }
    if ((param_1[0xf0] != 0) || (param_1[0xf4] != 0)) {
      if (param_1[0x237] == 0x17) {
        if (param_1[0xf4] == 0) {
          if (param_1[0xf0] == 0) goto LAB_0043eb7d;
          FUN_00549470(param_1 + 0x115);
          FUN_00549580(param_1 + 0x115);
          pcVar7 = s_STING_JUMP_STRIKE_LAND_00720584;
        }
        else {
          FUN_00549470(param_1 + 0x115);
          FUN_00549580(param_1 + 0x115);
          pcVar7 = s_STAFF_JUMP_STRIKE_LAND_0072059c;
        }
      }
      else {
LAB_0043eb7d:
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar7 = s_LAND_WEAPON_00720578;
      }
      uVar9 = 0;
      uVar8 = 1;
      uVar5 = 0;
      uVar3 = FUN_0053cc70(pcVar7);
      FUN_00540840(uVar3,uVar5,uVar8,uVar9);
      if (param_1[0x237] == 0x17) {
        if (param_1[0xf0] == 0) {
          if (param_1[0xf4] == 0) goto LAB_0043ec74;
          fVar6 = (float10)FUN_00427320();
        }
        else {
          fVar6 = (float10)FUN_004272d0();
        }
        if ((NAN(fVar6) || NAN((float10)DAT_006e92e8)) == (fVar6 == (float10)DAT_006e92e8)) {
          if ((NAN(fVar6) || NAN((float10)_DAT_006e999c)) == (fVar6 == (float10)_DAT_006e999c)) {
            if ((NAN(fVar6) || NAN((float10)_DAT_006e958c)) != (fVar6 == (float10)_DAT_006e958c)) {
              FUN_0044c120(2,0x3f800000);
            }
          }
          else {
            FUN_0044c120(1,0x3f800000);
          }
        }
        else {
          FUN_0044c120(0,0x3f800000);
        }
      }
      goto LAB_0043ec74;
    }
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    uVar3 = 0;
    pcVar7 = s_LAND_NO_WEAPON_00720568;
  }
  else {
    FUN_00434cf0(0xa8);
    FUN_00671150(0x3f19999a,0x3f800000,0);
    if (param_1[0x231] == 0) {
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_10 = 0x3f800000;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      uVar3 = (**(code **)(*param_1 + 0x28))(&local_c,&local_18);
      FUN_00488d30(s_FootfallHeavy_00724210,uVar3);
    }
    iVar4 = FUN_00647b10(0,1);
    piVar1 = param_1 + 0x115;
    if (iVar4 == 1) {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      uVar3 = 0x3e800000;
      pcVar7 = s_LAND_HARD1_0072031c;
    }
    else {
      FUN_00549470(piVar1);
      FUN_00549580(piVar1);
      uVar3 = 0x3e800000;
      pcVar7 = s_LAND_HARD_00720328;
    }
  }
  uVar9 = 1;
  uVar8 = 0;
  uVar5 = FUN_0053cc70(pcVar7);
  FUN_00540840(uVar5,uVar8,uVar9,uVar3);
LAB_0043ec74:
  iVar4 = FUN_00467eb0();
  if (iVar4 == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xd;
  }
  FUN_004430e0(uVar3);
  FUN_00442550(1);
  FUN_00446de0();
  param_1[0x119c] = 0;
  param_1[0x119d] = 0;
  param_1[0x17d8] = 0;
  return;
}

