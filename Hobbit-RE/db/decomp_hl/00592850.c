
bool __thiscall FUN_00592850(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x158) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x100) == 0x100)) {
    return false;
  }
  if (param_2 == 0x12) {
    iVar1 = FUN_00592920();
    if ((*(byte *)(iVar1 + 0x7b) & 2) != 0) {
      return false;
    }
  }
  else if (param_2 == 0x1c) {
    iVar1 = FUN_00592920();
    if ((*(byte *)(iVar1 + 0x7b) & 4) != 0) {
      return false;
    }
  }
  FUN_00592920();
  iVar1 = FUN_004a10a0();
  return iVar1 != 0;
}

