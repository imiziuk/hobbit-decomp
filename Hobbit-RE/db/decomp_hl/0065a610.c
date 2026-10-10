
undefined4 __thiscall FUN_0065a610(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2264);
  iVar2 = *(int *)(iVar1 + 8);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_00647e80(param_2,iVar2,0x80);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
  }
  return *(undefined4 *)(iVar1 + 8);
}

