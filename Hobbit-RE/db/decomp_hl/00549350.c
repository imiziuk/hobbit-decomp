
void __thiscall FUN_00549350(int param_1,uint *param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *param_2 * 2;
  uVar2 = (uVar2 ^ *param_2) & 0x7fffffff ^ uVar2;
  if (uVar2 != 0xffffffff) {
    iVar4 = (uVar2 & *(uint *)(param_1 + 0x18)) * 0x7c;
    iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8 +
                    ((int)uVar2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
    psVar1 = (short *)(iVar3 + 0x70 + iVar4);
    if (0 < *(short *)(iVar3 + 0x70 + iVar4)) {
      *psVar1 = *psVar1 + -1;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8 +
                    ((int)uVar2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) +
            (uVar2 & *(uint *)(param_1 + 0x18)) * 0x7c;
    if (((*(short *)(iVar3 + 0x70) == 0) && (*(int *)(iVar3 + 0x68) == 0)) &&
       (*(int *)(iVar3 + 100) != 2)) {
      FUN_00548a80(uVar2);
    }
    *param_2 = *param_2 | 0x7fffffff;
  }
  return;
}

