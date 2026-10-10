
void __fastcall FUN_006baac0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x80) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x84) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x88) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xff7fffff;
  iVar3 = *(int *)(param_1 + 0xa0);
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      FUN_006bf700(*(undefined4 *)(*(int *)(iVar3 + 0x24) + iVar2 * 4),
                   *(undefined4 *)(param_1 + 0xb0));
      puVar1 = (undefined4 *)**(undefined4 **)(*(int *)(param_1 + 0xb4) + iVar2 * 4);
      fVar4 = (float10)FUN_006bf7f0();
      (*(code *)*puVar1)((float)fVar4);
      iVar3 = *(int *)(param_1 + 0xa0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar3 + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0xa0) + 0x10)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + iVar3 * 4) + 0x10))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0xa0) + 0x10));
  }
  return;
}

