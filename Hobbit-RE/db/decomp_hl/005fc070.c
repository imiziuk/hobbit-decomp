
undefined4 __fastcall FUN_005fc070(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = 1;
  if ((0 < iVar2) || (uVar1 = 0, 0 < iVar2)) {
    piVar3 = *(int **)(param_1 + 0x18);
    do {
      if (*(int *)*piVar3 == 0 && ((int *)*piVar3)[1] == 0) {
        uVar1 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

