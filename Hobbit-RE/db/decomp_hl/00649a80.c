
void __thiscall FUN_00649a80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_006499f0(param_2);
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(ushort *)(param_3 + iVar1 * 2) < 0x100) {
        *(undefined1 *)(iVar1 + *param_1) = *(undefined1 *)(param_3 + iVar1 * 2);
      }
      else {
        *(undefined1 *)(iVar1 + *param_1) = 0x2e;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  param_1[9] = param_2;
  *(undefined1 *)(param_2 + *param_1) = 0;
  return;
}

