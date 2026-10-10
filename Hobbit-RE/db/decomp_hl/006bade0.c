
void __fastcall FUN_006bade0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0x10;
  do {
    piVar2 = (int *)(*(int *)(param_1 + 4) + iVar1);
    if (*piVar2 != -1) {
      if (iVar1 < 0x34) {
        *(undefined4 *)(param_1 + 0x8c) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
      *(undefined4 *)(param_1 + -4 + iVar1) = *(undefined4 *)(*(int *)(param_1 + 8) + *piVar2 * 4);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x44);
  return;
}

