
void __thiscall FUN_005de100(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0f8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Targ_00747594,*(undefined4 *)(param_1 + 4));
    local_4 = 0;
    uVar2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 0xf;
      FUN_00647d10(iVar3,uVar2);
      *(undefined4 *)(iVar3 + 0x84) = 0;
      *(undefined4 *)(iVar3 + 0x100) = 0x1c;
      *(undefined4 *)(iVar3 + 0x104) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_20,s_AIManager_Actions_Action__d_Sele_00747564,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    param_2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 0xc;
      FUN_00647d10(iVar3,param_2);
      *(undefined4 *)(iVar3 + 0x84) = 0;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(param_1 + 0x20);
      *(int *)(iVar3 + 0x100) = param_1 + 0x18;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Cine_00747490,*(undefined4 *)(param_1 + 4));
    local_4 = 2;
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
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        iVar3 = local_20;
        FUN_00649920(local_14,s_AIManager_Actions_Action__d_Cine_00747468,
                     *(undefined4 *)(param_1 + 4),local_20);
        local_4 = 3;
        local_18 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar5 = *(int *)(iVar1 + 8);
          if (*(int *)(iVar1 + 0x10) < iVar5 + 1) {
            if (*(int *)(iVar1 + 0x18) == 0) {
              param_2 = *(int *)(iVar1 + 0x10) / 2;
              iVar3 = 1;
              if (0 < param_2) {
                iVar3 = param_2;
              }
              if (iVar5 + iVar3 < 1) {
                param_2 = 1;
              }
              else {
                if (param_2 < 1) {
                  param_2 = 1;
                }
                param_2 = iVar5 + param_2;
              }
            }
            else {
              param_2 = *(int *)(iVar1 + 0x18) + iVar5;
            }
            iVar3 = param_2;
            pvVar4 = operator_new(param_2 * 0x108);
            local_4._0_1_ = 4;
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
            *(int *)(iVar1 + 0x10) = param_2;
            param_1 = local_1c;
            iVar3 = local_20;
          }
          iVar5 = *(int *)(iVar1 + 8) + 1;
          *(int *)(iVar1 + 8) = iVar5;
          iVar5 = iVar5 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
          *(undefined4 *)(iVar5 + 0x80) = 0xf;
          FUN_00647d10(iVar5,local_18);
          *(undefined4 *)(iVar5 + 0x84) = 0;
          *(undefined4 *)(iVar5 + 0x100) = 0x11;
          *(undefined4 *)(iVar5 + 0x104) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        local_20 = iVar3 + 1;
      } while (local_20 < *(int *)(param_1 + 0x48));
    }
  }
  ExceptionList = local_c;
  return;
}

