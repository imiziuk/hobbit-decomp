
void __thiscall FUN_006bf760(undefined4 *param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  
  fVar1 = param_2 * (float)param_1[2] + (float)param_1[4];
  bVar2 = DAT_006e92e8 <= fVar1;
  param_1[4] = fVar1;
  if (bVar2) {
    iVar3 = param_1[3];
    do {
      fVar1 = fVar1 - DAT_006e92e8;
      iVar3 = iVar3 + 1;
    } while (DAT_006e92e8 <= fVar1);
    param_1[4] = fVar1;
    param_1[3] = iVar3;
  }
  fVar1 = (float)param_1[4];
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    iVar3 = param_1[3];
    do {
      fVar1 = fVar1 + DAT_006e92e8;
      iVar3 = iVar3 + -1;
    } while (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4)));
    param_1[4] = fVar1;
    param_1[3] = iVar3;
  }
  param_1 = (undefined4 *)*param_1;
  fVar4 = (float10)FUN_006bf7f0();
  (*(code *)*param_1)((float)fVar4);
  return;
}

