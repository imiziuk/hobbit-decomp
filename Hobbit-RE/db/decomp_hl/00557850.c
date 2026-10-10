
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00557850(int param_1,float param_2)

{
  if (_DAT_006e9554 < param_2 != (NAN(_DAT_006e9554) || NAN(param_2))) {
    *(undefined4 *)(param_1 + 4) = 0x41200000;
    return;
  }
  if (param_2 < DAT_006e92e4) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  *(float *)(param_1 + 4) = param_2;
  return;
}

