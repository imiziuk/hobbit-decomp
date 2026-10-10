
void __fastcall FUN_005bdff0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x134)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4);
      if (((iVar2 != 0) && (((byte)*(undefined4 *)(iVar2 + 0x10) & 1) == 1)) &&
         (iVar2 = FUN_004021c0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)
         ) {
        *(byte *)(iVar2 + 0x15b) = *(byte *)(iVar2 + 0x15b) & 0xbf;
        FUN_004c75f0(1);
        FUN_004c77d0(0);
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4) + 0x10);
        *puVar1 = *puVar1 | 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x134));
  }
  return;
}

