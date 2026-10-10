
int * __thiscall FUN_00678450(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  FUN_00679ab0();
  piVar1 = (int *)param_1[0x3f];
  if (piVar1 == param_1 + 0x3e) {
    piVar1 = (int *)*param_1;
    if (param_2 <= piVar1[0x13]) {
      FUN_00679ac0();
      return (int *)0x0;
    }
    FUN_006795e0(piVar1,0);
  }
  else {
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
  }
  piVar1[0x23] = param_3;
  FUN_00679570(piVar1,0);
  FUN_00679ac0();
  return piVar1;
}

