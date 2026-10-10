
void __thiscall FUN_00620c40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4a53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(&local_18,s__s_Switch_to_Melee_Range_00749ff4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 2;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_18,s__s_Ranged_Attack_Delay_00749fdc,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 2;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_18,s__s_Ranged_Attack_Range_00749fc4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 2;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_18,s__s_Ranged_Attack_Accuracy_1_100__00749fa0,*(undefined4 *)(param_1 + 0x10)
              );
  local_4 = 3;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 1;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 4;
  local_18 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x10) < iVar3 + 1) {
      if (*(int *)(param_2 + 0x18) == 0) {
        param_2 = *(int *)(param_2 + 0x10) / 2;
        iVar5 = 1;
        if (0 < param_2) {
          iVar5 = param_2;
        }
        if (iVar3 + iVar5 < 1) {
          param_2 = 1;
        }
        else {
          if (param_2 < 1) {
            param_2 = 1;
          }
          param_2 = iVar3 + param_2;
        }
      }
      else {
        param_2 = *(int *)(param_2 + 0x18) + iVar3;
      }
      pvVar4 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 5;
      local_10 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        iVar3 = param_2;
        if (-1 < param_2 + -1) {
          do {
            FUN_00480fc0();
            FUN_0041def0();
            FUN_0041def0();
            FUN_0041def0();
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar3 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0 < *(int *)(iVar1 + 8)) {
        iVar5 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar5);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x108;
        } while (iVar3 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar4;
      *(int *)(iVar1 + 0x10) = param_2;
    }
    iVar3 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar3;
    iVar1 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    FUN_00647d10(iVar1,local_18);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

