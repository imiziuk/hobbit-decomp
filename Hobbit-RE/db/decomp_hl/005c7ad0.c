
void FUN_005c7ad0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = DAT_007bab10;
  iVar4 = DAT_007bab0c;
  if (0 < DAT_007bab0c) {
    do {
      iVar1 = iVar5 * 4;
      if (*(int *)(iVar1 + iVar3) == param_1) {
        iVar2 = (iVar4 - iVar5) + -1;
        if (0 < iVar2) {
          do {
            *(undefined4 *)(iVar1 + iVar3) = *(undefined4 *)(iVar1 + 4 + iVar3);
            iVar1 = iVar1 + 4;
            iVar2 = iVar2 + -1;
            iVar3 = DAT_007bab10;
            iVar4 = DAT_007bab0c;
          } while (iVar2 != 0);
        }
        iVar4 = iVar4 + -1;
        DAT_007bab0c = iVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

