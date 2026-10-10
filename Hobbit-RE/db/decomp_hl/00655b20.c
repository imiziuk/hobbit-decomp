
void FUN_00655b20(void)

{
  int iVar1;
  
  DAT_007e881c = 0x40;
  DAT_007e87e4 = 0x40;
  DAT_007e87b0 = 4;
  DAT_007e87d0 = 0x10;
  DAT_007e8798 = 0x1000;
  FUN_006563f0(DAT_007e883c,0x40);
  DAT_007e87c0 = 0;
  if (0 < DAT_007e87a0) {
    do {
      iVar1 = DAT_007e87b0 / 2;
      DAT_007e8800 = (uint)(*(byte *)(DAT_007e87f4 + 2 + DAT_007e87c0 * 4) >> 2);
      DAT_007e8834 = (uint)(*(byte *)(DAT_007e87f4 + 1 + DAT_007e87c0 * 4) >> 2);
      DAT_007e87f0 = (uint)(*(byte *)(DAT_007e87f4 + DAT_007e87c0 * 4) >> 2);
      DAT_007e87b4 = ((uint)*(byte *)(DAT_007e87f4 + 2 + DAT_007e87c0 * 4) -
                     DAT_007e8800 * DAT_007e87b0) - iVar1;
      DAT_007e87c8 = ((uint)*(byte *)(DAT_007e87f4 + 1 + DAT_007e87c0 * 4) -
                     DAT_007e8834 * DAT_007e87b0) - iVar1;
      iVar1 = ((uint)*(byte *)(DAT_007e87f4 + DAT_007e87c0 * 4) - DAT_007e87f0 * DAT_007e87b0) -
              iVar1;
      DAT_007e87b8 = iVar1 * iVar1 + DAT_007e87c8 * DAT_007e87c8 + DAT_007e87b4 * DAT_007e87b4;
      DAT_007e8794 = ((DAT_007e8800 + 1) * DAT_007e87d0 -
                     (uint)*(byte *)(DAT_007e87f4 + 2 + DAT_007e87c0 * 4) * DAT_007e87b0) * 2;
      DAT_007e87d4 = ((DAT_007e8834 + 1) * DAT_007e87d0 -
                     (uint)*(byte *)(DAT_007e87f4 + 1 + DAT_007e87c0 * 4) * DAT_007e87b0) * 2;
      DAT_007e882c = ((DAT_007e87f0 + 1) * DAT_007e87d0 -
                     (uint)*(byte *)(DAT_007e87f4 + DAT_007e87c0 * 4) * DAT_007e87b0) * 2;
      iVar1 = DAT_007e8800 * DAT_007e8798 + DAT_007e8834 * DAT_007e87e4;
      DAT_007e87a8 = DAT_007e883c + (iVar1 + DAT_007e87f0) * 4;
      DAT_007e8824 = iVar1 + DAT_007e8838 + DAT_007e87f0;
      FUN_00655cf0();
      DAT_007e87c0 = DAT_007e87c0 + 1;
    } while (DAT_007e87c0 < DAT_007e87a0);
  }
  return;
}

