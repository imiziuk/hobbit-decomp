
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044c360(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined1 local_c [12];
  
  fVar4 = _DAT_00724870;
  fVar3 = *(float *)(param_1 + 0x754);
  fVar3 = SQRT(*(float *)(param_1 + 0x75c) * *(float *)(param_1 + 0x75c) +
               *(float *)(param_1 + 0x758) * *(float *)(param_1 + 0x758) + fVar3 * fVar3);
  if (fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) {
    fVar3 = *(float *)(param_1 + 0x754);
    _DAT_0075c820 =
         SQRT(*(float *)(param_1 + 0x75c) * *(float *)(param_1 + 0x75c) +
              *(float *)(param_1 + 0x758) * *(float *)(param_1 + 0x758) + fVar3 * fVar3);
  }
  fVar3 = SQRT(*(float *)(param_1 + 0x77c) * *(float *)(param_1 + 0x77c) +
               *(float *)(param_1 + 0x778) * *(float *)(param_1 + 0x778) +
               *(float *)(param_1 + 0x774) * *(float *)(param_1 + 0x774));
  if (fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) {
    _DAT_0075c820 =
         SQRT(*(float *)(param_1 + 0x77c) * *(float *)(param_1 + 0x77c) +
              *(float *)(param_1 + 0x778) * *(float *)(param_1 + 0x778) +
              *(float *)(param_1 + 0x774) * *(float *)(param_1 + 0x774));
  }
  fVar3 = SQRT(*(float *)(param_1 + 0x788) * *(float *)(param_1 + 0x788) +
               *(float *)(param_1 + 0x784) * *(float *)(param_1 + 0x784) +
               *(float *)(param_1 + 0x780) * *(float *)(param_1 + 0x780));
  if (fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) {
    _DAT_0075c820 =
         SQRT(*(float *)(param_1 + 0x788) * *(float *)(param_1 + 0x788) +
              *(float *)(param_1 + 0x784) * *(float *)(param_1 + 0x784) +
              *(float *)(param_1 + 0x780) * *(float *)(param_1 + 0x780));
  }
  fVar3 = SQRT(*(float *)(param_1 + 0x7a8) * *(float *)(param_1 + 0x7a8) +
               *(float *)(param_1 + 0x7a4) * *(float *)(param_1 + 0x7a4) +
               *(float *)(param_1 + 0x7a0) * *(float *)(param_1 + 0x7a0));
  if (fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) {
    _DAT_0075c820 =
         SQRT(*(float *)(param_1 + 0x7a8) * *(float *)(param_1 + 0x7a8) +
              *(float *)(param_1 + 0x7a4) * *(float *)(param_1 + 0x7a4) +
              *(float *)(param_1 + 0x7a0) * *(float *)(param_1 + 0x7a0));
  }
  fVar3 = SQRT(*(float *)(param_1 + 0x7bc) * *(float *)(param_1 + 0x7bc) +
               *(float *)(param_1 + 0x7b8) * *(float *)(param_1 + 0x7b8) +
               *(float *)(param_1 + 0x7b4) * *(float *)(param_1 + 0x7b4));
  if (fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) {
    fVar3 = *(float *)(param_1 + 0x7b4);
    _DAT_0075c820 =
         SQRT(*(float *)(param_1 + 0x7bc) * *(float *)(param_1 + 0x7bc) +
              *(float *)(param_1 + 0x7b8) * *(float *)(param_1 + 0x7b8) + fVar3 * fVar3);
  }
  pfVar1 = (float *)(param_1 + 0x9ec);
  fVar3 = SQRT(*(float *)(param_1 + 0x9f4) * *(float *)(param_1 + 0x9f4) +
               *(float *)(param_1 + 0x9f0) * *(float *)(param_1 + 0x9f0) + *pfVar1 * *pfVar1);
  if (fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) {
    _DAT_0075c820 =
         SQRT(*(float *)(param_1 + 0x9f4) * *(float *)(param_1 + 0x9f4) +
              *(float *)(param_1 + 0x9f0) * *(float *)(param_1 + 0x9f0) + *pfVar1 * *pfVar1);
  }
  pfVar2 = (float *)(param_1 + 0x4d9c);
  fVar3 = SQRT(*(float *)(param_1 + 0x4da4) * *(float *)(param_1 + 0x4da4) +
               *(float *)(param_1 + 0x4da0) * *(float *)(param_1 + 0x4da0) + *pfVar2 * *pfVar2);
  if (fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) {
    _DAT_0075c820 =
         SQRT(*(float *)(param_1 + 0x4da4) * *(float *)(param_1 + 0x4da4) +
              *(float *)(param_1 + 0x4da0) * *(float *)(param_1 + 0x4da0) + *pfVar2 * *pfVar2);
  }
  fVar3 = *(float *)(param_1 + 0x770);
  if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
    fVar3 = -fVar3;
  }
  if ((fVar3 < _DAT_0075c820 == (NAN(fVar3) || NAN(_DAT_0075c820))) &&
     (_DAT_0075c820 = *(float *)(param_1 + 0x770),
     _DAT_0075c820 < DAT_006e92e4 != (NAN(_DAT_0075c820) || NAN(DAT_006e92e4)))) {
    _DAT_0075c820 = -_DAT_0075c820;
  }
  fVar6 = (float10)FUN_00402000();
  if ((float10)fVar4 * (float10)fVar4 < fVar6) {
    uVar5 = FUN_00402160(local_c,param_1 + 0x754,
                         (float)(((float10)DAT_006e92e8 / SQRT(fVar6)) * (float10)fVar4));
    FUN_004357e0(uVar5);
  }
  fVar3 = _DAT_00724870;
  fVar6 = (float10)FUN_00402000();
  if ((float10)fVar3 * (float10)fVar3 < fVar6) {
    uVar5 = FUN_00402160(local_c,param_1 + 0x774,
                         (float)(((float10)DAT_006e92e8 / SQRT(fVar6)) * (float10)fVar3));
    FUN_004357e0(uVar5);
  }
  FUN_0044c7a0(param_1 + 0x780,_DAT_00724870);
  FUN_0044c7a0(param_1 + 0x7a0,_DAT_00724870);
  FUN_0044c7a0((float *)(param_1 + 0x7b4),_DAT_00724870);
  FUN_0044c7a0(pfVar1,_DAT_00724870);
  FUN_0044c7a0(pfVar2,_DAT_00724870);
  if (_DAT_00724870 < *(float *)(param_1 + 0x770)) {
    *(float *)(param_1 + 0x770) = _DAT_00724870;
  }
  if (-_DAT_00724870 <= *(float *)(param_1 + 0x770)) {
    return;
  }
  *(float *)(param_1 + 0x770) = -_DAT_00724870;
  return;
}

