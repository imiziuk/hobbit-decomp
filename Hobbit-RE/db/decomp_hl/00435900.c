
void __thiscall FUN_00435900(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb58) == param_2) {
    FUN_0041bcc0();
    iVar1 = FUN_00423c80();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb58) = 0xffffffff;
      return;
    }
  }
  *(int *)(param_1 + 0xb58) = param_2;
  return;
}

