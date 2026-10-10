
int * FUN_0067da08(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00753528;
  while( true ) {
    if (PTR_DAT_007539d8 <= piVar1) {
      return (int *)&DAT_007539b0;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 10;
  }
  return piVar1;
}

