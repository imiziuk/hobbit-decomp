
char __fastcall FUN_00595ad0(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x158) != 0) && (0 < *(int *)(param_1 + 0x19c))) &&
     (*(int *)(*(int *)(param_1 + 0x1a0) + 0xc) == 1)) {
    return '\a';
  }
  iVar1 = FUN_00592920();
  if (*(int *)(iVar1 + 0x1d8) != 0) {
    return '\x04';
  }
  iVar1 = FUN_00598bc0();
  if (iVar1 != 0) {
    FUN_00592920();
    iVar1 = FUN_004a4c80();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x38) == 6) {
        return '\x06';
      }
      iVar1 = FUN_00592920();
      if (*(int *)(iVar1 + 0x1dc) == 0) {
        iVar1 = FUN_00592920();
        return (*(int *)(iVar1 + 0x1e0) != 0) * '\x04' + '\x01';
      }
      return '\x02';
    }
  }
  return '\x03';
}

