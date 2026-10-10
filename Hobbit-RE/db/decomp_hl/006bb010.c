
void __thiscall FUN_006bb010(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x43) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x42) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x41) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x40) = (char)param_2;
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}

