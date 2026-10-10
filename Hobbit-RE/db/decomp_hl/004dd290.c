
undefined4 __thiscall FUN_004dd290(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x138))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x13c) + param_2 * 4);
  }
  return 0xffffffff;
}

