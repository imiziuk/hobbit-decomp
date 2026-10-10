
/* WARNING: Removing unreachable block (ram,0x00619c06) */
/* WARNING: Removing unreachable block (ram,0x00619cb4) */
/* WARNING: Removing unreachable block (ram,0x00619d5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00619b50(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_2c;
  int local_20;
  void *local_1c;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e4728;
  pvStack_c = ExceptionList;
  local_1c = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_4 = 0;
  param_1 = param_1 + 0x148;
  local_2c = 5;
  ExceptionList = &pvStack_c;
  do {
    iVar1 = FUN_0061a8a0();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        if (local_18 < local_20 + 1) {
          local_18 = local_18 / 2;
          iVar1 = 1;
          if (0 < local_18) {
            iVar1 = local_18;
          }
          if (iVar1 + local_20 < 1) {
            local_18 = 1;
          }
          else {
            if (local_18 < 1) {
              local_18 = 1;
            }
            local_18 = local_20 + local_18;
          }
          pvVar2 = operator_new(local_18 * 4);
          iVar1 = 0;
          if (0 < local_20) {
            do {
              *(undefined4 *)((int)pvVar2 + iVar1 * 4) = *(undefined4 *)((int)local_1c + iVar1 * 4);
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_20);
          }
          FUN_006bf840(local_1c);
          local_1c = pvVar2;
        }
        *(int *)((int)local_1c + local_20 * 4) = param_1 + 0x50;
        local_20 = local_20 + 1;
      }
      if (*(int *)(param_1 + 0x40) != 0) {
        if (local_18 < local_20 + 1) {
          local_18 = local_18 / 2;
          iVar1 = 1;
          if (0 < local_18) {
            iVar1 = local_18;
          }
          if (iVar1 + local_20 < 1) {
            local_18 = 1;
          }
          else {
            if (local_18 < 1) {
              local_18 = 1;
            }
            local_18 = local_18 + local_20;
          }
          pvVar2 = operator_new(local_18 * 4);
          iVar1 = 0;
          if (0 < local_20) {
            do {
              *(undefined4 *)((int)pvVar2 + iVar1 * 4) = *(undefined4 *)((int)local_1c + iVar1 * 4);
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_20);
          }
          FUN_006bf840(local_1c);
          local_1c = pvVar2;
        }
        *(int *)((int)local_1c + local_20 * 4) = param_1 + 0x78;
        iVar1 = local_20 + 1;
        if (local_18 < local_20 + 2) {
          local_18 = local_18 / 2;
          iVar3 = 1;
          if (0 < local_18) {
            iVar3 = local_18;
          }
          if (iVar3 + iVar1 < 1) {
            local_18 = 1;
          }
          else {
            if (local_18 < 1) {
              local_18 = 1;
            }
            local_18 = local_18 + iVar1;
          }
          pvVar2 = operator_new(local_18 * 4);
          iVar3 = 0;
          if (0 < iVar1) {
            do {
              *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)((int)local_1c + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar1);
          }
          FUN_006bf840(local_1c);
          local_1c = pvVar2;
        }
        *(int *)((int)local_1c + iVar1 * 4) = param_1 + 0xa0;
        local_20 = local_20 + 2;
      }
    }
    param_1 = param_1 + 200;
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  piVar4 = (int *)FUN_0041bcc0();
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
  FUN_00401f00(*puVar5,(float)puVar5[1] + _DAT_006e9364,puVar5[2]);
  local_4 = 0xffffffff;
  FUN_005c8440();
  ExceptionList = pvStack_c;
  return param_2;
}

