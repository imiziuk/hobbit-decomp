
void __fastcall FUN_004f20c0(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x14;
  iVar1 = 8;
  do {
    if (0 < *(int *)(param_1 + 0x10)) {
      FUN_00674e10(param_1);
      FUN_00650380();
    }
    param_1 = param_1 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

