
void __fastcall FUN_005dddc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if (0 < iVar3) {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar2 = FUN_00647b10(0,iVar3 + -1);
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
    }
    else if ((*(int *)(param_1 + 0x34) == 1) &&
            (iVar4 = *(int *)(param_1 + 0x5c) + 1, *(int *)(param_1 + 0x5c) = iVar4, iVar3 <= iVar4)
            ) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    iVar3 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar3 = *(int *)(iVar3 + 0x300);
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(iVar1 + iVar4 * 8);
      *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(iVar1 + 4 + iVar4 * 8);
    }
  }
  return;
}

