
undefined4 __fastcall FUN_005d93c0(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0) &&
     (*(int *)(param_1 + 0x20) != 0 || *(int *)(param_1 + 0x24) != 0)) {
    return 1;
  }
  return 0;
}

