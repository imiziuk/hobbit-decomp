
void __thiscall FUN_00474680(int param_1,float param_2)

{
  param_2 = param_2 + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x14) = param_2;
  if (((*(ushort *)(param_1 + 0x10) & 4) == 0) && (*(float *)(param_1 + 8) <= param_2)) {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 4;
    return;
  }
  return;
}

