
void __thiscall FUN_00608bc0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x3c))) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x34) + param_2 * 0xc);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
  }
  return;
}

