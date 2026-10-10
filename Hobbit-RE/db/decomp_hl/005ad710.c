
void __fastcall FUN_005ad710(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xac) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xac) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}

