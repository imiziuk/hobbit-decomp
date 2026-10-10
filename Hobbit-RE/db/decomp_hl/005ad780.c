
void __fastcall FUN_005ad780(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      FUN_005be210(0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa8));
  }
  return;
}

