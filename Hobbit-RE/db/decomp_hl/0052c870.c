
void __fastcall FUN_0052c870(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = param_1 + 0x18;
  iVar2 = 0x2d;
  do {
    FUN_00674e10(iVar1);
    FUN_00650380();
    iVar1 = iVar1 + 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1 = param_1 + 0x5d8;
  iVar1 = 0x31;
  do {
    FUN_00674e10(param_1);
    FUN_00650380();
    param_1 = param_1 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

