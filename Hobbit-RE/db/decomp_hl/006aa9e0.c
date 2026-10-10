
int __thiscall FUN_006aa9e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4 + param_2 * 4) + 4 + *(int *)(param_1 + 8) * 4 +
          *(int *)(param_1 + 4);
  iVar1 = FUN_006480e0(iVar2);
  return iVar2 + 2 + iVar1 * 2;
}

