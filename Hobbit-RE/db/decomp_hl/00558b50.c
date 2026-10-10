
bool __fastcall FUN_00558b50(int param_1)

{
  int iVar1;
  
  if ((*(int *)(DAT_00771ec0 + 4 + *(int *)(param_1 + 0x104) * 0x24) != 0) &&
     ((*(byte *)(param_1 + 0x118) & 2) == 0)) {
    return false;
  }
  iVar1 = FUN_00558c80();
  return iVar1 == 0;
}

