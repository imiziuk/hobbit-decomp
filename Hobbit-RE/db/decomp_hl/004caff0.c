
bool __fastcall FUN_004caff0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 300);
  if (iVar1 == 5) {
    return false;
  }
  if (iVar1 == 6) {
    return false;
  }
  return iVar1 != 7;
}

