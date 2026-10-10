
void __thiscall FUN_005e9f80(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1c80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(&local_10,s_AIManager_Actions_Action__d_Invu_00747ba4,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 0;
    local_14 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar3 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < iVar3 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          param_2 = *(int *)(param_2 + 0x10) / 2;
          iVar4 = 1;
          if (0 < param_2) {
            iVar4 = param_2;
          }
          if (iVar4 + iVar3 < 1) {
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
        pvVar2 = operator_new(param_2 * 0x108);
        if (pvVar2 == (void *)0x0) {
          pvVar2 = (void *)0x0;
        }
        else {
          iVar3 = param_2;
          if (-1 < param_2 + -1) {
            do {
              FUN_00437830();
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          iVar4 = 0;
          do {
            FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x108;
          } while (iVar3 < *(int *)(iVar1 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
        *(void **)(iVar1 + 0xc) = pvVar2;
        *(int *)(iVar1 + 0x10) = param_2;
      }
      iVar3 = *(int *)(iVar1 + 8) + 1;
      *(int *)(iVar1 + 8) = iVar3;
      iVar3 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar3 + 0x80) = 0xf;
      FUN_00647d10(iVar3,local_14);
      *(undefined4 *)(iVar3 + 0x84) = 0;
      *(undefined4 *)(iVar3 + 0x100) = 0x1c;
      *(undefined4 *)(iVar3 + 0x104) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_14,s_AIManager_Actions_Action__d_Invu_00747b7c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    local_10 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      param_2 = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 0x10) < param_2 + 1) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          iVar4 = *(int *)(iVar1 + 0x10) / 2;
          iVar3 = 1;
          if (0 < iVar4) {
            iVar3 = iVar4;
          }
          if (param_2 + iVar3 < 1) {
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
        pvVar2 = operator_new(param_2 * 0x108);
        if (pvVar2 == (void *)0x0) {
          pvVar2 = (void *)0x0;
        }
        else {
          iVar3 = param_2;
          if (-1 < param_2 + -1) {
            do {
              FUN_00437830();
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          iVar4 = 0;
          do {
            FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x108;
          } while (iVar3 < *(int *)(iVar1 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
        *(void **)(iVar1 + 0xc) = pvVar2;
        *(int *)(iVar1 + 0x10) = param_2;
      }
      iVar3 = *(int *)(iVar1 + 8) + 1;
      *(int *)(iVar1 + 8) = iVar3;
      iVar1 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,local_10);
      *(undefined4 *)(iVar1 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

