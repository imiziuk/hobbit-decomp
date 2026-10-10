
undefined8 __thiscall FUN_00415590(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0x2f0);
  while( true ) {
    if ((iVar1 == piVar3[4]) && (iVar2 == piVar3[5])) {
      return CONCAT44(*(undefined4 *)(param_1 + 0x3a4 + iVar4 * 8),
                      *(undefined4 *)(param_1 + 0x3a0 + iVar4 * 8));
    }
    if ((iVar1 == *piVar3) && (iVar2 == piVar3[1])) break;
    if ((iVar1 == piVar3[-4]) && (iVar2 == piVar3[-3])) {
      return CONCAT44(*(undefined4 *)(param_1 + 0x3c4 + iVar4 * 8),
                      *(undefined4 *)(param_1 + 0x3c0 + iVar4 * 8));
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 2;
    if (1 < iVar4) {
      return 0;
    }
  }
  return CONCAT44(*(undefined4 *)(param_1 + 0x3b4 + iVar4 * 8),
                  *(undefined4 *)(param_1 + 0x3b0 + iVar4 * 8));
}

