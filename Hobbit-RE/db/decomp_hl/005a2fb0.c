
void __thiscall
FUN_005a2fb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  param_2 = param_2 * 0x14;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8 + param_2) = param_5;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc + param_2) = param_6;
  *(undefined4 *)(param_2 + *(int *)(param_1 + 0x1c)) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + param_2) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10 + param_2) = param_7;
  return;
}

