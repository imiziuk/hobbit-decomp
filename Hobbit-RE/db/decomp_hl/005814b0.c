
void __thiscall FUN_005814b0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 2;
    return;
  }
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffd;
  return;
}

