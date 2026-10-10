
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005257c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c8970();
  FUN_006608d0((float)iVar1 * _DAT_006ee5fc * _DAT_006f3800 + _DAT_006f37fc);
  if (*(int *)(param_1 + 0x180) != 0) {
    iVar1 = *(int *)(param_1 + 0x184);
    if ((iVar1 == 4) || (iVar1 == 2)) {
      FUN_00525b40();
      FUN_00525ad0();
    }
    else if (iVar1 == 1) {
      FUN_00525b90();
      FUN_00525ad0();
      return;
    }
  }
  return;
}

