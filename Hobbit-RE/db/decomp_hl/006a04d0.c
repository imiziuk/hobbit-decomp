
int FUN_006a04d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x5c8);
  iVar4 = 0;
  if (0 < iVar3) {
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x5cc) + iVar3 * 4);
      FUN_006a33c0(&param_2,&param_3);
      iVar4 = FUN_006a31a0(param_2,param_3);
      if ((iVar4 != 0) && (uVar2 = FUN_006a3230(), (uVar2 & 0x100) != 0)) {
        iVar4 = iVar1;
      }
      uVar2 = FUN_006a3230();
      if ((uVar2 & 0x1000) != 0) {
        if (iVar4 != 0) {
          return iVar4;
        }
        return iVar1;
      }
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  return iVar4;
}

