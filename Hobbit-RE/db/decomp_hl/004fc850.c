
undefined4 FUN_004fc850(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_0066f810();
  if (iVar3 != 0) {
    iVar3 = FUN_006710d0(2,0);
    if ((iVar3 != 0) || (iVar3 = FUN_006710d0(0x9e,0), iVar3 != 0)) {
      DAT_0075f930[2] = 0;
      DAT_0075f930[4] = 1;
      return 0;
    }
    iVar3 = FUN_00670ef0(0x7b,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x165,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    DAT_0075f930[0x128] = iVar3;
    iVar3 = FUN_00670ef0(0x7d,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00670ef0(0x16d,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    DAT_0075f930[0x129] = iVar3;
    iVar3 = FUN_00671100(0x5d,0);
    if ((iVar3 != 0) || (iVar3 = FUN_00671100(0xb9,0), iVar3 != 0)) {
      iVar3 = 1;
    }
    DAT_0075f930[0x12a] = iVar3;
    DAT_0075f930[0x125] = 0;
    DAT_0075f930[0x126] = 0;
    DAT_0075f930[0x127] = 0;
    if (DAT_0075f930[0x129] != 0) {
      DAT_0075f930[3] = (int)((float)DAT_0075f930[3] + DAT_006e92e8);
    }
    if (DAT_0075f930[0x128] != 0) {
      DAT_0075f930[3] = (int)((float)DAT_0075f930[3] - DAT_006e92e8);
    }
    if (DAT_0075f930[0x12a] != 0) {
      DAT_0075f930[2] = 0;
      DAT_0075f930[4] = 0;
    }
  }
  fVar1 = DAT_006e92e4;
  if ((float)DAT_0075f930[3] < DAT_006e92e4 == (NAN((float)DAT_0075f930[3]) || NAN(DAT_006e92e4))) {
    fVar1 = (float)DAT_0075f930[3];
  }
  fVar2 = (float)(*DAT_0075f930 + -1);
  if (fVar2 < fVar1 == (NAN(fVar2) || NAN(fVar1))) {
    if ((float)DAT_0075f930[3] < DAT_006e92e4 == (NAN((float)DAT_0075f930[3]) || NAN(DAT_006e92e4)))
    {
      DAT_0075f930[3] = DAT_0075f930[3];
      return 1;
    }
    DAT_0075f930[3] = (int)DAT_006e92e4;
    return 1;
  }
  DAT_0075f930[3] = (int)(float)(*DAT_0075f930 + -1);
  return 1;
}

