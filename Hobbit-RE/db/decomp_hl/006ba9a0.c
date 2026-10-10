
void __thiscall FUN_006ba9a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  FUN_006ba0b0(param_2);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(int *)(param_1 + 0xb0) = param_1 + 0xb8;
  iVar3 = 0;
  iVar2 = param_1 + 0xb8 + *(int *)(param_2 + 8) * 4;
  *(int *)(param_1 + 0xb4) = iVar2;
  puVar4 = (undefined4 *)(iVar2 + *(int *)(param_2 + 0xc) * 4);
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      (**(code **)(&DAT_00815820 +
                  *(int *)(*(int *)(*(int *)(param_2 + 0x24) + iVar3 * 4) + 4) * 0x24))(puVar4);
      *(undefined4 **)(*(int *)(param_1 + 0xb4) + iVar3 * 4) = puVar4;
      FUN_006bf700(*(undefined4 *)(*(int *)(param_2 + 0x24) + iVar3 * 4),
                   *(undefined4 *)(param_1 + 0xb0));
      puVar1 = (undefined4 *)*puVar4;
      fVar5 = (float10)FUN_006bf7f0();
      (*(code *)*puVar1)((float)fVar5);
      puVar4 = puVar4 + 6;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 0xc));
  }
  *(undefined4 **)(param_1 + 0x9c) = puVar4;
  puVar4 = puVar4 + *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    do {
      (**(code **)(&DAT_00813300 +
                  *(int *)(*(int *)(*(int *)(param_2 + 0x28) + iVar2 * 4) + 4) * 0x28))(puVar4);
      *(undefined4 **)(*(int *)(param_1 + 0x9c) + iVar2 * 4) = puVar4;
      (**(code **)*puVar4)
                (*(undefined4 *)(*(int *)(param_2 + 0x28) + iVar2 * 4),
                 *(undefined4 *)(param_1 + 0xb0));
      iVar3 = (**(code **)(&DAT_00813304 + unaff_EBX))
                        (*(undefined4 *)(*(int *)(param_2 + 0x28) + iVar2 * 4));
      puVar4 = (undefined4 *)((int)puVar4 + iVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x10));
  }
  return;
}

