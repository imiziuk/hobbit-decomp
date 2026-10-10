
undefined4 __fastcall FUN_005af120(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
    *(undefined4 *)(param_1 + 0x178) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x178);
}

