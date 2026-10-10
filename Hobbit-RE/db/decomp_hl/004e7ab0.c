
void __fastcall FUN_004e7ab0(int param_1)

{
  short *psVar1;
  float10 fVar2;
  
  if (((DAT_00777238 != 5) && (DAT_00777238 != 7)) && (DAT_00777238 != 3)) {
    return;
  }
  FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  fVar2 = (float10)FUN_004e7c80();
  *(float *)(param_1 + 0x11c) = (float)fVar2;
  *(float *)(param_1 + 0x128) = (float)fVar2;
  psVar1 = &DAT_0072eaa2;
  *(float *)(param_1 + 0x14c) = (float)fVar2;
  *(float *)(param_1 + 0x158) = (float)fVar2;
  do {
    FUN_00579b90(param_1 + 0x100 + psVar1[-1] * 0xc,param_1 + 0x100 + *psVar1 * 0xc,
                 param_1 + 0x100 + psVar1[1] * 0xc,0,0,0);
    psVar1 = psVar1 + 3;
  } while ((int)psVar1 < 0x72eaea);
  FUN_005785b0();
  return;
}

