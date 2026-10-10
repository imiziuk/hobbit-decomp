
bool FUN_00659f30(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) - 1;
  if ((-1 < iVar1) && (iVar1 < DAT_00806800)) {
    return (iVar1 * 0xf8 + DAT_008067f8 &
           (*(uint *)(iVar1 * 0xf8 + 0xe0 + DAT_008067f8) != ((int)param_1 >> 0x10 & 0xffffU)) - 1)
           != 0;
  }
  return false;
}

