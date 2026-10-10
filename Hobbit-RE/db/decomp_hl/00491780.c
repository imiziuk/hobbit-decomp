
void __fastcall FUN_00491780(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x160) != 0 || *(int *)(param_1 + 0x164) != 0) {
    iVar1 = FUN_004911b0();
    if (iVar1 != 0) {
      FUN_00491450(5);
      *(undefined4 *)(param_1 + 0x1cc) = 1;
    }
  }
  return;
}

