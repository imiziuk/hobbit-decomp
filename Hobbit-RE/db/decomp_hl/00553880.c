
int __thiscall FUN_00553880(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 100) + 8 +
                           ((int)uVar1 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x108 +
                  (*(uint *)(param_1 + 0x58) & uVar1) * 0xa04) -
          *(int *)((*(uint *)(param_1 + 0x58) & uVar2) * 0xa04 + 0x108 +
                  *(int *)(*(int *)(param_1 + 100) + 8 +
                          ((int)uVar2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18));
  if (iVar3 == 0) {
    return uVar1 - uVar2;
  }
  return iVar3;
}

