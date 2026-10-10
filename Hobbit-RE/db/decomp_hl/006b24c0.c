
int __fastcall FUN_006b24c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x134);
  iVar3 = -1;
  if (0 < iVar2) {
    piVar1 = (int *)(param_1 + 0x13c);
    do {
      if ((piVar1[-1] == 2) && (iVar3 < *piVar1)) {
        iVar3 = *piVar1;
      }
      piVar1 = piVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar3 != -1) {
      return iVar3 + 1;
    }
  }
  return 0;
}

