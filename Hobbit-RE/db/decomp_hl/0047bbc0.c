
void __fastcall FUN_0047bbc0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x110))();
    if (DAT_006e92e4 < *(float *)(param_1 + 0x28)) {
      FUN_0048b750(*(undefined4 *)(param_1 + 0x28));
    }
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}

