
short * FUN_006480e0(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  if (param_1 == (short *)0x0) {
    param_1 = &DAT_0074c280;
  }
  psVar2 = param_1;
  if (param_1 == (short *)0x0) {
    return param_1;
  }
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return (short *)(((int)psVar2 - (int)param_1 >> 1) + -1);
}

