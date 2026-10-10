
void FUN_006748a0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    FUN_00674940(iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  piVar3 = &DAT_007f2430;
  do {
    piVar1 = (int *)*piVar3;
    if (5000 < (int)piVar1) {
      (**(code **)(*piVar1 + 8))(piVar1);
      DAT_007f2428 = DAT_007f2428 + -1;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x7f7250);
  return;
}

