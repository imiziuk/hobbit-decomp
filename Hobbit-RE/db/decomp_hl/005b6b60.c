
undefined4 __thiscall FUN_005b6b60(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0xc))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  }
  return 0;
}

