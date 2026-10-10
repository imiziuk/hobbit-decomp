
undefined4 __fastcall FUN_004a1280(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x260);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0 || *(int *)(iVar1 + 0xc) != 0)) {
    return 1;
  }
  return 0;
}

