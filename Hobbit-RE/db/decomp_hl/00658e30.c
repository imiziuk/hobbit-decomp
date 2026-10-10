
void __fastcall FUN_00658e30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2264) + 8);
  while (iVar1 != 0) {
    FUN_006581c0(iVar1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x2264) + 8);
  }
  return;
}

