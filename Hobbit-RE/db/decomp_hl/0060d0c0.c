
void __thiscall FUN_0060d0c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3eab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_005265f0();
  FUN_00649920(&local_1c,s__s_HitmeOverlay_0074901c,uVar3);
  local_4 = 0;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 0xd;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar4 + 0x100) = iVar2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_005265f0();
  FUN_00649920(&local_1c,s__s_TargetHitmeOverlay_00749004,uVar3);
  local_4 = 1;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 0xd;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar4 + 0x100) = iVar2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_005265f0();
  FUN_00649920(&local_1c,s__s_JumpHitmeOverlay_00748ff0,uVar3);
  local_4 = 2;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 0xd;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar4 + 0x100) = iVar2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_00435990();
  local_1c = iVar2;
  FUN_00649920(local_14,s__s_Quest_00748fe4,uVar3);
  local_4 = 3;
  local_18 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x10) < iVar4 + 1) {
      if (*(int *)(param_2 + 0x18) == 0) {
        param_2 = *(int *)(param_2 + 0x10) / 2;
        iVar2 = 1;
        if (0 < param_2) {
          iVar2 = param_2;
        }
        if (iVar4 + iVar2 < 1) {
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
      pvVar5 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 4;
      local_10 = pvVar5;
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        iVar2 = param_2;
        if (-1 < param_2 + -1) {
          do {
            FUN_00437830();
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      iVar2 = 0;
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0 < *(int *)(iVar1 + 8)) {
        iVar4 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x108;
        } while (iVar2 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar5;
      *(int *)(iVar1 + 0x10) = param_2;
      iVar2 = local_1c;
    }
    iVar4 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar4;
    iVar1 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0x80) = 0xd;
    FUN_00647d10(iVar1,local_18);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar1 + 0x100) = iVar2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

