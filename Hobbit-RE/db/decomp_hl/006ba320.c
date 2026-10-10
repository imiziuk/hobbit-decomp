
void __thiscall FUN_006ba320(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x2b) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x2a) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x29) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x28) = (char)param_2;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return;
}

