
void __fastcall FUN_006aa620(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

