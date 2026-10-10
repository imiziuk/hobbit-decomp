
void __thiscall FUN_005a2a20(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (param_2 != *(int *)(param_1 + 0x10)) {
    pvVar1 = operator_new(param_2 * 4);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0xc) = pvVar1;
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}

