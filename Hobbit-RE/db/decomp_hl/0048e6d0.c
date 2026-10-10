
void __fastcall FUN_0048e6d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 300) == 0) {
    iVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x7b) = *(byte *)(iVar1 + 0x7b) & 0xf7;
      *(uint *)(iVar1 + 0x194) = *(uint *)(iVar1 + 0x194) & 0xfffffffe | 0x20;
      *(undefined4 *)(param_1 + 300) = 1;
    }
  }
  FUN_004ac510();
  return;
}

