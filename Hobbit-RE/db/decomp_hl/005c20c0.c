
void __fastcall FUN_005c20c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x14) + iVar1 * 4) != 0) {
        FUN_0063b200();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

