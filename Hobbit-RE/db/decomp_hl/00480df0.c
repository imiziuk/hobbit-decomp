
undefined4 * __thiscall FUN_00480df0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_004357e0(param_2 + 3);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  FUN_004357e0(param_2 + 9);
  *(undefined1 *)((int)param_1 + 0x33) = *(undefined1 *)((int)param_2 + 0x33);
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)((int)param_2 + 0x32);
  *(undefined1 *)((int)param_1 + 0x31) = *(undefined1 *)((int)param_2 + 0x31);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 0x37) = *(undefined1 *)((int)param_2 + 0x37);
  *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)((int)param_2 + 0x36);
  *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)((int)param_2 + 0x35);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  return param_1;
}

