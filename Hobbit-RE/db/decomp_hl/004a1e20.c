
void __thiscall FUN_004a1e20(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x300);
    *(undefined4 *)(iVar1 + 0x180) = 0;
    *(undefined4 *)(iVar1 + 0x184) = 0;
  }
  *(int *)(param_1 + 0x1a4) = param_2;
  return;
}

