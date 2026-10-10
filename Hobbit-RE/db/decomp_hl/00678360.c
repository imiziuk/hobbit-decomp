
int * __fastcall FUN_00678360(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x29c);
  if (piVar1 != (int *)(param_1 + 0x298)) {
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    piVar1[0x22] = -2;
    return piVar1;
  }
  return (int *)0x0;
}

