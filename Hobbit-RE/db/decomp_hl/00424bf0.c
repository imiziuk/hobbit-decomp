
void __fastcall FUN_00424bf0(int param_1)

{
  int *piVar1;
  int *piStack_10;
  
  piVar1 = (int *)(param_1 + 0x5ef4);
  piStack_10 = piVar1;
  FUN_00541cc0(3);
  FUN_004258d0(&piStack_10);
  (**(code **)(*piVar1 + 4))();
  (**(code **)(*piVar1 + 0x10))(0x3f800000);
  return;
}

