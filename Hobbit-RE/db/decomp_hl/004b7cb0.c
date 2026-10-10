
void __thiscall FUN_004b7cb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x188) = param_3;
  *(int *)(param_1 + 0x184) = param_2;
  *(undefined4 *)(param_1 + 0x18c) = param_4;
  if (param_2 == 6) {
    *(undefined4 *)(param_1 + 0x15c) = 0xc2700000;
  }
  return;
}

