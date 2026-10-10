
void __thiscall FUN_0054bfe0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = param_2 * 0x14;
  piVar3 = (int *)((*(byte *)(*(int *)(iVar2 + *(int *)(param_1 + 0x28c0)) + 0x7c) + 0x100) * 0x20 +
                  param_1);
  *piVar3 = *piVar3 + -1;
  iVar4 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x28c0) + iVar2) + 0x7c) * 0x20;
  if (*(int *)(iVar4 + 0x200c + param_1) == param_2) {
    *(int *)(iVar4 + 0x200c + param_1) = (int)*(short *)(*(int *)(param_1 + 0x28c0) + iVar2 + 4);
  }
  iVar4 = *(int *)(param_1 + 0x28c0);
  sVar1 = *(short *)(iVar4 + 6 + iVar2);
  if (sVar1 != -1) {
    *(undefined2 *)(iVar4 + 4 + sVar1 * 0x14) = *(undefined2 *)(iVar4 + 4 + iVar2);
  }
  iVar4 = *(int *)(param_1 + 0x28c0);
  sVar1 = *(short *)(iVar4 + 4 + iVar2);
  if (sVar1 != -1) {
    *(undefined2 *)(iVar4 + 6 + sVar1 * 0x14) = *(undefined2 *)(iVar4 + 6 + iVar2);
  }
  return;
}

