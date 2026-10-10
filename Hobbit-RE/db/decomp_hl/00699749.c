
void FUN_00699749(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x1a4);
  iVar4 = 0;
  if (0 < *(int *)(unaff_EDI + 100)) {
    piVar5 = (int *)(iVar1 + 0x34);
    do {
      iVar2 = 0;
      if (0 < iVar4) {
        piVar3 = (int *)(iVar1 + 0x20);
        do {
          if (piVar5[-5] == *piVar3) {
            iVar2 = *(int *)(iVar1 + 0x34 + iVar2 * 4);
            if (iVar2 != 0) goto LAB_00699793;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar4);
      }
      iVar2 = FUN_006996e7();
LAB_00699793:
      *piVar5 = iVar2;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(unaff_EDI + 100));
  }
  return;
}

