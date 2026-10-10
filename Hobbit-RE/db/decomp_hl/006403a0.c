
undefined4 __thiscall FUN_006403a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_006400f0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  return 1;
}

