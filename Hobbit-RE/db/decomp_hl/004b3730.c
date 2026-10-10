
void __fastcall FUN_004b3730(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(ushort *)(param_1 + 0x16e) = *(ushort *)(param_1 + 0x16e) & 0xfedf;
  if (*(int *)(param_1 + 0x160) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x160) + 0x48);
    if (iVar1 != 0) {
      if ((((iVar1 != -1) && (piVar2 = *(int **)(DAT_0076f648 + iVar1 * 0x14), piVar2 != (int *)0x0)
           ) && ((*(byte *)((int)piVar2 + 0x7f) & 0x10) != 0)) && (piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x114))();
      }
      *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x48) = 0;
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x160));
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}

