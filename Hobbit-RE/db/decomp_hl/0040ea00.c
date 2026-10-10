
uint __thiscall FUN_0040ea00(int param_1,short param_2)

{
  if (-1 < param_2) {
    if ((int)param_2 < (int)*(short *)(param_1 + 0x5e) * (int)*(short *)(param_1 + 0x5c)) {
      return *(uint *)(&DAT_006e9450 + param_2 * 4);
    }
  }
  return ((int)param_2 != (int)*(short *)(param_1 + 0x5e) * (int)*(short *)(param_1 + 0x5c)) - 1 & 4
  ;
}

