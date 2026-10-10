
undefined4 __thiscall
FUN_004224a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  *param_4 = *(undefined4 *)(param_1 + 0x4cd8);
  FUN_00648480(param_2,param_1 + 0x48d8,*(int *)(param_1 + 0x4cd8) * 0xc);
  FUN_00648480(param_3,param_1 + 0x4bd8,*(int *)(param_1 + 0x4cd8) << 2);
  *param_5 = *(undefined4 *)(param_1 + 0x46d4);
  return *(undefined4 *)(param_1 + 0x46d0);
}

