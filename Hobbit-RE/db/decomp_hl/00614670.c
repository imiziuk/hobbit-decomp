
void __thiscall FUN_00614670(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e44c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(&local_2c,s__s_Head_Volume_007458b4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x2f;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Ceiling_Volume_0074978c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    local_2c = FUN_00425010();
    *(undefined4 *)(local_2c + 0x80) = 0xf;
    FUN_00647d10(local_2c,uVar1);
    *(undefined4 *)(local_2c + 0x84) = 0;
    *(undefined4 *)(local_2c + 0x100) = 0x2f;
    *(undefined4 *)(local_2c + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_2c,s__s_Fire_Tweaks_0074977c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    local_28 = FUN_00425010();
    *(undefined4 *)(local_28 + 0x80) = 5;
    FUN_00647d10(local_28,uVar1);
    *(undefined4 *)(local_28 + 0x84) = 0x15;
    *(undefined4 *)(local_28 + 0x100) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_2c,s__s_Fire_Tweaks_Min_Start_Velocit_00749758,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 3;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    local_28 = FUN_00425010();
    *(undefined4 *)(local_28 + 0x80) = 2;
    FUN_00647d10(local_28,uVar1);
    *(undefined4 *)(local_28 + 0x84) = 0;
    *(undefined4 *)(local_28 + 0xf8) = 0x800000;
    *(undefined4 *)(local_28 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_2c,s__s_Fire_Tweaks_Max_Start_Velocit_00749734,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 4;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    local_28 = FUN_00425010();
    *(undefined4 *)(local_28 + 0x80) = 2;
    FUN_00647d10(local_28,uVar1);
    *(undefined4 *)(local_28 + 0x84) = 0;
    *(undefined4 *)(local_28 + 0xf8) = 0x800000;
    *(undefined4 *)(local_28 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Min_End_Velocity_00749714,*(undefined4 *)(param_1 + 0x10))
  ;
  local_4 = 5;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Max_End_Velocity_007496f4,*(undefined4 *)(param_1 + 0x10))
  ;
  local_4 = 6;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Min_Lifetime_007496d8,*(undefined4 *)(param_1 + 0x10));
  local_4 = 7;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Max_Lifetime_007496bc,*(undefined4 *)(param_1 + 0x10));
  local_4 = 8;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Min_Breath_In_Tim_00749698,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 9;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Max_Breath_In_Tim_00749674,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 10;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Min_Breath_Out_Ti_00749650,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 0xb;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Max_Breath_Out_Ti_0074962c,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 0xc;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Min_Segment_Start_00749608,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 0xd;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Max_Segment_Start_007495e4,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 0xe;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Min_Segment_End_007495c4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0xf;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Max_Segment_End_007495a4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0x10;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Min_Angle_Devianc_00749580,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 0x11;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_28,s__s_Fire_Tweaks_Max_Angle_Devianc_0074955c,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 0x12;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_2c,s__s_Safety_Zone_Count_00749544,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0x13;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    local_28 = FUN_00425010();
    *(undefined4 *)(local_28 + 0x80) = 1;
    FUN_00647d10(local_28,uVar1);
    *(undefined4 *)(local_28 + 0x84) = 0;
    *(undefined4 *)(local_28 + 0xf0) = 0;
    *(undefined4 *)(local_28 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x578)) {
    do {
      FUN_00649920(&local_2c,s__s_Safety_Zone__d_00749530,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 0x14;
      uVar1 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        local_28 = FUN_00425010();
        *(undefined4 *)(local_28 + 0x80) = 5;
        FUN_00647d10(local_28,uVar1);
        *(undefined4 *)(local_28 + 0x84) = 0x15;
        *(undefined4 *)(local_28 + 0x100) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_24,s__s_Safety_Zone__d_Blocker_00749514,*(undefined4 *)(param_1 + 0x10),
                   iVar2);
      local_4 = 0x15;
      uVar1 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        local_28 = FUN_00425010();
        *(undefined4 *)(local_28 + 0x80) = 0xf;
        FUN_00647d10(local_28,uVar1);
        *(undefined4 *)(local_28 + 0x84) = 0;
        *(undefined4 *)(local_28 + 0x100) = 5;
        *(undefined4 *)(local_28 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_20,s__s_Safety_Zone__d_Glow_007494fc,*(undefined4 *)(param_1 + 0x10),iVar2)
      ;
      local_4 = 0x16;
      uVar1 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        local_28 = FUN_00425010();
        *(undefined4 *)(local_28 + 0x80) = 0xf;
        FUN_00647d10(local_28,uVar1);
        *(undefined4 *)(local_28 + 0x84) = 0;
        *(undefined4 *)(local_28 + 0x100) = 5;
        *(undefined4 *)(local_28 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_1c,s__s_Safety_Zone__d_Volume_007494e0,*(undefined4 *)(param_1 + 0x10),
                   iVar2);
      local_4 = 0x17;
      uVar1 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        local_28 = FUN_00425010();
        *(undefined4 *)(local_28 + 0x80) = 0xf;
        FUN_00647d10(local_28,uVar1);
        *(undefined4 *)(local_28 + 0x84) = 0;
        *(undefined4 *)(local_28 + 0x100) = 0x2f;
        *(undefined4 *)(local_28 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_18,s__s_Safety_Zone__d_Flags_007494c8,*(undefined4 *)(param_1 + 0x10),iVar2
                  );
      local_4 = 0x18;
      uVar1 = FUN_00649940();
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,uVar1);
      *(undefined4 *)(iVar3 + 0x84) = 0x38;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_14,s__s_Safety_Zone__d_Hit_Count_007494ac,*(undefined4 *)(param_1 + 0x10),
                   iVar2);
      local_4 = 0x19;
      uVar1 = FUN_00649940();
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,uVar1);
      *(undefined4 *)(iVar3 + 0x84) = 0x20;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_10,s__s_Safety_Zone__d_Alpha_00749494,*(undefined4 *)(param_1 + 0x10),iVar2
                  );
      local_4 = 0x1a;
      uVar1 = FUN_00649940();
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 2;
      FUN_00647d10(iVar3,uVar1);
      *(undefined4 *)(iVar3 + 0x84) = 0x38;
      *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x578));
  }
  ExceptionList = local_c;
  return;
}

