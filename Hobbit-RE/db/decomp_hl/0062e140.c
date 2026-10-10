
void __thiscall FUN_0062e140(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5240;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(local_14,s__s_Attack_Delay_00749e1c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Attack_Radius_00749e2c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Attack_Idle_Radius_0074a080,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Attack_Height_0074a394,*(undefined4 *)(param_1 + 0x10));
  local_4 = 3;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Jump_Attack_Percent_0074a37c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 4;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 1;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Jump_Attack_Radius_0074a364,*(undefined4 *)(param_1 + 0x10));
  local_4 = 5;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Minimum_Jump_Attack_Radius_0074a344,*(undefined4 *)(param_1 + 0x10));
  local_4 = 6;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 7;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Ranged_Attack_Percent_0074a328,*(undefined4 *)(param_1 + 0x10));
  local_4 = 8;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 1;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_10,s__s_Health_Retreat_Percent_0074a30c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 9;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 1;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

