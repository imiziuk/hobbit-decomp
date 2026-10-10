
int __thiscall FUN_005256c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x1b4) + iVar3;
      if ((*(int *)(*(int *)(param_1 + 0x1b4) + iVar3) == param_2) &&
         (*(int *)(iVar1 + 4) == param_3)) {
        iVar1 = FUN_00525860(*(undefined4 *)(iVar1 + 0xc));
        if (iVar1 == 1) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (iVar2 < *(int *)(param_1 + 0x1b0));
  }
  return -1;
}

