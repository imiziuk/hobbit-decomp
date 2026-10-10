
void __fastcall FUN_005af360(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + iVar1 * 4) + 0x4c))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa8));
  }
  FUN_005aede0();
  return;
}

