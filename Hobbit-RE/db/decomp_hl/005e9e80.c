
void __fastcall FUN_005e9e80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xe8) =
         (*(uint *)(param_1 + 0x20) ^ *(uint *)(iVar1 + 0xe8)) & 1 ^ *(uint *)(iVar1 + 0xe8);
  }
  return;
}

