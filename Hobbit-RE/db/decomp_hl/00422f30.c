
void __thiscall FUN_00422f30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x474) = param_2;
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0x7ac) = param_2;
  return;
}

