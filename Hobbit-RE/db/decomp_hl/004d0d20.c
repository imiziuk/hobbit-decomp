
void FUN_004d0d20(void)

{
  if (DAT_0075db24 == (undefined4 *)0x0) {
    DAT_0075db24 = (undefined4 *)operator_new(0x1c);
    if (DAT_0075db24 != (undefined4 *)0x0) {
      DAT_0075db24[3] = 0;
      DAT_0075db24[2] = 0;
      DAT_0075db24[4] = 0;
      DAT_0075db24[6] = 0;
      DAT_0075db24[5] = 0;
      *DAT_0075db24 = 0;
      DAT_0075db24[1] = 0;
      FUN_004d0f70(DAT_0075db24);
      return;
    }
    DAT_0075db24 = (undefined4 *)0x0;
    FUN_004d0f70(0);
  }
  return;
}

