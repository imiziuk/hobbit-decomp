
int __fastcall FUN_005c1ab0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10) + 0x44;
  }
  return iVar1;
}

