
void __fastcall FUN_005b7180(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_005b6ab0();
        FUN_006bf840(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

