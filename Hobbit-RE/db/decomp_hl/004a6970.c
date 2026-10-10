
float10 __fastcall FUN_004a6970(int param_1)

{
  if ((NAN(*(float *)(param_1 + 0x294)) || NAN(DAT_006e92e4)) ==
      (*(float *)(param_1 + 0x294) == DAT_006e92e4)) {
    return (float10)*(float *)(param_1 + 0x290) / (float10)*(float *)(param_1 + 0x294);
  }
  return (float10)DAT_006e92e4;
}

