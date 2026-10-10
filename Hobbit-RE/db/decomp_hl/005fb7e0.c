
void __thiscall FUN_005fb7e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_1c;
  int local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = param_1;
  FUN_005fb4c0();
  FUN_00649920(&local_1c,s_AIManager_Triggers_Trigger__d_Ch_0074827c,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0x10;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x50;
    *(undefined4 *)(iVar3 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s_AIManager_Triggers_Trigger__d_An_007484fc,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  local_1c = FUN_00649940();
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
      local_4._0_1_ = 2;
      local_10 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        FUN_00401080(pvVar4,0x108,param_2,FUN_00480d70);
      }
      iVar3 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
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
      param_1 = local_18;
    }
    iVar3 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar3;
    iVar3 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar3 + 0x80) = 0xd;
    FUN_00647d10(iVar3,local_1c);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(param_1 + 0x4c);
    *(int *)(iVar3 + 0x100) = param_1 + 0x44;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1470(iVar1);
  ExceptionList = local_c;
  return;
}

