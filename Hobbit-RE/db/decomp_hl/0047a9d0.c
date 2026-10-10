
void __thiscall FUN_0047a9d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2013;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_98 = param_1;
  FUN_00474830(param_2,param_3);
  local_90 = FUN_0047aec0();
  FUN_00649920(&local_9c,s__s_Fx_Type_0072828c,param_2);
  local_4 = 0;
  local_94 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xc;
    FUN_00647d10(iVar1,local_94);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(local_90 + 8);
    *(int *)(iVar1 + 0x100) = local_90;
    param_1 = local_98;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    FUN_00649920(&local_98,s__s_Magnitude_0072827c,param_2);
    local_4 = 1;
    local_9c = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 2;
      FUN_00647d10(iVar1,local_9c);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_98,s__s_Frequency_0072826c,param_2);
    local_4 = 2;
    local_9c = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 2;
      FUN_00647d10(iVar1,local_9c);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_9c,s__s_Rolling_00728260,param_2);
    local_4 = 3;
    uVar2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,uVar2);
      *(undefined4 *)(iVar1 + 0x84) = 0;
    }
  }
  else if (iVar1 == 1) {
    FUN_00649920(&local_98,s__s_Fadeout_00728254,param_2);
    local_4 = 4;
    local_9c = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,local_9c);
      *(undefined4 *)(iVar1 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_9c,s__s_Color_00728248,param_2);
    local_4 = 5;
    uVar2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      FUN_00647d10(iVar1,uVar2);
      *(undefined4 *)(iVar1 + 0x80) = 0x11;
      *(undefined4 *)(iVar1 + 0x84) = 1;
      FUN_00647d10(local_8c,uVar2);
      FUN_00647dc0(local_8c,&DAT_00728244);
      FUN_00499e60(param_3,local_8c,0x10,0,0xff);
      FUN_00647d10(local_8c,uVar2);
      FUN_00647dc0(local_8c,&DAT_00728240);
      FUN_00499e60(param_3,local_8c,0x10,0,0xff);
      FUN_00647d10(local_8c,uVar2);
      FUN_00647dc0(local_8c,&DAT_0072823c);
      FUN_00499e60(param_3,local_8c,0x10,0,0xff);
      FUN_00647d10(local_8c,uVar2);
      FUN_00647dc0(local_8c,&DAT_00728238);
      FUN_00499e60(param_3,local_8c,0x10,0,0xff);
    }
  }
  else if (iVar1 == 2) {
    FUN_00649920(&local_98,s__s_Target__1_closed__0_open__00728218,param_2);
    local_4 = 6;
    local_9c = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 2;
      FUN_00647d10(iVar1,local_9c);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0xf8) = 0;
      *(undefined4 *)(iVar1 + 0xfc) = 0x3f800000;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_9c,s__s_Color_00728248,param_2);
    local_4 = 7;
    uVar2 = FUN_00649940(0);
    FUN_0048b8e0(param_3,uVar2);
  }
  else {
    if (iVar1 != 3) {
      ExceptionList = local_c;
      return;
    }
    FUN_00649920(&local_94,s__s_Color_00728248,param_2);
    local_4 = 8;
    uVar2 = FUN_00649940(0);
    FUN_0048b8e0(param_3,uVar2);
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

