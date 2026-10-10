
void FUN_006702d0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_007f16c4;
  do {
    piVar1 = (int *)piVar2[-0x20];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
      (**(code **)(*(int *)piVar2[-0x20] + 8))((int *)piVar2[-0x20]);
    }
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
      (**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2);
    }
    piVar1 = (int *)piVar2[0x20];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
      (**(code **)(*(int *)piVar2[0x20] + 8))((int *)piVar2[0x20]);
    }
    piVar2 = piVar2 + 4;
  } while ((int)piVar2 < 0x7f1744);
  if (DAT_007f1614 != (int *)0x0) {
    (**(code **)(*DAT_007f1614 + 8))(DAT_007f1614);
  }
  DAT_007f23a0 = 0;
  return;
}

