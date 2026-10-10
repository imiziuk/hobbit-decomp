
void __fastcall FUN_005e8050(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = iVar1 * 4;
    FUN_006bf840(*(undefined4 *)(*(int *)(param_1 + 0x24) + iVar1 * 4));
    iVar3 = (*(int *)(param_1 + 0x20) - iVar1) + -1;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x24)) =
             *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x24));
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  }
  return;
}

