
void __fastcall FUN_006a3560(int param_1)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a3569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 100))();
    return;
  }
  return;
}

