
undefined4 FUN_00472e70(void)

{
  int iVar1;
  
  if ((DAT_0075cd00 == 0 && DAT_0075cd04 == 0) ||
     (iVar1 = FUN_004021c0(DAT_0075cd00,DAT_0075cd04), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00472e10();
  if ((iVar1 == 0) && (iVar1 = FUN_00472e60(), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

