
void __fastcall FUN_00491610(int *param_1)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = (float)param_1[0x72];
  fVar1 = -(float)param_1[0x67];
  local_c = fVar1 * (float)param_1[0x70];
  param_1[100] = (int)(local_c + (float)param_1[100]);
  param_1[0x65] = (int)((float)param_1[0x71] * fVar1 + (float)param_1[0x65]);
  param_1[0x66] = (int)(local_4 * fVar1 + (float)param_1[0x66]);
  if (((DAT_006e92e4 < (float)param_1[100]) || (DAT_006e92e4 < (float)param_1[0x65])) ||
     (DAT_006e92e4 < (float)param_1[0x66])) {
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    param_1[100] = 0;
    if (param_1[0x58] == 0 && param_1[0x59] == 0) {
      local_c = (float)param_1[0x5e] + (float)param_1[100];
      local_8 = (float)param_1[0x5f] + (float)param_1[0x65];
      local_4 = (float)param_1[0x60] + (float)param_1[0x66];
      (**(code **)(*param_1 + 0x110))(&local_c);
    }
    FUN_00491450(4);
  }
  else if (param_1[0x58] == 0 && param_1[0x59] == 0) {
    local_c = (float)param_1[0x5e] + (float)param_1[100];
    local_8 = (float)param_1[0x5f] + (float)param_1[0x65];
    local_4 = (float)param_1[0x60] + (float)param_1[0x66];
    (**(code **)(*param_1 + 0x110))(&local_c);
    return;
  }
  return;
}

