
void __thiscall FUN_005bb880(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006def98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(&param_2,s__s_Awareness_00745ab8,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 2;
  FUN_00647d10(iVar2,uVar1);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Activation_007458a4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Activation_Activate_Volume_00745884,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x2f;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Activation_Deactivate_Volume_00745864,*(undefined4 *)(param_1 + 0x10));
  local_4 = 3;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x2f;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Activation_Is_Active_0074584c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 4;
  param_2 = FUN_00649940();
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,param_2);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Tail_Twitch_Tweaks_00745834,*(undefined4 *)(param_1 + 0x10));
  local_4 = 5;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Tail_Twitch_Tweaks_Tail_Volum_00745810,*(undefined4 *)(param_1 + 0x10))
  ;
  local_4 = 6;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x2f;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Tail_Twitch_Tweaks_Tail_Heigh_00745a94,*(undefined4 *)(param_1 + 0x10))
  ;
  local_4 = 7;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Tail_Twitch_Tweaks_Tail_Up_Ti_00745a70,*(undefined4 *)(param_1 + 0x10))
  ;
  local_4 = 8;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Tail_Twitch_Tweaks_Tail_Down_T_00745a48,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 9;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Tail_Active_007457d4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 10;
  param_2 = FUN_00649940();
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,param_2);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Cinematics_007457c4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0xb;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Cinematics_Death_Cinema_007457a8,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0xc;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x11;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_20,s__s_Fidget_Count_00745a38,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0xd;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 1;
    FUN_00647d10(iVar2,param_2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x134)) {
    do {
      FUN_00649920(local_20,s__s_Fidget__d_00745a28,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 0xe;
      param_2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 5;
        FUN_00647d10(iVar3,param_2);
        *(undefined4 *)(iVar3 + 0x84) = 0x15;
        *(undefined4 *)(iVar3 + 0x100) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_1c,s__s_Fidget__d_Volume_00745a14,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 0xf;
      param_2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 0xf;
        FUN_00647d10(iVar3,param_2);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0x100) = 0x2f;
        *(undefined4 *)(iVar3 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_18,s__s_Fidget__d_Treasure_007459fc,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 0x10;
      param_2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 0xf;
        FUN_00647d10(iVar3,param_2);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0x100) = 5;
        *(undefined4 *)(iVar3 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_14,s__s_Fidget__d_Sound_Level_007459e0,*(undefined4 *)(param_1 + 0x10),
                   iVar2);
      local_4 = 0x11;
      param_2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 1;
        FUN_00647d10(iVar3,param_2);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0xf0) = 0;
        *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_10,s__s_Fidget__d_Flags_007459cc,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 0x12;
      param_2 = FUN_00649940();
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,param_2);
      *(undefined4 *)(iVar3 + 0x84) = 0x38;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x134));
  }
  ExceptionList = local_c;
  return;
}

