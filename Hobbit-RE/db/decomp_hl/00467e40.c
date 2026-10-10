
void __fastcall FUN_00467e40(int *param_1)

{
  int iVar1;
  
  param_1[0x67] = -1;
  iVar1 = (**(code **)(*param_1 + 0x154))();
  *(int *)(iVar1 + 0x138) = *(int *)(iVar1 + 0x138) + 1;
  *(undefined4 *)(iVar1 + 300) = 1;
  *(undefined4 *)(iVar1 + 0x13c) = 1;
  *(int *)(iVar1 + 0x148) = *(int *)(iVar1 + 0x148) + 1;
  if (*(int **)(iVar1 + 0x11c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00467e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(iVar1 + 0x11c) + 8))();
    return;
  }
  return;
}

