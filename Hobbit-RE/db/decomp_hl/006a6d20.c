
void __thiscall FUN_006a6d20(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x44) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = param_2[1];
  *(undefined4 *)(param_1 + 0x4c) = param_2[2];
  *(undefined4 *)(param_1 + 0x50) = param_2[3];
  *(int *)(param_1 + 0x15c) =
       ((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48)) + -8) / *(int *)(param_1 + 0x154);
  return;
}

