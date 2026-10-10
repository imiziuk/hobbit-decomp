
int __thiscall FUN_00532710(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc0) + param_2 * 4) + 0x68) + param_3 * 4
                    );
    if ((*(int *)(iVar1 + 0x50) != 0) && (iVar1 = *(int *)(iVar1 + 0x5c), iVar1 != 0)) {
      iVar2 = FUN_00647b10(0,iVar1 + -1);
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc0) + param_2 * 4) + 0x68) +
                      param_3 * 4);
      iVar2 = *(int *)(*(int *)(iVar1 + 0x60) + iVar2 * 4);
      *(int *)(iVar1 + 0x4c) = iVar2;
      return iVar2;
    }
  }
  return param_3;
}

