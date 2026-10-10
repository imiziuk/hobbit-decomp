
undefined4 __thiscall FUN_006736f0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (((uint)param_1[0x22] & 0x100) != 0) {
    FUN_00674180();
  }
  fVar2 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar4 = param_2[2] - param_1[2];
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4;
  fVar2 = fVar2 * param_1[0x117] + fVar1 * param_1[0x118] + fVar4 * param_1[0x119];
  if (fVar3 < param_3 * param_3 != (NAN(fVar3) || NAN(param_3 * param_3))) {
    return 1;
  }
  if ((fVar2 < param_1[0x1a] == (NAN(fVar2) || NAN(param_1[0x1a]))) && (fVar2 <= param_1[0x1b])) {
    if (param_1[0x1c] == 0.0) {
      fVar1 = fVar2 * param_1[0x11a];
    }
    else {
      fVar1 = param_1[0x11b];
    }
    fVar3 = fVar3 - fVar2 * fVar2;
    fVar2 = (fVar1 + param_3) * (fVar1 + param_3);
    if (fVar2 < fVar3 == (NAN(fVar2) || NAN(fVar3))) {
      return 1;
    }
  }
  return 0;
}

