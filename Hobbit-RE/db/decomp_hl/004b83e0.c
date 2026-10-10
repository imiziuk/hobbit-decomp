
void __fastcall FUN_004b83e0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x1a0) != 0 || *(int *)(param_1 + 0x1a4) != 0) {
    piVar1 = (int *)FUN_004021c0(*(int *)(param_1 + 0x1a0),*(int *)(param_1 + 0x1a4));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x114))();
    }
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  if (*(int *)(param_1 + 0x1a8) != 0) {
    FUN_00659c80(*(int *)(param_1 + 0x1a8),0);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  return;
}

