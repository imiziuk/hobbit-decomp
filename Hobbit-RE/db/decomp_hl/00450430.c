
void __fastcall FUN_00450430(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xbc) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 200))) {
    do {
      iVar1 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar2 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4 + iVar2 * 8));
      if (iVar1 != 0) {
        FUN_004aaa60();
      }
      iVar1 = *(int *)(param_1 + 0xc0);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}

