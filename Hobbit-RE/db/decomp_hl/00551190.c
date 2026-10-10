
void __fastcall FUN_00551190(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00659c80(*(undefined4 *)(param_1 + 0x50),0);
  if ((*(byte *)(param_1 + 0x54) & 2) != 0) {
    FUN_005c9720();
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfd;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0xac));
      if (iVar1 != 0) {
        FUN_00551070();
        FUN_006bf840(iVar1);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x80);
    FUN_006bf840(*(undefined4 *)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0xb0));
      if (iVar1 != 0) {
        FUN_00551070();
        FUN_006bf840(iVar1);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x800);
    FUN_006bf840(*(undefined4 *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_00551130();
  return;
}

