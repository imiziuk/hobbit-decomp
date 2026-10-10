
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00662160(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  if ((param_2 != 1) && (DAT_007f02d8 != 3)) {
    fVar7 = (float10)FUN_00662310();
    return fVar7;
  }
  iVar5 = FUN_00661450(param_1);
  if (iVar5 < 10) {
    fVar4 = (float)(&DAT_007f016c)[iVar5 * 10];
    iVar1 = (&DAT_007f0168)[iVar5 * 10] + -1;
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        fVar2 = (float)(&DAT_007f0148)[iVar5 * 10 + iVar6];
        fVar3 = *(float *)(&DAT_007f014c + iVar6 * 4 + iVar5 * 0x28);
        if ((fVar2 <= fVar4) && (fVar4 < fVar3 != (fVar4 == fVar3))) {
          return (((float10)fVar4 - (float10)fVar2) / ((float10)fVar3 - (float10)fVar2) +
                 (float10)iVar6) / (float10)iVar1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return (float10)_DAT_006e936c;
}

