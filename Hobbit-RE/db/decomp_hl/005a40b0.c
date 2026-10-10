
ushort __thiscall FUN_005a40b0(int *param_1,int param_2,int param_3)

{
  if (*param_1 < 0x7d2) {
    return *(ushort *)(param_1[0x1e] + (param_3 + param_2 * 4) * 2);
  }
  if (0xff < param_1[0x1b]) {
    return *(ushort *)(param_1[0x1f] + param_3 * 2 + param_2 * 6);
  }
  return (ushort)*(byte *)(param_1[0x20] + param_2 * 3 + param_3);
}

