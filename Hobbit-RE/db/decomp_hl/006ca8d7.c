
byte FUN_006ca8d7(uint param_1)

{
  if (DAT_00816480 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00816380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

