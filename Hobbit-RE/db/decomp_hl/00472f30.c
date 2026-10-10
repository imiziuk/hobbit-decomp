
undefined4 __fastcall FUN_00472f30(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if (((char)(uVar1 >> 8) < '\0') &&
     ((((uVar1 & 0x10) != 0 || ((*(byte *)(param_1 + 0x196) & 1) != 0)) && ((uVar1 & 0x200) != 0))))
  {
    return 1;
  }
  return 0;
}

