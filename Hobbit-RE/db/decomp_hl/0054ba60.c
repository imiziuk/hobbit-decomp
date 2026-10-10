
void __thiscall FUN_0054ba60(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x28d4) = *(int *)(param_1 + 0x28d4) + -1;
  iVar1 = param_2 * 0x14;
  *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 4 + iVar1) = *(undefined2 *)(param_1 + 0x28c4);
  *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 6 + iVar1) = 0xffff;
  if (*(int *)(param_1 + 0x28c4) != -1) {
    *(short *)(*(int *)(param_1 + 0x28c0) + 6 + *(int *)(param_1 + 0x28c4) * 0x14) = (short)param_2;
  }
  *(int *)(param_1 + 0x28c4) = param_2;
  *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x28c0)) = 0;
  return;
}

