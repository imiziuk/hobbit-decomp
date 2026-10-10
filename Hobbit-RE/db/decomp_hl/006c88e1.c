
uint FUN_006c88e1(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_0081635c;
  while( true ) {
    if (DAT_0081635c + DAT_00816358 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

