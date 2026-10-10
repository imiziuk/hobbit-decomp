
void __thiscall FUN_005b6e90(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x14) < iVar4 + 1) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = *(int *)(param_1 + 0x14) / 2;
      iVar3 = 1;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      if (iVar4 + iVar3 < 1) {
        iVar4 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar4 = iVar4 + iVar1;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1c) + iVar4;
    }
    pvVar2 = operator_new(iVar4 * 4);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xc));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x14) = iVar4;
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 4) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

