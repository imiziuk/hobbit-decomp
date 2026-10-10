
undefined4 __thiscall FUN_00673520(int param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x88) & 0x100) != 0) {
    FUN_00674180();
  }
  iVar2 = param_1 + 0x254;
  if (param_3 != 0) {
    iVar2 = param_1 + 0x2b4;
  }
  iVar4 = 0;
  pfVar3 = (float *)(iVar2 + 4);
  do {
    fVar1 = param_2[1] * *pfVar3 + pfVar3[-1] * *param_2 + pfVar3[1] * param_2[2] + pfVar3[2];
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      return 0;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 4;
  } while (iVar4 < 6);
  return 1;
}

