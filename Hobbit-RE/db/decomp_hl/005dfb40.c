
undefined4 __fastcall FUN_005dfb40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_0064a890(param_1 + 0x18,&DAT_00720670);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

