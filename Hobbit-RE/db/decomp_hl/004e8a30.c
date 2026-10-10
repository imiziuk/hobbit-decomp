
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e8a30(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_8;
  float local_4;
  
  pfVar4 = (float *)(param_1 + 0x2e0);
  iVar2 = 4;
  pfVar3 = (float *)(param_1 + 0x298);
  do {
    fVar1 = DAT_006e92e8 / pfVar4[-4];
    pfVar3[-1] = 0.0;
    *pfVar3 = 0.0;
    pfVar3[-2] = fVar1;
    FUN_0064c8e0(*pfVar4 * _DAT_006e9368 * _DAT_006e957c,&local_4,&local_8);
    fVar1 = pfVar3[-2];
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + -1;
    pfVar3[-2] = fVar1 * local_8 + local_4 * *pfVar3;
    *pfVar3 = *pfVar3 * local_8 - fVar1 * local_4;
    pfVar3 = pfVar3 + 3;
  } while (iVar2 != 0);
  return;
}

