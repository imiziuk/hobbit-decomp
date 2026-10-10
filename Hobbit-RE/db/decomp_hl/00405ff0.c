
undefined4 __fastcall FUN_00405ff0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    return 0;
  }
  iVar1 = FUN_0041bcc0();
  if ((*(int *)(iVar1 + 0x8d4) != 0x1e) && (iVar1 = FUN_0041bcc0(), *(int *)(iVar1 + 0x8d4) != 0x1f)
     ) {
    return 0;
  }
  return 1;
}

