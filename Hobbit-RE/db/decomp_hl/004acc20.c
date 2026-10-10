
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004acc20(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 extraout_var;
  undefined4 uVar10;
  float10 fVar11;
  float fStack_4;
  
  if (*param_2 < *(float *)(param_1 + 0x44) == (NAN(*param_2) || NAN(*(float *)(param_1 + 0x44)))) {
    if (*param_2 <= *(float *)(param_1 + 0x50)) {
      fVar8 = *param_2;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x50);
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x44);
  }
  if (param_2[1] < *(float *)(param_1 + 0x48) ==
      (NAN(param_2[1]) || NAN(*(float *)(param_1 + 0x48)))) {
    if (param_2[1] <= *(float *)(param_1 + 0x54)) {
      fVar9 = param_2[1];
    }
    else {
      fVar9 = *(float *)(param_1 + 0x54);
    }
  }
  else {
    fVar9 = *(float *)(param_1 + 0x48);
  }
  if (param_2[2] < *(float *)(param_1 + 0x4c) ==
      (NAN(param_2[2]) || NAN(*(float *)(param_1 + 0x4c)))) {
    if (param_2[2] <= *(float *)(param_1 + 0x58)) {
      fVar1 = param_2[2];
    }
    else {
      fVar1 = *(float *)(param_1 + 0x58);
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x4c);
  }
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x44);
  fVar7 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48);
  fVar6 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4c);
  fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) * _DAT_006e936c;
  if (fVar5 + fVar5 <= _DAT_006e9364) {
    param_2 = (float *)0x42c80000;
  }
  else {
    FUN_00401f00(*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x44),
                 *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48),
                 *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4c));
    fVar5 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fStack_4 * fStack_4) * _DAT_006e936c;
    param_2 = (float *)(fVar5 + fVar5);
  }
  fVar11 = (float10)FUN_005a3d60();
  if ((float10)_DAT_006e9340 * fVar11 < (float10)(float)param_2) {
    param_2 = (float *)(float)((float10)_DAT_006e9340 * fVar11);
  }
  fVar8 = (float)((float10)DAT_006e92e8 -
                 ((float10)SQRT((fVar8 - fVar2) * (fVar8 - fVar2) +
                                (fVar9 - fVar3) * (fVar9 - fVar3) +
                                (fVar1 - fVar4) * (fVar1 - fVar4)) - fVar11) /
                 (float10)(float)param_2);
  if (fVar8 < DAT_006e92e8) {
    if (fVar8 < DAT_006e92e4 == (NAN(fVar8) || NAN(DAT_006e92e4))) {
      uVar10 = __ftol();
      return uVar10;
    }
    return CONCAT22(extraout_var,
                    (ushort)(fVar8 < DAT_006e92e4) << 8 |
                    (ushort)(NAN(fVar8) || NAN(DAT_006e92e4)) << 10 |
                    (ushort)(fVar8 == DAT_006e92e4) << 0xe);
  }
  return CONCAT31((int3)(CONCAT22(extraout_var,
                                  (ushort)(fVar8 < DAT_006e92e8) << 8 |
                                  (ushort)(NAN(fVar8) || NAN(DAT_006e92e8)) << 10 |
                                  (ushort)(fVar8 == DAT_006e92e8) << 0xe) >> 8),0xff);
}

