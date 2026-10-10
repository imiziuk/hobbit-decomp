
void __fastcall FUN_006a4a80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a4ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffdff;
    iVar2 = FUN_004d57a0();
    if (iVar2 < *(int *)(param_1 + 0x178)) {
      iVar2 = FUN_004d57a0();
      *(int *)(param_1 + 0x178) = iVar2 + -1;
    }
    FUN_006a4c90(*(undefined4 *)(param_1 + 0x178));
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,6,*(undefined4 *)(param_1 + 0x174));
    }
  }
  return;
}

