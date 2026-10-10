
void __fastcall FUN_00522d60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x174) != 0) {
    piVar1 = (int *)(param_1 + 0x170);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0x16c) + -1;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(int *)(param_1 + 0x16c) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
    }
    piVar1 = (int *)(param_1 + 0x168);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      return;
    }
    FUN_00659600(s_CursorMove_00731fe0,1);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}

