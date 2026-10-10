
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005003b0(int param_1,float param_2)

{
  if (DAT_006e92e4 <= param_2) {
    if (_DAT_006e999c < param_2 != (NAN(_DAT_006e999c) || NAN(param_2))) {
      *(undefined4 *)(param_1 + 0x4b8) = 0x40000000;
      return;
    }
    if (DAT_006e92e4 <= param_2) {
      *(float *)(param_1 + 0x4b8) = param_2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  return;
}

