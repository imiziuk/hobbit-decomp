
void __fastcall FUN_0055cc10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + iVar3 * 4);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0xc);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x5c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x1c))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + iVar3 * 4) + 0x5c) != 0) {
        FUN_005cc2f0();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  return;
}

