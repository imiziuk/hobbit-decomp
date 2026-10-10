
int __fastcall FUN_005c8580(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df99b;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 8);
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x48);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_005c86f0();
  }
  iVar5 = *(int *)(param_1 + 8);
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) < iVar5 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar3 = *(int *)(param_1 + 0x10) / 2;
      iVar4 = 1;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar5 + iVar4 < 1) {
        iVar5 = 1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar5 = iVar5 + iVar3;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x18) + iVar5;
    }
    pvVar2 = operator_new(iVar5 * 4);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar2;
    *(int *)(param_1 + 0x10) = iVar5;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = local_10;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4) + 4))();
  ExceptionList = pvStack_c;
  return iVar1;
}

