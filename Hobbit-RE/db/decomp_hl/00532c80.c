
float10 __thiscall FUN_00532c80(int param_1,float param_2)

{
  if (param_2 < DAT_006e92e4 == (NAN(param_2) || NAN(DAT_006e92e4))) {
    if (DAT_006e92e8 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x1c4) = param_2;
  FUN_0065a050(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1),param_2);
  return (float10)*(float *)(param_1 + 0x1c4);
}

