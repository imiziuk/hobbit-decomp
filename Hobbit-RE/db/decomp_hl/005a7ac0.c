
void __fastcall FUN_005a7ac0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x900);
    FUN_005a7900();
    FUN_006bf840(iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}

