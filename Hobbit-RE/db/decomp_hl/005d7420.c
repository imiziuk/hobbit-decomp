
void __thiscall FUN_005d7420(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0866;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    iVar2 = FUN_00562350();
    FUN_00649920(&local_14,s_AIManager_Actions_Action__d_Link_00747140,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 0;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar5 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < iVar5 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          param_2 = *(int *)(param_2 + 0x10) / 2;
          iVar6 = 1;
          if (0 < param_2) {
            iVar6 = param_2;
          }
          if (iVar6 + iVar5 < 1) {
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
          param_2 = *(int *)(param_2 + 0x18) + iVar5;
        }
        pvVar4 = operator_new(param_2 * 0x108);
        local_4._0_1_ = 1;
        local_10 = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          iVar5 = param_2;
          if (-1 < param_2 + -1) {
            do {
              FUN_00437830();
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        iVar5 = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < *(int *)(iVar1 + 8)) {
          iVar6 = 0;
          do {
            FUN_00437630(*(int *)(iVar1 + 0xc) + iVar6);
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 0x108;
          } while (iVar5 < *(int *)(iVar1 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
        *(void **)(iVar1 + 0xc) = pvVar4;
        *(int *)(iVar1 + 0x10) = param_2;
      }
      iVar5 = *(int *)(iVar1 + 8) + 1;
      *(int *)(iVar1 + 8) = iVar5;
      iVar5 = iVar5 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar5 + 0x80) = 0xd;
      FUN_00647d10(iVar5,uVar3);
      *(undefined4 *)(iVar5 + 0x84) = 2;
      *(undefined4 *)(iVar5 + 0xf0) = 0;
      *(undefined4 *)(iVar5 + 0xf4) = *(undefined4 *)(iVar2 + 8);
      *(int *)(iVar5 + 0x100) = iVar2;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar2 = FUN_00562360();
    local_14 = iVar2;
    FUN_00649920(&local_10,s_AIManager_Actions_Action__d_Link_00747118,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 2;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      param_2 = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 0x10) < param_2 + 1) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          iVar5 = *(int *)(iVar1 + 0x10) / 2;
          iVar2 = 1;
          if (0 < iVar5) {
            iVar2 = iVar5;
          }
          if (param_2 + iVar2 < 1) {
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
        pvVar4 = operator_new(param_2 * 0x108);
        local_4._0_1_ = 3;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
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
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0 < *(int *)(iVar1 + 8)) {
          iVar5 = 0;
          do {
            FUN_00437630(*(int *)(iVar1 + 0xc) + iVar5);
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 0x108;
          } while (iVar2 < *(int *)(iVar1 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
        *(void **)(iVar1 + 0xc) = pvVar4;
        *(int *)(iVar1 + 0x10) = param_2;
        iVar2 = local_14;
      }
      iVar5 = *(int *)(iVar1 + 8) + 1;
      *(int *)(iVar1 + 8) = iVar5;
      iVar1 = iVar5 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0x80) = 0xc;
      FUN_00647d10(iVar1,uVar3);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(iVar2 + 8);
      *(int *)(iVar1 + 0x100) = iVar2;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

