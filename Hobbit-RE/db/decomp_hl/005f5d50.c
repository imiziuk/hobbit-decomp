
void __thiscall FUN_005f5d50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e289b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&local_1c,s_AIManager_Triggers_Trigger__d_NP_007484a8,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar1 = param_2;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 1;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_NP_00748480,*(undefined4 *)(param_1 + 4)
                   ,iVar3);
      local_4 = 1;
      uVar2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar4 = FUN_00425010();
        *(undefined4 *)(iVar4 + 0x80) = 0xf;
        FUN_00647d10(iVar4,uVar2);
        *(undefined4 *)(iVar4 + 0x84) = 0;
        *(undefined4 *)(iVar4 + 0x100) = 0x1c;
        *(undefined4 *)(iVar4 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  iVar3 = FUN_005bf100();
  local_1c = iVar3;
  FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_Ex_00748454,*(undefined4 *)(param_1 + 4));
  local_4 = 2;
  local_18 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < iVar4 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        param_2 = *(int *)(iVar1 + 0x10) / 2;
        iVar3 = 1;
        if (0 < param_2) {
          iVar3 = param_2;
        }
        if (iVar4 + iVar3 < 1) {
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
      iVar3 = param_2;
      pvVar5 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 3;
      local_10 = pvVar5;
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        FUN_00401080(pvVar5,0x108,iVar3,FUN_00480d70);
      }
      iVar3 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < *(int *)(iVar1 + 8)) {
        iVar4 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x108;
        } while (iVar3 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar5;
      *(int *)(iVar1 + 0x10) = param_2;
      iVar3 = local_1c;
    }
    iVar4 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar4;
    iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar4 + 0x80) = 0xc;
    FUN_00647d10(iVar4,local_18);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar3 + 8);
    *(int *)(iVar4 + 0x100) = iVar3;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar3 = FUN_005bf100();
  FUN_00649920(&local_18,s_AIManager_Triggers_Trigger__d_En_00748428,*(undefined4 *)(param_1 + 4));
  local_4 = 4;
  param_2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 0xc;
    FUN_00647d10(iVar4,param_2);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar3 + 8);
    *(int *)(iVar4 + 0x100) = iVar3;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1470(iVar1);
  ExceptionList = local_c;
  return;
}

