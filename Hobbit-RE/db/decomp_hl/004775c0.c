
void __fastcall FUN_004775c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf8;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_006ed09c;
  DAT_0075cd60 = DAT_0075cd60 + 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x18] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = *(undefined4 *)(DAT_00772b08 + 0xe0);
  uVar1 = *(undefined4 *)(DAT_00772b08 + 0xe0);
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  param_1[0x17] = uVar1;
  param_1[0x19] = 0;
  param_1[0x1b] = 1;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  return;
}

