
void __thiscall FUN_006a34a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
      (**(code **)(*piVar1 + 0x38))(piVar1,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}

