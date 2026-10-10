
int FUN_005a7750(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      param_1 = param_1 >> 1;
      iVar1 = iVar1 + 1;
    } while (param_1 != 0);
  }
  return iVar1;
}

