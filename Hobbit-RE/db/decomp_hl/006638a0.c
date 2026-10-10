
void __thiscall FUN_006638a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00663990(param_2);
  iVar1 = *(int *)(param_1 + 0x54);
  while (iVar1 != 0) {
    FUN_00663990(*(undefined4 *)(**(int **)(param_1 + 0x4c) + 0xc));
    FUN_00666e20(&param_2,**(undefined4 **)(param_1 + 0x4c));
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return;
}

