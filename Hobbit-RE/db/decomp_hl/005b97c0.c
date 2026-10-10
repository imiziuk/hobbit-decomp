
void __thiscall FUN_005b97c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dedb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(local_14,s__s_Head_Volume_007458b4,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_14,s__s_Activation_007458a4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Activation_Activate_Volume_00745884,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
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
  FUN_00649920(local_14,s__s_Activation_Deactivate_Volume_00745864,*(undefined4 *)(param_1 + 0x10));
  local_4 = 3;
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
  FUN_00649920(local_14,s__s_Activation_Is_Active_0074584c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 4;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,uVar1);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Tail_Twitch_Tweaks_00745834,*(undefined4 *)(param_1 + 0x10));
  local_4 = 5;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Tail_Twitch_Tweaks_Tail_Volum_00745810,*(undefined4 *)(param_1 + 0x10))
  ;
  local_4 = 6;
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
  FUN_00649920(local_14,s__s_Tail_Twitch_Tweaks_Tail_Speed_007457e4,*(undefined4 *)(param_1 + 0x10))
  ;
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
  FUN_00649920(local_14,s__s_Tail_Active_007457d4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 8;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,uVar1);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Cinematics_007457c4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 9;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_10,s__s_Cinematics_Death_Cinema_007457a8,*(undefined4 *)(param_1 + 0x10));
  local_4 = 10;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x11;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

