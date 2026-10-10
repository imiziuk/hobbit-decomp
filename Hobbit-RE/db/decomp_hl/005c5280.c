
undefined4 __thiscall FUN_005c5280(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df6ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x38);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005c50d0(param_2,param_3);
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
    pvVar1 = operator_new(iVar5 * 4);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(int *)(param_1 + 0x10) = iVar5;
    *(void **)(param_1 + 0xc) = pvVar1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = uVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  ExceptionList = local_c;
  return uVar2;
}

