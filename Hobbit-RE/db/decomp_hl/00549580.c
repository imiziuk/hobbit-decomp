
void __thiscall FUN_00549580(int param_1,uint *param_2)

{
  short *psVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (((int)uVar2 < 0) &&
     (uVar2 = (uVar2 * 2 ^ uVar2) & 0x7fffffff ^ uVar2 * 2, uVar2 != 0xffffffff)) {
    psVar1 = (short *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                               ((int)uVar2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x6e +
                      (*(uint *)(param_1 + 0x18) & uVar2) * 0x7c);
    *psVar1 = *psVar1 + -1;
    *param_2 = *param_2 & 0x7fffffff;
  }
  return;
}

