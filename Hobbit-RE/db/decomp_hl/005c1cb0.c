
void __thiscall FUN_005c1cb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x14) + iVar1 * 4) != 0) {
          FUN_0063af70(param_2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}

