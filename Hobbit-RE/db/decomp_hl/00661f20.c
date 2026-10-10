
float10 FUN_00661f20(undefined4 param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_00661450();
  if (iVar1 == 10) {
    return (float10)param_2;
  }
  if (((param_3 == 1) || (DAT_007f02d8 == 3)) && ((&DAT_007f016c)[iVar1 * 10] != -0x40800000)) {
    return (float10)(float)(&DAT_007f016c)[iVar1 * 10];
  }
  iVar2 = (&DAT_007f0168)[iVar1 * 10];
  if (iVar2 == 0) {
    return (float10)param_2;
  }
  if (iVar2 == 1) {
    return (float10)(float)(&DAT_007f0148)[iVar1 * 10];
  }
  fVar3 = (float10)FUN_00662310();
  fVar3 = fVar3 * (float10)(iVar2 + -1);
  FUN_006c0ae5((double)fVar3);
  iVar2 = __ftol();
  iVar1 = iVar2 + iVar1 * 10;
  fVar3 = (float10)(float)fVar3 - (float10)iVar2;
  return fVar3 * (float10)*(float *)(&DAT_007f014c + iVar1 * 4) +
         ((float10)DAT_006e92e8 - fVar3) * (float10)(float)(&DAT_007f0148)[iVar1];
}

