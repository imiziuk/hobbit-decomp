
int __fastcall FUN_006420d0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar4 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = *(int *)(param_1 + 0x10) / 2;
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
      iVar4 = *(int *)(param_1 + 0x18) + iVar4;
    }
    pvVar2 = operator_new(iVar4 * 8);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = *(int *)(param_1 + 0xc);
        *(undefined4 *)((int)pvVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
        *(undefined4 *)((int)pvVar2 + iVar3 * 8 + 4) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(int *)(param_1 + 0x10) = iVar4;
    *(void **)(param_1 + 0xc) = pvVar2;
  }
  iVar4 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar4;
  return *(int *)(param_1 + 0xc) + -8 + iVar4 * 8;
}

