
/* WARNING: Removing unreachable block (ram,0x004acbd0) */

void __fastcall thunk_FUN_004acb90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 != *(int **)(param_1 + 0x90)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x90));
  }
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}

