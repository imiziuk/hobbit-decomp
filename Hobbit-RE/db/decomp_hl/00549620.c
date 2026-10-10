
int __thiscall FUN_00549620(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 * 2;
  uVar1 = (uVar1 ^ *param_2) & 0x7fffffff ^ uVar1;
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  return (int)*(short *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                                 ((int)uVar1 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x72 +
                        (*(uint *)(param_1 + 0x18) & uVar1) * 0x7c);
}

