
void __fastcall FUN_004c0610(int param_1)

{
  int iVar1;
  
  FUN_004d1f30();
  iVar1 = *(int *)(param_1 + 0x144);
  if (iVar1 != 0) {
    FUN_004c0640();
    FUN_006bf840(iVar1);
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  return;
}

