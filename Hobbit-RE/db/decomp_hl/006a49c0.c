
void __fastcall FUN_006a49c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xe8) == 0) && ((*(uint *)(param_1 + 0x2c) & 0x200) != 0)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,5,*(undefined4 *)(param_1 + 0x174));
    }
  }
  else if ((*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x118)) ||
          (((*(int *)(param_1 + 0x130) < *(int *)(param_1 + 0x110) ||
            (*(int *)(param_1 + 0x114) < *(int *)(param_1 + 0x11c))) ||
           (*(int *)(param_1 + 0x134) < *(int *)(param_1 + 0x114))))) {
    if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
      iVar2 = FUN_006a4d30();
      if (iVar2 < 1) goto LAB_006a4a65;
    }
    piVar1 = *(int **)(param_1 + 0xc);
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) ^ 0x200;
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x174);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,5,*(undefined4 *)(param_1 + 0x174));
    }
  }
LAB_006a4a65:
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a4a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x70))();
    return;
  }
  return;
}

