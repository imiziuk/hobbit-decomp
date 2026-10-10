
undefined4 FUN_0055ab00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00647ed0(*(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc)),param_2);
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}

