
void __thiscall FUN_005d1880(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  int local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e013b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(&local_1c,s_AIManager_Actions_Action__d_Dial_00746bb4,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 0;
    param_2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 0xd;
      FUN_00647d10(iVar1,param_2);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(param_1 + 0x58);
      *(int *)(iVar1 + 0x100) = param_1 + 0x50;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Spea_00746b90,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 0x10;
      FUN_00647d10(iVar1,uVar2);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0x100) = 0x50;
      *(undefined4 *)(iVar1 + 0x104) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(local_14,s_AIManager_Actions_Action__d_At_S_00746b60,*(undefined4 *)(param_1 + 4));
    local_4 = 2;
    local_1c = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = *(int *)(iVar4 + 8);
      if (*(int *)(iVar4 + 0x10) < iVar1 + 1) {
        if (*(int *)(iVar4 + 0x18) == 0) {
          param_2 = *(int *)(iVar4 + 0x10) / 2;
          iVar5 = 1;
          if (0 < param_2) {
            iVar5 = param_2;
          }
          if (iVar1 + iVar5 < 1) {
            param_2 = 1;
          }
          else {
            if (param_2 < 1) {
              param_2 = 1;
            }
            param_2 = iVar1 + param_2;
          }
        }
        else {
          param_2 = *(int *)(iVar4 + 0x18) + iVar1;
        }
        iVar1 = param_2;
        pvVar3 = operator_new(param_2 * 0x108);
        local_4._0_1_ = 3;
        local_10 = pvVar3;
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else if (-1 < iVar1 + -1) {
          do {
            FUN_00437830();
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        iVar1 = 0;
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0 < *(int *)(iVar4 + 8)) {
          iVar5 = 0;
          do {
            FUN_00437630(*(int *)(iVar4 + 0xc) + iVar5);
            iVar1 = iVar1 + 1;
            iVar5 = iVar5 + 0x108;
          } while (iVar1 < *(int *)(iVar4 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar4 + 0xc));
        *(void **)(iVar4 + 0xc) = pvVar3;
        *(int *)(iVar4 + 0x10) = param_2;
        param_1 = local_18;
      }
      iVar1 = *(int *)(iVar4 + 8) + 1;
      *(int *)(iVar4 + 8) = iVar1;
      iVar4 = iVar1 * 0x108 + -0x108 + *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0x80) = 3;
      FUN_00647d10(iVar4,local_1c);
      *(undefined4 *)(iVar4 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_10,s_AIManager_Actions_Action__d_Bilb_00746b34,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 4;
    uVar2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar4 = FUN_00425010();
      *(undefined4 *)(iVar4 + 0x80) = 3;
      FUN_00647d10(iVar4,uVar2);
      *(undefined4 *)(iVar4 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

