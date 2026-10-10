
void __fastcall FUN_006a6e20(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a6e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffdff;
  }
  return;
}

