
undefined4 __thiscall FUN_00663f20(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x348);
  iVar1 = param_2[6];
  if (iVar2 % iVar1 != 0) {
    iVar2 = iVar2 + (iVar1 - iVar2 % iVar1);
  }
  iVar1 = param_2[5] * iVar1 + iVar2;
  if (*(int *)(param_1 + 0x34c) < iVar1) {
    return 0;
  }
  (**(code **)(*param_2 + 0x10))(*(undefined4 *)(param_1 + 4),param_1,iVar2);
  *(int *)(param_1 + 0x348) = iVar1;
  return 1;
}

