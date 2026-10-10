
undefined4 __thiscall FUN_006403e0(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = FUN_006400f0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = *(undefined1 **)(param_1 + 0x2c);
  param_3[2] = *puVar1;
  param_3[1] = puVar1[4];
  *param_3 = puVar1[8];
  param_3[3] = puVar1[0xc];
  return 1;
}

