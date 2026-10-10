
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068eef6(int param_1,double param_2,double param_3)

{
  if (_DAT_006fb638 < ABS(param_2 * param_3 - _DAT_006ec030)) {
    *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x20;
  }
  *(float *)(param_1 + 0x130) = (float)param_3;
  *(float *)(param_1 + 0x134) = (float)param_2;
  return;
}

