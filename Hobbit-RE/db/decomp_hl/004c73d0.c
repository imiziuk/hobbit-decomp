
void __fastcall FUN_004c73d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    thunk_FUN_0053b590();
    FUN_006bf840(iVar1);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  return;
}

