
undefined4 __thiscall FUN_0063dcd0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = param_1[6];
    iVar1 = *param_1;
    param_2 = iVar3 + param_2;
    param_1[6] = param_2;
    __allshr();
    __allshl();
    for (iVar3 = (iVar3 >> 3) + iVar1; iVar3 != iVar1 + 1 + (param_2 + -1 >> 3); iVar3 = iVar3 + 1)
    {
      __allshl();
    }
    uVar2 = __aullshr();
    return uVar2;
  }
  return 0;
}

