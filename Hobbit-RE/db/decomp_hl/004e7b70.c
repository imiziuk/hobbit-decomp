
void __thiscall FUN_004e7b70(int param_1,int param_2,undefined4 param_3)

{
  *(char *)(param_1 + 0x314) = (char)param_2;
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 400 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x1c0) = param_3;
  return;
}

