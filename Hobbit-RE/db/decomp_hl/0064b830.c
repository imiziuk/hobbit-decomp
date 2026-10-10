
int * __thiscall FUN_0064b830(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[9];
  FUN_0064af30(iVar1);
  iVar2 = 0;
  if (0 < param_2[9]) {
    do {
      *(ushort *)(*param_1 + iVar2 * 2) = (ushort)*(byte *)(*param_2 + iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[9]);
  }
  *(undefined2 *)(*param_1 + iVar2 * 2) = 0;
  param_1[0x11] = iVar1;
  return param_1;
}

