
int __thiscall FUN_00676e00(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  FUN_0064a320(param_2);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  if (param_1 + 0x34 != param_2 + 0x34) {
    if (*(int *)(param_1 + 0x44) < *(int *)(param_2 + 0x3c)) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0x40));
      pvVar1 = operator_new(*(int *)(param_2 + 0x3c) << 2);
      *(void **)(param_1 + 0x40) = pvVar1;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x3c);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0x3c)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_2 + 0x40) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x3c));
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  return param_1;
}

