
void __thiscall FUN_004de3d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      iVar1 = FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 300) + iVar3 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 300) + 4 + iVar3 * 8));
      if (((iVar1 != 0) && (*(char *)(iVar1 + 0x7c) == '\x05')) &&
         (iVar2 = FUN_004c6f40(param_2), iVar2 != 0)) {
        FUN_004c77d0(param_3);
        *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x128));
  }
  return;
}

