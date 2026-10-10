
undefined4 __thiscall FUN_005fc0a0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar1 = *(int **)(param_1 + 0x18);
    do {
      if ((*(int *)*piVar1 == param_2) && (((int *)*piVar1)[1] == param_3)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

