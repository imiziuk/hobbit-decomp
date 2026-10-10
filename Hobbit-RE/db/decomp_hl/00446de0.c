
void __fastcall FUN_00446de0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0 || *(int *)(param_1 + 0xac) != 0) {
    iVar1 = FUN_004021c0(*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
    if (iVar1 == 0) {
      FUN_00446eb0();
      return;
    }
    if (*(char *)(iVar1 + 0x7c) == '!') {
      FUN_0045bb90();
      return;
    }
  }
  return;
}

