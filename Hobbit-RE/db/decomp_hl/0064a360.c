
int * __thiscall FUN_0064a360(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[0x11];
  FUN_00649960(iVar1);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *(undefined1 *)(iVar2 + *param_1) = *(undefined1 *)(*param_2 + iVar2 * 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined1 *)(iVar2 + *param_1) = 0;
  param_1[9] = iVar1;
  return param_1;
}

