
undefined4 __thiscall FUN_005f5a60(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 9) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      piVar1 = *(int **)(param_1 + 0x18);
      do {
        if ((((*piVar1 == param_2[2]) && (piVar1[1] == param_2[3])) &&
            ((*(int *)(param_1 + 0x28) == 0 || (param_2[4] == *(int *)(param_1 + 0x28))))) &&
           ((*(int *)(param_1 + 0x2c) == 0 || (param_2[5] == *(int *)(param_1 + 0x2c))))) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
          return 1;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 2;
      } while (iVar2 < *(int *)(param_1 + 0x14));
    }
  }
  return 0;
}

