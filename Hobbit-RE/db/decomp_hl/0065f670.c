
/* WARNING: Removing unreachable block (ram,0x0065f707) */

void FUN_0065f670(void)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = timeGetTime();
  *(DWORD *)(&DAT_007efff8 + DAT_007f0040 * 8) = DVar1 - DAT_007f0038;
  *(uint *)(&DAT_007efffc + DAT_007f0040 * 8) = -(uint)(DVar1 < DAT_007f0038) - DAT_007f003c;
  DAT_007f0040 = DAT_007f0040 + 1 & 7;
  DAT_007f003c = 0;
  DAT_007edb20 = DAT_007edb20 + 1;
  iVar2 = 0;
  DAT_007f0038 = DVar1;
  if (0 < DAT_007f1008) {
    do {
      FUN_00663030();
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_007f1008);
  }
  DAT_007f0fec = DAT_007f0fe8;
  DAT_007edb24 = 0;
  return;
}

