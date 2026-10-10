
void FUN_0047f6b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_1c;
  undefined1 local_18 [8];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d266b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&local_1c,s__s_RigidInstance_007287dc,param_1);
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar1 = param_2;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xf;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 5;
    *(undefined4 *)(iVar3 + 0x104) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_AnimationName_007287c8,param_1);
  local_4 = 1;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 4;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_Start_Animating_007287b4,param_1);
  local_4 = 2;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_Looping_00727ed8,param_1);
  local_4 = 3;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_HideAtShotEnd_007287a0,param_1);
  local_4 = 4;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_18,s__s_SetToEndOnSkip_0072878c,param_1);
  local_4 = 5;
  local_1c = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < iVar3 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        param_2 = *(int *)(iVar1 + 0x10) / 2;
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
        param_2 = *(int *)(iVar1 + 0x18) + iVar3;
      }
      iVar3 = param_2;
      pvVar4 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 6;
      local_10 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else if (-1 < iVar3 + -1) {
        do {
          FUN_00480fc0();
          FUN_0041def0();
          FUN_0041def0();
          FUN_0041def0();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = 0;
      local_4 = CONCAT31(local_4._1_3_,5);
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
    iVar3 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,local_1c);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00474830(param_1,iVar1);
  ExceptionList = local_c;
  return;
}

