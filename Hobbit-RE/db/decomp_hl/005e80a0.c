
void __fastcall FUN_005e80a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + iVar3 * 4);
      iVar2 = FUN_00406bf0(*puVar1,puVar1[1]);
      if (iVar2 != 0) {
        FUN_004c7f60(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + iVar3 * 4) + 8));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}

