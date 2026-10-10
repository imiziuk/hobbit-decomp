
void __fastcall FUN_00468250(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x128);
  if (iVar1 != 0) {
    FUN_005405d0();
    FUN_006bf840(iVar1);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}

