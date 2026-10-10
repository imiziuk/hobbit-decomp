
void __thiscall FUN_0054c080(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2 * 0x14;
  uVar3 = (uint)*(byte *)(*(int *)(iVar2 + *(int *)(param_1 + 0x28c0)) + 0x7c);
  iVar4 = (uVar3 + 0x100) * 0x20;
  piVar1 = (int *)(uVar3 * 0x20 + 0x200c + param_1);
  *(int *)(iVar4 + param_1) = *(int *)(iVar4 + param_1) + 1;
  if (*piVar1 != -1) {
    *(short *)(*(int *)(param_1 + 0x28c0) + 6 + *piVar1 * 0x14) = (short)param_2;
  }
  *(short *)(iVar2 + 4 + *(int *)(param_1 + 0x28c0)) = (short)*piVar1;
  *(undefined2 *)(iVar2 + 6 + *(int *)(param_1 + 0x28c0)) = 0xffff;
  *piVar1 = param_2;
  return;
}

