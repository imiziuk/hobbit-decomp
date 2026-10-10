
void FUN_0069566d(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x184);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      cVar2 = FUN_00695072();
      if (cVar2 != '\0') {
        *(undefined **)(iVar1 + 0xc) = &DAT_00695155;
        goto LAB_0069569e;
      }
    }
    *(code **)(iVar1 + 0xc) = FUN_00694f0c;
  }
LAB_0069569e:
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

