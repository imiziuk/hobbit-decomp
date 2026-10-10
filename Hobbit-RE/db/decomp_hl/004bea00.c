
void __fastcall FUN_004bea00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 600) != 0 || *(int *)(param_1 + 0x25c) != 0) {
    iVar1 = FUN_004021c0(*(int *)(param_1 + 600),*(int *)(param_1 + 0x25c));
    *(undefined4 *)(iVar1 + 0x250) = 0;
    *(undefined4 *)(iVar1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  return;
}

