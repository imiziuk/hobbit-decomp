
void __thiscall FUN_004c8990(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x124) + 0xc + param_3 * 0x2c;
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc + param_3 * 0x2c);
  param_2[1] = *(undefined4 *)(iVar1 + 4);
  param_2[2] = *(undefined4 *)(iVar1 + 8);
  return;
}

