
void __thiscall FUN_006123e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4220;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(local_14,s__s_Beorn_007493ac,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x1c;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Living_Shaman_Count_00749394,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 1;
  FUN_00647d10(iVar2,uVar1);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  *(undefined4 *)(iVar2 + 0xf0) = 0;
  *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman1_0074924c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x1c;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman2_00749240,*(undefined4 *)(param_1 + 0x10));
  local_4 = 3;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x1c;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman3_00749234,*(undefined4 *)(param_1 + 0x10));
  local_4 = 4;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x1c;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Shaman4_00749228,*(undefined4 *)(param_1 + 0x10));
  local_4 = 5;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x1c;
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Damage_Per_Single_0074937c,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_14,s__s_Damage_Per_Double_00749364,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_14,s__s_Damage_Per_Triple_0074934c,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_10,s__s_Damage_Per_Quadruple_00749334,*(undefined4 *)(param_1 + 0x10));
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
  ExceptionList = local_c;
  return;
}

