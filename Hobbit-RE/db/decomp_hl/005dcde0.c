
void __fastcall FUN_005dcde0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x44);
  if (0 < iVar2) {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar1 = FUN_00647b10(0,iVar2 + -1);
      *(undefined4 *)(param_1 + 0x38) = uVar1;
    }
    else if ((*(int *)(param_1 + 0x34) == 1) &&
            (iVar3 = *(int *)(param_1 + 0x38) + 1, *(int *)(param_1 + 0x38) = iVar3, iVar2 <= iVar3)
            ) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    iVar2 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x38) * 8),
                         *(undefined4 *)
                          (*(int *)(param_1 + 0x48) + 4 + *(int *)(param_1 + 0x38) * 8));
    if (iVar2 != 0) {
      FUN_0046a550();
      return;
    }
    FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x38) * 8),
                 *(undefined4 *)(*(int *)(param_1 + 0x48) + 4 + *(int *)(param_1 + 0x38) * 8));
  }
  return;
}

