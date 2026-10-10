
void __thiscall FUN_005aa6b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[5] = 0;
  param_1[0x12] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = param_2;
  *param_1 = &PTR_FUN_006f426c;
  param_1[7] = 0x44fa0000;
  param_1[9] = 0x453b8000;
  param_1[10] = 0x459c4000;
  param_1[0xc] = 0x42c80000;
  param_1[8] = 0x42f00000;
  param_1[4] = 0x41200000;
  param_1[0x11] = param_3;
  param_1[6] = param_1[6] & 0xfffffffc | 4;
  return;
}

