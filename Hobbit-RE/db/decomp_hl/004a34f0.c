
void __thiscall FUN_004a34f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x46c) = param_2;
  *(undefined4 *)(param_1 + 0x470) = param_3;
  *(undefined4 *)(param_1 + 0x474) = param_4;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfff7ffff | 0x100000;
  return;
}

