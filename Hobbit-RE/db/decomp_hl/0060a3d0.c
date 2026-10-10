
void __thiscall FUN_0060a3d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(local_18,s__s_WightBossAttack_Delay_00748e5c,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_18,s__s_WightBossCastPercent_00748e44,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_18,s__s_WightBossAttack_Radius_00748e28,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_18,s__s_WightBossAttack_Idle_Radius_00748e08,*(undefined4 *)(param_1 + 0x10));
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
  FUN_00649920(local_18,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 4;
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
  FUN_00649920(local_18,s__s_Minion_Count_00748de4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 5;
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
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x94)) {
    do {
      FUN_00649920(local_18,s__s_Minion__d_00748dd4,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 6;
      uVar1 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 0xf;
        FUN_00647d10(iVar3,uVar1);
        *(undefined4 *)(iVar3 + 0x84) = 2;
        *(undefined4 *)(iVar3 + 0x100) = 0x1c;
        *(undefined4 *)(iVar3 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_14,s__s_Spawn_Volume__d_00748dc0,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 7;
      uVar1 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 0xf;
        FUN_00647d10(iVar3,uVar1);
        *(undefined4 *)(iVar3 + 0x84) = 2;
        *(undefined4 *)(iVar3 + 0x100) = 0x2f;
        *(undefined4 *)(iVar3 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_10,s__s_Facing_Volume__d_00748dac,*(undefined4 *)(param_1 + 0x10),iVar2);
      local_4 = 8;
      uVar1 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 0xf;
        FUN_00647d10(iVar3,uVar1);
        *(undefined4 *)(iVar3 + 0x84) = 2;
        *(undefined4 *)(iVar3 + 0x100) = 0x2f;
        *(undefined4 *)(iVar3 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x94));
  }
  ExceptionList = local_c;
  return;
}

