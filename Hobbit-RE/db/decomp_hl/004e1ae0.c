
int __thiscall FUN_004e1ae0(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 8)) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
      pvVar1 = operator_new(*(int *)(param_2 + 8) << 2);
      *(void **)(param_1 + 0xc) = pvVar1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_2 + 0xc) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 8));
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  return param_1;
}

