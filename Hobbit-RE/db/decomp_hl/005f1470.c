
void __thiscall FUN_005f1470(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e239e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&local_14,s_AIManager_Triggers_Trigger__d_Is_00748078,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  local_18 = FUN_00649940();
  iVar1 = param_2;
  iVar4 = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) < iVar4 + 1) {
    if (*(int *)(param_2 + 0x18) == 0) {
      param_2 = *(int *)(param_2 + 0x10) / 2;
      iVar5 = 1;
      if (0 < param_2) {
        iVar5 = param_2;
      }
      if (iVar5 + iVar4 < 1) {
        param_2 = 1;
      }
      else {
        if (param_2 < 1) {
          param_2 = 1;
        }
        param_2 = iVar4 + param_2;
      }
    }
    else {
      param_2 = *(int *)(param_2 + 0x18) + iVar4;
    }
    iVar4 = param_2;
    pvVar2 = operator_new(param_2 * 0x108);
    local_4._0_1_ = 1;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_00401080(pvVar2,0x108,iVar4,FUN_00480d70);
    }
    iVar4 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < *(int *)(iVar1 + 8)) {
      iVar5 = 0;
      do {
        FUN_00437630(*(int *)(iVar1 + 0xc) + iVar5);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x108;
      } while (iVar4 < *(int *)(iVar1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
    *(void **)(iVar1 + 0xc) = pvVar2;
    *(int *)(iVar1 + 0x10) = param_2;
  }
  iVar4 = *(int *)(iVar1 + 8) + 1;
  *(int *)(iVar1 + 8) = iVar4;
  iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar4 + 0x80) = 3;
  FUN_00647d10(iVar4,local_18);
  *(undefined4 *)(iVar4 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_St_007480d4,*(undefined4 *)(param_1 + 4));
  local_4 = 2;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 3;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_18,s_AIManager_Triggers_Trigger__d_Tr_007480a4,*(undefined4 *)(param_1 + 4));
  local_4 = 3;
  local_14 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < iVar4 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        param_2 = *(int *)(iVar1 + 0x10) / 2;
        iVar5 = 1;
        if (0 < param_2) {
          iVar5 = param_2;
        }
        if (iVar4 + iVar5 < 1) {
          param_2 = 1;
        }
        else {
          if (param_2 < 1) {
            param_2 = 1;
          }
          param_2 = iVar4 + param_2;
        }
      }
      else {
        param_2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      iVar4 = param_2;
      pvVar2 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 4;
      local_10 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else if (-1 < iVar4 + -1) {
        do {
          FUN_00480fc0();
          FUN_0041def0();
          FUN_0041def0();
          FUN_0041def0();
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0 < *(int *)(iVar1 + 8)) {
        iVar5 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar5);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x108;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar2;
      *(int *)(iVar1 + 0x10) = param_2;
    }
    iVar4 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar4;
    iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar4 + 0x80) = 3;
    FUN_00647d10(iVar4,local_14);
    *(undefined4 *)(iVar4 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

