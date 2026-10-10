
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067ae80(int param_1,float param_2)

{
  if (_DAT_006e999c < param_2) {
    *(float *)(param_1 + 0x30) = _DAT_006e999c;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 4;
    return;
  }
  if (param_2 < _DAT_006f9654 != (NAN(param_2) || NAN(_DAT_006f9654))) {
    param_2 = _DAT_006f9654;
  }
  *(float *)(param_1 + 0x30) = param_2;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 4;
  return;
}

