
void __thiscall FUN_004de4b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      iVar1 = FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 300) + iVar2 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 300) + 4 + iVar2 * 8));
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x7c) == '\x05')) {
        *(ushort *)(iVar1 + 0x15a) =
             ((ushort)(param_2 << 0xe) ^ *(ushort *)(iVar1 + 0x15a)) & 0x4000 ^
             *(ushort *)(iVar1 + 0x15a);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x128));
  }
  return;
}

