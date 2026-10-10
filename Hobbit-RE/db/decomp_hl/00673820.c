
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00673820(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_14 = param_3[1];
  local_18 = *param_3;
  local_10 = param_3[2];
  if (param_4 == 0) {
    pfVar4 = (float *)FUN_00672710(local_c,&local_18);
    local_18 = *pfVar4;
    local_14 = pfVar4[1];
    local_10 = pfVar4[2];
  }
  FUN_006746f0();
  fVar1 = local_10;
  if (((local_10 < _DAT_006e9350 != (NAN(local_10) || NAN(_DAT_006e9350))) &&
      (fVar1 = _DAT_006e9350, local_10 <= _DAT_006f5518)) &&
     (fVar1 = local_10, local_10 < DAT_006e92e4 != (NAN(local_10) || NAN(DAT_006e92e4)))) {
    fVar1 = -local_10;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    fVar3 = (DAT_006e92e8 / fVar1) * local_18 * *(float *)(param_1 + 0x474) +
            *(float *)(param_1 + 0x470);
    local_14 = (DAT_006e92e8 / fVar1) * local_14;
  }
  else {
    fVar3 = local_18 * *(float *)(param_1 + 0x474) + *(float *)(param_1 + 0x470);
  }
  fVar1 = *(float *)(param_1 + 0x47c);
  fVar2 = *(float *)(param_1 + 0x478);
  param_2[2] = local_10;
  *param_2 = fVar3;
  param_2[1] = local_14 * fVar1 + fVar2;
  return;
}

