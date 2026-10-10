
void __thiscall FUN_0064ac80(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = param_1[9];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      cVar2 = *(char *)(iVar3 + *param_1);
      if (cVar2 < ' ') {
        cVar2 = '.';
      }
      FUN_0064f020(&DAT_0074caf0,(int)cVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (param_2 != 0) {
    FUN_0064f020(&DAT_0074caf4);
  }
  return;
}

