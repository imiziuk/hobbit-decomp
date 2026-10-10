
undefined4 __thiscall FUN_00640420(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_006400f0(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *param_3 = **(undefined4 **)(param_1 + 0x2c);
  return 1;
}

