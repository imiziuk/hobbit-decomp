
void __fastcall FUN_00522dd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x174);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x170) + 1;
    *(int *)(param_1 + 0x170) = iVar2;
    if (DAT_007626a4 + -1 < iVar2) {
      *(int *)(param_1 + 0x170) = DAT_007626a4 + -1;
      iVar2 = *(int *)(param_1 + 0x16c) + 1;
      *(int *)(param_1 + 0x16c) = iVar2;
      if (iVar1 - DAT_007626a4 < iVar2) {
        *(int *)(param_1 + 0x16c) = iVar1 - DAT_007626a4;
      }
    }
    iVar2 = *(int *)(param_1 + 0x168) + 1;
    *(int *)(param_1 + 0x168) = iVar2;
    if (iVar1 + -1 < iVar2) {
      *(int *)(param_1 + 0x168) = iVar1 + -1;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      return;
    }
    FUN_00659600(s_CursorMove_00731fe0,1);
  }
  *(undefined4 *)(param_1 + 0x15c) = 0;
  return;
}

