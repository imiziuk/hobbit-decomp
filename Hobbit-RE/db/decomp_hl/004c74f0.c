
void __thiscall FUN_004c74f0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x8c) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x7c) = param_2;
  }
  return;
}

