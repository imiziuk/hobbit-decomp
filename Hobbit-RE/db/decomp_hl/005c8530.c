
void __fastcall FUN_005c8530(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

