
undefined4 __fastcall FUN_005fa170(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
    iVar1 = FUN_0064a890(param_1 + 0x18,&DAT_00720670);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

