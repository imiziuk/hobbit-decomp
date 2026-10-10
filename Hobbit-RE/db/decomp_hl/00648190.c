
short * FUN_00648190(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  if (param_2 == (short *)0x0) {
    param_2 = &DAT_0074c280;
  }
  psVar4 = param_1;
  if (param_3 != 0) {
    while( true ) {
      sVar1 = *param_2;
      *psVar4 = sVar1;
      param_2 = param_2 + 1;
      if (sVar1 == 0) break;
      param_3 = param_3 + -1;
      psVar4 = psVar4 + 1;
      if (param_3 == 0) {
        return param_1;
      }
    }
    if ((param_3 != 0) && (uVar2 = param_3 - 1, uVar2 != 0)) {
      psVar4 = psVar4 + 1;
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        psVar4[0] = 0;
        psVar4[1] = 0;
        psVar4 = psVar4 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *psVar4 = 0;
        psVar4 = psVar4 + 1;
      }
    }
  }
  return param_1;
}

