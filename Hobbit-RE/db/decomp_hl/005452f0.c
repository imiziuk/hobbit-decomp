
void FUN_005452f0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0063ce20(&local_c,3,8);
  FUN_0063ce20(&local_8,0,0x20);
  piVar1 = param_3;
  *param_3 = 0;
  while( true ) {
    FUN_0063cd60(&param_1,local_c);
    *piVar1 = *piVar1 + param_1;
    if (param_1 == 0) break;
    FUN_0063cd60(&local_4,local_8);
    iVar2 = param_1;
    puVar3 = param_2;
    if (param_1 != 0) {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = local_4;
        puVar3 = puVar3 + 1;
      }
      param_2 = param_2 + param_1;
      iVar2 = param_1;
      do {
        param_1 = param_1 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    param_1 = param_1 + -1;
  }
  return;
}

