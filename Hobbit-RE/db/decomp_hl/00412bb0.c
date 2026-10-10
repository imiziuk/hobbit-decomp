
undefined4 FUN_00412bb0(void)

{
  int iVar1;
  
  iVar1 = FUN_00413200();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x126) & 1) == 0)) {
    FUN_00429100();
    return 1;
  }
  FUN_00429100();
  return 0;
}

