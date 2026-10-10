
void __thiscall FUN_005c98c0(float *param_1,float param_2)

{
  if (DAT_006e92e4 <= param_2) {
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      *param_1 = 1.0;
      return;
    }
    if (DAT_006e92e4 <= param_2) {
      *param_1 = param_2;
      return;
    }
  }
  *param_1 = 0.0;
  return;
}

