
void __fastcall FUN_005e2ba0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar2 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 0x28) + 4 + iVar2 * 8));
      if (iVar1 != 0) {
        FUN_004a0fc0(*(undefined4 *)(param_1 + 0x18));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return;
}

