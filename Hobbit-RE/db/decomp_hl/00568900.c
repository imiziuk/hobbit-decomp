
void FUN_00568900(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_1c;
  undefined1 local_18 [8];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db2cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_GoalGotoTarget__EnumeratePropert_0073f748);
  iVar5 = param_3;
  uVar6 = param_2;
  uVar1 = param_1;
  local_4 = 0;
  FUN_00567080(param_1,param_2,param_3);
  FUN_00649920(&param_3,s_AI_Tweaks_Goal_List__d_Goal__d_T_0073f5b0,uVar1,uVar6);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xf;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0x2f;
    *(undefined4 *)(iVar2 + 0x104) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649950();
  iVar2 = FUN_00591f30();
  FUN_00649920(&local_1c,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f720,param_1,uVar6);
  local_4 = CONCAT31(local_4._1_3_,2);
  param_3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xc;
    FUN_00647d10(iVar3,param_3);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar3 + 0x100) = iVar2;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649950();
  FUN_00649920(&param_3,s_AI_Tweaks_Goal_List__d_Goal__d_L_0073f6f0,param_1,uVar6);
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649950();
  FUN_00649920(local_18,s_AI_Tweaks_Goal_List__d_Goal__d_L_0073f6c4,param_1,uVar6);
  local_4._0_1_ = 4;
  local_1c = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = *(int *)(iVar5 + 8);
    if (*(int *)(iVar5 + 0x10) < iVar2 + 1) {
      if (*(int *)(iVar5 + 0x18) == 0) {
        param_3 = *(int *)(iVar5 + 0x10) / 2;
        iVar3 = 1;
        if (0 < param_3) {
          iVar3 = param_3;
        }
        if (iVar3 + iVar2 < 1) {
          param_3 = 1;
        }
        else {
          if (param_3 < 1) {
            param_3 = 1;
          }
          param_3 = iVar2 + param_3;
        }
      }
      else {
        param_3 = *(int *)(iVar5 + 0x18) + iVar2;
      }
      iVar2 = param_3;
      pvVar4 = operator_new(param_3 * 0x108);
      local_4._0_1_ = 5;
      local_10 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        FUN_00401080(pvVar4,0x108,iVar2,FUN_00480d70);
      }
      iVar2 = 0;
      local_4._0_1_ = 4;
      if (0 < *(int *)(iVar5 + 8)) {
        iVar3 = 0;
        do {
          FUN_00437630(*(int *)(iVar5 + 0xc) + iVar3);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x108;
        } while (iVar2 < *(int *)(iVar5 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar5 + 0xc));
      *(void **)(iVar5 + 0xc) = pvVar4;
      *(int *)(iVar5 + 0x10) = param_3;
      uVar6 = param_2;
    }
    iVar2 = *(int *)(iVar5 + 8) + 1;
    *(int *)(iVar5 + 8) = iVar2;
    iVar5 = iVar2 * 0x108 + -0x108 + *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0x80) = 3;
    FUN_00647d10(iVar5,local_1c);
    *(undefined4 *)(iVar5 + 0x84) = 0;
  }
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_1,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f698,param_1,uVar6);
  local_4 = CONCAT31(local_4._1_3_,6);
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar5 = FUN_00425010();
    *(undefined4 *)(iVar5 + 0x80) = 0xd;
    FUN_00647d10(iVar5,uVar1);
    *(undefined4 *)(iVar5 + 0x84) = 0;
    *(undefined4 *)(iVar5 + 0xf0) = 0;
    *(undefined4 *)(iVar5 + 0xf4) = DAT_0077230c;
    *(undefined **)(iVar5 + 0x100) = &DAT_00772304;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

