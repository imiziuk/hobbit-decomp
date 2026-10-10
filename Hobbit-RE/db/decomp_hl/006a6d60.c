
void __thiscall
FUN_006a6d60(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_3 == 0) {
    iVar1 = -1;
  }
  else if (param_3 == 1) {
    iVar1 = 1;
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))(param_2,param_3,param_4,param_5);
    }
  }
  else if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x160) + iVar1;
    iVar2 = *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x15c);
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (iVar1 <= iVar2) {
      return;
    }
    if ((0 < param_4) && (iVar3 != *(int *)(param_1 + 0x160))) {
      *(int *)(param_1 + 0x160) = iVar3;
      return;
    }
  }
  return;
}

