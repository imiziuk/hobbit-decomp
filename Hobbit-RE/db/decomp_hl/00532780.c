
int __thiscall FUN_00532780(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 <= param_2) {
    if (iVar1 < 1) {
      return 0;
    }
    param_2 = iVar1 + -1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + param_2 * 4);
  iVar2 = *(int *)(iVar1 + 100);
  if (iVar2 <= param_3) {
    if (iVar2 < 1) {
      param_3 = 0;
    }
    else {
      param_3 = iVar2 + -1;
    }
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x68) + param_3 * 4);
  if (*(int *)(iVar1 + 0x50) != 0) {
    param_3 = *(int *)(iVar1 + 0x4c);
  }
  return param_3;
}

