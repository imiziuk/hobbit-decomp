
void __fastcall FUN_005da180(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      piVar1 = (int *)FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 8),
                                   *(undefined4 *)(*(int *)(param_1 + 0x24) + 4 + iVar2 * 8));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x128))(*(undefined4 *)(param_1 + 0x34));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}

