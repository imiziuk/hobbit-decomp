
void __fastcall FUN_006469c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  while (iVar1 != 0) {
    FUN_006469e0();
    iVar1 = *(int *)(param_1 + 0x28);
  }
  return;
}

