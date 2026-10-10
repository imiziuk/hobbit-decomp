
void __thiscall FUN_00579910(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x43d0);
  *(undefined4 *)(param_1 + 0x4390 + iVar1 * 8) = param_2;
  *(undefined4 *)(param_1 + 0x4394 + iVar1 * 8) = param_3;
  *(int *)(param_1 + 0x43d0) = *(int *)(param_1 + 0x43d0) + 1;
  return;
}

