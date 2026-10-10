
void __fastcall FUN_005c8690(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4) + 0x10))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}

