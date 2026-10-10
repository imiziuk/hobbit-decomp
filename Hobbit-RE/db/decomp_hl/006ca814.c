
undefined4 FUN_006ca814(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_00816480) &&
     ((*(byte *)((&DAT_00816380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00816380)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_006c5643();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_006c564c();
  *puVar1 = 0;
  return 0xffffffff;
}

