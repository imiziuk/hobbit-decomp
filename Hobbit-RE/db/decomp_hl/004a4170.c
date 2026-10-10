
void __thiscall FUN_004a4170(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x300);
  *(undefined4 *)(iVar1 + 0x180) = param_2;
  *(undefined4 *)(iVar1 + 0x184) = param_3;
  return;
}

