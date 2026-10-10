
void __fastcall FUN_00439490(int param_1)

{
  *(undefined4 *)(param_1 + 0xa18) = 0;
  *(undefined4 *)(param_1 + 0xa1c) = 0;
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x470) = 0;
  if (*(int *)(param_1 + 0x9e8) != 0) {
    FUN_00659c80(*(int *)(param_1 + 0x9e8),0);
    *(undefined4 *)(param_1 + 0x9e8) = 0;
  }
  return;
}

