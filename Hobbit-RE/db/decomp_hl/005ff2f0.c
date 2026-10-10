
undefined4 __fastcall FUN_005ff2f0(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) &&
     (*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0)) {
    return 1;
  }
  return 0;
}

