
void __thiscall FUN_005df140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e10c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    iVar2 = FUN_00435990();
    FUN_00649920(&local_14,s_AIManager_Actions_Action__d_Ques_00747618,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 0;
    local_18 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar4 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < iVar4 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          param_2 = *(int *)(param_2 + 0x10) / 2;
          iVar5 = 1;
          if (0 < param_2) {
            iVar5 = param_2;
          }
          if (iVar5 + iVar4 < 1) {
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
        pvVar3 = operator_new(param_2 * 0x108);
        local_4._0_1_ = 1;
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
        local_4 = (uint)local_4._1_3_ << 8;
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
      iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar4 + 0x80) = 0xd;
      FUN_00647d10(iVar4,local_18);
      *(undefined4 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0xf0) = 0;
      *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar2 + 8);
      *(int *)(iVar4 + 0x100) = iVar2;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_18,s_AIManager_Actions_Action__d_Requ_007475f0,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 2;
    local_14 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      param_2 = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 0x10) < param_2 + 1) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          iVar4 = *(int *)(iVar1 + 0x10) / 2;
          iVar2 = 1;
          if (0 < iVar4) {
            iVar2 = iVar4;
          }
          if (param_2 + iVar2 < 1) {
            param_2 = 1;
          }
          else {
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            param_2 = param_2 + iVar4;
          }
        }
        else {
          param_2 = *(int *)(iVar1 + 0x18) + param_2;
        }
        pvVar3 = operator_new(param_2 * 0x108);
        local_4._0_1_ = 3;
        local_10 = pvVar3;
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
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
          iVar4 = 0;
          do {
            FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0x108;
          } while (iVar2 < *(int *)(iVar1 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
        *(void **)(iVar1 + 0xc) = pvVar3;
        *(int *)(iVar1 + 0x10) = param_2;
      }
      iVar2 = *(int *)(iVar1 + 8) + 1;
      *(int *)(iVar1 + 8) = iVar2;
      iVar1 = iVar2 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,local_14);
      *(undefined4 *)(iVar1 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

