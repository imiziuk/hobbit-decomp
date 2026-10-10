
void __fastcall FUN_00552af0(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar5 = FUN_0065f190(s_Lightning_Forks_0073d364);
  if (iVar5 == 0) {
    return;
  }
  FUN_0066c3a0(3,0xa4);
  FUN_0066dac0();
  iVar5 = 0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    do {
      psVar2 = *(short **)(*(int *)(param_1 + 0xac) + iVar5 * 4);
      sVar1 = *psVar2;
      if (0 < sVar1) {
        *psVar2 = sVar1 + -1;
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xac) + iVar5 * 4) + 0x13) = 0;
        iVar3 = *(int *)(*(int *)(param_1 + 0xac) + iVar5 * 4);
        uVar4 = __ftol();
        *(undefined1 *)(iVar3 + 0xf) = uVar4;
        FUN_00552c60(*(undefined4 *)(*(int *)(param_1 + 0xac) + iVar5 * 4),1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar5 = 0;
    do {
      psVar2 = *(short **)(iVar5 + *(int *)(param_1 + 0xb0));
      if ((psVar2 != (short *)0x0) && (0 < *psVar2)) {
        *psVar2 = *psVar2 + -1;
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xb0) + iVar5) + 0x13) = 0;
        iVar3 = *(int *)(iVar5 + *(int *)(param_1 + 0xb0));
        uVar4 = __ftol();
        *(undefined1 *)(iVar3 + 0xf) = uVar4;
        psVar2 = *(short **)(iVar5 + *(int *)(param_1 + 0xb0));
        if ((*psVar2 < 1) && (*(int *)(psVar2 + 4) != 0)) {
          *psVar2 = DAT_0073d2e4;
        }
        FUN_00552c60(*(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar5),0);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x800);
  }
  FUN_0066d9a0();
  FUN_0065f430();
  return;
}

