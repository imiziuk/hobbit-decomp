
float10 __thiscall FUN_005a77a0(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)DAT_006e92e4;
  iVar2 = 0x10;
  pfVar1 = param_2;
  do {
    iVar2 = iVar2 + -1;
    fVar4 = (float10)*(float *)((param_1 - (int)param_2) + (int)pfVar1) - (float10)*pfVar1;
    fVar3 = fVar4 * fVar4 + fVar3;
    pfVar1 = pfVar1 + 1;
  } while (iVar2 != 0);
  return fVar3;
}

