
void __thiscall FUN_005f10c0(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if (param_2 != *(int *)(param_1 + 0x10)) {
    pvVar2 = operator_new(param_2 * 8);
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
    *(void **)(param_1 + 0xc) = pvVar2;
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}

