
void __fastcall FUN_004de520(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      iVar1 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 300) + iVar2 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 300) + 4 + iVar2 * 8));
      if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x7c) == '\x05')) &&
          ((*(ushort *)(iVar1 + 0x15a) & 0x400) != 0)) &&
         ((*(ushort *)(iVar1 + 0x15a) & 0x1000) == 0)) {
        FUN_004c2f60(1,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x128));
  }
  return;
}

