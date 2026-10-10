
void __thiscall FUN_006a4c90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < -1) {
    param_2 = -1;
  }
  iVar2 = *(int *)(param_1 + 0x160) + -1;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if ((param_2 == -1) || (*(int *)(param_2 * 0x58 + *(int *)(param_1 + 0x164)) != 0)) {
    *(int *)(param_1 + 0x174) = param_2;
    FUN_006a4cf0(param_2);
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,4,*(undefined4 *)(param_1 + 0x174));
    }
  }
  return;
}

