
byte FUN_00472f00(void)

{
  int iVar1;
  
  if (DAT_0075cd00 != 0 || DAT_0075cd04 != 0) {
    iVar1 = FUN_004021c0(DAT_0075cd00,DAT_0075cd04);
    if (iVar1 != 0) {
      return *(byte *)(iVar1 + 0x197) & 1;
    }
  }
  return 0;
}

