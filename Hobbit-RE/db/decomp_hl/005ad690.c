
void __fastcall FUN_005ad690(int param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    pvVar1 = operator_new(0x28);
    *(void **)(param_1 + 0x214) = pvVar1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x214) + 4) = 0x19;
  **(undefined4 **)(param_1 + 0x214) = 0x19;
  *(undefined4 *)(*(int *)(param_1 + 0x214) + 8) = 0x19;
  *(undefined4 *)(*(int *)(param_1 + 0x214) + 0xc) = 0x42;
  *(undefined4 *)(*(int *)(param_1 + 0x214) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x214) + 0x1c) = 0x3e800000;
  *(undefined4 *)(*(int *)(param_1 + 0x214) + 0x20) = 0x3a83126f;
  return;
}

