
void __thiscall FUN_005c9210(int param_1,int param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  if (param_2 != -1) {
    param_2 = param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f);
    puVar1 = (uint *)(*(int *)(param_1 + 0x24) + param_2 * 0x18);
    if (*(int *)(*(int *)(param_1 + 0x24) + param_2 * 0x18) == 0 && puVar1[1] == 0) {
      puVar1[3] = 0;
      puVar1[4] = *(uint *)(param_1 + 0x2c);
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(uint **)(*(int *)(param_1 + 0x2c) + 0xc) = puVar1;
      }
      *(uint **)(param_1 + 0x2c) = puVar1;
      if (*(int *)(param_1 + 0x28) == 0) {
        *(uint **)(param_1 + 0x28) = puVar1;
      }
    }
    uVar2 = __allshl();
    *puVar1 = *puVar1 | (uint)uVar2;
    puVar1[1] = puVar1[1] | (uint)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}

