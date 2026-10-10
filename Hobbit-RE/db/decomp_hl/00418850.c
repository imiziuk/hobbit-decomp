
void __fastcall FUN_00418850(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00418af0();
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  if ((*(int *)(param_1 + 0x118) == 1) && (*(int *)(param_1 + 0x120) == 0)) {
    FUN_00417c90(1,1);
    FUN_00417e10(0xffffffff);
    return;
  }
  FUN_00417c90(1,0);
  FUN_00417e10(0xffffffff);
  return;
}

