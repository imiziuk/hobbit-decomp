
int __thiscall FUN_0063f960(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00647ed0(*(int *)(param_1 + 0x10c) + iVar2,param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x148;
    } while (iVar3 < *(int *)(param_1 + 0x104));
  }
  return -1;
}

