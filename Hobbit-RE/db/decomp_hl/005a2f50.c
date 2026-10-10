
void __thiscall FUN_005a2f50(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_2 = param_2 * 0x34;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + param_2);
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  puVar2[2] = param_3[2];
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0xc + param_2) = *param_3;
  iVar1 = iVar1 + 0xc + param_2;
  *(undefined4 *)(iVar1 + 4) = param_3[1];
  *(undefined4 *)(iVar1 + 8) = param_3[2];
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x18 + param_2);
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(uint *)(*(int *)(param_1 + 0x14) + 0x30 + param_2) = param_4 | 1;
  return;
}

