
void __thiscall FUN_005a3020(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 * 0x34 + *(int *)(param_1 + 0x14);
  *param_2 = *(undefined4 *)(param_3 * 0x34 + *(int *)(param_1 + 0x14));
  param_2[1] = *(undefined4 *)(iVar1 + 4);
  param_2[2] = *(undefined4 *)(iVar1 + 8);
  return;
}

