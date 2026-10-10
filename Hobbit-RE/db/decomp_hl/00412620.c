
void __thiscall FUN_00412620(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + param_2 * 0x28) = param_3;
  *(undefined4 *)(iVar1 + 4 + param_2 * 0x28) = param_4;
  return;
}

