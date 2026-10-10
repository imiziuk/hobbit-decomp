
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f92f0(int param_1)

{
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  *(undefined4 *)(param_1 + 200) = in_stack_00000018;
  *(undefined4 *)(param_1 + 0xac) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - _DAT_006e998c;
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) - _DAT_006e998c;
  *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + _DAT_006e998c;
  *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) + _DAT_006e998c;
  *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xd0) - _DAT_006e9364;
  *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + _DAT_006e9354;
  FUN_0042fda0(&stack0x00000004);
  FUN_004f93e0();
  *(undefined1 *)(param_1 + 0x85) = 0xff;
  *(undefined1 *)(param_1 + 0x84) = 0xc0;
  *(undefined1 *)(param_1 + 0x83) = 0xc0;
  *(undefined1 *)(param_1 + 0x82) = 0xc0;
  return;
}

