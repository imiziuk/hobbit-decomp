
undefined4 __fastcall FUN_004a2340(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((((iVar1 != 0x36) && (iVar1 != 0x3a)) && (iVar1 != 0x3b)) &&
     ((iVar1 != 0x3c && (iVar1 != 0x41)))) {
    return 0;
  }
  return 1;
}

