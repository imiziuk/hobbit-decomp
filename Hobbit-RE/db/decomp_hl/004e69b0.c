
void __fastcall FUN_004e69b0(int param_1)

{
  float *pfVar1;
  int iVar2;
  short *psVar3;
  
  pfVar1 = (float *)FUN_0057dcb0();
  if ((((pfVar1[3] + DAT_006e92e8 < *(float *)(param_1 + 0x44) ==
         (NAN(pfVar1[3] + DAT_006e92e8) || NAN(*(float *)(param_1 + 0x44)))) &&
       (*(float *)(param_1 + 0x50) < *pfVar1 - DAT_006e92e8 ==
        (NAN(*(float *)(param_1 + 0x50)) || NAN(*pfVar1 - DAT_006e92e8)))) &&
      (*(float *)(param_1 + 0x4c) <= pfVar1[5] + DAT_006e92e8)) &&
     (((*(float *)(param_1 + 0x58) < pfVar1[2] - DAT_006e92e8 ==
        (NAN(*(float *)(param_1 + 0x58)) || NAN(pfVar1[2] - DAT_006e92e8)) &&
       (*(float *)(param_1 + 0x48) <= pfVar1[4] + DAT_006e92e8)) &&
      (*(float *)(param_1 + 0x54) < pfVar1[1] - DAT_006e92e8 ==
       (NAN(*(float *)(param_1 + 0x54)) || NAN(pfVar1[1] - DAT_006e92e8)))))) {
    iVar2 = 0;
    psVar3 = &DAT_0072e922;
    do {
      FUN_005785c0(param_1 + 0xe0 + psVar3[-1] * 0xc,param_1 + 0xe0 + *psVar3 * 0xc,
                   param_1 + 0xe0 + psVar3[1] * 0xc,iVar2,0,*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc));
      psVar3 = psVar3 + 3;
      iVar2 = iVar2 + 1;
    } while ((int)psVar3 < 0x72e96a);
  }
  return;
}

