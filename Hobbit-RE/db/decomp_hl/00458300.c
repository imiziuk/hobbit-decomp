
void __thiscall FUN_00458300(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 8;
    return;
  }
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffff7;
  return;
}

