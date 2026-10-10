
void __thiscall FUN_0053ec30(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x7c + param_2 * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  FUN_0053eb40(param_2);
  return;
}

