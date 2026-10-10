
void FUN_0067b700(int param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00806ae0);
  if (*(int *)(param_1 + 0x80) != 0) {
    DAT_00808da8 = DAT_00808da8 + -1;
    if ((*(int *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
      FUN_00677970(*(int *)(param_1 + 0x58));
    }
    piVar1 = *(int **)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x48))(piVar1);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0067b768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00806ae0);
  return;
}

