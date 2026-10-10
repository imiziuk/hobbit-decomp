
bool __thiscall FUN_00652580(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0064f210(param_2,&DAT_0074d3cc);
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = FUN_0064f970(iVar1);
  FUN_00651e00(iVar2);
  iVar3 = FUN_0064f350(*param_1,1,iVar2,iVar1);
  *(int *)(*param_1 + -4) = iVar3;
  FUN_0064f2b0(iVar1);
  return iVar3 == iVar2;
}

