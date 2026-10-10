
undefined4 __fastcall FUN_00592920(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x290) == 0) {
    uVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c));
    *(undefined4 *)(param_1 + 0x290) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x290);
}

