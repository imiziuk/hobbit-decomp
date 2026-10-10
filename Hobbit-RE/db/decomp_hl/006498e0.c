
void FUN_006498e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006554a0();
  param_1 = param_1 - *(int *)(iVar1 + 0xc);
  *(int *)(iVar1 + 4) = param_1 + -4;
  *(undefined1 *)(*(int *)(iVar1 + 0xc) + param_1 + -4) = 0;
  *(undefined1 *)(param_1 + -3 + *(int *)(iVar1 + 0xc)) = 0;
  *(undefined1 *)(param_1 + -2 + *(int *)(iVar1 + 0xc)) = 0;
  *(undefined1 *)(param_1 + -1 + *(int *)(iVar1 + 0xc)) = 0;
  *(undefined1 *)(param_1 + *(int *)(iVar1 + 0xc)) = 0;
  return;
}

