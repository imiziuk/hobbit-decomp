
void __fastcall FUN_00442270(int param_1)

{
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  if (*(int **)(param_1 + 0x564) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004422a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x564) + 8))();
    return;
  }
  return;
}

