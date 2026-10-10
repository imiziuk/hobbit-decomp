
int __thiscall FUN_005c1070(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00647ed0(*(int *)(param_1 + 0x60) + iVar2,param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 0x5c));
  }
  return -1;
}

