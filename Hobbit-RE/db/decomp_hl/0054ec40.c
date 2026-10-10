
void __fastcall FUN_0054ec40(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x2098);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x2098) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x2098) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

