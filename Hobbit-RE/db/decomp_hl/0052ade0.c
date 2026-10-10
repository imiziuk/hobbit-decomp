
undefined4 __thiscall FUN_0052ade0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00670ef0(0xb9,0);
  if (((iVar2 == 0) || (param_2 == 0)) && (*(int *)(param_1 + 0x78) == 0x11)) {
    cVar1 = FUN_006628b0();
    if ((cVar1 == '\0') && (DAT_00762644 == 0)) {
      return 0;
    }
  }
  return 1;
}

