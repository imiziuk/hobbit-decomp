
void __thiscall FUN_00451b00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*(int *)(param_1 + 8) - param_2) - param_3;
  if (0 < iVar2) {
    iVar4 = param_2 * 8;
    iVar3 = (param_2 + param_3) * 8;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar4 + iVar1) = *(undefined4 *)(iVar3 + iVar1);
      *(undefined4 *)(iVar4 + 4 + iVar1) = *(undefined4 *)(iVar3 + 4 + iVar1);
      iVar4 = iVar4 + 8;
      iVar3 = iVar3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_3;
  return;
}

