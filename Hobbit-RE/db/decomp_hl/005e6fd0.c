
void __fastcall FUN_005e6fd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      iVar1 = FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 0x24) + 4 + iVar2 * 8));
      if (iVar1 != 0) {
        FUN_004c7660(*(undefined4 *)(param_1 + 0x34));
        FUN_004c77d0(*(undefined4 *)(param_1 + 0x38));
        *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
        *(byte *)(iVar1 + 0x7f) = *(byte *)(iVar1 + 0x7f) & 0xfe ^ 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}

