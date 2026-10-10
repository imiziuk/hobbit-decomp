
undefined4 __fastcall FUN_00558c40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0052a620();
  if (iVar1 == 0) {
    iVar1 = FUN_00558c80();
    if ((iVar1 == 0) && (*(int *)(DAT_00771ec0 + 4 + *(int *)(param_1 + 0x104) * 0x24) == 0)) {
      return 0;
    }
  }
  return 1;
}

