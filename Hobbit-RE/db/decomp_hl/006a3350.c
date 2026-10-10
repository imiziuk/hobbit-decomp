
undefined4 __thiscall FUN_006a3350(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return 1;
}

