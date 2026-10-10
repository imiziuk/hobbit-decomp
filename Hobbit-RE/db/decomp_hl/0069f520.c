
int __thiscall FUN_0069f520(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      iVar1 = FUN_0064a7e0(*(undefined4 *)(*(int *)(param_1 + 0x84) + iVar2 * 4),param_2);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x80));
  }
  return -1;
}

