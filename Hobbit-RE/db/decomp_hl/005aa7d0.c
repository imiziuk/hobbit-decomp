
void __thiscall FUN_005aa7d0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = (*(uint *)(param_1 + 0x18) ^ param_2) & 1 ^ *(uint *)(param_1 + 0x18);
  return;
}

