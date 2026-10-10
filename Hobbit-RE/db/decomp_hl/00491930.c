
void __fastcall FUN_00491930(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float)param_1[0x67];
  local_4 = (float)param_1[0x72];
  local_c = fVar1 * (float)param_1[0x70];
  param_1[100] = (int)(local_c + (float)param_1[100]);
  param_1[0x65] = (int)((float)param_1[0x71] * fVar1 + (float)param_1[0x65]);
  param_1[0x66] = (int)(local_4 * fVar1 + (float)param_1[0x66]);
  fVar1 = (float)param_1[0x61];
  fVar2 = (float)param_1[0x66] * (float)param_1[0x66] +
          (float)param_1[0x65] * (float)param_1[0x65] + (float)param_1[100] * (float)param_1[100];
  fVar3 = (float)param_1[0x62] * (float)param_1[0x62] +
          fVar1 * fVar1 + (float)param_1[99] * (float)param_1[99];
  if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
    param_1[100] = (int)fVar1;
    param_1[0x65] = param_1[0x62];
    param_1[0x66] = param_1[99];
    if (param_1[0x58] == 0 && param_1[0x59] == 0) {
      local_c = (float)param_1[0x5e] + (float)param_1[100];
      local_8 = (float)param_1[0x5f] + (float)param_1[0x65];
      local_4 = (float)param_1[0x60] + (float)param_1[0x66];
      (**(code **)(*param_1 + 0x110))(&local_c);
    }
    FUN_00491450(1);
    return;
  }
  if (param_1[0x58] == 0 && param_1[0x59] == 0) {
    local_c = (float)param_1[0x5e] + (float)param_1[100];
    local_8 = (float)param_1[0x5f] + (float)param_1[0x65];
    local_4 = (float)param_1[0x60] + (float)param_1[0x66];
    (**(code **)(*param_1 + 0x110))(&local_c);
  }
  return;
}

