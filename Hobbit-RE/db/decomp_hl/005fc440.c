
void __thiscall FUN_005fc440(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2fe3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = param_1;
  FUN_00649920(&local_28,s_AIManager_Triggers_Trigger__d_An_0074877c,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar1 = param_2;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_NP_0074874c,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  uVar2 = FUN_00649940();
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
  param_2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_00649920(local_24,s_AIManager_Triggers_Trigger__d_NP_00748720,*(undefined4 *)(param_1 + 4)
                   ,param_2);
      local_4 = 2;
      uVar2 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 5;
        FUN_00647d10(iVar3,uVar2);
        *(undefined4 *)(iVar3 + 0x84) = 0x15;
        *(undefined4 *)(iVar3 + 0x100) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_18,s_AIManager_Triggers_Trigger__d_NP_007486f0,*(undefined4 *)(param_1 + 4)
                   ,param_2);
      local_4 = 3;
      local_1c = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = *(int *)(iVar1 + 8);
        if (*(int *)(iVar1 + 0x10) < iVar3 + 1) {
          if (*(int *)(iVar1 + 0x18) == 0) {
            local_28 = *(int *)(iVar1 + 0x10) / 2;
            iVar5 = 1;
            if (0 < local_28) {
              iVar5 = local_28;
            }
            if (iVar3 + iVar5 < 1) {
              local_28 = 1;
            }
            else {
              if (local_28 < 1) {
                local_28 = 1;
              }
              local_28 = iVar3 + local_28;
            }
          }
          else {
            local_28 = *(int *)(iVar1 + 0x18) + iVar3;
          }
          iVar3 = local_28;
          pvVar4 = operator_new(local_28 * 0x108);
          local_4._0_1_ = 4;
          local_10 = pvVar4;
          if (pvVar4 == (void *)0x0) {
            pvVar4 = (void *)0x0;
          }
          else {
            FUN_00401080(pvVar4,0x108,iVar3,FUN_00480d70);
          }
          iVar3 = 0;
          local_4 = CONCAT31(local_4._1_3_,3);
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
          *(int *)(iVar1 + 0x10) = local_28;
          param_1 = local_20;
        }
        iVar3 = *(int *)(iVar1 + 8) + 1;
        *(int *)(iVar1 + 8) = iVar3;
        iVar3 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar3 + 0x80) = 0xf;
        FUN_00647d10(iVar3,local_1c);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0x100) = 0x1c;
        *(undefined4 *)(iVar3 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar3 = FUN_005bf100();
      FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_NP_007486c0,*(undefined4 *)(param_1 + 4)
                   ,param_2);
      local_4 = 5;
      local_1c = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar5 = FUN_00425010();
        *(undefined4 *)(iVar5 + 0x80) = 0xc;
        FUN_00647d10(iVar5,local_1c);
        *(undefined4 *)(iVar5 + 0x84) = 0;
        *(undefined4 *)(iVar5 + 0xf0) = 0;
        *(undefined4 *)(iVar5 + 0xf4) = *(undefined4 *)(iVar3 + 8);
        *(int *)(iVar5 + 0x100) = iVar3;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x14));
  }
  FUN_005f1470(iVar1);
  ExceptionList = local_c;
  return;
}

