
void __fastcall FUN_00582290(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[2];
  param_1[2] = iVar1 + -1;
  if ((iVar1 + -1 == 0) && (iVar1 = 0, 0 < param_1[1] + *param_1)) {
    piVar2 = param_1 + 7;
    do {
      *piVar2 = 0;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < param_1[1] + *param_1);
  }
  return;
}

