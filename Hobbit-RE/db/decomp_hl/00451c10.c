
void __thiscall FUN_00451c10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(int *)(param_1 + 8) - param_2) - param_3;
  if (0 < iVar2) {
    iVar3 = param_2 * 4;
    iVar1 = (param_2 + param_3) * 4;
    do {
      *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc)) =
           *(undefined4 *)(iVar1 + *(int *)(param_1 + 0xc));
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_3;
  return;
}

