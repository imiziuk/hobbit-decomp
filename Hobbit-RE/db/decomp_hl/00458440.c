
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00458440(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = DAT_006e92e8;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
  if (param_2 < fVar1) {
    param_2 = DAT_006e92e8;
  }
  *(float *)(param_1 + 0xb4) = param_2;
  param_2 = param_2 - _DAT_006ec634;
  if (*(float *)(param_1 + 0xb0) < param_2 != (NAN(*(float *)(param_1 + 0xb0)) || NAN(param_2))) {
    param_2 = *(float *)(param_1 + 0xb0);
  }
  *(float *)(param_1 + 0xb0) = param_2;
  FUN_00458600();
  return;
}

