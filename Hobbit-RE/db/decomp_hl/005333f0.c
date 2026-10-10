
void __fastcall FUN_005333f0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc4) != 0x14) {
    pvVar1 = operator_new(0x50);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xbc)) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xbc));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc0));
    *(void **)(param_1 + 0xc0) = pvVar1;
    *(undefined4 *)(param_1 + 0xc4) = 0x14;
  }
  if (*(int *)(param_1 + 0xe0) != 0x14) {
    pvVar1 = operator_new(0x50);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xd8)) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xd8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xdc));
    *(void **)(param_1 + 0xdc) = pvVar1;
    *(undefined4 *)(param_1 + 0xe0) = 0x14;
  }
  FUN_005321b0();
  return;
}

