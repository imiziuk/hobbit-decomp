
uint __thiscall FUN_00553ce0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar1 = FUN_00647ed0((*(uint *)(param_1 + 0x58) & uVar2) * 0xa04 +
                           *(int *)(*(int *)(param_1 + 100) + 8 +
                                   ((int)uVar2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18),
                           param_2);
      if ((iVar1 == 0) &&
         ((*(byte *)(*(int *)(*(int *)(param_1 + 100) + 8 +
                             ((int)uVar2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x118 +
                    (*(uint *)(param_1 + 0x58) & uVar2) * 0xa04) & 0x10) != 0)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(param_1 + 0x4c));
  }
  return 0xffffffff;
}

