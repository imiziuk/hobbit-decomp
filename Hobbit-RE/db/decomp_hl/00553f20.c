
void __thiscall FUN_00553f20(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = FUN_00553ce0(param_2);
  if (uVar2 != 0xffffffff) {
    FUN_00553810(uVar2);
    if (param_3 != 0) {
      puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 100) + 8 +
                                ((int)uVar2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x118 +
                       (*(uint *)(param_1 + 0x58) & uVar2) * 0xa04);
      *puVar1 = *puVar1 & 0xffffffbf;
      return;
    }
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 100) + 8 +
                              ((int)uVar2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x118 +
                     (*(uint *)(param_1 + 0x58) & uVar2) * 0xa04);
    *puVar1 = *puVar1 | 0x40;
  }
  return;
}

