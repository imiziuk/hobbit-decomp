
void __fastcall FUN_0042fdf0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piStack_18;
  
  piVar1 = (int *)(param_1 + 0x5ea0);
  piStack_18 = piVar1;
  FUN_00541cc0(2);
  FUN_004258d0(&piStack_18);
  (**(code **)(*piVar1 + 4))();
  FUN_00549470(param_1 + 0x5ea4);
  FUN_00549580(param_1 + 0x5ea4);
  uVar2 = FUN_0053cc70(s_HEAD_TRACK_00720ee8);
  *(undefined4 *)(param_1 + 0x5ea8) = uVar2;
  *(undefined4 *)(param_1 + 0x5eac) = 3;
  *(undefined4 *)(param_1 + 0x5eb0) = 3;
  (**(code **)(*piVar1 + 0x10))(0);
  *(undefined4 *)(param_1 + 0x5ec0) = 1;
  return;
}

