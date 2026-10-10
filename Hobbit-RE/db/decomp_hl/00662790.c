
void FUN_00662790(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_4 [4];
  
  piVar3 = (int *)*DAT_007f049c;
  if (piVar3 != DAT_007f049c) {
    do {
      (**(code **)(*(int *)piVar3[4] + 8))((int *)piVar3[4]);
      piVar2 = (int *)piVar3[2];
      if (piVar2 == DAT_007f143c) {
        piVar2 = (int *)piVar3[1];
        if (piVar3 == (int *)piVar2[2]) {
          do {
            piVar3 = piVar2;
            piVar2 = (int *)piVar3[1];
          } while (piVar3 == (int *)piVar2[2]);
        }
        if ((int *)piVar3[2] != piVar2) {
          piVar3 = piVar2;
        }
      }
      else {
        for (piVar1 = (int *)*piVar2; piVar3 = piVar2, piVar1 != DAT_007f143c;
            piVar1 = (int *)*piVar1) {
          piVar2 = piVar1;
        }
      }
    } while (piVar3 != DAT_007f049c);
  }
  piVar2 = DAT_007f049c;
  piVar3 = (int *)*DAT_007f049c;
  if (DAT_007f04a4 != 0) {
    piVar3 = (int *)DAT_007f049c[1];
    if (piVar3 != DAT_007f143c) {
      do {
        FUN_00669040(piVar3[2]);
        piVar2 = (int *)*piVar3;
        FUN_006bf840(piVar3);
        piVar3 = piVar2;
      } while (piVar2 != DAT_007f143c);
    }
    DAT_007f049c[1] = (int)DAT_007f143c;
    DAT_007f04a4 = 0;
    *DAT_007f049c = (int)DAT_007f049c;
    DAT_007f049c[2] = (int)DAT_007f049c;
    return;
  }
  DAT_007f04a4 = 0;
  while (piVar3 != piVar2) {
    FUN_00667fa0();
    FUN_00667b90(auStack_4,piVar3);
  }
  return;
}

