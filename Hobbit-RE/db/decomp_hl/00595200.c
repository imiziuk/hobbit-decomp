
int __fastcall FUN_00595200(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x158);
  if (iVar1 == 0) {
    return iVar1;
  }
  iVar1 = *(int *)(iVar1 + 4);
  if ((((iVar1 != 0x1d) && (iVar1 != 0x1e)) && (iVar1 != 0x1f)) &&
     ((iVar1 != 0x39 && (iVar1 != 0x37)))) {
    return 0;
  }
  return 1;
}

