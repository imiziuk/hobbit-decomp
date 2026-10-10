
void FUN_004d3090(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4ea3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c3f80(param_1);
  FUN_006501d0(s_Switch__EnumerateProperties_0072d914);
  local_4 = 0;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,s_Rock_Can_Trigger_0072d900);
    *(undefined4 *)(iVar2 + 0x84) = 2;
  }
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,&DAT_0071fac4);
  *(undefined4 *)(iVar2 + 0x84) = 0x22;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,s_TargetLoops_0072d8a4);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,s_ReverseAnimForOff_0072d890);
      *(undefined4 *)(iVar2 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 2;
        FUN_00647d10(iVar2,s_ToggleDelay_0072d884);
        *(undefined4 *)(iVar2 + 0x84) = 2;
        *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
      }
    }
  }
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 2;
  FUN_00647d10(iVar2,s_TimeSinceToggle_0072d8f0);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar2 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      param_1 = *(int *)(param_1 + 0x10) / 2;
      iVar4 = 1;
      if (0 < param_1) {
        iVar4 = param_1;
      }
      if (iVar4 + iVar2 < 1) {
        param_1 = 1;
      }
      else {
        if (param_1 < 1) {
          param_1 = 1;
        }
        param_1 = iVar2 + param_1;
      }
    }
    else {
      param_1 = *(int *)(param_1 + 0x18) + iVar2;
    }
    pvVar3 = operator_new(param_1 * 0x108);
    local_4._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      iVar2 = param_1;
      if (-1 < param_1 + -1) {
        do {
          FUN_00437830();
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar2 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < *(int *)(iVar1 + 8)) {
      iVar4 = 0;
      do {
        FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x108;
      } while (iVar2 < *(int *)(iVar1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
    *(void **)(iVar1 + 0xc) = pvVar3;
    *(int *)(iVar1 + 0x10) = param_1;
  }
  iVar2 = *(int *)(iVar1 + 8) + 1;
  *(int *)(iVar1 + 8) = iVar2;
  iVar1 = iVar2 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_Activated_0072d8e4);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

