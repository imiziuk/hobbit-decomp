
void __thiscall FUN_0048baf0(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 8;
  *(char *)(param_1 + 0x137) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x136) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x135) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x134) = (char)param_2;
  return;
}

