
int FUN_00588c20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_007780ac + 4 + param_1 * 0x18);
  while( true ) {
    if (iVar1 == -1) {
      return -1;
    }
    iVar2 = iVar1 * 0x20 + DAT_007780a0;
    if ((*(int *)(iVar1 * 0x20 + DAT_007780a0) == param_3) && (*(int *)(iVar2 + 4) == param_2))
    break;
    iVar1 = *(int *)(iVar2 + 8);
  }
  return iVar1;
}

