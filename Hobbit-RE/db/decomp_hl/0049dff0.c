
void __thiscall FUN_0049dff0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  if ((param_2 != *(int *)(param_1 + 8)) || (param_3 != *(int *)(param_1 + 0xc))) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      piVar2 = *(int **)(param_1 + 0xb4);
      do {
        if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
          (*(int **)(param_1 + 0xb4))[iVar1 * 4 + 2] = param_4;
          return;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar1 < *(int *)(param_1 + 0xb0));
    }
    local_14 = param_3;
    local_18 = param_2;
    local_10 = param_4;
    local_c = 0;
    FUN_0049ec80(&local_18);
  }
  return;
}

