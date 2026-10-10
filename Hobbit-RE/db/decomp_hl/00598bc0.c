
undefined4 __fastcall FUN_00598bc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00592920();
  if (*(int *)(iVar1 + 0x128) == 0) {
    iVar1 = FUN_00598b70();
    if (iVar1 != 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x158) != 0) &&
       (((byte)*(undefined4 *)(*(int *)(param_1 + 0x158) + 0x78) & 0x80) == 0x80)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_00598b70();
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = FUN_00592920();
  if (-1 < *(char *)(iVar1 + 0x268)) {
    FUN_00592920();
    iVar1 = FUN_004a4c80();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

