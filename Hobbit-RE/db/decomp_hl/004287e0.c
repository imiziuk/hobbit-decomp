
void __fastcall FUN_004287e0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x408) != 0 || *(int *)(param_1 + 0x40c) != 0) {
    piVar1 = (int *)FUN_004021c0(*(int *)(param_1 + 0x408),*(int *)(param_1 + 0x40c));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x114))();
    }
    *(undefined4 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x40c) = 0;
  }
  return;
}

