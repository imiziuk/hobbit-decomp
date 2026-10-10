
void __thiscall FUN_006a3240(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | param_2;
    return;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & ~param_2;
  return;
}

