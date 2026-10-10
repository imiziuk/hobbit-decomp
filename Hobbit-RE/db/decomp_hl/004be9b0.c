
undefined4 __thiscall FUN_004be9b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x268) = 1;
    if (*(int *)(param_1 + 0x250) != 0 || *(int *)(param_1 + 0x254) != 0) {
      FUN_004021c0(*(int *)(param_1 + 0x250),*(int *)(param_1 + 0x254));
      iVar1 = FUN_004be9b0(0);
      *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + iVar1;
    }
  }
  return *(undefined4 *)(param_1 + 0x268);
}

