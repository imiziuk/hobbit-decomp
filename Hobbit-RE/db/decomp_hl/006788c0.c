
undefined4 FUN_006788c0(int param_1,float param_2)

{
  FUN_00679ab0();
  if (param_1 != 0) {
    if (param_2 < DAT_006e92e4 != (param_2 == DAT_006e92e4)) {
      param_2 = DAT_006e92e4;
    }
    *(float *)(param_1 + 0x80) = param_2;
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 0x20;
    FUN_00679ac0();
    return 1;
  }
  FUN_00679ac0();
  return 0;
}

