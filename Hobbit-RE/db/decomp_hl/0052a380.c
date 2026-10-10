
void __fastcall FUN_0052a380(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00659c80(*(undefined4 *)(param_1 + 0x3a4),0);
  FUN_00659c80(*(undefined4 *)(param_1 + 0x3a8),0);
  return;
}

