
void __thiscall FUN_00417e10(int param_1,int param_2)

{
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x10);
  }
  FUN_00406bf0(*(undefined4 *)(param_1 + 0x28 + param_2 * 8),
               *(undefined4 *)(param_1 + param_2 * 8 + 0x2c));
  FUN_004d22c0();
  return;
}

