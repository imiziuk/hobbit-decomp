
void __fastcall FUN_006861d5(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_006bf840(*(int *)(param_1 + 4));
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_006bf840(*(int *)(param_1 + 0x1c));
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_006861d5();
    FUN_006bf840(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    FUN_006861d5();
    FUN_006bf840(iVar1);
  }
  return;
}

