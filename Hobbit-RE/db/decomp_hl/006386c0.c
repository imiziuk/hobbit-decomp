
void __fastcall FUN_006386c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x50);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f000000;
  FUN_005be250();
  return;
}

