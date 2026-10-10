
void __thiscall FUN_0064b010(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_0064afc0(param_2);
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(short *)(*param_1 + iVar1 * 2) = (short)*(char *)(iVar1 + param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  param_1[0x11] = param_2;
  *(undefined2 *)(*param_1 + param_2 * 2) = 0;
  return;
}

