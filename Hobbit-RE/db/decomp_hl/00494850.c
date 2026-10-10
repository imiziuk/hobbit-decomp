
void __thiscall FUN_00494850(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0xcf) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0xce) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0xcd) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0xcc) = (char)param_2;
  return;
}

