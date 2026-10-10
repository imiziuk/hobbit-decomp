
void __thiscall FUN_0060f950(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4090;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(local_14,s__s_Activation_Volume_00749268,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0x2f;
    *(undefined4 *)(iVar1 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Death_Cinema_00749258,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0x11;
    *(undefined4 *)(iVar1 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman1_0074924c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0x1c;
    *(undefined4 *)(iVar1 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman2_00749240,*(undefined4 *)(param_1 + 0x10));
  local_4 = 3;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0x1c;
    *(undefined4 *)(iVar1 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman3_00749234,*(undefined4 *)(param_1 + 0x10));
  local_4 = 4;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0x1c;
    *(undefined4 *)(iVar1 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman4_00749228,*(undefined4 *)(param_1 + 0x10));
  local_4 = 5;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0x1c;
    *(undefined4 *)(iVar1 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_LevelReset_00749218,*(undefined4 *)(param_1 + 0x10));
  local_4 = 6;
  uVar2 = FUN_00649940();
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,uVar2);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_10,s__s_IsActive_0074920c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 7;
  uVar2 = FUN_00649940();
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,uVar2);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

