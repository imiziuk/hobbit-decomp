
undefined4 __thiscall FUN_006ab120(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_00647e40(**(undefined4 **)(*(int *)(param_1 + 0xc) + iVar2 * 4),param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}

