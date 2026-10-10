
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00690852(int param_1)

{
  byte *pbVar1;
  float *in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)&DAT_007545a0 - (int)in_EAX;
  do {
    pbVar1 = (byte *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
    *in_EAX = (float)*pbVar1 * *(float *)(iVar3 + (int)in_EAX) * _DAT_006ed3a4;
    in_EAX = in_EAX + 1;
  } while (iVar2 < 3);
  return;
}

