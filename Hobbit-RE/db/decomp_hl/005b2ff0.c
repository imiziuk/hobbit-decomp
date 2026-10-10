
void __fastcall FUN_005b2ff0(int param_1)

{
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x54))();
    return;
  }
  return;
}

