
void __fastcall FUN_004d2760(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    do {
      iVar1 = FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 0x174) + iVar2 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 0x174) + 4 + iVar2 * 8));
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x7c) == '\x05')) {
        FUN_004c77d0(*(uint *)(param_1 + 0x160) >> 4 & 1);
        if ((*(uint *)(param_1 + 0x160) & 8) != 0) {
          bVar3 = (*(uint *)(param_1 + 0x160) & 2) == 0;
          if (bVar3) {
            FUN_004c74d0(0xbf800000);
          }
          else {
            FUN_004c74d0(0x3f800000);
          }
          FUN_004c75f0(!bVar3);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x170));
  }
  return;
}

