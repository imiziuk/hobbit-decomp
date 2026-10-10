
void __thiscall FUN_00617a10(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
    return;
  }
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffe;
  return;
}

