
undefined4 __thiscall FUN_0055d1e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x70)) {
      do {
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 100)) {
          piVar1 = *(int **)(param_1 + 0x68);
          do {
            if (*(int *)(*(int *)(param_2 + 0x74) + iVar3 * 4) == *piVar1) {
              return 0;
            }
            iVar2 = iVar2 + 1;
            piVar1 = piVar1 + 1;
          } while (iVar2 < *(int *)(param_1 + 100));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_2 + 0x70));
    }
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x8c)) {
      do {
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x80)) {
          piVar1 = *(int **)(param_1 + 0x84);
          do {
            if (*(int *)(*(int *)(param_2 + 0x90) + iVar3 * 4) == *piVar1) {
              return 0;
            }
            iVar2 = iVar2 + 1;
            piVar1 = piVar1 + 1;
          } while (iVar2 < *(int *)(param_1 + 0x80));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_2 + 0x8c));
    }
  }
  return 1;
}

