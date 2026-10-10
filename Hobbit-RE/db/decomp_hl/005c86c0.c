
void __fastcall FUN_005c86c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4) + 0xc))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}

