
void __thiscall FUN_005e72e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e19bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Inst_007479b0,*(undefined4 *)(param_1 + 4));
    local_4 = 0;
    uVar1 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 1;
      FUN_00647d10(iVar2,uVar1);
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Rigi_00747980,
                     *(undefined4 *)(param_1 + 4),iVar2);
        local_4 = 1;
        uVar1 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar3 = FUN_00425010();
          *(undefined4 *)(iVar3 + 0x80) = 0xf;
          FUN_00647d10(iVar3,uVar1);
          *(undefined4 *)(iVar3 + 0x84) = 2;
          *(undefined4 *)(iVar3 + 0x100) = 5;
          *(undefined4 *)(iVar3 + 0x104) = 3;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x20));
    }
    FUN_00649920(local_14,s_AIManager_Actions_Action__d_Anim_00747958,*(undefined4 *)(param_1 + 4));
    local_4 = 2;
    local_18 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = *(int *)(iVar5 + 8);
      if (*(int *)(iVar5 + 0x10) < iVar2 + 1) {
        if (*(int *)(iVar5 + 0x18) == 0) {
          param_2 = *(int *)(iVar5 + 0x10) / 2;
          iVar3 = 1;
          if (0 < param_2) {
            iVar3 = param_2;
          }
          if (iVar2 + iVar3 < 1) {
            param_2 = 1;
          }
          else {
            if (param_2 < 1) {
              param_2 = 1;
            }
            param_2 = iVar2 + param_2;
          }
        }
        else {
          param_2 = *(int *)(iVar5 + 0x18) + iVar2;
        }
        iVar2 = param_2;
        pvVar4 = operator_new(param_2 * 0x108);
        local_4._0_1_ = 3;
        local_10 = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          FUN_00401080(pvVar4,0x108,iVar2,FUN_00480d70);
        }
        iVar2 = 0;
        local_4 = CONCAT31(local_4._1_3_,2);
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
        *(int *)(iVar5 + 0x10) = param_2;
      }
      iVar2 = *(int *)(iVar5 + 8) + 1;
      *(int *)(iVar5 + 8) = iVar2;
      iVar5 = iVar2 * 0x108 + -0x108 + *(int *)(iVar5 + 0xc);
      *(undefined4 *)(iVar5 + 0x80) = 1;
      FUN_00647d10(iVar5,local_18);
      *(undefined4 *)(iVar5 + 0x84) = 2;
      *(undefined4 *)(iVar5 + 0xf0) = 0;
      *(undefined4 *)(iVar5 + 0xf4) = 0xffffffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_18,s_AIManager_Actions_Action__d_Loop_00747934,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 4;
    uVar1 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar5 = FUN_00425010();
      *(undefined4 *)(iVar5 + 0x80) = 3;
      FUN_00647d10(iVar5,uVar1);
      *(undefined4 *)(iVar5 + 0x84) = 2;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

