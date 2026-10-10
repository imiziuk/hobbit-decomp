
void __fastcall FUN_005ea7d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x268) =
         ((uint)(*(int *)(param_1 + 0x20) != 0) << 0x18 ^ *(uint *)(iVar1 + 0x268)) & 0x1000000 ^
         *(uint *)(iVar1 + 0x268);
  }
  return;
}

