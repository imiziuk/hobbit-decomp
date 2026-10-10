
undefined4 __thiscall FUN_005d93e0(int param_1,int param_2,int param_3)

{
  if ((((*(int *)(param_1 + 0x18) != param_2) || (*(int *)(param_1 + 0x1c) != param_3)) &&
      ((*(int *)(param_1 + 0x20) != param_2 || (*(int *)(param_1 + 0x24) != param_3)))) &&
     ((*(int *)(param_1 + 0x28) != param_2 || (*(int *)(param_1 + 0x2c) != param_3)))) {
    return 0;
  }
  return 1;
}

