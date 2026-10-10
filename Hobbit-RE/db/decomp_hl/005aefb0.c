
undefined4 __fastcall FUN_005aefb0(int param_1)

{
  int iVar1;
  
  FUN_005af120();
  iVar1 = FUN_004a1090();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x168) != 0 || *(int *)(param_1 + 0x16c) != 0)) {
    iVar1 = FUN_00473d60(param_1 + 0x168);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

