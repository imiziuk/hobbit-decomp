
void __fastcall FUN_006a60a0(int param_1)

{
  FUN_006a3240(0x200,0);
  if (*(int *)(param_1 + 0xf0) != 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a60cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x44))();
    return;
  }
  return;
}

