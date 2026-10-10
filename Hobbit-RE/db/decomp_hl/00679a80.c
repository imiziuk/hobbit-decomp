
void __fastcall FUN_00679a80(int param_1)

{
  int iVar1;
  
  FUN_00679ab0();
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != param_1; iVar1 = *(int *)(iVar1 + 4)) {
    *(uint *)(iVar1 + 0xdc) = *(uint *)(iVar1 + 0xdc) | 4;
  }
  FUN_00679ac0();
  return;
}

