
void __fastcall FUN_005aed60(int param_1)

{
  int iVar1;
  
  FUN_005afc40();
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + iVar1 * 4) + 100))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa8));
  }
  iVar1 = FUN_005af720(1);
  if (iVar1 == 0) {
    if (**(int **)(param_1 + 0xac) != 0) {
      *(uint *)(param_1 + 0xc0) = (uint)*(byte *)(**(int **)(param_1 + 0xac) + 0x44);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0xc0) = 1;
  return;
}

