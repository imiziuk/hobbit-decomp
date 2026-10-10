
void __fastcall FUN_0065b130(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x21f4) + -1;
  *(int *)(param_1 + 0x21f4) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x21f4) = 0;
    return;
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2264);
    iVar1 = *(int *)(iVar2 + 8);
    while (iVar1 != 0) {
      FUN_0067ce70();
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = *(int *)(iVar2 + 8);
    }
  }
  return;
}

