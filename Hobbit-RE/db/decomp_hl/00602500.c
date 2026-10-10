
undefined4 __fastcall FUN_00602500(int param_1)

{
  if (((*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) &&
      (*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0)) &&
     (*(int *)(param_1 + 0x20) != 0)) {
    return 1;
  }
  return 0;
}

