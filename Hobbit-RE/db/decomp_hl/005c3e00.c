
int __fastcall FUN_005c3e00(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar2 = operator_new(0x404);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar2 + 0x400) = 0;
    }
    *(void **)(param_1 + 0x1c) = pvVar2;
    *(void **)(param_1 + 0x20) = pvVar2;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (0x3f < *(int *)(param_1 + 0x24)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x20) + 0x400);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = operator_new(0x404);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x400) = 0;
      }
      *(void **)(*(int *)(param_1 + 0x20) + 0x400) = pvVar2;
    }
    *(void **)(param_1 + 0x20) = pvVar2;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)(param_1 + 0x20);
}

