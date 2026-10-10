
void FUN_005697a0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined1 local_18 [8];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db3de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_GoalAction__EnumerateProperties_0073f7d8);
  iVar1 = param_3;
  local_4 = 0;
  FUN_00567080(param_1,param_2,param_3);
  FUN_00649920(local_18,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f698,param_1,param_2);
  local_4._0_1_ = 1;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < iVar4 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        param_3 = *(int *)(iVar1 + 0x10) / 2;
        iVar5 = 1;
        if (0 < param_3) {
          iVar5 = param_3;
        }
        if (iVar4 + iVar5 < 1) {
          param_3 = 1;
        }
        else {
          if (param_3 < 1) {
            param_3 = 1;
          }
          param_3 = iVar4 + param_3;
        }
      }
      else {
        param_3 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      iVar4 = param_3;
      pvVar3 = operator_new(param_3 * 0x108);
      local_4._0_1_ = 2;
      local_10 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else if (-1 < iVar4 + -1) {
        do {
          FUN_00437830();
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = 0;
      local_4._0_1_ = 1;
      if (0 < *(int *)(iVar1 + 8)) {
        iVar5 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar5);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x108;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = param_3;
    }
    iVar4 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar4;
    iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar4 + 0x80) = 0xd;
    FUN_00647d10(iVar4,uVar2);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = DAT_0077230c;
    *(undefined **)(iVar4 + 0x100) = &DAT_00772304;
  }
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_AI_Tweaks_Goal_List__d_Goal__d_P_0073f7ac,param_1,param_2);
  local_4._0_1_ = 3;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    param_2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < param_2 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar5 = *(int *)(iVar1 + 0x10) / 2;
        iVar4 = 1;
        if (0 < iVar5) {
          iVar4 = iVar5;
        }
        if (iVar4 + param_2 < 1) {
          param_2 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          param_2 = param_2 + iVar5;
        }
      }
      else {
        param_2 = *(int *)(iVar1 + 0x18) + param_2;
      }
      pvVar3 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 4;
      local_10 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        iVar4 = param_2;
        if (-1 < param_2 + -1) {
          do {
            FUN_00437830();
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar4 = 0;
      local_4._0_1_ = 3;
      if (0 < *(int *)(iVar1 + 8)) {
        iVar5 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar5);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x108;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = param_2;
    }
    iVar4 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar4;
    iVar1 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    FUN_00647d10(iVar1,uVar2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

