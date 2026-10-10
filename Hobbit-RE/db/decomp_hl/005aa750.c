
undefined4 __fastcall FUN_005aa750(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x48);
}

