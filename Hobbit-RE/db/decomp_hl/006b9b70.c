
undefined4 __thiscall FUN_006b9b70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    iVar1 = FUN_006bb310(param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

