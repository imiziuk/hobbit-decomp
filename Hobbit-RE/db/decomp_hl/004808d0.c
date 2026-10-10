
void __thiscall FUN_004808d0(int param_1,float param_2)

{
  if ((*(ushort *)(param_1 + 0x10) & 2) != 0) {
    param_2 = param_2 + *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x14) = param_2;
    if (((*(ushort *)(param_1 + 0x10) & 4) == 0) && (*(float *)(param_1 + 8) < param_2)) {
      FUN_00659c80(*(undefined4 *)(param_1 + 0x48),0x3f000000);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
      FUN_0064e870(6,s_CINEMA__Finished_music__s_0072889c,*(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  return;
}

