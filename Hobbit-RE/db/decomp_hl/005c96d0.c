
void __thiscall FUN_005c96d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[8] = 0x447a0000;
  param_1[10] = param_2;
  param_1[0xd] = 0x447a0000;
  *param_1 = 0x3f800000;
  param_1[1] = 0x14;
  *(undefined1 *)(param_1 + 5) = 0x60;
  param_1[9] = 0xc3fa0000;
  param_1[0xb] = param_3;
  param_1[0xc] = 0x43fa0000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_005c9920();
  return;
}

