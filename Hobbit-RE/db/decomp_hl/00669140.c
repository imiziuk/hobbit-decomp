
void __fastcall FUN_00669140(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  *(undefined4 **)(param_1 + 0x20) = puVar1 + -1;
  FUN_006bf840(*puVar1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(undefined4 **)(param_1 + 0x10) == *(undefined4 **)(param_1 + 0x20)) {
      FUN_006bf840(**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
    return;
  }
  iVar2 = **(int **)(param_1 + 0x20);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x18) = iVar2 + 0x1000;
  *(int *)(param_1 + 0x1c) = iVar2 + 0x1000;
  *(int **)(param_1 + 0x20) = *(int **)(param_1 + 0x20);
  return;
}

