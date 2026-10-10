
void __fastcall FUN_005b7050(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        FUN_006bf840(puVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

