
undefined4 __fastcall FUN_00450040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(int *)(param_1 + 0xc0) == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc0) + iVar3 * 8);
      iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 4 + iVar3 * 8);
      if (iVar2 != 0 || iVar1 != 0) {
        iVar2 = FUN_004021c0(iVar2,iVar1);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0xc0);
          *(undefined4 *)(iVar2 + iVar3 * 8) = 0;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
        }
        else {
          *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 200));
  }
  return *(undefined4 *)(param_1 + 0xbc);
}

