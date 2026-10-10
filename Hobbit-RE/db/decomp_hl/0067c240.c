
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067c240(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = DAT_00808eb4;
  bVar4 = DAT_00808eb4 != (int *)0x0;
  DAT_00808eb4 = (int *)0x0;
  if (bVar4) {
    iVar1 = *piVar3;
    piVar2 = (int *)piVar3[1];
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[9] = 3;
    _DAT_00808eb0 = _DAT_00808eb0 + -1;
    if ((code *)piVar3[7] != (code *)0x0) {
      (*(code *)piVar3[7])(piVar3);
    }
  }
  return;
}

