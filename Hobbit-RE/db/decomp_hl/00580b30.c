
void __thiscall FUN_00580b30(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 8;
    return;
  }
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffff7;
  return;
}

