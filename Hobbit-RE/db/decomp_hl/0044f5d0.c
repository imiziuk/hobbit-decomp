
void __fastcall FUN_0044f5d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc0) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 200))) {
    do {
      iVar1 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar2 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4 + iVar2 * 8));
      if (iVar1 != 0) {
        FUN_004aaa60();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 200));
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}

