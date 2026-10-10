
void __fastcall FUN_006a3520(int param_1)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a3529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x50))();
    return;
  }
  return;
}

