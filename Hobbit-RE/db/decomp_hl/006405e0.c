
undefined4 __thiscall FUN_006405e0(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_006400f0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = **(uint **)(param_1 + 0x2c);
  *param_3 = 0;
  param_3[1] = uVar1;
  *param_3 = *param_3 | *(uint *)(*(int *)(param_1 + 0x2c) + 4);
  param_3[1] = param_3[1];
  return 1;
}

