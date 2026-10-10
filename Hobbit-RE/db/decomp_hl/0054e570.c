
void __thiscall FUN_0054e570(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x28c0);
  iVar4 = param_2 * 0x14;
  sVar1 = *(short *)(iVar4 + 0x10 + iVar2);
  uVar3 = (*(uint *)(*(int *)(iVar4 + iVar2) + 8) ^ *(uint *)(*(int *)(iVar4 + iVar2) + 0xc)) *
          -0xfb & 0xfff;
  if (sVar1 != -1) {
    *(undefined2 *)(iVar2 + 0xe + sVar1 * 0x14) = *(undefined2 *)(iVar4 + 0xe + iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x28c0);
  sVar1 = *(short *)(iVar4 + 0xe + iVar2);
  if (sVar1 != -1) {
    *(undefined2 *)(iVar2 + 0x10 + sVar1 * 0x14) = *(undefined2 *)(iVar4 + 0x10 + iVar2);
  }
  if (*(short *)(param_1 + uVar3 * 2) == param_2) {
    *(undefined2 *)(param_1 + uVar3 * 2) = *(undefined2 *)(iVar4 + 0xe + *(int *)(param_1 + 0x28c0))
    ;
  }
  return;
}

