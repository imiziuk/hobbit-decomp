
int __thiscall FUN_0053cb40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00647cf0(param_2);
  if (iVar1 != 0) {
    iVar1 = 0;
    if (param_3 == 0) {
      if (0 < *(int *)(param_1 + 0x4c)) {
        iVar3 = 0;
        do {
          iVar2 = FUN_00647ed0(*(int *)(param_1 + 0x50) + 6 + iVar3,param_2);
          if (iVar2 == 0) {
            return iVar1;
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x80;
        } while (iVar1 < *(int *)(param_1 + 0x4c));
        return -1;
      }
    }
    else if (0 < *(int *)(param_1 + 0x4c)) {
      iVar3 = 0;
      do {
        iVar2 = FUN_00647f90(*(int *)(param_1 + 0x50) + 6 + iVar3,param_2);
        if (iVar2 != 0) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x80;
      } while (iVar1 < *(int *)(param_1 + 0x4c));
    }
  }
  return -1;
}

