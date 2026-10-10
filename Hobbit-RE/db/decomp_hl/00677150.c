
undefined4 FUN_00677150(int param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 1;
  uVar1 = FUN_0064cb70();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  FUN_00655630(param_1,0);
  return 1;
}

