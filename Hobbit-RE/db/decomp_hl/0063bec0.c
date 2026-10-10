
void __fastcall FUN_0063bec0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 10;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 4) = 0xffffffff;
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)(param_1 + 0x28));
  return;
}

