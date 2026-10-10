
void __thiscall FUN_00455170(int param_1,float param_2)

{
  FUN_00649600(s_ambient_audio_trigger__OnAdvance_007251b0);
  param_2 = *(float *)(param_1 + 0x100) - param_2;
  *(float *)(param_1 + 0x100) = param_2;
  if (param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) {
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  FUN_00649720();
  return;
}

