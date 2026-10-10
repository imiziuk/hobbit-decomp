
void __thiscall FUN_00496330(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0xa8) = *param_2;
  *(undefined4 *)(param_1 + 0xac) = param_2[1];
  *(undefined4 *)(param_1 + 0xb0) = param_2[2];
  *(undefined4 *)(param_1 + 0xb4) = *param_3;
  *(undefined4 *)(param_1 + 0xb8) = param_3[1];
  *(undefined4 *)(param_1 + 0xbc) = param_3[2];
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_004963e0();
  return;
}

