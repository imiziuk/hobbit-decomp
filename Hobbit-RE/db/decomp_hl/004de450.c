
int __fastcall FUN_004de450(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      iVar1 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 300) + iVar3 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 300) + 4 + iVar3 * 8));
      if (((iVar1 != 0) && (*(char *)(iVar1 + 0x7c) == '\x05')) &&
         (iVar2 = FUN_004c6fa0(), iVar2 != 0)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x128));
  }
  return iVar2;
}

