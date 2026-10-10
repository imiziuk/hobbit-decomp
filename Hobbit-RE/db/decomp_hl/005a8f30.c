
bool FUN_005a8f30(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  short *psVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar1) {
    pfVar3 = (float *)(param_1 + 0x78);
    psVar4 = (short *)(param_1 + 0x104);
    do {
      fVar2 = *(float *)(param_2 + psVar4[1] * 4) * *pfVar3 +
              *(float *)(param_2 + *psVar4 * 4) * pfVar3[-1] +
              *(float *)(param_2 + psVar4[2] * 4) * pfVar3[1] + pfVar3[2];
      if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) break;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 4;
      psVar4 = psVar4 + 3;
    } while (iVar5 <= iVar1);
  }
  return iVar1 < iVar5;
}

