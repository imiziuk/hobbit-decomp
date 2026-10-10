
void __thiscall FUN_005a31a0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  
  if ((param_4 == 0) && ((*(byte *)(param_2 * 0x34 + 0x30 + *(int *)(param_1 + 0x14)) & 2) != 0)) {
    return;
  }
  puVar1 = (undefined4 *)(param_2 * 0x34 + *(int *)(param_1 + 0x14));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return;
}

