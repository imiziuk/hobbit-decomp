
/* WARNING: Removing unreachable block (ram,0x006a4bbc) */
/* WARNING: Removing unreachable block (ram,0x006a4bc4) */
/* WARNING: Removing unreachable block (ram,0x006a4c16) */

void __fastcall FUN_006a4b90(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) - *(int *)(param_1 + 0x160);
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,4,*(undefined4 *)(param_1 + 0x174));
  }
  return;
}

